// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _EQUIPKEY
    {
        __int16 zItemIndex;
    public:
        int16_t CovDBKey();
        bool IsFilled();
        void LoadDBKey(int16_t pl_zKey);
        void SetRelease();
    };    
    static_assert(ATF::checkSize<_EQUIPKEY, 2>(), "_EQUIPKEY");
END_ATF_NAMESPACE
