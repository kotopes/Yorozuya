#include <GUILD_BATTLE__CNormalGuildBattleStateInBattleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Detail
        {
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_user(nullptr);
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_user(nullptr);
            
            
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_ptr GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_next(nullptr);
            Info::GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_clbk GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_user(nullptr);
            
            bool GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_user(_this, GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_user(_this, GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this, struct GUILD_BATTLE::CNormalGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_next);
            };
            struct ATL::CTimeSpan* GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this, struct ATL::CTimeSpan* result)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_user(_this, result, GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_user(_this, GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_next);
            };
            int GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this, struct GUILD_BATTLE::CGuildBattle* pkBattle)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_user(_this, pkBattle, GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_next);
            };
            void GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this, struct ATL::CTimeSpan kTime)
            {
               GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_user(_this, kTime, GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_next);
            };
            bool GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this)
            {
               return GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_user(_this, GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_next);
            };
            
            void GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_wrapper(struct GUILD_BATTLE::CNormalGuildBattleStateInBattle* _this)
            {
               GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_user(_this, GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_next);
            };
            
            ::std::array<hook_record, 10> CNormalGuildBattleStateInBattle_functions = 
            {
                _hook_record {
                    (LPVOID)0x1403eb290L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleAdvanceRegenState2_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)())&GUILD_BATTLE::CNormalGuildBattleStateInBattle::AdvanceRegenState)
                },
                _hook_record {
                    (LPVOID)0x1403f0950L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattlector_CNormalGuildBattleStateInBattle4_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)())&GUILD_BATTLE::CNormalGuildBattleStateInBattle::ctor_CNormalGuildBattleStateInBattle)
                },
                _hook_record {
                    (LPVOID)0x1403f0a00L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleEnter6_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateInBattle::Enter)
                },
                _hook_record {
                    (LPVOID)0x1403f0b50L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleFin8_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)(struct GUILD_BATTLE::CNormalGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateInBattle::Fin)
                },
                _hook_record {
                    (LPVOID)0x1400800d0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleGetTerm10_wrapper),
                    (LPVOID)cast_pointer_function((struct ATL::CTimeSpan*(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)(struct ATL::CTimeSpan*))&GUILD_BATTLE::CNormalGuildBattleStateInBattle::GetTerm)
                },
                _hook_record {
                    (LPVOID)0x1403d9570L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleIsInBattleRegenState12_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)())&GUILD_BATTLE::CNormalGuildBattleStateInBattle::IsInBattleRegenState)
                },
                _hook_record {
                    (LPVOID)0x140080070L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleLoop14_wrapper),
                    (LPVOID)cast_pointer_function((int(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)(struct GUILD_BATTLE::CGuildBattle*))&GUILD_BATTLE::CNormalGuildBattleStateInBattle::Loop)
                },
                _hook_record {
                    (LPVOID)0x1403d90d0L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleSetBattleTime16_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)(struct ATL::CTimeSpan))&GUILD_BATTLE::CNormalGuildBattleStateInBattle::SetBattleTime)
                },
                _hook_record {
                    (LPVOID)0x1403f3300L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattleSetGotoRegenState18_wrapper),
                    (LPVOID)cast_pointer_function((bool(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)())&GUILD_BATTLE::CNormalGuildBattleStateInBattle::SetGotoRegenState)
                },
                _hook_record {
                    (LPVOID)0x14007fe30L,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_user,
                    (LPVOID *)&GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_next,
                    (LPVOID)cast_pointer_function(GUILD_BATTLE__CNormalGuildBattleStateInBattledtor_CNormalGuildBattleStateInBattle20_wrapper),
                    (LPVOID)cast_pointer_function((void(GUILD_BATTLE::CNormalGuildBattleStateInBattle::*)())&GUILD_BATTLE::CNormalGuildBattleStateInBattle::dtor_CNormalGuildBattleStateInBattle)
                },
            };
        }; // end namespace Detail
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
