// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _pt_automine_getoutore_zocl
    {
        char byRetCode;
        unsigned __int16 wItemSerial;
    public:
        _pt_automine_getoutore_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_automine_getoutore_zocl*);
            (org_ptr(0x1402d3f50L))(this);
        };
        void ctor__pt_automine_getoutore_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _pt_automine_getoutore_zocl*);
            (org_ptr(0x1402d3f50L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _pt_automine_getoutore_zocl*);
            return (org_ptr(0x1402d3fa0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE