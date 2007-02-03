// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_SCREEN_H
#define _GDKMM_SCREEN_H


#include <glibmm.h>

/* $Id$ */

/* screen.h
 *
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

//#include <gdkmm/visual.h>
//#include <gdkmm/window.h>
#include <gdkmm/rectangle.h>
#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GdkScreen GdkScreen;
typedef struct _GdkScreenClass GdkScreenClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{ class Screen_Class; } // namespace Gdk
namespace Gdk
{

class Display;
class Colormap;
class Visual;
class Window;

/** Object representing a physical screen
 * Gdk::Screen objects are the GDK representation of a physical screen. It is used throughout GDK and GTK+ to specify
 * which screen the top level windows are to be displayed on. It is also used to query the screen specification and
 * default settings such as the default colormap (get_default_colormap()), the screen width (get_width()), etc.
 * Note that a screen may consist of multiple monitors which are merged to form a large screen area. 
 */

class Screen : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Screen CppObjectType;
  typedef Screen_Class CppClassType;
  typedef GdkScreen BaseObjectType;
  typedef GdkScreenClass BaseClassType;

private:  friend class Screen_Class;
  static CppClassType screen_class_;

private:
  // noncopyable
  Screen(const Screen&);
  Screen& operator=(const Screen&);

protected:
  explicit Screen(const Glib::ConstructParams& construct_params);
  explicit Screen(GdkScreen* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Screen();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkScreen*       gobj()       { return reinterpret_cast<GdkScreen*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkScreen* gobj() const { return reinterpret_cast<GdkScreen*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkScreen* gobj_copy();

private:

protected:

public:
  
  /** Gets the default colormap for @a screen .
   * @return The default Gdk::Colormap.
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Colormap> get_default_colormap();
  
  /** Gets the default colormap for @a screen .
   * @return The default Gdk::Colormap.
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Colormap> get_default_colormap() const;

  
  /** Sets the default @a colormap  for @a screen .
   * 
   * @newin2p2
   * @param colormap A Gdk::Colormap.
   */
  void set_default_colormap(const Glib::RefPtr<const Colormap>& colormap);
  
  /** Gets the system's default colormap for @a screen 
   * @return The default colormap for @a screen .
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Colormap> get_system_colormap();
  
  /** Gets the system's default colormap for @a screen 
   * @return The default colormap for @a screen .
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Colormap> get_system_colormap() const;

  
  /** Get the system's default visual for @a screen .
   * This is the visual for the root window of the display.
   * The return value should not be freed.
   * @return The system visual
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Visual> get_system_visual();
  
  /** Get the system's default visual for @a screen .
   * This is the visual for the root window of the display.
   * The return value should not be freed.
   * @return The system visual
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Visual> get_system_visual() const;

  
  /** Gets the preferred colormap for rendering image data on @a screen .
   * Not a very useful function; historically, GDK could only render RGB
   * image data to one colormap and visual, but in the current version
   * it can render to any colormap and visual. So there's no need to
   * call this function.
   * @return The preferred colormap
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Colormap> get_rgb_colormap();
  
  /** Gets the preferred colormap for rendering image data on @a screen .
   * Not a very useful function; historically, GDK could only render RGB
   * image data to one colormap and visual, but in the current version
   * it can render to any colormap and visual. So there's no need to
   * call this function.
   * @return The preferred colormap
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Colormap> get_rgb_colormap() const;

  
  /** Gets a "preferred visual" chosen by GdkRGB for rendering image data
   * on @a screen . In previous versions of
   * GDK, this was the only visual GdkRGB could use for rendering. In
   * current versions, it's simply the visual GdkRGB would have chosen as 
   * the optimal one in those previous versions. GdkRGB can now render to 
   * drawables with any visual.
   * @return The Gdk::Visual chosen by GdkRGB.
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Visual> get_rgb_visual();
  
  /** Gets a "preferred visual" chosen by GdkRGB for rendering image data
   * on @a screen . In previous versions of
   * GDK, this was the only visual GdkRGB could use for rendering. In
   * current versions, it's simply the visual GdkRGB would have chosen as 
   * the optimal one in those previous versions. GdkRGB can now render to 
   * drawables with any visual.
   * @return The Gdk::Visual chosen by GdkRGB.
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Visual> get_rgb_visual() const;

  
  /** Gets a colormap to use for creating windows or pixmaps with an
   * alpha channel. The windowing system on which GTK+ is running
   * may not support this capability, in which case <tt>0</tt> will
   * be returned. Even if a non-<tt>0</tt> value is returned, its
   * possible that the window's alpha channel won't be honored
   * when displaying the window on the screen: in particular, for
   * X an appropriate windowing manager and compositing manager
   * must be running to provide appropriate display.
   * @return A colormap to use for windows with an alpha channel
   * or <tt>0</tt> if the capability is not available.
   * 
   * @newin2p8.
   */
  Glib::RefPtr<Colormap> get_rgba_colormap();
  
  /** Gets a colormap to use for creating windows or pixmaps with an
   * alpha channel. The windowing system on which GTK+ is running
   * may not support this capability, in which case <tt>0</tt> will
   * be returned. Even if a non-<tt>0</tt> value is returned, its
   * possible that the window's alpha channel won't be honored
   * when displaying the window on the screen: in particular, for
   * X an appropriate windowing manager and compositing manager
   * must be running to provide appropriate display.
   * @return A colormap to use for windows with an alpha channel
   * or <tt>0</tt> if the capability is not available.
   * 
   * @newin2p8.
   */
  Glib::RefPtr<const Colormap> get_rgba_colormap() const;

  
  /** Gets a visual to use for creating windows or pixmaps with an
   * alpha channel. See the docs for get_rgba_colormap()
   * for caveats.
   * @return A visual to use for windows with an alpha channel
   * or <tt>0</tt> if the capability is not available.
   * 
   * @newin2p8.
   */
  Glib::RefPtr<Visual> get_rgba_visual();
  
  /** Gets a visual to use for creating windows or pixmaps with an
   * alpha channel. See the docs for get_rgba_colormap()
   * for caveats.
   * @return A visual to use for windows with an alpha channel
   * or <tt>0</tt> if the capability is not available.
   * 
   * @newin2p8.
   */
  Glib::RefPtr<const Visual> get_rgba_visual() const;

  
  /** Gets the root window of @a screen .
   * @return The root window
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Window> get_root_window();
  
  /** Gets the root window of @a screen .
   * @return The root window
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Window> get_root_window() const;

  
  /** Gets the display to which the @a screen  belongs.
   * @return The display to which @a screen  belongs
   * 
   * @newin2p2.
   */
  Glib::RefPtr<Display> get_display();
  
  /** Gets the display to which the @a screen  belongs.
   * @return The display to which @a screen  belongs
   * 
   * @newin2p2.
   */
  Glib::RefPtr<const Display> get_display() const;

  
  /** Gets the index of @a screen  among the screens in the display
   * to which it belongs. (See get_display())
   * @return The index
   * 
   * @newin2p2.
   */
  int get_number() const;
  
  /** Gets the width of @a screen  in pixels
   * @return The width of @a screen  in pixels.
   * 
   * @newin2p2.
   */
  int get_width() const;
  
  /** Gets the height of @a screen  in pixels
   * @return The height of @a screen  in pixels.
   * 
   * @newin2p2.
   */
  int get_height() const;
  
  /** Gets the width of @a screen  in millimeters. 
   * Note that on some X servers this value will not be correct.
   * @return The width of @a screen  in millimeters.
   * 
   * @newin2p2.
   */
  int get_width_mm() const;
  
  /** Returns the height of @a screen  in millimeters. 
   * Note that on some X servers this value will not be correct.
   * @return The heigth of @a screen  in millimeters.
   * 
   * @newin2p2.
   */
  int get_height_mm() const;

  
  /** Lists the available visuals for the specified @a screen .
   * A visual describes a hardware image data format.
   * For example, a visual might support 24-bit color, or 8-bit color,
   * and might expect pixels to be in a certain format.
   *  @a newin2p2 
   * @return A list of visuals.
   */
  Glib::ListHandle< Glib::RefPtr<Visual> > list_visuals();
  
  /** Obtains a list of all toplevel windows known to GDK on the screen @a screen .
   * A toplevel window is a child of the root window (see
   * gdk_get_default_root_window()).
   *  @a newin2p2 
   * @return List of toplevel windows.
   */
  Glib::ListHandle< Glib::RefPtr<Window> > get_toplevel_windows();
  
  /** Determines the name to pass to Gdk::Display::open() to get
   * a Gdk::Display with this screen as the default screen.
   * 
   *  @a newin2p2 
   * @return The name.
   */
  Glib::ustring make_display_name();

  
  /** Returns the number of monitors which @a screen  consists of.
   * @return Number of monitors which @a screen  consists of.
   * 
   * @newin2p2.
   */
  int get_n_monitors() const;
  
  /** Retrieves the Gdk::Rectangle representing the size and position of 
   * the individual monitor within the entire screen area.
   * 
   * Note that the size of the entire screen area can be retrieved via 
   * get_width() and get_height().
   * 
   * @newin2p2
   * @param monitor_num The monitor number.
   * @param dest A Gdk::Rectangle to be filled with the monitor geometry.
   */
  void get_monitor_geometry(int monitor_num, Rectangle& dest) const;
  
  /** Returns the monitor number in which the point ( @a x , @a y ) is located.
   * @param x The x coordinate in the virtual screen.
   * @param y The y coordinate in the virtual screen.
   * @return The monitor number in which the point ( @a x , @a y ) lies, or
   * a monitor close to ( @a x , @a y ) if the point is not in any monitor.
   * 
   * @newin2p2.
   */
  int get_monitor_at_point(int x, int y) const;
  
  /** 
   * @param window A Gdk::Window.
   * @return The monitor number in which most of @a window  is located,
   * or if @a window  does not intersect any monitors, a monitor,
   * close to @a window .
   * the number of the monitor in which the largest area of the 
   * bounding rectangle of @a window  resides.
   * 
   * @newin2p2.
   */
  int get_monitor_at_window(const Glib::RefPtr<Window>& window) const;

  
  /** On X11, sends an X ClientMessage event to all toplevel windows on
   *  @a screen . 
   * 
   * Toplevel windows are determined by checking for the WM_STATE property, 
   * as described in the Inter-Client Communication Conventions Manual (ICCCM).
   * If no windows are found with the WM_STATE property set, the message is 
   * sent to all children of the root window.
   * 
   * On Windows, broadcasts a message registered with the name
   * GDK_WIN32_CLIENT_MESSAGE to all top-level windows. The amount of
   * data is limited to one long, i.e. four bytes.
   * 
   * @newin2p2
   * @param event The Gdk::Event.
   */
  void broadcast_client_message(GdkEvent* event);

  
  /** Gets the default screen for the default display. (See
   * Gdk::Display::get_default()).
   * @return A Gdk::Screen, or <tt>0</tt> if there is no default display.
   * 
   * @newin2p2.
   */
  static Glib::RefPtr<Screen> get_default();

  template <class ValueType>
  bool get_setting(const Glib::ustring& name, ValueType& value) const;
  

  /** The size_changed signal is emitted when the pixel width or 
   * height of a screen changes.
   */
  
/**
   * @par Prototype:
   * <tt>void %size_changed()</tt>
   */

  Glib::SignalProxy0< void > signal_size_changed();


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
  virtual void on_size_changed();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

template <class ValueType>
bool Screen::get_setting(const Glib::ustring& name, ValueType& value) const
{
  Glib::Value<ValueType> glibmmvalue;
  glibmmvalue.init(Glib::Value<ValueType>::value_type());

  gboolean result = gdk_screen_get_setting(const_cast<GdkScreen*>(gobj()), name.c_str(), glibmmvalue.gobj());

  value = glibmmvalue.get();
  return result;
}

} /* namespace Gdk */


namespace Glib
{
  /** @relates Gdk::Screen
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Glib::RefPtr<Gdk::Screen> wrap(GdkScreen* object, bool take_copy = false);
}


#endif /* _GDKMM_SCREEN_H */

