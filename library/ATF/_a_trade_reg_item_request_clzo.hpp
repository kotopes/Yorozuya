// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _a_trade_reg_item_request_clzo
    {
        char byStoreIndex;
         __declspec(align(1)) unsigned __int16 wItemSerial;
        char byAmount;
        char byItemTableCode;
         __declspec(align(1)) unsigned __int16 wItemIndex;
         __declspec(align(1)) unsigned int dwPrice;
        char byTax;
        int bUseNpcLink;
    };
END_ATF_NAMESPACE