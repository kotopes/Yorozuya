// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRect.hpp>
#include <CSize.hpp>
#include <tagPOINT.hpp>
#include <tagRECT.hpp>
#include <tagSIZE.hpp>


START_ATF_NAMESPACE
    struct  CPoint : tagPOINT
    {
    public:
        CPoint(int64_t dwPoint);
        void ctor_CPoint(int64_t dwPoint);
        CPoint(int initX, int initY);
        void ctor_CPoint(int initX, int initY);
        CPoint(struct tagPOINT initPt);
        void ctor_CPoint(struct tagPOINT initPt);
        CPoint(struct tagSIZE initSize);
        void ctor_CPoint(struct tagSIZE initSize);
        CPoint();
        void ctor_CPoint();
        void Offset(int xOffset, int yOffset);
        void Offset(struct tagPOINT point);
        void Offset(struct tagSIZE size);
        void SetPoint(int X, int Y);
    };    
    static_assert(ATF::checkSize<CPoint, 8>(), "CPoint");
END_ATF_NAMESPACE
