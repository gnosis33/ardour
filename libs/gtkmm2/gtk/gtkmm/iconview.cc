// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/iconview.h>
#include <gtkmm/private/iconview_p.h>

// -*- c++ -*-
/* $Id$ */

/* Copyright 1998-2004 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtkmm/adjustment.h> 
#include <gtk/gtkiconview.h>

namespace //anonymous namespace
{

static void proxy_foreach_callback(GtkIconView* /* icon_view */, GtkTreePath* path, void* data)
{
  typedef Gtk::IconView::SlotForeach SlotType;
  SlotType& slot = *static_cast<SlotType*>(data);

  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  try
  {
  #endif //GLIBMM_EXCEPTIONS_ENABLED
    slot(Gtk::TreeModel::Path(path, true));
  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
  #endif //GLIBMM_EXCEPTIONS_ENABLED
}

} //anonymous namespace


namespace Gtk
{

//Allow the generated code to work without the prefix:
typedef IconView::ArrayHandle_TreePaths ArrayHandle_TreePaths;

void IconView::selected_foreach(const SlotForeach& slot)
{
  SlotForeach slot_copy(slot);
  gtk_icon_view_selected_foreach(const_cast<GtkIconView*>(gobj()), &proxy_foreach_callback, &slot_copy);
}

bool IconView::get_item_at_pos(int x, int y, TreeModel::Path& path, CellRenderer*& cell) const
{
  GtkTreePath* cpath = 0;
  GtkCellRenderer* ccell = 0;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, &cpath, &ccell);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_item_at_pos documentation says we should free this.
  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_item_at_pos(int x, int y, TreeModel::Path& path) const
{
  GtkTreePath* cpath = 0;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, &cpath, 0);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_item_at_pos documentation says we should free this.
  return result;
}

bool IconView::get_item_at_pos(int x, int y, CellRenderer*& cell) const
{
  GtkCellRenderer* ccell = 0;
  bool result = gtk_icon_view_get_item_at_pos(const_cast<GtkIconView*>(gobj()), x, y, 0, &ccell);

  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_visible_range(TreeModel::Path& start_path, TreeModel::Path& end_path) const
{
  GtkTreePath* cstart_path = 0;
  GtkTreePath* cend_path = 0;
  bool result = gtk_icon_view_get_visible_range(const_cast<GtkIconView*>(gobj()), &cstart_path, &cend_path);

  start_path = Glib::wrap(cstart_path); //Don't take copy because the gtk_icon_view_get_visible_range documentation says we should free this.
  end_path = Glib::wrap(cend_path); //Don't take copy because the gtk_icon_view_get_visible_range documentation says we should free this.
  return result;
}

  
bool IconView::get_cursor(TreeModel::Path& path, CellRenderer*& cell) const
{
  GtkTreePath* cpath = 0;
  GtkCellRenderer* ccell = 0;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), &cpath, &ccell);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_cursor documentation says we should free this.
  cell = Glib::wrap(ccell);
  return result;
}

bool IconView::get_cursor(TreeModel::Path& path) const
{
  GtkTreePath* cpath = 0;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), &cpath, 0);

  path = Glib::wrap(cpath); //Don't take copy because the gtk_icon_view_get_cursor documentation says we should free this.
  return result;
}

bool IconView::get_cursor(CellRenderer*& cell) const
{
  GtkCellRenderer* ccell = 0;
  bool result = gtk_icon_view_get_cursor(const_cast<GtkIconView*>(gobj()), 0, &ccell);

  cell = Glib::wrap(ccell);
  return result;
}

void IconView::get_drag_dest_item(TreeModel::Path& path, IconViewDropPosition& pos) const
{
  GtkTreePath* cpath = 0;
  gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), &cpath, (GtkIconViewDropPosition*)(&pos));
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);
}

void IconView::get_drag_dest_item(TreeModel::Path& path) const
{
  GtkTreePath* cpath = 0;
  gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), &cpath, NULL);
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);
}

void IconView::get_drag_dest_item(IconViewDropPosition& pos) const
{
   gtk_icon_view_get_drag_dest_item(const_cast<GtkIconView*>(gobj()), NULL, (GtkIconViewDropPosition*)(&pos));
}


bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, TreeModel::Path& path, IconViewDropPosition& pos) const
{
  GtkTreePath* cpath = 0;
  const bool result = gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, &cpath, (GtkIconViewDropPosition*)(&pos));
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);

  return result;
}

bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, TreeModel::Path& path) const
{
  GtkTreePath* cpath = 0;
  const bool result = gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, &cpath, NULL);
  if(cpath)
    path = Gtk::TreeModel::Path(cpath, true /* make_a_copy */);

  return result;
}

bool IconView::get_dest_item_at_pos(int drag_x, int drag_y, IconViewDropPosition& pos) const
{
  return gtk_icon_view_get_dest_item_at_pos(const_cast<GtkIconView*>(gobj()), drag_x, drag_y, NULL, (GtkIconViewDropPosition*)(&pos));
}


void IconView::enable_model_drag_source(const ArrayHandle_TargetEntry& targets, Gdk::ModifierType start_button_mask, Gdk::DragAction actions)
{
  gtk_icon_view_enable_model_drag_source(gobj(), (GdkModifierType)start_button_mask, targets.data(), targets.size(), (GdkDragAction)actions);
}


void  IconView::enable_model_drag_dest(const ArrayHandle_TargetEntry& targets, Gdk::DragAction actions)
{
  gtk_icon_view_enable_model_drag_dest(gobj(), targets.data(), targets.size(), (GdkDragAction)actions);
}

} // namespace Gtk


namespace
{


static void IconView_signal_set_scroll_adjustments_callback(GtkIconView* self, GtkAdjustment* p0,GtkAdjustment* p1,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Adjustment*,Adjustment* > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
, Glib::wrap(p1)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo IconView_signal_set_scroll_adjustments_info =
{
  "set_scroll_adjustments",
  (GCallback) &IconView_signal_set_scroll_adjustments_callback,
  (GCallback) &IconView_signal_set_scroll_adjustments_callback
};


static void IconView_signal_item_activated_callback(GtkIconView* self, GtkTreePath* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const TreeModel::Path& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Gtk::TreePath(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo IconView_signal_item_activated_info =
{
  "item_activated",
  (GCallback) &IconView_signal_item_activated_callback,
  (GCallback) &IconView_signal_item_activated_callback
};


static const Glib::SignalProxyInfo IconView_signal_selection_changed_info =
{
  "selection_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::IconViewDropPosition>::value_type()
{
  return gtk_icon_view_drop_position_get_type();
}


namespace Glib
{

Gtk::IconView* wrap(GtkIconView* object, bool take_copy)
{
  return dynamic_cast<Gtk::IconView *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& IconView_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &IconView_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_icon_view_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  }

  return *this;
}

void IconView_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->set_scroll_adjustments = &set_scroll_adjustments_callback;
  klass->item_activated = &item_activated_callback;
  klass->selection_changed = &selection_changed_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void IconView_Class::set_scroll_adjustments_callback(GtkIconView* self, GtkAdjustment* p0, GtkAdjustment* p1)
{
  CppObjectType *const obj = dynamic_cast<CppObjectType*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj && obj->is_derived_())
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try // Trap C++ exceptions which would normally be lost because this is a C callback.
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      // Call the virtual member method, which derived classes might override.
      obj->on_set_scroll_adjustments(Glib::wrap(p0)
, Glib::wrap(p1)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
  else
  {
    BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

    // Call the original underlying C function:
    if(base && base->set_scroll_adjustments)
      (*base->set_scroll_adjustments)(self, p0, p1);
  }
}
void IconView_Class::item_activated_callback(GtkIconView* self, GtkTreePath* p0)
{
  CppObjectType *const obj = dynamic_cast<CppObjectType*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj && obj->is_derived_())
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try // Trap C++ exceptions which would normally be lost because this is a C callback.
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      // Call the virtual member method, which derived classes might override.
      obj->on_item_activated(Gtk::TreePath(p0, true)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
  else
  {
    BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

    // Call the original underlying C function:
    if(base && base->item_activated)
      (*base->item_activated)(self, p0);
  }
}
void IconView_Class::selection_changed_callback(GtkIconView* self)
{
  CppObjectType *const obj = dynamic_cast<CppObjectType*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj && obj->is_derived_())
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try // Trap C++ exceptions which would normally be lost because this is a C callback.
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      // Call the virtual member method, which derived classes might override.
      obj->on_selection_changed();
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
  else
  {
    BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

    // Call the original underlying C function:
    if(base && base->selection_changed)
      (*base->selection_changed)(self);
  }
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* IconView_Class::wrap_new(GObject* o)
{
  return manage(new IconView((GtkIconView*)(o)));

}


/* The implementation: */

IconView::IconView(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

IconView::IconView(GtkIconView* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

IconView::~IconView()
{
  destroy_();
}

IconView::CppClassType IconView::iconview_class_; // initialize static member

GType IconView::get_type()
{
  return iconview_class_.init().get_type();
}

GType IconView::get_base_type()
{
  return gtk_icon_view_get_type();
}


IconView::IconView()
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::Container(Glib::ConstructParams(iconview_class_.init()))
{
  }

IconView::IconView(const Glib::RefPtr<TreeModel>& model)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::Container(Glib::ConstructParams(iconview_class_.init(), "model", Glib::unwrap(model), (char*) 0))
{
  }

void IconView::set_model(const Glib::RefPtr<TreeModel>& model)
{
gtk_icon_view_set_model(gobj(), Glib::unwrap(model)); 
}

Glib::RefPtr<TreeModel> IconView::get_model()
{
  return Glib::wrap(gtk_icon_view_get_model(gobj()));
}

Glib::RefPtr<const TreeModel> IconView::get_model() const
{
  return const_cast<IconView*>(this)->get_model();
}

void IconView::set_text_column(int column)
{
gtk_icon_view_set_text_column(gobj(), column); 
}

void IconView::set_text_column(const TreeModelColumnBase& model_column)
{
gtk_icon_view_set_text_column(gobj(), (model_column).index()); 
}

int IconView::get_text_column() const
{
  return gtk_icon_view_get_text_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_markup_column(int column)
{
gtk_icon_view_set_markup_column(gobj(), column); 
}

void IconView::set_markup_column(const TreeModelColumnBase& column)
{
gtk_icon_view_set_markup_column(gobj(), (column).index()); 
}

int IconView::get_markup_column() const
{
  return gtk_icon_view_get_markup_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_pixbuf_column(int column)
{
gtk_icon_view_set_pixbuf_column(gobj(), column); 
}

void IconView::set_pixbuf_column(const TreeModelColumnBase& column)
{
gtk_icon_view_set_pixbuf_column(gobj(), (column).index()); 
}

int IconView::get_pixbuf_column() const
{
  return gtk_icon_view_get_pixbuf_column(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_orientation(Orientation orientation)
{
gtk_icon_view_set_orientation(gobj(), ((GtkOrientation)(orientation))); 
}

Orientation IconView::get_orientation() const
{
  return ((Orientation)(gtk_icon_view_get_orientation(const_cast<GtkIconView*>(gobj()))));
}

void IconView::set_columns(int columns)
{
gtk_icon_view_set_columns(gobj(), columns); 
}

int IconView::get_columns() const
{
  return gtk_icon_view_get_columns(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_item_width(int item_width)
{
gtk_icon_view_set_item_width(gobj(), item_width); 
}

int IconView::get_icon_width() const
{
  return gtk_icon_view_get_item_width(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_spacing(int spacing)
{
gtk_icon_view_set_spacing(gobj(), spacing); 
}

int IconView::get_spacing() const
{
  return gtk_icon_view_get_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_row_spacing(int row_spacing)
{
gtk_icon_view_set_row_spacing(gobj(), row_spacing); 
}

gint IconView::get_row_spacing() const
{
  return gtk_icon_view_get_row_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_column_spacing(int column_spacing)
{
gtk_icon_view_set_column_spacing(gobj(), column_spacing); 
}

int IconView::get_column_spacing() const
{
  return gtk_icon_view_get_column_spacing(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_margin(int margin)
{
gtk_icon_view_set_margin(gobj(), margin); 
}

int IconView::get_margin() const
{
  return gtk_icon_view_get_margin(const_cast<GtkIconView*>(gobj()));
}

TreeModel::Path IconView::get_path_at_pos(int x, int y) const
{
  return Gtk::TreePath(gtk_icon_view_get_path_at_pos(const_cast<GtkIconView*>(gobj()), x, y), false);
}

void IconView::set_selection_mode(SelectionMode mode)
{
gtk_icon_view_set_selection_mode(gobj(), ((GtkSelectionMode)(mode))); 
}

SelectionMode IconView::get_selection_mode() const
{
  return ((SelectionMode)(gtk_icon_view_get_selection_mode(const_cast<GtkIconView*>(gobj()))));
}

void IconView::select_path(const TreeModel::Path& path)
{
gtk_icon_view_select_path(gobj(), const_cast<GtkTreePath*>((path).gobj())); 
}

void IconView::unselect_path(const TreeModel::Path& path)
{
gtk_icon_view_unselect_path(gobj(), const_cast<GtkTreePath*>((path).gobj())); 
}

bool IconView::path_is_selected(const TreeModel::Path& path) const
{
  return gtk_icon_view_path_is_selected(const_cast<GtkIconView*>(gobj()), const_cast<GtkTreePath*>((path).gobj()));
}

ArrayHandle_TreePaths IconView::get_selected_items() const
{
  return ArrayHandle_TreePaths(gtk_icon_view_get_selected_items(const_cast<GtkIconView*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

void IconView::select_all()
{
gtk_icon_view_select_all(gobj()); 
}

void IconView::unselect_all()
{
gtk_icon_view_unselect_all(gobj()); 
}

void IconView::item_activated(const TreeModel::Path& path)
{
gtk_icon_view_item_activated(gobj(), const_cast<GtkTreePath*>((path).gobj())); 
}

void IconView::scroll_to_path(const TreeModel::Path& path, bool use_align, gfloat row_align, gfloat col_align)
{
gtk_icon_view_scroll_to_path(gobj(), const_cast<GtkTreePath*>((path).gobj()), static_cast<int>(use_align), row_align, col_align); 
}

void IconView::unset_model_drag_source()
{
gtk_icon_view_unset_model_drag_source(gobj()); 
}

void IconView::unset_model_drag_dest()
{
gtk_icon_view_unset_model_drag_dest(gobj()); 
}

void IconView::set_reorderable(bool reorderable)
{
gtk_icon_view_set_reorderable(gobj(), static_cast<int>(reorderable)); 
}

bool IconView::get_reorderable() const
{
  return gtk_icon_view_get_reorderable(const_cast<GtkIconView*>(gobj()));
}

void IconView::set_drag_dest_item(const TreeModel::Path& path, IconViewDropPosition pos)
{
gtk_icon_view_set_drag_dest_item(gobj(), const_cast<GtkTreePath*>((path).gobj()), ((GtkIconViewDropPosition)(pos))); 
}

Glib::RefPtr<Gdk::Pixmap> IconView::create_drag_icon(const TreeModel::Path& path)
{
  return Glib::wrap((GdkPixmapObject*)(gtk_icon_view_create_drag_icon(gobj(), const_cast<GtkTreePath*>((path).gobj()))));
}


Glib::SignalProxy2< void,Adjustment*,Adjustment* > IconView::signal_set_scroll_adjustments()
{
  return Glib::SignalProxy2< void,Adjustment*,Adjustment* >(this, &IconView_signal_set_scroll_adjustments_info);
}


Glib::SignalProxy1< void,const TreeModel::Path& > IconView::signal_item_activated()
{
  return Glib::SignalProxy1< void,const TreeModel::Path& >(this, &IconView_signal_item_activated_info);
}


Glib::SignalProxy0< void > IconView::signal_selection_changed()
{
  return Glib::SignalProxy0< void >(this, &IconView_signal_selection_changed_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_pixbuf_column() 
{
  return Glib::PropertyProxy<int>(this, "pixbuf-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_pixbuf_column() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "pixbuf-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_text_column() 
{
  return Glib::PropertyProxy<int>(this, "text-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_text_column() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "text-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_markup_column() 
{
  return Glib::PropertyProxy<int>(this, "markup-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_markup_column() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "markup-column");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<SelectionMode> IconView::property_selection_mode() 
{
  return Glib::PropertyProxy<SelectionMode>(this, "selection-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<SelectionMode> IconView::property_selection_mode() const
{
  return Glib::PropertyProxy_ReadOnly<SelectionMode>(this, "selection-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Orientation> IconView::property_orientation() 
{
  return Glib::PropertyProxy<Orientation>(this, "orientation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Orientation> IconView::property_orientation() const
{
  return Glib::PropertyProxy_ReadOnly<Orientation>(this, "orientation");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<TreeModel> > IconView::property_model() 
{
  return Glib::PropertyProxy< Glib::RefPtr<TreeModel> >(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> > IconView::property_model() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TreeModel> >(this, "model");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_columns() 
{
  return Glib::PropertyProxy<int>(this, "columns");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_columns() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "columns");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_item_width() 
{
  return Glib::PropertyProxy<int>(this, "item-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_item_width() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "item-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_spacing() 
{
  return Glib::PropertyProxy<int>(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_spacing() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_row_spacing() 
{
  return Glib::PropertyProxy<int>(this, "row-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_row_spacing() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "row-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_column_spacing() 
{
  return Glib::PropertyProxy<int>(this, "column-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_column_spacing() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "column-spacing");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> IconView::property_margin() 
{
  return Glib::PropertyProxy<int>(this, "margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> IconView::property_margin() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "margin");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Gtk::IconView::on_set_scroll_adjustments(Adjustment* hadjustment, Adjustment* vadjustment)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->set_scroll_adjustments)
    (*base->set_scroll_adjustments)(gobj(),(GtkAdjustment*)Glib::unwrap(hadjustment),(GtkAdjustment*)Glib::unwrap(vadjustment));
}
void Gtk::IconView::on_item_activated(const TreeModel::Path& path)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->item_activated)
    (*base->item_activated)(gobj(),const_cast<GtkTreePath*>((path).gobj()));
}
void Gtk::IconView::on_selection_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->selection_changed)
    (*base->selection_changed)(gobj());
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


