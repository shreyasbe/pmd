/*
 * Copyright © 2020-2021 VMware, Inc.  All Rights Reserved.
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


#include "includes.h"

DWORD
PmdDirConnectionOpen(
    PCSTR pszLdapURI,
    PCSTR pszDomain,
    PCSTR pszUsername,
    PCSTR pszPassword,
    PPMDDIR_CONNECTION* ppConnection
    )
{
    DWORD dwError = 0;
    return dwError;
}

VOID
PmdDirConnectionClose(
    PPMDDIR_CONNECTION pConnection
    )
{
    return;
}

DWORD
PmdDirGetMemberships(
    PPMDDIR_CONNECTION pConnection,
    PCSTR pszUPNName,
    PSTR  **pppszMemberships,
    PDWORD pdwMemberships
    )
{
    DWORD dwError = 0;
    return dwError;
}

VOID
PmdDirFreeMemberships(
    PSTR *ppszMemberships,
    DWORD dwMemberships
    )
{
    return;
}




