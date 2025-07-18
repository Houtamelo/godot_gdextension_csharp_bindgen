/**************************************************************************/
/*  godotsharp_defs.h                                                     */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef GODOTSHARP_DEFS_H
#define GODOTSHARP_DEFS_H

#define BINDINGS_NAMESPACE "Godot"
#define BINDINGS_NAMESPACE_COLLECTIONS BINDINGS_NAMESPACE ".Collections"
#define API_SOLUTION_NAME "GodotSharp"
#define CORE_API_ASSEMBLY_NAME "GodotSharp"
#define EDITOR_API_ASSEMBLY_NAME "GodotSharpEditor"
#define TOOLS_ASM_NAME "GodotTools"

#define BINDINGS_CLASS_NATIVECALLS "NativeCalls"
#define BINDINGS_CLASS_NATIVECALLS_EDITOR "EditorNativeCalls"

#define BINDINGS_GDEXTENSION_SUFFIX "GDExtensionBindings"

#define BINDINGS_GDEXTENSION_ASSEMBLY_NAME CORE_API_ASSEMBLY_NAME BINDINGS_GDEXTENSION_SUFFIX
#define GDEXTENSION_API_SOLUTION_NAME API_SOLUTION_NAME BINDINGS_GDEXTENSION_SUFFIX
#define BINDINGS_GDEXTENSION_NAMESPACE BINDINGS_NAMESPACE "." BINDINGS_GDEXTENSION_SUFFIX

#define BINDINGS_GDEXTENSION_CLASS_NATIVECALLS BINDINGS_CLASS_NATIVECALLS BINDINGS_GDEXTENSION_SUFFIX
#define BINDINGS_GDEXTENSION_CLASS_NATIVECALLS_EDITOR BINDINGS_CLASS_NATIVECALLS_EDITOR BINDINGS_GDEXTENSION_SUFFIX

#endif // GODOTSHARP_DEFS_H
