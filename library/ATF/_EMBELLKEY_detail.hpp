// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_EMBELLKEY_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_EMBELLKEYCovDBKey2_ptr _EMBELLKEYCovDBKey2_next(nullptr);
        info::_EMBELLKEYCovDBKey2_clbk _EMBELLKEYCovDBKey2_user(nullptr);
        info::_EMBELLKEYIsFilled4_ptr _EMBELLKEYIsFilled4_next(nullptr);
        info::_EMBELLKEYIsFilled4_clbk _EMBELLKEYIsFilled4_user(nullptr);
        info::_EMBELLKEYLoadDBKey6_ptr _EMBELLKEYLoadDBKey6_next(nullptr);
        info::_EMBELLKEYLoadDBKey6_clbk _EMBELLKEYLoadDBKey6_user(nullptr);
        info::_EMBELLKEYSetRelease8_ptr _EMBELLKEYSetRelease8_next(nullptr);
        info::_EMBELLKEYSetRelease8_clbk _EMBELLKEYSetRelease8_user(nullptr);
        
        int _EMBELLKEYCovDBKey2_wrapper(struct _EMBELLKEY* _this)
        {
           return _EMBELLKEYCovDBKey2_user(_this, _EMBELLKEYCovDBKey2_next);
        };
        bool _EMBELLKEYIsFilled4_wrapper(struct _EMBELLKEY* _this)
        {
           return _EMBELLKEYIsFilled4_user(_this, _EMBELLKEYIsFilled4_next);
        };
        void _EMBELLKEYLoadDBKey6_wrapper(struct _EMBELLKEY* _this, int pl_nKey)
        {
           _EMBELLKEYLoadDBKey6_user(_this, pl_nKey, _EMBELLKEYLoadDBKey6_next);
        };
        void _EMBELLKEYSetRelease8_wrapper(struct _EMBELLKEY* _this)
        {
           _EMBELLKEYSetRelease8_user(_this, _EMBELLKEYSetRelease8_next);
        };
        
        hook_record _EMBELLKEY_functions[] = {
        {   (LPVOID)0x1401bf2a0L,
            (LPVOID *)&_EMBELLKEYCovDBKey2_user,
            (LPVOID *)&_EMBELLKEYCovDBKey2_next,
            (LPVOID)cast_pointer_function(_EMBELLKEYCovDBKey2_wrapper),
            (LPVOID)cast_pointer_function((int(_EMBELLKEY::*)())&_EMBELLKEY::CovDBKey) },
        {   (LPVOID)0x14010e320L,
            (LPVOID *)&_EMBELLKEYIsFilled4_user,
            (LPVOID *)&_EMBELLKEYIsFilled4_next,
            (LPVOID)cast_pointer_function(_EMBELLKEYIsFilled4_wrapper),
            (LPVOID)cast_pointer_function((bool(_EMBELLKEY::*)())&_EMBELLKEY::IsFilled) },
        {   (LPVOID)0x1401bf0d0L,
            (LPVOID *)&_EMBELLKEYLoadDBKey6_user,
            (LPVOID *)&_EMBELLKEYLoadDBKey6_next,
            (LPVOID)cast_pointer_function(_EMBELLKEYLoadDBKey6_wrapper),
            (LPVOID)cast_pointer_function((void(_EMBELLKEY::*)(int))&_EMBELLKEY::LoadDBKey) },
        {   (LPVOID)0x140075b70L,
            (LPVOID *)&_EMBELLKEYSetRelease8_user,
            (LPVOID *)&_EMBELLKEYSetRelease8_next,
            (LPVOID)cast_pointer_function(_EMBELLKEYSetRelease8_wrapper),
            (LPVOID)cast_pointer_function((void(_EMBELLKEY::*)())&_EMBELLKEY::SetRelease) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE