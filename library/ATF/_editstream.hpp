// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct  _editstream
    {
        unsigned __int64 dwCookie;
        unsigned int dwError;
        unsigned int (WINAPIV *pfnCallback)(unsigned __int64, char *, int, int *);
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
