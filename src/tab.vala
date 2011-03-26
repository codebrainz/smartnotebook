using Gtk;

namespace Smart
{
	public class NotebookTab : GLib.Object
	{
		public signal void clicked();
		public signal void icon_clicked();
		public signal bool closing();

		private bool _can_close;
		public bool can_close
		{
			get { return _can_close; }
			set
			{
				close_button.visible = (_can_close = value);
				close_button.get_child().visible = _can_close;
			}
		}

		private Image _icon;
		public Image icon
		{
			get { return _icon; }
		}

		private Button _close_button;
		public Button close_button
		{
			get { return _close_button; }
		}

		private Widget _label;
		public Widget label
		{
			get { return _label; }
		}

		private Widget _child;
		public Gtk.Widget child
		{
			get { return _child; }
		}

		internal HBox tab_hbox { get; set; }

		public Gtk.Widget menu_label { get; set; }
		public bool visible { get; set; }

		public string name { get; set; }

		public bool reorderable
		{
			get
			{
				Gtk.Widget parent = _child.get_parent();
				Gtk.Notebook nb = (Gtk.Notebook)parent;
				return nb.get_tab_reorderable(_child);
			}
			set
			{
				Gtk.Widget parent = _child.get_parent();
				Gtk.Notebook nb = (Gtk.Notebook)parent;
				nb.set_tab_reorderable(_child, value);
			}
		}

		public bool detachable
		{
			get
			{
				Gtk.Widget parent = _child.get_parent();
				Gtk.Notebook nb = (Gtk.Notebook)parent;
				return nb.get_tab_detachable(_child);
			}
			set
			{
				Gtk.Widget parent = _child.get_parent();
				Gtk.Notebook nb = (Gtk.Notebook)parent;
				nb.set_tab_detachable(_child, value);
			}
		}


		public NotebookTab(Gtk.Widget child, Gtk.Widget label)
		{
			initialize_tab(child, label);
		}

		public NotebookTab.full(Gtk.Widget child, Gtk.Widget label,
			Gtk.Image? icon=null, bool can_close=false,
			Gtk.Widget? menu_label=null)
		{
			initialize_tab(child, label, icon, can_close, menu_label);
		}

		private void on_close_button_style_set(Gtk.Style? previous_style)
		{
			int w, h;
			Gtk.icon_size_lookup_for_settings(_close_button.get_settings(),
				IconSize.MENU, out w, out h);
			_close_button.set_size_request(w+2, h+2);
		}

		public void create_close_button()
		{
			Button btn;
			Image img;
			RcStyle style;

			style = new RcStyle();
			style.xthickness = 0;
			style.ythickness = 0;

			btn = new Button();
			btn.set_tooltip_text("Close tab");
			btn.relief = ReliefStyle.NONE;
			btn.focus_on_click = false;
			btn.no_show_all = true;
			_close_button = btn;

			img = new Image.from_stock(Stock.CLOSE, IconSize.MENU);

			btn.add(img);
			btn.style_set.connect(on_close_button_style_set);
			btn.modify_style(style);
		}

		private void initialize_tab(Widget child, Widget label,
			Image? icon=null, bool can_close=false,
			Widget? menu_label=null)
		{
			tab_hbox = new HBox(false, 2);

			_child = child;
			_label = label;
			tab_hbox.pack_start(_label, true, true, 0);

			if (icon != null)
				_icon = icon;
			else
				_icon = new Image.from_stock(Stock.FILE, IconSize.MENU);

			_icon.no_show_all = true;
			_icon.visible = (icon != null) ? true : false;
			tab_hbox.pack_start(_icon, false, true, 0);

			create_close_button();
			this.can_close = can_close;
			tab_hbox.pack_start(_close_button, true, true, 0);

			tab_hbox.show_all();
		}

		public void hide() { this.visible = false; }
		public void show() { this.visible = true; }

	}
}
