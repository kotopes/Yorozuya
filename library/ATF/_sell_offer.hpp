// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _sell_offer
    {
        _STORAGE_LIST::_db_con *pItem;
        char byAmount;
        char bySlotIndex;
        char byStorageCode;
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_sell_offer, 16>(), "_sell_offer");
END_ATF_NAMESPACE
