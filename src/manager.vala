using Gtk;

namespace Smart
{

	public class NotebookManager : GLib.Object
	{
		public GenericArray<Notebook> notebooks { get { return _notebooks; } }
		public NotebookTab[] all_tabs { get; set; }

		private GenericArray<Notebook> _notebooks;

		public string data_file
		{
			get { return "notebook_manager.conf"; }
		}
		public string name { get; set; }

		public NotebookManager(string name="notebook_manager")
		{
			this.name = name;
			_notebooks = new GenericArray<Notebook>();
			debug("Initialized SmartNotebookManager: %s", name);
		}

		public void register_notebook(Notebook smart_notebook)
		{
			notebooks.add(smart_notebook);
			smart_notebook.group = (void *)this.name.hash();
			debug("Added SmartNotebook: %s to group %u",
				smart_notebook.name, (uint)smart_notebook.group);
		}

		public void unregister_notebook(Notebook smart_notebook)
		{
			notebooks.remove(smart_notebook);
			debug("Removed SmartNotebook: %s", smart_notebook.name);
		}

		public void store_notebook_tab_positions(string positions_file)
		{
			KeyFile kf = new KeyFile();
			try
			{
				if (!kf.load_from_file(positions_file,
					KeyFileFlags.KEEP_COMMENTS | KeyFileFlags.KEEP_TRANSLATIONS))
				{
					warning("Couldn't load data file.");
					return;
				}

				for (int n = 0; n < notebooks.length; n++)
				{
					string tabs = "";
					for (int t = 0; t < notebooks[n].tabs.length; t++)
						tabs += "%s;".printf(notebooks[n].tabs[t].name);
					kf.set_string(this.name, notebooks[n].name, tabs);
				}

				FileUtils.set_contents(positions_file, kf.to_data());
			}
			catch (KeyFileError e) { warning("KeyFileError: %s", e.message); }
			catch (FileError e) { warning("FileError: %s", e.message); }
		}

		public void load_notebook_tab_positions(string positions_file)
		{
			KeyFile kf = new KeyFile();
			try
			{
				if (!kf.load_from_file(data_file,
					KeyFileFlags.KEEP_COMMENTS | KeyFileFlags.KEEP_TRANSLATIONS))
				{
					warning("Couldn't load data file.");
					return;
				}

				GenericArray<string> nb_tabs = new GenericArray<string>();
				foreach (string key_name in kf.get_keys(this.name))
				{
					for (int n = 0; n < notebooks.length; n++)
					{
						if (key_name == notebooks[n].name)
						{
							//nb_tabs.add(kf.get_string_list(this.name, key_name));
							string s = kf.get_string(this.name, key_name);
							nb_tabs.add(s);
							debug("%s: %s", key_name, s);
						}
					}
				}


			}
			catch (KeyFileError e) { warning("KeyFileError: %s", e.message); }
			catch (FileError e) { warning("FileError: %s", e.message); }
		}


	}

}
