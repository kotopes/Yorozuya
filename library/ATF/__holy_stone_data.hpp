// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMapData.hpp"
#include "_dummy_position.hpp"
#include "_monster_fld.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct __holy_stone_data
    {
        CMapData *pCreateMap;
        _dummy_position CreateDummy;
        _monster_fld *pRec;
        int nRace;
    public:
        __holy_stone_data()
        {
            using org_ptr = void (WINAPIV*)(struct __holy_stone_data*);
            (org_ptr(0x1402840a0L))(this);
        };
        void ctor___holy_stone_data()
        {
            using org_ptr = void (WINAPIV*)(struct __holy_stone_data*);
            (org_ptr(0x1402840a0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE