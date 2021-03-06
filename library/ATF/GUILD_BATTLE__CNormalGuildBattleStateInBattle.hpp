// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CTimeSpan.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleState.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateRoundList.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattleStateInBattle : CNormalGuildBattleState
        {
            ATL::CTimeSpan m_kInBattleTime;
            CNormalGuildBattleStateRoundList m_kRountStateList;
        public:
            bool AdvanceRegenState();
            CNormalGuildBattleStateInBattle();
            void ctor_CNormalGuildBattleStateInBattle();
            int Enter(struct CNormalGuildBattle* pkBattle);
            int Fin(struct CNormalGuildBattle* pkBattle);
            struct ATL::CTimeSpan* GetTerm(struct ATL::CTimeSpan* result);
            bool IsInBattleRegenState();
            int Loop(struct CGuildBattle* pkBattle);
            void SetBattleTime(struct ATL::CTimeSpan kTime);
            bool SetGotoRegenState();
            ~CNormalGuildBattleStateInBattle();
            void dtor_CNormalGuildBattleStateInBattle();
        };    
        static_assert(ATF::checkSize<GUILD_BATTLE::CNormalGuildBattleStateInBattle, 144>(), "GUILD_BATTLE::CNormalGuildBattleStateInBattle");
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
