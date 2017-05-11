// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAttack.hpp"
#include "CCharacter.hpp"
#include "CPlayer.hpp"
#include "_attack_param.hpp"


START_ATF_NAMESPACE
    struct  CPlayerAttack : CAttack
    {
        CPlayer *m_pAttPlayer;
    public:
        void AttackSkill(struct _attack_param* pParam, bool bUseEffBullet)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*, bool);
            (org_ptr(0x14016e140L))(this, pParam, bUseEffBullet);
        };
        void AttackUnit(struct _attack_param* pParam)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
            (org_ptr(0x14016f330L))(this, pParam);
        };
        CPlayerAttack(struct CCharacter* pThis)
			: CAttack(pThis)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct CCharacter*);
            (org_ptr(0x14008ebf0L))(this, pThis);
        };
        void ctor_CPlayerAttack(struct CCharacter* pThis)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct CCharacter*);
            (org_ptr(0x14008ebf0L))(this, pThis);
        };
        void WPActiveAttackForce(struct _attack_param* pParam)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
            (org_ptr(0x14016fd90L))(this, pParam);
        };
        void WPActiveAttackSkill(struct _attack_param* pParam)
        {
            using org_ptr = void (WINAPIV*)(struct CPlayerAttack*, struct _attack_param*);
            (org_ptr(0x1401700f0L))(this, pParam);
        };
        int _CalcSkillAttPnt(bool bUseEffBullet)
        {
            using org_ptr = int (WINAPIV*)(struct CPlayerAttack*, bool);
            return (org_ptr(0x14016ec00L))(this, bUseEffBullet);
        };
    };
END_ATF_NAMESPACE