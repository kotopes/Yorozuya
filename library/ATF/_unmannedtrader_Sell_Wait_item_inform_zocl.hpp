// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _unmannedtrader_Sell_Wait_item_inform_zocl
    {
        struct  __list
        {
            unsigned __int16 wItemSerial;
            unsigned int dwSellDalant;
            unsigned int dwTax;
        };
        char byNum;
        unsigned int dwTotalSellDalant;
        unsigned int dwTotalTaxDalant;
        unsigned int dwCurInvenDalant;
        __list List[10];
    public:
        _unmannedtrader_Sell_Wait_item_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _unmannedtrader_Sell_Wait_item_inform_zocl*);
            (org_ptr(0x1403601c0L))(this);
        };
        void ctor__unmannedtrader_Sell_Wait_item_inform_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _unmannedtrader_Sell_Wait_item_inform_zocl*);
            (org_ptr(0x1403601c0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _unmannedtrader_Sell_Wait_item_inform_zocl*);
            return (org_ptr(0x1403601e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE