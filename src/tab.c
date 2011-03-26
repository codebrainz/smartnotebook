/* tab.c generated by valac 0.11.6.38-0ec3, the Vala compiler
 * generated from tab.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define SMART_TYPE_NOTEBOOK_TAB (smart_notebook_tab_get_type ())
#define SMART_NOTEBOOK_TAB(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SMART_TYPE_NOTEBOOK_TAB, SmartNotebookTab))
#define SMART_NOTEBOOK_TAB_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SMART_TYPE_NOTEBOOK_TAB, SmartNotebookTabClass))
#define SMART_IS_NOTEBOOK_TAB(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SMART_TYPE_NOTEBOOK_TAB))
#define SMART_IS_NOTEBOOK_TAB_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SMART_TYPE_NOTEBOOK_TAB))
#define SMART_NOTEBOOK_TAB_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SMART_TYPE_NOTEBOOK_TAB, SmartNotebookTabClass))

typedef struct _SmartNotebookTab SmartNotebookTab;
typedef struct _SmartNotebookTabClass SmartNotebookTabClass;
typedef struct _SmartNotebookTabPrivate SmartNotebookTabPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _SmartNotebookTab {
	GObject parent_instance;
	SmartNotebookTabPrivate * priv;
};

struct _SmartNotebookTabClass {
	GObjectClass parent_class;
};

struct _SmartNotebookTabPrivate {
	gboolean _can_close;
	GtkImage* _icon;
	GtkButton* _close_button;
	GtkWidget* _label;
	GtkWidget* _child;
	GtkHBox* _tab_hbox;
	GtkWidget* _menu_label;
	gboolean _visible;
	gchar* _name;
};


static gpointer smart_notebook_tab_parent_class = NULL;

GType smart_notebook_tab_get_type (void) G_GNUC_CONST;
#define SMART_NOTEBOOK_TAB_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), SMART_TYPE_NOTEBOOK_TAB, SmartNotebookTabPrivate))
enum  {
	SMART_NOTEBOOK_TAB_DUMMY_PROPERTY,
	SMART_NOTEBOOK_TAB_CAN_CLOSE,
	SMART_NOTEBOOK_TAB_ICON,
	SMART_NOTEBOOK_TAB_CLOSE_BUTTON,
	SMART_NOTEBOOK_TAB_LABEL,
	SMART_NOTEBOOK_TAB_CHILD,
	SMART_NOTEBOOK_TAB_TAB_HBOX,
	SMART_NOTEBOOK_TAB_MENU_LABEL,
	SMART_NOTEBOOK_TAB_VISIBLE,
	SMART_NOTEBOOK_TAB_NAME,
	SMART_NOTEBOOK_TAB_REORDERABLE,
	SMART_NOTEBOOK_TAB_DETACHABLE
};
SmartNotebookTab* smart_notebook_tab_new (GtkWidget* child, GtkWidget* label);
SmartNotebookTab* smart_notebook_tab_construct (GType object_type, GtkWidget* child, GtkWidget* label);
static void smart_notebook_tab_initialize_tab (SmartNotebookTab* self, GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label);
SmartNotebookTab* smart_notebook_tab_new_full (GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label);
SmartNotebookTab* smart_notebook_tab_construct_full (GType object_type, GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label);
static void smart_notebook_tab_on_close_button_style_set (SmartNotebookTab* self, GtkStyle* previous_style);
void smart_notebook_tab_create_close_button (SmartNotebookTab* self);
static void _smart_notebook_tab_on_close_button_style_set_gtk_widget_style_set (GtkWidget* _sender, GtkStyle* previous_style, gpointer self);
void smart_notebook_tab_set_tab_hbox (SmartNotebookTab* self, GtkHBox* value);
GtkHBox* smart_notebook_tab_get_tab_hbox (SmartNotebookTab* self);
void smart_notebook_tab_set_can_close (SmartNotebookTab* self, gboolean value);
void smart_notebook_tab_hide (SmartNotebookTab* self);
void smart_notebook_tab_set_visible (SmartNotebookTab* self, gboolean value);
void smart_notebook_tab_show (SmartNotebookTab* self);
gboolean smart_notebook_tab_get_can_close (SmartNotebookTab* self);
GtkButton* smart_notebook_tab_get_close_button (SmartNotebookTab* self);
GtkImage* smart_notebook_tab_get_icon (SmartNotebookTab* self);
GtkWidget* smart_notebook_tab_get_label (SmartNotebookTab* self);
GtkWidget* smart_notebook_tab_get_child (SmartNotebookTab* self);
GtkWidget* smart_notebook_tab_get_menu_label (SmartNotebookTab* self);
void smart_notebook_tab_set_menu_label (SmartNotebookTab* self, GtkWidget* value);
gboolean smart_notebook_tab_get_visible (SmartNotebookTab* self);
const gchar* smart_notebook_tab_get_name (SmartNotebookTab* self);
void smart_notebook_tab_set_name (SmartNotebookTab* self, const gchar* value);
gboolean smart_notebook_tab_get_reorderable (SmartNotebookTab* self);
void smart_notebook_tab_set_reorderable (SmartNotebookTab* self, gboolean value);
gboolean smart_notebook_tab_get_detachable (SmartNotebookTab* self);
void smart_notebook_tab_set_detachable (SmartNotebookTab* self, gboolean value);
static void g_cclosure_user_marshal_BOOLEAN__VOID (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void smart_notebook_tab_finalize (GObject* obj);
static void _vala_smart_notebook_tab_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_smart_notebook_tab_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


SmartNotebookTab* smart_notebook_tab_construct (GType object_type, GtkWidget* child, GtkWidget* label) {
	SmartNotebookTab * self = NULL;
	g_return_val_if_fail (child != NULL, NULL);
	g_return_val_if_fail (label != NULL, NULL);
	self = (SmartNotebookTab*) g_object_new (object_type, NULL);
	smart_notebook_tab_initialize_tab (self, child, label, NULL, FALSE, NULL);
	return self;
}


SmartNotebookTab* smart_notebook_tab_new (GtkWidget* child, GtkWidget* label) {
	return smart_notebook_tab_construct (SMART_TYPE_NOTEBOOK_TAB, child, label);
}


SmartNotebookTab* smart_notebook_tab_construct_full (GType object_type, GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label) {
	SmartNotebookTab * self = NULL;
	g_return_val_if_fail (child != NULL, NULL);
	g_return_val_if_fail (label != NULL, NULL);
	self = (SmartNotebookTab*) g_object_new (object_type, NULL);
	smart_notebook_tab_initialize_tab (self, child, label, icon, can_close, menu_label);
	return self;
}


SmartNotebookTab* smart_notebook_tab_new_full (GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label) {
	return smart_notebook_tab_construct_full (SMART_TYPE_NOTEBOOK_TAB, child, label, icon, can_close, menu_label);
}


static void smart_notebook_tab_on_close_button_style_set (SmartNotebookTab* self, GtkStyle* previous_style) {
	gint w = 0;
	gint h = 0;
	GtkSettings* _tmp0_ = NULL;
	gint _tmp1_;
	gint _tmp2_;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_widget_get_settings ((GtkWidget*) self->priv->_close_button);
	gtk_icon_size_lookup_for_settings (_tmp0_, GTK_ICON_SIZE_MENU, &_tmp1_, &_tmp2_);
	w = _tmp1_;
	h = _tmp2_;
	gtk_widget_set_size_request ((GtkWidget*) self->priv->_close_button, w + 2, h + 2);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _smart_notebook_tab_on_close_button_style_set_gtk_widget_style_set (GtkWidget* _sender, GtkStyle* previous_style, gpointer self) {
	smart_notebook_tab_on_close_button_style_set (self, previous_style);
}


void smart_notebook_tab_create_close_button (SmartNotebookTab* self) {
	GtkButton* btn = NULL;
	GtkImage* img = NULL;
	GtkRcStyle* style = NULL;
	GtkRcStyle* _tmp0_ = NULL;
	GtkButton* _tmp1_ = NULL;
	GtkButton* _tmp2_;
	GtkImage* _tmp3_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_rc_style_new ();
	_g_object_unref0 (style);
	style = _tmp0_;
	style->xthickness = 0;
	style->ythickness = 0;
	_tmp1_ = (GtkButton*) gtk_button_new ();
	_g_object_unref0 (btn);
	btn = g_object_ref_sink (_tmp1_);
	gtk_widget_set_tooltip_text ((GtkWidget*) btn, "Close tab");
	gtk_button_set_relief (btn, GTK_RELIEF_NONE);
	gtk_button_set_focus_on_click (btn, FALSE);
	gtk_widget_set_no_show_all ((GtkWidget*) btn, TRUE);
	_tmp2_ = _g_object_ref0 (btn);
	_g_object_unref0 (self->priv->_close_button);
	self->priv->_close_button = _tmp2_;
	_tmp3_ = (GtkImage*) gtk_image_new_from_stock (GTK_STOCK_CLOSE, GTK_ICON_SIZE_MENU);
	_g_object_unref0 (img);
	img = g_object_ref_sink (_tmp3_);
	gtk_container_add ((GtkContainer*) btn, (GtkWidget*) img);
	g_signal_connect_object ((GtkWidget*) btn, "style-set", (GCallback) _smart_notebook_tab_on_close_button_style_set_gtk_widget_style_set, self, 0);
	gtk_widget_modify_style ((GtkWidget*) btn, style);
	_g_object_unref0 (style);
	_g_object_unref0 (img);
	_g_object_unref0 (btn);
}


static void smart_notebook_tab_initialize_tab (SmartNotebookTab* self, GtkWidget* child, GtkWidget* label, GtkImage* icon, gboolean can_close, GtkWidget* menu_label) {
	GtkHBox* _tmp0_ = NULL;
	GtkHBox* _tmp1_;
	GtkWidget* _tmp2_;
	GtkWidget* _tmp3_;
	gboolean _tmp6_ = FALSE;
	g_return_if_fail (self != NULL);
	g_return_if_fail (child != NULL);
	g_return_if_fail (label != NULL);
	_tmp0_ = (GtkHBox*) gtk_hbox_new (FALSE, 2);
	_tmp1_ = g_object_ref_sink (_tmp0_);
	smart_notebook_tab_set_tab_hbox (self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	_tmp2_ = _g_object_ref0 (child);
	_g_object_unref0 (self->priv->_child);
	self->priv->_child = _tmp2_;
	_tmp3_ = _g_object_ref0 (label);
	_g_object_unref0 (self->priv->_label);
	self->priv->_label = _tmp3_;
	gtk_box_pack_start ((GtkBox*) self->priv->_tab_hbox, self->priv->_label, TRUE, TRUE, (guint) 0);
	if (icon != NULL) {
		GtkImage* _tmp4_;
		_tmp4_ = _g_object_ref0 (icon);
		_g_object_unref0 (self->priv->_icon);
		self->priv->_icon = _tmp4_;
	} else {
		GtkImage* _tmp5_ = NULL;
		_tmp5_ = (GtkImage*) gtk_image_new_from_stock (GTK_STOCK_FILE, GTK_ICON_SIZE_MENU);
		_g_object_unref0 (self->priv->_icon);
		self->priv->_icon = g_object_ref_sink (_tmp5_);
	}
	gtk_widget_set_no_show_all ((GtkWidget*) self->priv->_icon, TRUE);
	if (icon != NULL) {
		_tmp6_ = TRUE;
	} else {
		_tmp6_ = FALSE;
	}
	gtk_widget_set_visible ((GtkWidget*) self->priv->_icon, _tmp6_);
	gtk_box_pack_start ((GtkBox*) self->priv->_tab_hbox, (GtkWidget*) self->priv->_icon, FALSE, TRUE, (guint) 0);
	smart_notebook_tab_create_close_button (self);
	smart_notebook_tab_set_can_close (self, can_close);
	gtk_box_pack_start ((GtkBox*) self->priv->_tab_hbox, (GtkWidget*) self->priv->_close_button, TRUE, TRUE, (guint) 0);
	gtk_widget_show_all ((GtkWidget*) self->priv->_tab_hbox);
}


void smart_notebook_tab_hide (SmartNotebookTab* self) {
	g_return_if_fail (self != NULL);
	smart_notebook_tab_set_visible (self, FALSE);
}


void smart_notebook_tab_show (SmartNotebookTab* self) {
	g_return_if_fail (self != NULL);
	smart_notebook_tab_set_visible (self, TRUE);
}


gboolean smart_notebook_tab_get_can_close (SmartNotebookTab* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_can_close;
	return result;
}


void smart_notebook_tab_set_can_close (SmartNotebookTab* self, gboolean value) {
	GtkButton* _tmp0_ = NULL;
	GtkButton* _tmp1_ = NULL;
	GtkWidget* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = smart_notebook_tab_get_close_button (self);
	self->priv->_can_close = value;
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, self->priv->_can_close);
	_tmp1_ = smart_notebook_tab_get_close_button (self);
	_tmp2_ = gtk_bin_get_child ((GtkBin*) _tmp1_);
	gtk_widget_set_visible (_tmp2_, self->priv->_can_close);
	g_object_notify ((GObject *) self, "can-close");
}


GtkImage* smart_notebook_tab_get_icon (SmartNotebookTab* self) {
	GtkImage* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_icon;
	return result;
}


GtkButton* smart_notebook_tab_get_close_button (SmartNotebookTab* self) {
	GtkButton* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_close_button;
	return result;
}


GtkWidget* smart_notebook_tab_get_label (SmartNotebookTab* self) {
	GtkWidget* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_label;
	return result;
}


GtkWidget* smart_notebook_tab_get_child (SmartNotebookTab* self) {
	GtkWidget* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_child;
	return result;
}


GtkHBox* smart_notebook_tab_get_tab_hbox (SmartNotebookTab* self) {
	GtkHBox* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_tab_hbox;
	return result;
}


void smart_notebook_tab_set_tab_hbox (SmartNotebookTab* self, GtkHBox* value) {
	GtkHBox* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _g_object_ref0 (value);
	_g_object_unref0 (self->priv->_tab_hbox);
	self->priv->_tab_hbox = _tmp0_;
	g_object_notify ((GObject *) self, "tab-hbox");
}


GtkWidget* smart_notebook_tab_get_menu_label (SmartNotebookTab* self) {
	GtkWidget* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_menu_label;
	return result;
}


void smart_notebook_tab_set_menu_label (SmartNotebookTab* self, GtkWidget* value) {
	GtkWidget* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _g_object_ref0 (value);
	_g_object_unref0 (self->priv->_menu_label);
	self->priv->_menu_label = _tmp0_;
	g_object_notify ((GObject *) self, "menu-label");
}


gboolean smart_notebook_tab_get_visible (SmartNotebookTab* self) {
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_visible;
	return result;
}


void smart_notebook_tab_set_visible (SmartNotebookTab* self, gboolean value) {
	g_return_if_fail (self != NULL);
	self->priv->_visible = value;
	g_object_notify ((GObject *) self, "visible");
}


const gchar* smart_notebook_tab_get_name (SmartNotebookTab* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_name;
	return result;
}


void smart_notebook_tab_set_name (SmartNotebookTab* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	g_object_notify ((GObject *) self, "name");
}


gboolean smart_notebook_tab_get_reorderable (SmartNotebookTab* self) {
	gboolean result;
	GtkWidget* _tmp0_ = NULL;
	GtkWidget* _tmp1_;
	GtkWidget* parent;
	GtkNotebook* _tmp2_;
	GtkNotebook* nb;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = gtk_widget_get_parent (self->priv->_child);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	parent = _tmp1_;
	_tmp2_ = _g_object_ref0 (GTK_NOTEBOOK (parent));
	nb = _tmp2_;
	_tmp3_ = gtk_notebook_get_tab_reorderable (nb, self->priv->_child);
	result = _tmp3_;
	_g_object_unref0 (nb);
	_g_object_unref0 (parent);
	return result;
}


void smart_notebook_tab_set_reorderable (SmartNotebookTab* self, gboolean value) {
	GtkWidget* _tmp0_ = NULL;
	GtkWidget* _tmp1_;
	GtkWidget* parent;
	GtkNotebook* _tmp2_;
	GtkNotebook* nb;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_widget_get_parent (self->priv->_child);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	parent = _tmp1_;
	_tmp2_ = _g_object_ref0 (GTK_NOTEBOOK (parent));
	nb = _tmp2_;
	gtk_notebook_set_tab_reorderable (nb, self->priv->_child, value);
	_g_object_unref0 (nb);
	_g_object_unref0 (parent);
	g_object_notify ((GObject *) self, "reorderable");
}


gboolean smart_notebook_tab_get_detachable (SmartNotebookTab* self) {
	gboolean result;
	GtkWidget* _tmp0_ = NULL;
	GtkWidget* _tmp1_;
	GtkWidget* parent;
	GtkNotebook* _tmp2_;
	GtkNotebook* nb;
	gboolean _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = gtk_widget_get_parent (self->priv->_child);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	parent = _tmp1_;
	_tmp2_ = _g_object_ref0 (GTK_NOTEBOOK (parent));
	nb = _tmp2_;
	_tmp3_ = gtk_notebook_get_tab_detachable (nb, self->priv->_child);
	result = _tmp3_;
	_g_object_unref0 (nb);
	_g_object_unref0 (parent);
	return result;
}


void smart_notebook_tab_set_detachable (SmartNotebookTab* self, gboolean value) {
	GtkWidget* _tmp0_ = NULL;
	GtkWidget* _tmp1_;
	GtkWidget* parent;
	GtkNotebook* _tmp2_;
	GtkNotebook* nb;
	g_return_if_fail (self != NULL);
	_tmp0_ = gtk_widget_get_parent (self->priv->_child);
	_tmp1_ = _g_object_ref0 (_tmp0_);
	parent = _tmp1_;
	_tmp2_ = _g_object_ref0 (GTK_NOTEBOOK (parent));
	nb = _tmp2_;
	gtk_notebook_set_tab_detachable (nb, self->priv->_child, value);
	_g_object_unref0 (nb);
	_g_object_unref0 (parent);
	g_object_notify ((GObject *) self, "detachable");
}


static void g_cclosure_user_marshal_BOOLEAN__VOID (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef gboolean (*GMarshalFunc_BOOLEAN__VOID) (gpointer data1, gpointer data2);
	register GMarshalFunc_BOOLEAN__VOID callback;
	register GCClosure * cc;
	register gpointer data1, data2;
	gboolean v_return;
	cc = (GCClosure *) closure;
	g_return_if_fail (return_value != NULL);
	g_return_if_fail (n_param_values == 1);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_BOOLEAN__VOID) (marshal_data ? marshal_data : cc->callback);
	v_return = callback (data1, data2);
	g_value_set_boolean (return_value, v_return);
}


static void smart_notebook_tab_class_init (SmartNotebookTabClass * klass) {
	smart_notebook_tab_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (SmartNotebookTabPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_smart_notebook_tab_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_smart_notebook_tab_set_property;
	G_OBJECT_CLASS (klass)->finalize = smart_notebook_tab_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_CAN_CLOSE, g_param_spec_boolean ("can-close", "can-close", "can-close", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_ICON, g_param_spec_object ("icon", "icon", "icon", GTK_TYPE_IMAGE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_CLOSE_BUTTON, g_param_spec_object ("close-button", "close-button", "close-button", GTK_TYPE_BUTTON, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_LABEL, g_param_spec_object ("label", "label", "label", GTK_TYPE_WIDGET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_CHILD, g_param_spec_object ("child", "child", "child", GTK_TYPE_WIDGET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_TAB_HBOX, g_param_spec_object ("tab-hbox", "tab-hbox", "tab-hbox", GTK_TYPE_HBOX, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_MENU_LABEL, g_param_spec_object ("menu-label", "menu-label", "menu-label", GTK_TYPE_WIDGET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_VISIBLE, g_param_spec_boolean ("visible", "visible", "visible", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_REORDERABLE, g_param_spec_boolean ("reorderable", "reorderable", "reorderable", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), SMART_NOTEBOOK_TAB_DETACHABLE, g_param_spec_boolean ("detachable", "detachable", "detachable", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_signal_new ("clicked", SMART_TYPE_NOTEBOOK_TAB, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("icon_clicked", SMART_TYPE_NOTEBOOK_TAB, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("closing", SMART_TYPE_NOTEBOOK_TAB, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_BOOLEAN__VOID, G_TYPE_BOOLEAN, 0);
}


static void smart_notebook_tab_instance_init (SmartNotebookTab * self) {
	self->priv = SMART_NOTEBOOK_TAB_GET_PRIVATE (self);
}


static void smart_notebook_tab_finalize (GObject* obj) {
	SmartNotebookTab * self;
	self = SMART_NOTEBOOK_TAB (obj);
	_g_object_unref0 (self->priv->_icon);
	_g_object_unref0 (self->priv->_close_button);
	_g_object_unref0 (self->priv->_label);
	_g_object_unref0 (self->priv->_child);
	_g_object_unref0 (self->priv->_tab_hbox);
	_g_object_unref0 (self->priv->_menu_label);
	_g_free0 (self->priv->_name);
	G_OBJECT_CLASS (smart_notebook_tab_parent_class)->finalize (obj);
}


GType smart_notebook_tab_get_type (void) {
	static volatile gsize smart_notebook_tab_type_id__volatile = 0;
	if (g_once_init_enter (&smart_notebook_tab_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SmartNotebookTabClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) smart_notebook_tab_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SmartNotebookTab), 0, (GInstanceInitFunc) smart_notebook_tab_instance_init, NULL };
		GType smart_notebook_tab_type_id;
		smart_notebook_tab_type_id = g_type_register_static (G_TYPE_OBJECT, "SmartNotebookTab", &g_define_type_info, 0);
		g_once_init_leave (&smart_notebook_tab_type_id__volatile, smart_notebook_tab_type_id);
	}
	return smart_notebook_tab_type_id__volatile;
}


static void _vala_smart_notebook_tab_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	SmartNotebookTab * self;
	self = SMART_NOTEBOOK_TAB (object);
	switch (property_id) {
		case SMART_NOTEBOOK_TAB_CAN_CLOSE:
		g_value_set_boolean (value, smart_notebook_tab_get_can_close (self));
		break;
		case SMART_NOTEBOOK_TAB_ICON:
		g_value_set_object (value, smart_notebook_tab_get_icon (self));
		break;
		case SMART_NOTEBOOK_TAB_CLOSE_BUTTON:
		g_value_set_object (value, smart_notebook_tab_get_close_button (self));
		break;
		case SMART_NOTEBOOK_TAB_LABEL:
		g_value_set_object (value, smart_notebook_tab_get_label (self));
		break;
		case SMART_NOTEBOOK_TAB_CHILD:
		g_value_set_object (value, smart_notebook_tab_get_child (self));
		break;
		case SMART_NOTEBOOK_TAB_TAB_HBOX:
		g_value_set_object (value, smart_notebook_tab_get_tab_hbox (self));
		break;
		case SMART_NOTEBOOK_TAB_MENU_LABEL:
		g_value_set_object (value, smart_notebook_tab_get_menu_label (self));
		break;
		case SMART_NOTEBOOK_TAB_VISIBLE:
		g_value_set_boolean (value, smart_notebook_tab_get_visible (self));
		break;
		case SMART_NOTEBOOK_TAB_NAME:
		g_value_set_string (value, smart_notebook_tab_get_name (self));
		break;
		case SMART_NOTEBOOK_TAB_REORDERABLE:
		g_value_set_boolean (value, smart_notebook_tab_get_reorderable (self));
		break;
		case SMART_NOTEBOOK_TAB_DETACHABLE:
		g_value_set_boolean (value, smart_notebook_tab_get_detachable (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_smart_notebook_tab_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	SmartNotebookTab * self;
	self = SMART_NOTEBOOK_TAB (object);
	switch (property_id) {
		case SMART_NOTEBOOK_TAB_CAN_CLOSE:
		smart_notebook_tab_set_can_close (self, g_value_get_boolean (value));
		break;
		case SMART_NOTEBOOK_TAB_TAB_HBOX:
		smart_notebook_tab_set_tab_hbox (self, g_value_get_object (value));
		break;
		case SMART_NOTEBOOK_TAB_MENU_LABEL:
		smart_notebook_tab_set_menu_label (self, g_value_get_object (value));
		break;
		case SMART_NOTEBOOK_TAB_VISIBLE:
		smart_notebook_tab_set_visible (self, g_value_get_boolean (value));
		break;
		case SMART_NOTEBOOK_TAB_NAME:
		smart_notebook_tab_set_name (self, g_value_get_string (value));
		break;
		case SMART_NOTEBOOK_TAB_REORDERABLE:
		smart_notebook_tab_set_reorderable (self, g_value_get_boolean (value));
		break;
		case SMART_NOTEBOOK_TAB_DETACHABLE:
		smart_notebook_tab_set_detachable (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



