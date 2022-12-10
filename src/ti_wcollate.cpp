/***************************************************************************
 *
 * ti_wcollate.cpp - explicit instantiation directives for collate<wchar_t>
 *
 * $Id$
 *
 ***************************************************************************
 *
 * Licensed to the Apache Software  Foundation (ASF) under one or more
 * contributor  license agreements.  See  the NOTICE  file distributed
 * with  this  work  for  additional information  regarding  copyright
 * ownership.   The ASF  licenses this  file to  you under  the Apache
 * License, Version  2.0 (the  License); you may  not use  this file
 * except in  compliance with the License.   You may obtain  a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the  License is distributed on an  "AS IS" BASIS,
 * WITHOUT  WARRANTIES OR CONDITIONS  OF ANY  KIND, either  express or
 * implied.   See  the License  for  the  specific language  governing
 * permissions and limitations under the License.
 *
 * Copyright 1994-2006 Rogue Wave Software.
 * 
 **************************************************************************/

#define _RWSTD_LIB_SRC

#define _RWSTD_INSTANTIATE_TEMPLATES   1
#define _RWSTD_INSTANTIATE_COLLATE     1
#define _RWSTD_INSTANTIATE_WCHAR_T     1

#include <rw/_defs.h>

#undef _RWSTD_NO_TEMPLATE_DEFINITIONS

#include <loc/_locale.h>
#include <loc/_collate.h>

#include "use_facet.h"


#ifndef _RWSTD_NO_WCHAR_T

_RWSTD_DEFINE_FACET_FACTORY (static, collate, <wchar_t>, wcollate);
_RWSTD_SPECIALIZE_USE_FACET (wcollate);

#endif   // _RWSTD_NO_WCHAR_T
