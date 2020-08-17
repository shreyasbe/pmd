/*
 * Copyright © 2016-2017 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */


#pragma once

#include <lw/base.h>
#include <lw/types.h>

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

#include <sys/sysinfo.h>
#include <sys/utsname.h>
#include <pwd.h>

#include <dce/dcethread.h>
#include <dce/lrpc.h>
#include <netdb.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>
#include <gssapi/gssapi.h>
#include <gssapi/gssapi_generic.h>

#include <vmrest.h>
#include <tdnf/tdnf.h>
#include <netmgmt/netmgr.h>
#include <pmd.h>
#include <pmd_fwmgmt.h>
#include <pmd_usermgmt.h>

#include "../common/defines.h"
#include "../common/includes.h"

//security
#include "../server/security/includes.h"
#include "../server/common/includes.h"

#include "../idl/demo_privsep_h.h"
#include "../idl/privsepd_h.h"
#include "../idl/pkgmgmt_privsep_h.h"
#include "../idl/netmgmt_privsep_h.h"
#include "../idl/fwmgmt_privsep_h.h"
#include "../idl/usermgmt_privsep_h.h"

#include "defines.h"
#include "structs.h"
#include "prototypes.h"
#include "security.h"
#include "pkgmgmt.h"
#include "global.h"
