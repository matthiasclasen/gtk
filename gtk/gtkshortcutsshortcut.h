/* gtkshortcutsshortcutprivate.h
 *
 * Copyright (C) 2015 Christian Hergert <christian@hergert.me>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public
 *  License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTK_SHORTCUTS_SHORTCUT_H
#define GTK_SHORTCUTS_SHORTCUT_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GTK_TYPE_SHORTCUTS_SHORTCUT (gtk_shortcuts_shortcut_get_type())
#define GTK_SHORTCUTS_SHORTCUT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SHORTCUTS_SHORTCUT, GtkShortcutsShortcut))
#define GTK_SHORTCUTS_SHORTCUT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SHORTCUTS_SHORTCUT, GtkShortcutsShortcutClass))
#define GTK_IS_SHORTCUTS_SHORTCUT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SHORTCUTS_SHORTCUT))
#define GTK_IS_SHORTCUTS_SHORTCUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SHORTCUTS_SHORTCUT))
#define GTK_SHORTCUTS_SHORTCUT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SHORTCUTS_SHORTCUT, GtkShortcutsShortcutClass))


typedef struct _GtkShortcutsShortcut      GtkShortcutsShortcut;
typedef struct _GtkShortcutsShortcutClass GtkShortcutsShortcutClass;


GDK_AVAILABLE_IN_3_20
GType        gtk_shortcuts_shortcut_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* GTK_SHORTCUTS_SHORTCUT_H */
