// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/treedragdest.h>
#include <gtkmm/private/treedragdest_p.h>

// -*- c++ -*-
/* $Id$ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/treepath.h>
#include <gtkmm/selectiondata_private.h>
#include <gtk/gtktreednd.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::TreeDragDest> wrap(GtkTreeDragDest* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::TreeDragDest>( dynamic_cast<Gtk::TreeDragDest*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& TreeDragDest_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &TreeDragDest_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_tree_drag_dest_get_type();
  }

  return *this;
}

void TreeDragDest_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

#ifdef GLIBMM_VFUNCS_ENABLED
  klass->drag_data_received = &drag_data_received_vfunc_callback;
  klass->row_drop_possible = &row_drop_possible_vfunc_callback;
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
gboolean TreeDragDest_Class::drag_data_received_vfunc_callback(GtkTreeDragDest* self, GtkTreePath* dest, GtkSelectionData* selection_data)
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
      return static_cast<int>(obj->drag_data_received_vfunc(Gtk::TreePath(dest, true)
, SelectionData_WithoutOwnership(selection_data)
));
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
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

    // Call the original underlying C function:
    if(base && base->drag_data_received)
      return (*base->drag_data_received)(self, dest, selection_data);
  }

  typedef gboolean RType;
  return RType();
}
gboolean TreeDragDest_Class::row_drop_possible_vfunc_callback(GtkTreeDragDest* self, GtkTreePath* dest_path, GtkSelectionData* selection_data)
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
      return static_cast<int>(obj->row_drop_possible_vfunc(Gtk::TreePath(dest_path, true)
, SelectionData_WithoutOwnership(selection_data)
));
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
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

    // Call the original underlying C function:
    if(base && base->row_drop_possible)
      return (*base->row_drop_possible)(self, dest_path, selection_data);
  }

  typedef gboolean RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* TreeDragDest_Class::wrap_new(GObject* object)
{
  return new TreeDragDest((GtkTreeDragDest*)(object));
}


/* The implementation: */

TreeDragDest::TreeDragDest()
:
  Glib::Interface(treedragdest_class_.init())
{}

TreeDragDest::TreeDragDest(GtkTreeDragDest* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

TreeDragDest::~TreeDragDest()
{}

// static
void TreeDragDest::add_interface(GType gtype_implementer)
{
  treedragdest_class_.init().add_interface(gtype_implementer);
}

TreeDragDest::CppClassType TreeDragDest::treedragdest_class_; // initialize static member

GType TreeDragDest::get_type()
{
  return treedragdest_class_.init().get_type();
}

GType TreeDragDest::get_base_type()
{
  return gtk_tree_drag_dest_get_type();
}


bool TreeDragDest::drag_data_received(const TreeModel::Path& dest, const SelectionData& selection_data)
{
  return gtk_tree_drag_dest_drag_data_received(gobj(), const_cast<GtkTreePath*>((dest).gobj()), const_cast<GtkSelectionData*>((selection_data).gobj()));
}

bool TreeDragDest::row_drop_possible(const TreeModel::Path& dest_path, const SelectionData& selection_data) const
{
  return gtk_tree_drag_dest_row_drop_possible(const_cast<GtkTreeDragDest*>(gobj()), const_cast<GtkTreePath*>((dest_path).gobj()), const_cast<GtkSelectionData*>((selection_data).gobj()));
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
bool Gtk::TreeDragDest::drag_data_received_vfunc(const TreeModel::Path& dest, const SelectionData& selection_data) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->drag_data_received)
    return (*base->drag_data_received)(gobj(),const_cast<GtkTreePath*>((dest).gobj()),const_cast<GtkSelectionData*>((selection_data).gobj()));

  typedef bool RType;
  return RType();
}
bool Gtk::TreeDragDest::row_drop_possible_vfunc(const TreeModel::Path& dest, const SelectionData& selection_data) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->row_drop_possible)
    return (*base->row_drop_possible)(const_cast<GtkTreeDragDest*>(gobj()),const_cast<GtkTreePath*>((dest).gobj()),const_cast<GtkSelectionData*>((selection_data).gobj()));

  typedef bool RType;
  return RType();
}
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


