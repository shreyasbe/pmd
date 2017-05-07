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

#ifdef __cplusplus
extern "C" {
#endif 

typedef struct _PMDHANDLE_* PPMDHANDLE;
typedef struct _PKGHANDLE_* PPKGHANDLE;

typedef struct _NET_CMD_ARGS
{
    int nShowHelp;         //Show help
    int nShowVersion;      //show version and exit
    int nVerbose;          //print debug info

    //Commands and args that do not fall in options
    char** ppszCmds;
    int nCmdCount;
    int argc;
    char **argv;
}NET_CMD_ARGS, *PNET_CMD_ARGS;

typedef struct _PMD_RPMOSTREE_SERVER_INFO_A_
{
    uint32_t dwServerType;
    char* pszServerUrl;
    char* pszCurrentHash;
}PMD_RPMOSTREE_SERVER_INFO_A, *PPMD_RPMOSTREE_SERVER_INFO_A;

typedef struct _PMD_RPMOSTREE_CLIENT_INFO_A_
{
    uint32_t dwServerType;
    char* pszComposeServer;
    char* pszCurrentHash;
    char* pszLastSyncDate;
}PMD_RPMOSTREE_CLIENT_INFO_A, *PPMD_RPMOSTREE_CLIENT_INFO_A;

#ifdef __cplusplus
}
#endif
 
