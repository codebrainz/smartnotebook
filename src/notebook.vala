using Gtk;

namespace Smart
{

	public class Notebook : Gtk.Notebook
	{
		public signal void tab_attached(NotebookTab tab);
		public signal void tab_detached(NotebookTab tab);
		public signal void tab_reordered(NotebookTab tab, uint position);
		public signal void tabs_stored();
		public signal void tabs_loaded();

		private Gtk.HBox action_hbox;

		private Gtk.Button _new_tab_button;
		public Gtk.Button? new_tab_button
		{
			get
			{
				if (!has_new_tab_button)
					return null;
				return _new_tab_button;
			}
		}

		private Gtk.Button _tab_selector_button;
		public Gtk.Button? tab_selector_button
		{
			get
			{
				if (!has_tab_selector_button)
					return null;
				return _tab_selector_button;
			}
		}

		private Gtk.Menu _tab_selector_menu;
		public Gtk.Menu? tab_selector_menu
		{
			get
			{
				if (!has_tab_selector_button)
					return null;
				return _tab_selector_menu;
			}
		}

		private GenericArray<NotebookTab> _tabs;
		public GenericArray<NotebookTab> tabs
		{
			get { return _tabs; }
		}

		private bool _has_new_tab_button;
		public bool has_new_tab_button
		{
			get { return _has_new_tab_button; }
			set
			{
				_has_new_tab_button = value;
				if (_has_new_tab_button)
				{
					_new_tab_button.show_all();
				}
				else
				{
					_new_tab_button.hide_all();
				}
			}
		}

		public bool has_tab_selector_button { get; set; }

		//public bool store_positions_on_close { get; set; }
		//public bool auto_scroll { get; set; }

		public int append_tab(NotebookTab tab)
		{
			return this.append_page(tab.child, tab.tab_hbox);
		}

		public int insert_tab(NotebookTab tab, int position) { return -1; }
		public void remove_tab(NotebookTab tab) { }

		public void load_positions(string positions_file) { }
		public void store_positions(string positions_file) { }

		public Notebook(string name)
		{
			this.name = name;

			_tabs = new GenericArray<NotebookTab>();

			action_hbox = new HBox(false, 6);
			this.set_action_widget(action_hbox, PackType.END);

			Image add_img;
			_new_tab_button = new Gtk.Button();
			_new_tab_button.relief = ReliefStyle.NONE;
			_new_tab_button.focus_on_click = false;
			add_img = new Image.from_stock(Stock.ADD, IconSize.MENU);
			_new_tab_button.add(add_img);
			action_hbox.pack_start(_new_tab_button, false, true, 0);
			_new_tab_button.show_all();

			action_hbox.show_all();

			has_new_tab_button = true;
			_has_tab_selector_button = true;

		}
	}

}
