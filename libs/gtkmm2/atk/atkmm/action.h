// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_ACTION_H
#define _ATKMM_ACTION_H


#include <glibmm.h>

/* $Id$ */

/* Copyright (C) 2002 The gtkmm Development Team
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


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _AtkActionIface AtkActionIface; }
#endif


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkAction AtkAction;
typedef struct _AtkActionClass AtkActionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Action_Class; } // namespace Atk
namespace Atk
{

/** The ATK interface provided by UI components which the user can activate/interact with,
 * This should be implemented by instances of Atk::Object classes with which the user can interact directly, i.e. buttons,
 * checkboxes, scrollbars, e.g. components which are not "passive" providers of UI information.
 *
 * Exceptions: when the user interaction is already covered by another appropriate interface such as Atk::EditableText
 * (insert/delete test, etc.) or Atk::Value (set value) then these actions should not be exposed by Atk::Action as well.
 * 
 * Also note that the Atk::Action API is limited in that parameters may not be passed to the object being activated;
 * thus the action must be self-contained and specifiable via only a single "verb". Concrete examples include "press",
 * "release", "click" for buttons, "drag" (meaning initiate drag) and "drop" for drag sources and drop targets, etc.
 * 
 * Though most UI interactions on components should be invocable via keyboard as well as mouse, there will generally be
 * a close mapping between "mouse actions" that are possible on a component and the Atk::Actions. Where mouse and keyboard
 * actions are redundant in effect, Atk::Action should expose only one action rather than exposing redundant actions if
 * possible. By convention we have been using "mouse centric" terminology for Atk::Action names. 
 */

class Action : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Action CppObjectType;
  typedef Action_Class CppClassType;
  typedef AtkAction BaseObjectType;
  typedef AtkActionIface BaseClassType;

private:
  friend class Action_Class;
  static CppClassType action_class_;

  // noncopyable
  Action(const Action&);
  Action& operator=(const Action&);

protected:
  Action(); // you must derive from this class
  explicit Action(AtkAction* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Action();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkAction*       gobj()       { return reinterpret_cast<AtkAction*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const AtkAction* gobj() const { return reinterpret_cast<AtkAction*>(gobject_); }

private:


public:

  
  /** Perform the specified action on the object.
   * @param i The action index corresponding to the action to be performed.
   * @return <tt>true</tt> if success, <tt>false</tt> otherwise.
   */
  bool do_action(int i);
  
  /** Gets the number of accessible actions available on the object.
   * If there are more than one, the first one is considered the
   * "default" action of the object.
   * @return A the number of actions, or 0 if @a action  does not
   * implement this interface.
   */
  int get_n_actions() const;
  
  /** Returns a description of the specified action of the object.
   * @param i The action index corresponding to the action to be performed.
   * @return A description string, or <tt>0</tt>
   * if @a action  does not implement this interface.
   */
  Glib::ustring get_description(int i) const;
  
  /** Returns the name of the specified action of the object.
   * @param i The action index corresponding to the action to be performed.
   * @return A name string, or an empty string if @a action  does not implement this interface.
   */
  Glib::ustring get_name(int i) const;
  
  /** Returns a keybinding associated with this action, if one exists.
   * @param i The action index corresponding to the action to be performed.
   * @return A string representing the keybinding, or an empty string
   * if there is no keybinding for this action.
   */
  Glib::ustring get_keybinding(int i);
  
  /** Sets a description of the specified action of the object.
   * @param i The action index corresponding to the action to be performed.
   * @param desc The description to be assigned to this action.
   * @return A <tt>bool</tt> representing if the description was successfully set;.
   */
  bool set_description(int i, const Glib::ustring& desc);
  
  /** Returns the localized name of the specified action of the object.
   * @param i The action index corresponding to the action to be performed.
   * @return A name string, or an empty string
   * if @a action  does not implement this interface.
   */
  Glib::ustring get_localized_name(int i);

protected:
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool do_action_vfunc(int i);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_n_actions_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual const char* get_description_vfunc(int i) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual const char* get_name_vfunc(int i) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual const char* get_keybinding_vfunc(int i) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool set_description_vfunc(int i, const Glib::ustring& desc);
#endif //GLIBMM_VFUNCS_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Atk


namespace Glib
{
  /** @relates Atk::Action
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Glib::RefPtr<Atk::Action> wrap(AtkAction* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_ACTION_H */

