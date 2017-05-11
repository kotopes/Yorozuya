// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CRecordData.hpp"
#include "_monster_sp_group.hpp"


START_ATF_NAMESPACE
    struct CMonsterSPGroupTable
    {
        unsigned int m_dwRecordNum;
        _monster_sp_group *m_pRecordData;
    public:
        CMonsterSPGroupTable()
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
            (org_ptr(0x140202470L))(this);
        };
        void ctor_CMonsterSPGroupTable()
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
            (org_ptr(0x140202470L))(this);
        };
        bool Create(struct CRecordData* pMonsterRecordData, struct CRecordData* pMonsterSPRecordData, struct CRecordData* pSkillRecordData, struct CRecordData* pForceRecordData, struct CRecordData* pClassSkillRecordData)
        {
            using org_ptr = bool (WINAPIV*)(struct CMonsterSPGroupTable*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*);
            return (org_ptr(0x14015eac0L))(this, pMonsterRecordData, pMonsterSPRecordData, pSkillRecordData, pForceRecordData, pClassSkillRecordData);
        };
        struct _monster_sp_group* GetRecord(char* szCode)
        {
            using org_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, char*);
            return (org_ptr(0x14015ee60L))(this, szCode);
        };
        struct _monster_sp_group* GetRecord(unsigned int dwIndex)
        {
            using org_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, unsigned int);
            return (org_ptr(0x14015ef00L))(this, dwIndex);
        };
        ~CMonsterSPGroupTable()
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
            (org_ptr(0x14015ea60L))(this);
        };
        void dtor_CMonsterSPGroupTable()
        {
            using org_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
            (org_ptr(0x14015ea60L))(this);
        };
    };
END_ATF_NAMESPACE