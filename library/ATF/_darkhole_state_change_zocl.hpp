// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _darkhole_state_change_zocl
    {
        unsigned __int16 wIndex;
        unsigned int dwSerial;
        bool bHurry;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _darkhole_state_change_zocl*);
            return (org_ptr(0x1401648f0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE