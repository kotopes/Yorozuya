// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _event_respawn
    {
        struct _mon
        {
            struct _base_fld *pMonsterFld;
            unsigned __int16 wNum;
        };
        struct _option
        {
            bool bKillAfterStop;
            bool bExpPenalty;
            bool bExpReward;
            bool bItemLoot;
        };
        struct _reward_item
        {
            char byItemTableCode;
            struct _base_fld *pItemFld;
            struct _monster_fld *pDstMonFld;
            int nProb;
        };
        struct _state
        {
            struct _mon
            {
                struct CMonster *pMon;
                unsigned int dwSerial;
                struct _base_fld *pMonFld;
            };
            unsigned int dwLastUpdateTime;
            int nRespawnNum;
            _mon MonInfo[640];
        public:
            _state();
            void ctor__state();
            void init();
        };
        bool bLoad;
        unsigned __int16 wMonSetNum;
        _mon MonSet[16];
        struct CMapData *pMap;
        float fPos[3];
        unsigned int dwTermMSec;
        _option Option;
        int nUseRewardItemNum;
        _reward_item RewardItem[128];
        char szScriptName[64];
        bool bActive;
        _state State;
    public:
        _event_respawn();
        void ctor__event_respawn();
    };    
    static_assert(ATF::checkSize<_event_respawn, 19832>(), "_event_respawn");
END_ATF_NAMESPACE
