#include "stdafx.h"

#include "Player.h"
#include "ETypes.h"
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Fixes
    {
        void CPlayer::load()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::CalcPvP, &CPlayer::CalcPvP);
            core.set_hook(&ATF::CPlayer::CalPvpTempCash, &CPlayer::CalPvpTempCash);
            core.set_hook(&ATF::CPlayer::pc_MakeTrapRequest, &CPlayer::pc_MakeTrapRequest);
            core.set_hook(&ATF::CPlayer::pc_MakeTowerRequest, &CPlayer::pc_MakeTowerRequest);
        }

        void CPlayer::unload()
        {
            auto& core = ATF::CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::CalcPvP);
            core.unset_hook(&ATF::CPlayer::CalPvpTempCash);
            core.unset_hook(&ATF::CPlayer::pc_MakeTrapRequest);
            core.unset_hook(&ATF::CPlayer::pc_MakeTowerRequest);
        }

        void CPlayer::loop()
        {
        }

        ModuleVersion_t CPlayer::get_version()
        {
            return ATF::usVersion;
        }

        ModuleName_t CPlayer::get_name()
        {
            static const ModuleName_t name = "fix_player";
            return name;
        }

        void CPlayer::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        void WINAPIV CPlayer::CalcPvP(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalcPvP74_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::CalPvpTempCash(
            ATF::CPlayer * pObj, 
            ATF::CPlayer * pDier, 
            char byKillerObjID,
            ATF::info::CPlayerCalPvpTempCash52_ptr next)
        {
            if (pObj->m_Param.GetRaceCode() == pDier->m_Param.GetRaceCode())
            {
                return;
            }

            next(pObj, pDier, byKillerObjID);
        }

        void WINAPIV CPlayer::pc_MakeTrapRequest(
            ATF::CPlayer * pObj,
            uint16_t wSkillIndex,
            uint16_t wTrapItemSerial,
            float * pfPos,
            uint16_t * pConsumeSerial,
            ATF::info::CPlayerpc_MakeTrapRequest1783_ptr next)
        {
            do
            {
                if (pObj->m_bMapLoading)
                    break;

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTrapItemSerial);
                if (!pTrapItem)
                    break;

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_trap)
                    break;

                auto& tblItemData = ATF::global::g_MainThread->m_tblItemData[pTrapItem->m_byTableCode];
                ATF::_TrapItem_fld* pTrapFld = (ATF::_TrapItem_fld*)tblItemData.GetRecord(pTrapItem->m_wItemIndex);
                if (!pTrapFld)
                    break;

                if (pObj->GetLevel() > pTrapFld->m_nUpLevelLim)
                    break;

                if (pObj->GetLevel() < pTrapFld->m_nLevelLim)
                    break;

                next(pObj, wSkillIndex, wTrapItemSerial, pfPos, pConsumeSerial);
            } while (false);
        }

        void WINAPIV CPlayer::pc_MakeTowerRequest(
            ATF::CPlayer * pObj, 
            uint16_t wSkillIndex, 
            uint16_t wTowerItemSerial, 
            char byMaterialNum, 
            ATF::_make_tower_request_clzo::__material * pMaterial, 
            float * pfPos, 
            uint16_t * pConsumeSerial,
            ATF::info::CPlayerpc_MakeTowerRequest1781_ptr next)
        {
            do
            {
                if (pObj->m_bMapLoading)
                    break;

                auto pTrapItem = pObj->m_Param.m_dbInven.GetPtrFromSerial(wTowerItemSerial);
                if (!pTrapItem)
                    break;

                if (pTrapItem->m_byTableCode != (BYTE)e_code_item_table::tbl_code_tower)
                    break;

                auto& tblItemData = ATF::global::g_MainThread->m_tblItemData[pTrapItem->m_byTableCode];
                ATF::_GuardTowerItem_fld* pTowerFld = (ATF::_GuardTowerItem_fld*)tblItemData.GetRecord(pTrapItem->m_wItemIndex);
                if (!pTowerFld)
                    break;

                if (pObj->GetLevel() > pTowerFld->m_nUpLevelLim)
                    break;

                if (pObj->GetLevel() < pTowerFld->m_nLevelLim)
                    break;

                next(pObj, wSkillIndex, wTowerItemSerial, byMaterialNum, pMaterial, pfPos, pConsumeSerial);
            } while (false);
        }
    }
}