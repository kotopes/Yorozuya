#include <CFPSDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CFPSctor_CFPS2_ptr CFPSctor_CFPS2_next(nullptr);
        Info::CFPSctor_CFPS2_clbk CFPSctor_CFPS2_user(nullptr);
        
        Info::CFPSCalcFPS4_ptr CFPSCalcFPS4_next(nullptr);
        Info::CFPSCalcFPS4_clbk CFPSCalcFPS4_user(nullptr);
        
        Info::CFPSGetFPS6_ptr CFPSGetFPS6_next(nullptr);
        Info::CFPSGetFPS6_clbk CFPSGetFPS6_user(nullptr);
        
        
        Info::CFPSdtor_CFPS11_ptr CFPSdtor_CFPS11_next(nullptr);
        Info::CFPSdtor_CFPS11_clbk CFPSdtor_CFPS11_user(nullptr);
        
        
        void CFPSctor_CFPS2_wrapper(struct CFPS* _this)
        {
           CFPSctor_CFPS2_user(_this, CFPSctor_CFPS2_next);
        };
        void CFPSCalcFPS4_wrapper(struct CFPS* _this)
        {
           CFPSCalcFPS4_user(_this, CFPSCalcFPS4_next);
        };
        unsigned int CFPSGetFPS6_wrapper(struct CFPS* _this)
        {
           return CFPSGetFPS6_user(_this, CFPSGetFPS6_next);
        };
        
        void CFPSdtor_CFPS11_wrapper(struct CFPS* _this)
        {
           CFPSdtor_CFPS11_user(_this, CFPSdtor_CFPS11_next);
        };
        
        ::std::array<hook_record, 4> CFPS_functions = 
        {
            _hook_record {
                (LPVOID)0x140438f50L,
                (LPVOID *)&CFPSctor_CFPS2_user,
                (LPVOID *)&CFPSctor_CFPS2_next,
                (LPVOID)cast_pointer_function(CFPSctor_CFPS2_wrapper),
                (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::ctor_CFPS)
            },
            _hook_record {
                (LPVOID)0x140438fc0L,
                (LPVOID *)&CFPSCalcFPS4_user,
                (LPVOID *)&CFPSCalcFPS4_next,
                (LPVOID)cast_pointer_function(CFPSCalcFPS4_wrapper),
                (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::CalcFPS)
            },
            _hook_record {
                (LPVOID)0x140439080L,
                (LPVOID *)&CFPSGetFPS6_user,
                (LPVOID *)&CFPSGetFPS6_next,
                (LPVOID)cast_pointer_function(CFPSGetFPS6_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CFPS::*)())&CFPS::GetFPS)
            },
            _hook_record {
                (LPVOID)0x14043a880L,
                (LPVOID *)&CFPSdtor_CFPS11_user,
                (LPVOID *)&CFPSdtor_CFPS11_next,
                (LPVOID)cast_pointer_function(CFPSdtor_CFPS11_wrapper),
                (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::dtor_CFPS)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
