// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagRPC_CALL_ATTRIBUTES_V1_A
    {
        unsigned int Version;
        unsigned int Flags;
        unsigned int ServerPrincipalNameBufferLength;
        char *ServerPrincipalName;
        unsigned int ClientPrincipalNameBufferLength;
        char *ClientPrincipalName;
        unsigned int AuthenticationLevel;
        unsigned int AuthenticationService;
        int NullSession;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
