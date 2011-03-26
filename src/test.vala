using Gtk;
using Smart;

namespace Smart
{
	static int main(string[] args)
	{
		Gtk.init(ref args);

		Window win = new Gtk.Window();
		NotebookManager mgr = new NotebookManager("nbmgr");
		Notebook nb = new Notebook("nb1");
		NotebookTab tab1, tab2;

		tab1 = new NotebookTab.full(new Gtk.Label("Dummy Content"),
			new Gtk.Label("Tab1"),
			/*new Image.from_stock(Stock.ABOUT, IconSize.MENU),*/
			null,
			true,
			new Label("Tab1MenuItem"));

		tab2 = new NotebookTab(new Label("Dummy Content2"), new Label("Tab2"));

		mgr.register_notebook(nb);
		mgr.store_notebook_tab_positions("tabstore.dat");

		nb.append_tab(tab1);
		nb.append_tab(tab2);

		tab1.reorderable = true;
		tab1.detachable = true;
		tab2.reorderable = true;
		tab2.detachable = true;

		win.add(nb);
		win.set_default_size(640, 480);
		win.border_width = 6;
		win.destroy.connect(Gtk.main_quit);
		win.show_all();

		Gtk.main();

		return 0;

	}
}
