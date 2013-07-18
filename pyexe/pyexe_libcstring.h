/*
 * The internal libcstring header
 *
 * Copyright (c) 2011-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYEXE_LIBCSTRING_H )
#define _PYEXE_LIBCSTRING_H

#include <common.h>

/* Define HAVE_LOCAL_LIBCSTRING for local use of libcstring
 */
#if defined( HAVE_LOCAL_LIBCSTRING )

#include <libcstring_definitions.h>
#include <libcstring_narrow_string.h>
#include <libcstring_system_string.h>
#include <libcstring_types.h>
#include <libcstring_wide_string.h>

#else

/* If libtool DLL support is enabled set LIBCSTRING_DLL_IMPORT
 * before including libcstring.h
 */
#if defined( _WIN32 ) && defined( DLL_IMPORT )
#define LIBCSTRING_DLL_IMPORT
#endif

#include <libcstring.h>

#endif

#endif

