// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPlayer.hpp"
#include "_ContPotionData.hpp"


START_ATF_NAMESPACE
    struct CPotionParam
    {
        _ContPotionData m_ContCommonPotionData[2];
        _ContPotionData m_StoneOfMovePotionData;
        unsigned int m_dwNextUseTime[38];
        CPlayer *m_pMaster;
    public:
        CPotionParam()
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*);
            (org_ptr(0x1400729f0L))(this);
        };
        void ctor_CPotionParam()
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*);
            (org_ptr(0x1400729f0L))(this);
        };
        void Init(struct CPlayer* pMaster)
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*, struct CPlayer*);
            (org_ptr(0x140078c90L))(this, pMaster);
        };
        bool IsUsableActDelay(char byPotionClass, unsigned int dwCurrTime)
        {
            using org_ptr = bool (WINAPIV*)(struct CPotionParam*, char, unsigned int);
            return (org_ptr(0x1403a1030L))(this, byPotionClass, dwCurrTime);
        };
        void SetPotionActDelay(char byPotionClass, unsigned int dwCurrTime, unsigned int dwActDelay)
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*, char, unsigned int, unsigned int);
            (org_ptr(0x1400750b0L))(this, byPotionClass, dwCurrTime, dwActDelay);
        };
        ~CPotionParam()
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*);
            (org_ptr(0x140072b30L))(this);
        };
        void dtor_CPotionParam()
        {
            using org_ptr = void (WINAPIV*)(struct CPotionParam*);
            (org_ptr(0x140072b30L))(this);
        };
    };
END_ATF_NAMESPACE