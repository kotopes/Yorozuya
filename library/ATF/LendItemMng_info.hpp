// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "LendItemMng.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using LendItemMngDeleteLink2_ptr = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*);
        using LendItemMngDeleteLink2_clbk = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*, LendItemMngDeleteLink2_ptr);
        using LendItemMngGetSheet4_ptr = struct LendItemSheet* (WINAPIV*)(struct LendItemMng*, uint16_t);
        using LendItemMngGetSheet4_clbk = struct LendItemSheet* (WINAPIV*)(struct LendItemMng*, uint16_t, LendItemMngGetSheet4_ptr);
        using LendItemMngInitialize6_ptr = bool (WINAPIV*)(struct LendItemMng*);
        using LendItemMngInitialize6_clbk = bool (WINAPIV*)(struct LendItemMng*, LendItemMngInitialize6_ptr);
        using LendItemMngInsertLink8_ptr = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*);
        using LendItemMngInsertLink8_clbk = bool (WINAPIV*)(struct LendItemMng*, uint16_t, char, struct _STORAGE_LIST::_db_con*, LendItemMngInsertLink8_ptr);
        using LendItemMngInstance10_ptr = struct LendItemMng* (WINAPIV*)();
        using LendItemMngInstance10_clbk = struct LendItemMng* (WINAPIV*)(LendItemMngInstance10_ptr);
        using LendItemMngctor_LendItemMng12_ptr = void (WINAPIV*)(struct LendItemMng*);
        using LendItemMngctor_LendItemMng12_clbk = void (WINAPIV*)(struct LendItemMng*, LendItemMngctor_LendItemMng12_ptr);
        using LendItemMngRelease14_ptr = void (WINAPIV*)(struct LendItemMng*, uint16_t);
        using LendItemMngRelease14_clbk = void (WINAPIV*)(struct LendItemMng*, uint16_t, LendItemMngRelease14_ptr);
        using LendItemMngReleaseAll16_ptr = void (WINAPIV*)(struct LendItemMng*);
        using LendItemMngReleaseAll16_clbk = void (WINAPIV*)(struct LendItemMng*, LendItemMngReleaseAll16_ptr);
        using LendItemMngdtor_LendItemMng20_ptr = void (WINAPIV*)(struct LendItemMng*);
        using LendItemMngdtor_LendItemMng20_clbk = void (WINAPIV*)(struct LendItemMng*, LendItemMngdtor_LendItemMng20_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE