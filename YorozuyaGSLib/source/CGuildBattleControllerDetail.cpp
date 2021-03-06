#include <CGuildBattleControllerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CGuildBattleControllerAdd2_ptr CGuildBattleControllerAdd2_next(nullptr);
        Info::CGuildBattleControllerAdd2_clbk CGuildBattleControllerAdd2_user(nullptr);
        
        Info::CGuildBattleControllerAdd4_ptr CGuildBattleControllerAdd4_next(nullptr);
        Info::CGuildBattleControllerAdd4_clbk CGuildBattleControllerAdd4_user(nullptr);
        
        Info::CGuildBattleControllerAddComplete6_ptr CGuildBattleControllerAddComplete6_next(nullptr);
        Info::CGuildBattleControllerAddComplete6_clbk CGuildBattleControllerAddComplete6_user(nullptr);
        
        Info::CGuildBattleControllerAddSchedule8_ptr CGuildBattleControllerAddSchedule8_next(nullptr);
        Info::CGuildBattleControllerAddSchedule8_clbk CGuildBattleControllerAddSchedule8_user(nullptr);
        
        
        Info::CGuildBattleControllerctor_CGuildBattleController10_ptr CGuildBattleControllerctor_CGuildBattleController10_next(nullptr);
        Info::CGuildBattleControllerctor_CGuildBattleController10_clbk CGuildBattleControllerctor_CGuildBattleController10_user(nullptr);
        
        Info::CGuildBattleControllerCheatCreateFieldObject12_ptr CGuildBattleControllerCheatCreateFieldObject12_next(nullptr);
        Info::CGuildBattleControllerCheatCreateFieldObject12_clbk CGuildBattleControllerCheatCreateFieldObject12_user(nullptr);
        
        Info::CGuildBattleControllerCheatDestroyFieldObject14_ptr CGuildBattleControllerCheatDestroyFieldObject14_next(nullptr);
        Info::CGuildBattleControllerCheatDestroyFieldObject14_clbk CGuildBattleControllerCheatDestroyFieldObject14_user(nullptr);
        
        Info::CGuildBattleControllerCheatDestroyStone16_ptr CGuildBattleControllerCheatDestroyStone16_next(nullptr);
        Info::CGuildBattleControllerCheatDestroyStone16_clbk CGuildBattleControllerCheatDestroyStone16_user(nullptr);
        
        Info::CGuildBattleControllerCheatDropStone18_ptr CGuildBattleControllerCheatDropStone18_next(nullptr);
        Info::CGuildBattleControllerCheatDropStone18_clbk CGuildBattleControllerCheatDropStone18_user(nullptr);
        
        Info::CGuildBattleControllerCheatForceTakeStone20_ptr CGuildBattleControllerCheatForceTakeStone20_next(nullptr);
        Info::CGuildBattleControllerCheatForceTakeStone20_clbk CGuildBattleControllerCheatForceTakeStone20_user(nullptr);
        
        Info::CGuildBattleControllerCheatGetStone22_ptr CGuildBattleControllerCheatGetStone22_next(nullptr);
        Info::CGuildBattleControllerCheatGetStone22_clbk CGuildBattleControllerCheatGetStone22_user(nullptr);
        
        Info::CGuildBattleControllerCheatRegenStone24_ptr CGuildBattleControllerCheatRegenStone24_next(nullptr);
        Info::CGuildBattleControllerCheatRegenStone24_clbk CGuildBattleControllerCheatRegenStone24_user(nullptr);
        
        Info::CGuildBattleControllerCheatTakeStone26_ptr CGuildBattleControllerCheatTakeStone26_next(nullptr);
        Info::CGuildBattleControllerCheatTakeStone26_clbk CGuildBattleControllerCheatTakeStone26_user(nullptr);
        
        Info::CGuildBattleControllerCheckGetGravityStone28_ptr CGuildBattleControllerCheckGetGravityStone28_next(nullptr);
        Info::CGuildBattleControllerCheckGetGravityStone28_clbk CGuildBattleControllerCheckGetGravityStone28_user(nullptr);
        
        Info::CGuildBattleControllerCheckGoal30_ptr CGuildBattleControllerCheckGoal30_next(nullptr);
        Info::CGuildBattleControllerCheckGoal30_clbk CGuildBattleControllerCheckGoal30_user(nullptr);
        
        Info::CGuildBattleControllerCheckTakeGravityStone32_ptr CGuildBattleControllerCheckTakeGravityStone32_next(nullptr);
        Info::CGuildBattleControllerCheckTakeGravityStone32_clbk CGuildBattleControllerCheckTakeGravityStone32_user(nullptr);
        
        Info::CGuildBattleControllerCleanUp34_ptr CGuildBattleControllerCleanUp34_next(nullptr);
        Info::CGuildBattleControllerCleanUp34_clbk CGuildBattleControllerCleanUp34_user(nullptr);
        
        Info::CGuildBattleControllerClear36_ptr CGuildBattleControllerClear36_next(nullptr);
        Info::CGuildBattleControllerClear36_clbk CGuildBattleControllerClear36_user(nullptr);
        
        Info::CGuildBattleControllerCompleteClearGuildBattleRank38_ptr CGuildBattleControllerCompleteClearGuildBattleRank38_next(nullptr);
        Info::CGuildBattleControllerCompleteClearGuildBattleRank38_clbk CGuildBattleControllerCompleteClearGuildBattleRank38_user(nullptr);
        
        Info::CGuildBattleControllerCompleteCreateGuildBattleRankTable40_ptr CGuildBattleControllerCompleteCreateGuildBattleRankTable40_next(nullptr);
        Info::CGuildBattleControllerCompleteCreateGuildBattleRankTable40_clbk CGuildBattleControllerCompleteCreateGuildBattleRankTable40_user(nullptr);
        
        Info::CGuildBattleControllerCompleteUpdateRank42_ptr CGuildBattleControllerCompleteUpdateRank42_next(nullptr);
        Info::CGuildBattleControllerCompleteUpdateRank42_clbk CGuildBattleControllerCompleteUpdateRank42_user(nullptr);
        
        Info::CGuildBattleControllerCompleteUpdateReservedSchedule44_ptr CGuildBattleControllerCompleteUpdateReservedSchedule44_next(nullptr);
        Info::CGuildBattleControllerCompleteUpdateReservedSchedule44_clbk CGuildBattleControllerCompleteUpdateReservedSchedule44_user(nullptr);
        
        Info::CGuildBattleControllerDestroy46_ptr CGuildBattleControllerDestroy46_next(nullptr);
        Info::CGuildBattleControllerDestroy46_clbk CGuildBattleControllerDestroy46_user(nullptr);
        
        Info::CGuildBattleControllerDropGravityStone48_ptr CGuildBattleControllerDropGravityStone48_next(nullptr);
        Info::CGuildBattleControllerDropGravityStone48_clbk CGuildBattleControllerDropGravityStone48_user(nullptr);
        
        Info::CGuildBattleControllerFlip50_ptr CGuildBattleControllerFlip50_next(nullptr);
        Info::CGuildBattleControllerFlip50_clbk CGuildBattleControllerFlip50_user(nullptr);
        
        Info::CGuildBattleControllerGetCircleZone52_ptr CGuildBattleControllerGetCircleZone52_next(nullptr);
        Info::CGuildBattleControllerGetCircleZone52_clbk CGuildBattleControllerGetCircleZone52_user(nullptr);
        
        Info::CGuildBattleControllerGetRegener54_ptr CGuildBattleControllerGetRegener54_next(nullptr);
        Info::CGuildBattleControllerGetRegener54_clbk CGuildBattleControllerGetRegener54_user(nullptr);
        
        Info::CGuildBattleControllerGetStone56_ptr CGuildBattleControllerGetStone56_next(nullptr);
        Info::CGuildBattleControllerGetStone56_clbk CGuildBattleControllerGetStone56_user(nullptr);
        
        Info::CGuildBattleControllerInit58_ptr CGuildBattleControllerInit58_next(nullptr);
        Info::CGuildBattleControllerInit58_clbk CGuildBattleControllerInit58_user(nullptr);
        
        Info::CGuildBattleControllerInstance60_ptr CGuildBattleControllerInstance60_next(nullptr);
        Info::CGuildBattleControllerInstance60_clbk CGuildBattleControllerInstance60_user(nullptr);
        
        Info::CGuildBattleControllerIsAvailableSuggest62_ptr CGuildBattleControllerIsAvailableSuggest62_next(nullptr);
        Info::CGuildBattleControllerIsAvailableSuggest62_clbk CGuildBattleControllerIsAvailableSuggest62_user(nullptr);
        
        Info::CGuildBattleControllerJoin64_ptr CGuildBattleControllerJoin64_next(nullptr);
        Info::CGuildBattleControllerJoin64_clbk CGuildBattleControllerJoin64_user(nullptr);
        
        Info::CGuildBattleControllerJoinGuild66_ptr CGuildBattleControllerJoinGuild66_next(nullptr);
        Info::CGuildBattleControllerJoinGuild66_clbk CGuildBattleControllerJoinGuild66_user(nullptr);
        
        Info::CGuildBattleControllerKill68_ptr CGuildBattleControllerKill68_next(nullptr);
        Info::CGuildBattleControllerKill68_clbk CGuildBattleControllerKill68_user(nullptr);
        
        Info::CGuildBattleControllerLeaveGuild70_ptr CGuildBattleControllerLeaveGuild70_next(nullptr);
        Info::CGuildBattleControllerLeaveGuild70_clbk CGuildBattleControllerLeaveGuild70_user(nullptr);
        
        Info::CGuildBattleControllerLoad72_ptr CGuildBattleControllerLoad72_next(nullptr);
        Info::CGuildBattleControllerLoad72_clbk CGuildBattleControllerLoad72_user(nullptr);
        
        Info::CGuildBattleControllerLoadINI74_ptr CGuildBattleControllerLoadINI74_next(nullptr);
        Info::CGuildBattleControllerLoadINI74_clbk CGuildBattleControllerLoadINI74_user(nullptr);
        
        Info::CGuildBattleControllerLogIn76_ptr CGuildBattleControllerLogIn76_next(nullptr);
        Info::CGuildBattleControllerLogIn76_clbk CGuildBattleControllerLogIn76_user(nullptr);
        
        Info::CGuildBattleControllerLoop78_ptr CGuildBattleControllerLoop78_next(nullptr);
        Info::CGuildBattleControllerLoop78_clbk CGuildBattleControllerLoop78_user(nullptr);
        
        Info::CGuildBattleControllerNetClose80_ptr CGuildBattleControllerNetClose80_next(nullptr);
        Info::CGuildBattleControllerNetClose80_clbk CGuildBattleControllerNetClose80_user(nullptr);
        
        Info::CGuildBattleControllerPushClearGuildBattleRank82_ptr CGuildBattleControllerPushClearGuildBattleRank82_next(nullptr);
        Info::CGuildBattleControllerPushClearGuildBattleRank82_clbk CGuildBattleControllerPushClearGuildBattleRank82_user(nullptr);
        
        Info::CGuildBattleControllerPushCreateGuildBattleRankTable84_ptr CGuildBattleControllerPushCreateGuildBattleRankTable84_next(nullptr);
        Info::CGuildBattleControllerPushCreateGuildBattleRankTable84_clbk CGuildBattleControllerPushCreateGuildBattleRankTable84_user(nullptr);
        
        Info::CGuildBattleControllerSaveINI86_ptr CGuildBattleControllerSaveINI86_next(nullptr);
        Info::CGuildBattleControllerSaveINI86_clbk CGuildBattleControllerSaveINI86_user(nullptr);
        
        Info::CGuildBattleControllerSendCurrentBattleInfoRequest88_ptr CGuildBattleControllerSendCurrentBattleInfoRequest88_next(nullptr);
        Info::CGuildBattleControllerSendCurrentBattleInfoRequest88_clbk CGuildBattleControllerSendCurrentBattleInfoRequest88_user(nullptr);
        
        Info::CGuildBattleControllerSendPossibleBattleGuildList90_ptr CGuildBattleControllerSendPossibleBattleGuildList90_next(nullptr);
        Info::CGuildBattleControllerSendPossibleBattleGuildList90_clbk CGuildBattleControllerSendPossibleBattleGuildList90_user(nullptr);
        
        Info::CGuildBattleControllerSendPossibleBattleGuildListFirst92_ptr CGuildBattleControllerSendPossibleBattleGuildListFirst92_next(nullptr);
        Info::CGuildBattleControllerSendPossibleBattleGuildListFirst92_clbk CGuildBattleControllerSendPossibleBattleGuildListFirst92_user(nullptr);
        
        Info::CGuildBattleControllerSendRankList94_ptr CGuildBattleControllerSendRankList94_next(nullptr);
        Info::CGuildBattleControllerSendRankList94_clbk CGuildBattleControllerSendRankList94_user(nullptr);
        
        Info::CGuildBattleControllerSendReservedScheduleList96_ptr CGuildBattleControllerSendReservedScheduleList96_next(nullptr);
        Info::CGuildBattleControllerSendReservedScheduleList96_clbk CGuildBattleControllerSendReservedScheduleList96_user(nullptr);
        
        Info::CGuildBattleControllerStart98_ptr CGuildBattleControllerStart98_next(nullptr);
        Info::CGuildBattleControllerStart98_clbk CGuildBattleControllerStart98_user(nullptr);
        
        Info::CGuildBattleControllerUpdateClearRerservedDayInfo100_ptr CGuildBattleControllerUpdateClearRerservedDayInfo100_next(nullptr);
        Info::CGuildBattleControllerUpdateClearRerservedDayInfo100_clbk CGuildBattleControllerUpdateClearRerservedDayInfo100_user(nullptr);
        
        Info::CGuildBattleControllerUpdateDraw102_ptr CGuildBattleControllerUpdateDraw102_next(nullptr);
        Info::CGuildBattleControllerUpdateDraw102_clbk CGuildBattleControllerUpdateDraw102_user(nullptr);
        
        Info::CGuildBattleControllerUpdatePossibleBattleGuildList104_ptr CGuildBattleControllerUpdatePossibleBattleGuildList104_next(nullptr);
        Info::CGuildBattleControllerUpdatePossibleBattleGuildList104_clbk CGuildBattleControllerUpdatePossibleBattleGuildList104_user(nullptr);
        
        Info::CGuildBattleControllerUpdateRank106_ptr CGuildBattleControllerUpdateRank106_next(nullptr);
        Info::CGuildBattleControllerUpdateRank106_clbk CGuildBattleControllerUpdateRank106_user(nullptr);
        
        Info::CGuildBattleControllerUpdateReservedGuildBattleSchedule108_ptr CGuildBattleControllerUpdateReservedGuildBattleSchedule108_next(nullptr);
        Info::CGuildBattleControllerUpdateReservedGuildBattleSchedule108_clbk CGuildBattleControllerUpdateReservedGuildBattleSchedule108_user(nullptr);
        
        Info::CGuildBattleControllerUpdateWinLose110_ptr CGuildBattleControllerUpdateWinLose110_next(nullptr);
        Info::CGuildBattleControllerUpdateWinLose110_clbk CGuildBattleControllerUpdateWinLose110_user(nullptr);
        
        
        Info::CGuildBattleControllerdtor_CGuildBattleController114_ptr CGuildBattleControllerdtor_CGuildBattleController114_next(nullptr);
        Info::CGuildBattleControllerdtor_CGuildBattleController114_clbk CGuildBattleControllerdtor_CGuildBattleController114_user(nullptr);
        
        char CGuildBattleControllerAdd2_wrapper(struct CGuildBattleController* _this, struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, char byNumber, unsigned int dwMapInx)
        {
           return CGuildBattleControllerAdd2_user(_this, pSrcGuild, pDestGuild, dwStartTime, byNumber, dwMapInx, CGuildBattleControllerAdd2_next);
        };
        char CGuildBattleControllerAdd4_wrapper(struct CGuildBattleController* _this, struct CGuild* pSrcGuild, struct CGuild* pDestGuild, unsigned int dwStartTime, unsigned int dwElapseTimeCnt, char byNumber, unsigned int dwMapInx)
        {
           return CGuildBattleControllerAdd4_user(_this, pSrcGuild, pDestGuild, dwStartTime, dwElapseTimeCnt, byNumber, dwMapInx, CGuildBattleControllerAdd4_next);
        };
        void CGuildBattleControllerAddComplete6_wrapper(struct CGuildBattleController* _this, char byResult, unsigned int uiMapID, unsigned int dwID, unsigned int dwSLID)
        {
           CGuildBattleControllerAddComplete6_user(_this, byResult, uiMapID, dwID, dwSLID, CGuildBattleControllerAddComplete6_next);
        };
        char CGuildBattleControllerAddSchedule8_wrapper(struct CGuildBattleController* _this, char* szData)
        {
           return CGuildBattleControllerAddSchedule8_user(_this, szData, CGuildBattleControllerAddSchedule8_next);
        };
        
        void CGuildBattleControllerctor_CGuildBattleController10_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerctor_CGuildBattleController10_user(_this, CGuildBattleControllerctor_CGuildBattleController10_next);
        };
        bool CGuildBattleControllerCheatCreateFieldObject12_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatCreateFieldObject12_user(_this, pkPlayer, CGuildBattleControllerCheatCreateFieldObject12_next);
        };
        bool CGuildBattleControllerCheatDestroyFieldObject14_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatDestroyFieldObject14_user(_this, pkPlayer, CGuildBattleControllerCheatDestroyFieldObject14_next);
        };
        bool CGuildBattleControllerCheatDestroyStone16_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatDestroyStone16_user(_this, pkPlayer, CGuildBattleControllerCheatDestroyStone16_next);
        };
        bool CGuildBattleControllerCheatDropStone18_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatDropStone18_user(_this, pkPlayer, CGuildBattleControllerCheatDropStone18_next);
        };
        bool CGuildBattleControllerCheatForceTakeStone20_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatForceTakeStone20_user(_this, pkPlayer, CGuildBattleControllerCheatForceTakeStone20_next);
        };
        bool CGuildBattleControllerCheatGetStone22_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatGetStone22_user(_this, pkPlayer, CGuildBattleControllerCheatGetStone22_next);
        };
        int CGuildBattleControllerCheatRegenStone24_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer, int iRengenPos)
        {
           return CGuildBattleControllerCheatRegenStone24_user(_this, pkPlayer, iRengenPos, CGuildBattleControllerCheatRegenStone24_next);
        };
        bool CGuildBattleControllerCheatTakeStone26_wrapper(struct CGuildBattleController* _this, int iPortalInx, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerCheatTakeStone26_user(_this, iPortalInx, pkPlayer, CGuildBattleControllerCheatTakeStone26_next);
        };
        void CGuildBattleControllerCheckGetGravityStone28_wrapper(struct CGuildBattleController* _this, uint16_t wIndex, unsigned int dwObjSerial, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerCheckGetGravityStone28_user(_this, wIndex, dwObjSerial, pkPlayer, CGuildBattleControllerCheckGetGravityStone28_next);
        };
        void CGuildBattleControllerCheckGoal30_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer, int iPortalInx)
        {
           CGuildBattleControllerCheckGoal30_user(_this, pkPlayer, iPortalInx, CGuildBattleControllerCheckGoal30_next);
        };
        void CGuildBattleControllerCheckTakeGravityStone32_wrapper(struct CGuildBattleController* _this, int iPortalInx, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerCheckTakeGravityStone32_user(_this, iPortalInx, pkPlayer, CGuildBattleControllerCheckTakeGravityStone32_next);
        };
        void CGuildBattleControllerCleanUp34_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerCleanUp34_user(_this, CGuildBattleControllerCleanUp34_next);
        };
        void CGuildBattleControllerClear36_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerClear36_user(_this, CGuildBattleControllerClear36_next);
        };
        void CGuildBattleControllerCompleteClearGuildBattleRank38_wrapper(struct CGuildBattleController* _this, char byResult)
        {
           CGuildBattleControllerCompleteClearGuildBattleRank38_user(_this, byResult, CGuildBattleControllerCompleteClearGuildBattleRank38_next);
        };
        void CGuildBattleControllerCompleteCreateGuildBattleRankTable40_wrapper(struct CGuildBattleController* _this, char byResult)
        {
           CGuildBattleControllerCompleteCreateGuildBattleRankTable40_user(_this, byResult, CGuildBattleControllerCompleteCreateGuildBattleRankTable40_next);
        };
        void CGuildBattleControllerCompleteUpdateRank42_wrapper(struct CGuildBattleController* _this, char byResult, char byRace, char* pLoadData)
        {
           CGuildBattleControllerCompleteUpdateRank42_user(_this, byResult, byRace, pLoadData, CGuildBattleControllerCompleteUpdateRank42_next);
        };
        void CGuildBattleControllerCompleteUpdateReservedSchedule44_wrapper(struct CGuildBattleController* _this, unsigned int dwMapID, char* pLoadData)
        {
           CGuildBattleControllerCompleteUpdateReservedSchedule44_user(_this, dwMapID, pLoadData, CGuildBattleControllerCompleteUpdateReservedSchedule44_next);
        };
        void CGuildBattleControllerDestroy46_wrapper()
        {
           CGuildBattleControllerDestroy46_user(CGuildBattleControllerDestroy46_next);
        };
        void CGuildBattleControllerDropGravityStone48_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerDropGravityStone48_user(_this, pkPlayer, CGuildBattleControllerDropGravityStone48_next);
        };
        void CGuildBattleControllerFlip50_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerFlip50_user(_this, CGuildBattleControllerFlip50_next);
        };
        struct CGameObject* CGuildBattleControllerGetCircleZone52_wrapper(struct CGuildBattleController* _this, int iInx)
        {
           return CGuildBattleControllerGetCircleZone52_user(_this, iInx, CGuildBattleControllerGetCircleZone52_next);
        };
        struct CGameObject* CGuildBattleControllerGetRegener54_wrapper(struct CGuildBattleController* _this, int iInx)
        {
           return CGuildBattleControllerGetRegener54_user(_this, iInx, CGuildBattleControllerGetRegener54_next);
        };
        struct CGameObject* CGuildBattleControllerGetStone56_wrapper(struct CGuildBattleController* _this, int iInx)
        {
           return CGuildBattleControllerGetStone56_user(_this, iInx, CGuildBattleControllerGetStone56_next);
        };
        bool CGuildBattleControllerInit58_wrapper(struct CGuildBattleController* _this)
        {
           return CGuildBattleControllerInit58_user(_this, CGuildBattleControllerInit58_next);
        };
        struct CGuildBattleController* CGuildBattleControllerInstance60_wrapper()
        {
           return CGuildBattleControllerInstance60_user(CGuildBattleControllerInstance60_next);
        };
        char CGuildBattleControllerIsAvailableSuggest62_wrapper(struct CGuildBattleController* _this, struct CGuild* pSrcGuild, unsigned int dwDestGuild, unsigned int dwStartTime, unsigned int dwNumber, unsigned int dwMapCode)
        {
           return CGuildBattleControllerIsAvailableSuggest62_user(_this, pSrcGuild, dwDestGuild, dwStartTime, dwNumber, dwMapCode, CGuildBattleControllerIsAvailableSuggest62_next);
        };
        void CGuildBattleControllerJoin64_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerJoin64_user(_this, pkPlayer, CGuildBattleControllerJoin64_next);
        };
        void CGuildBattleControllerJoinGuild66_wrapper(struct CGuildBattleController* _this, int n, unsigned int dwGuildSerial, unsigned int dwCharacSerial)
        {
           CGuildBattleControllerJoinGuild66_user(_this, n, dwGuildSerial, dwCharacSerial, CGuildBattleControllerJoinGuild66_next);
        };
        void CGuildBattleControllerKill68_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkSrcPlayer, struct CPlayer* pkDestPlayer)
        {
           CGuildBattleControllerKill68_user(_this, pkSrcPlayer, pkDestPlayer, CGuildBattleControllerKill68_next);
        };
        void CGuildBattleControllerLeaveGuild70_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerLeaveGuild70_user(_this, pkPlayer, CGuildBattleControllerLeaveGuild70_next);
        };
        bool CGuildBattleControllerLoad72_wrapper(struct CGuildBattleController* _this)
        {
           return CGuildBattleControllerLoad72_user(_this, CGuildBattleControllerLoad72_next);
        };
        bool CGuildBattleControllerLoadINI74_wrapper(struct CGuildBattleController* _this, unsigned int* uiMapCnt, int* iToday, int* iTodayDayID, int* iTomorrow, int* iTomorrowDayID)
        {
           return CGuildBattleControllerLoadINI74_user(_this, uiMapCnt, iToday, iTodayDayID, iTomorrow, iTomorrowDayID, CGuildBattleControllerLoadINI74_next);
        };
        void CGuildBattleControllerLogIn76_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerLogIn76_user(_this, pkPlayer, CGuildBattleControllerLogIn76_next);
        };
        void CGuildBattleControllerLoop78_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerLoop78_user(_this, CGuildBattleControllerLoop78_next);
        };
        void CGuildBattleControllerNetClose80_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           CGuildBattleControllerNetClose80_user(_this, pkPlayer, CGuildBattleControllerNetClose80_next);
        };
        void CGuildBattleControllerPushClearGuildBattleRank82_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerPushClearGuildBattleRank82_user(_this, CGuildBattleControllerPushClearGuildBattleRank82_next);
        };
        void CGuildBattleControllerPushCreateGuildBattleRankTable84_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerPushCreateGuildBattleRankTable84_user(_this, CGuildBattleControllerPushCreateGuildBattleRankTable84_next);
        };
        bool CGuildBattleControllerSaveINI86_wrapper(struct CGuildBattleController* _this)
        {
           return CGuildBattleControllerSaveINI86_user(_this, CGuildBattleControllerSaveINI86_next);
        };
        void CGuildBattleControllerSendCurrentBattleInfoRequest88_wrapper(struct CGuildBattleController* _this, int n, unsigned int uiMapID)
        {
           CGuildBattleControllerSendCurrentBattleInfoRequest88_user(_this, n, uiMapID, CGuildBattleControllerSendCurrentBattleInfoRequest88_next);
        };
        void CGuildBattleControllerSendPossibleBattleGuildList90_wrapper(struct CGuildBattleController* _this, int n, char byRace, char byPage, unsigned int dwVer)
        {
           CGuildBattleControllerSendPossibleBattleGuildList90_user(_this, n, byRace, byPage, dwVer, CGuildBattleControllerSendPossibleBattleGuildList90_next);
        };
        void CGuildBattleControllerSendPossibleBattleGuildListFirst92_wrapper(struct CGuildBattleController* _this, int n, char byRace)
        {
           CGuildBattleControllerSendPossibleBattleGuildListFirst92_user(_this, n, byRace, CGuildBattleControllerSendPossibleBattleGuildListFirst92_next);
        };
        void CGuildBattleControllerSendRankList94_wrapper(struct CGuildBattleController* _this, int n, char bySelfRace, unsigned int dwCurVer, unsigned int uiMapID, char byPage, unsigned int dwGuildSerial)
        {
           CGuildBattleControllerSendRankList94_user(_this, n, bySelfRace, dwCurVer, uiMapID, byPage, dwGuildSerial, CGuildBattleControllerSendRankList94_next);
        };
        void CGuildBattleControllerSendReservedScheduleList96_wrapper(struct CGuildBattleController* _this, int n, unsigned int uiMapID, unsigned int dwVer, char byDay, char byPage, unsigned int dwGuildSerial)
        {
           CGuildBattleControllerSendReservedScheduleList96_user(_this, n, uiMapID, dwVer, byDay, byPage, dwGuildSerial, CGuildBattleControllerSendReservedScheduleList96_next);
        };
        char CGuildBattleControllerStart98_wrapper(struct CGuildBattleController* _this, struct CPlayer* pkPlayer)
        {
           return CGuildBattleControllerStart98_user(_this, pkPlayer, CGuildBattleControllerStart98_next);
        };
        bool CGuildBattleControllerUpdateClearRerservedDayInfo100_wrapper(struct CGuildBattleController* _this, unsigned int dwStartSLID, unsigned int dwEndSLID, unsigned int dwStartSID, unsigned int dwEndSID)
        {
           return CGuildBattleControllerUpdateClearRerservedDayInfo100_user(_this, dwStartSLID, dwEndSLID, dwStartSID, dwEndSID, CGuildBattleControllerUpdateClearRerservedDayInfo100_next);
        };
        bool CGuildBattleControllerUpdateDraw102_wrapper(struct CGuildBattleController* _this, char by1PRace, unsigned int dw1PGuildSerial, char by2PRace, unsigned int dw2PGuildSerial)
        {
           return CGuildBattleControllerUpdateDraw102_user(_this, by1PRace, dw1PGuildSerial, by2PRace, dw2PGuildSerial, CGuildBattleControllerUpdateDraw102_next);
        };
        void CGuildBattleControllerUpdatePossibleBattleGuildList104_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerUpdatePossibleBattleGuildList104_user(_this, CGuildBattleControllerUpdatePossibleBattleGuildList104_next);
        };
        bool CGuildBattleControllerUpdateRank106_wrapper(struct CGuildBattleController* _this, char byRace, char* byOutData)
        {
           return CGuildBattleControllerUpdateRank106_user(_this, byRace, byOutData, CGuildBattleControllerUpdateRank106_next);
        };
        bool CGuildBattleControllerUpdateReservedGuildBattleSchedule108_wrapper(struct CGuildBattleController* _this, unsigned int dwSLID, char* byOutData)
        {
           return CGuildBattleControllerUpdateReservedGuildBattleSchedule108_user(_this, dwSLID, byOutData, CGuildBattleControllerUpdateReservedGuildBattleSchedule108_next);
        };
        bool CGuildBattleControllerUpdateWinLose110_wrapper(struct CGuildBattleController* _this, char byWinRace, unsigned int dwWinGuildSerial, char byLoseRace, unsigned int dwLoseGuildSerial)
        {
           return CGuildBattleControllerUpdateWinLose110_user(_this, byWinRace, dwWinGuildSerial, byLoseRace, dwLoseGuildSerial, CGuildBattleControllerUpdateWinLose110_next);
        };
        
        void CGuildBattleControllerdtor_CGuildBattleController114_wrapper(struct CGuildBattleController* _this)
        {
           CGuildBattleControllerdtor_CGuildBattleController114_user(_this, CGuildBattleControllerdtor_CGuildBattleController114_next);
        };
        
        ::std::array<hook_record, 56> CGuildBattleController_functions = 
        {
            _hook_record {
                (LPVOID)0x14025d2a0L,
                (LPVOID *)&CGuildBattleControllerAdd2_user,
                (LPVOID *)&CGuildBattleControllerAdd2_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerAdd2_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildBattleController::*)(struct CGuild*, struct CGuild*, unsigned int, char, unsigned int))&CGuildBattleController::Add)
            },
            _hook_record {
                (LPVOID)0x1403d5db0L,
                (LPVOID *)&CGuildBattleControllerAdd4_user,
                (LPVOID *)&CGuildBattleControllerAdd4_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerAdd4_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildBattleController::*)(struct CGuild*, struct CGuild*, unsigned int, unsigned int, char, unsigned int))&CGuildBattleController::Add)
            },
            _hook_record {
                (LPVOID)0x1403d6e20L,
                (LPVOID *)&CGuildBattleControllerAddComplete6_user,
                (LPVOID *)&CGuildBattleControllerAddComplete6_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerAddComplete6_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(char, unsigned int, unsigned int, unsigned int))&CGuildBattleController::AddComplete)
            },
            _hook_record {
                (LPVOID)0x1403d6ad0L,
                (LPVOID *)&CGuildBattleControllerAddSchedule8_user,
                (LPVOID *)&CGuildBattleControllerAddSchedule8_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerAddSchedule8_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildBattleController::*)(char*))&CGuildBattleController::AddSchedule)
            },
            _hook_record {
                (LPVOID)0x1403d5680L,
                (LPVOID *)&CGuildBattleControllerctor_CGuildBattleController10_user,
                (LPVOID *)&CGuildBattleControllerctor_CGuildBattleController10_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerctor_CGuildBattleController10_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::ctor_CGuildBattleController)
            },
            _hook_record {
                (LPVOID)0x1403d72d0L,
                (LPVOID *)&CGuildBattleControllerCheatCreateFieldObject12_user,
                (LPVOID *)&CGuildBattleControllerCheatCreateFieldObject12_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatCreateFieldObject12_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatCreateFieldObject)
            },
            _hook_record {
                (LPVOID)0x1403d7380L,
                (LPVOID *)&CGuildBattleControllerCheatDestroyFieldObject14_user,
                (LPVOID *)&CGuildBattleControllerCheatDestroyFieldObject14_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatDestroyFieldObject14_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatDestroyFieldObject)
            },
            _hook_record {
                (LPVOID)0x1403d7220L,
                (LPVOID *)&CGuildBattleControllerCheatDestroyStone16_user,
                (LPVOID *)&CGuildBattleControllerCheatDestroyStone16_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatDestroyStone16_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatDestroyStone)
            },
            _hook_record {
                (LPVOID)0x1403d7780L,
                (LPVOID *)&CGuildBattleControllerCheatDropStone18_user,
                (LPVOID *)&CGuildBattleControllerCheatDropStone18_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatDropStone18_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatDropStone)
            },
            _hook_record {
                (LPVOID)0x1403d7850L,
                (LPVOID *)&CGuildBattleControllerCheatForceTakeStone20_user,
                (LPVOID *)&CGuildBattleControllerCheatForceTakeStone20_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatForceTakeStone20_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatForceTakeStone)
            },
            _hook_record {
                (LPVOID)0x1403d75e0L,
                (LPVOID *)&CGuildBattleControllerCheatGetStone22_user,
                (LPVOID *)&CGuildBattleControllerCheatGetStone22_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatGetStone22_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::CheatGetStone)
            },
            _hook_record {
                (LPVOID)0x1403d70c0L,
                (LPVOID *)&CGuildBattleControllerCheatRegenStone24_user,
                (LPVOID *)&CGuildBattleControllerCheatRegenStone24_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatRegenStone24_wrapper),
                (LPVOID)cast_pointer_function((int(CGuildBattleController::*)(struct CPlayer*, int))&CGuildBattleController::CheatRegenStone)
            },
            _hook_record {
                (LPVOID)0x1403d7430L,
                (LPVOID *)&CGuildBattleControllerCheatTakeStone26_user,
                (LPVOID *)&CGuildBattleControllerCheatTakeStone26_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheatTakeStone26_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(int, struct CPlayer*))&CGuildBattleController::CheatTakeStone)
            },
            _hook_record {
                (LPVOID)0x1403d60f0L,
                (LPVOID *)&CGuildBattleControllerCheckGetGravityStone28_user,
                (LPVOID *)&CGuildBattleControllerCheckGetGravityStone28_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheckGetGravityStone28_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(uint16_t, unsigned int, struct CPlayer*))&CGuildBattleController::CheckGetGravityStone)
            },
            _hook_record {
                (LPVOID)0x1403d61b0L,
                (LPVOID *)&CGuildBattleControllerCheckGoal30_user,
                (LPVOID *)&CGuildBattleControllerCheckGoal30_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheckGoal30_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*, int))&CGuildBattleController::CheckGoal)
            },
            _hook_record {
                (LPVOID)0x1403d6020L,
                (LPVOID *)&CGuildBattleControllerCheckTakeGravityStone32_user,
                (LPVOID *)&CGuildBattleControllerCheckTakeGravityStone32_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCheckTakeGravityStone32_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, struct CPlayer*))&CGuildBattleController::CheckTakeGravityStone)
            },
            _hook_record {
                (LPVOID)0x1403d7900L,
                (LPVOID *)&CGuildBattleControllerCleanUp34_user,
                (LPVOID *)&CGuildBattleControllerCleanUp34_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCleanUp34_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::CleanUp)
            },
            _hook_record {
                (LPVOID)0x1403d62f0L,
                (LPVOID *)&CGuildBattleControllerClear36_user,
                (LPVOID *)&CGuildBattleControllerClear36_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerClear36_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::Clear)
            },
            _hook_record {
                (LPVOID)0x1403d7030L,
                (LPVOID *)&CGuildBattleControllerCompleteClearGuildBattleRank38_user,
                (LPVOID *)&CGuildBattleControllerCompleteClearGuildBattleRank38_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCompleteClearGuildBattleRank38_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(char))&CGuildBattleController::CompleteClearGuildBattleRank)
            },
            _hook_record {
                (LPVOID)0x1403d6fb0L,
                (LPVOID *)&CGuildBattleControllerCompleteCreateGuildBattleRankTable40_user,
                (LPVOID *)&CGuildBattleControllerCompleteCreateGuildBattleRankTable40_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCompleteCreateGuildBattleRankTable40_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(char))&CGuildBattleController::CompleteCreateGuildBattleRankTable)
            },
            _hook_record {
                (LPVOID)0x1403d6ec0L,
                (LPVOID *)&CGuildBattleControllerCompleteUpdateRank42_user,
                (LPVOID *)&CGuildBattleControllerCompleteUpdateRank42_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCompleteUpdateRank42_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(char, char, char*))&CGuildBattleController::CompleteUpdateRank)
            },
            _hook_record {
                (LPVOID)0x1403d6f60L,
                (LPVOID *)&CGuildBattleControllerCompleteUpdateReservedSchedule44_user,
                (LPVOID *)&CGuildBattleControllerCompleteUpdateReservedSchedule44_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerCompleteUpdateReservedSchedule44_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(unsigned int, char*))&CGuildBattleController::CompleteUpdateReservedSchedule)
            },
            _hook_record {
                (LPVOID)0x1403d57a0L,
                (LPVOID *)&CGuildBattleControllerDestroy46_user,
                (LPVOID *)&CGuildBattleControllerDestroy46_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerDestroy46_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CGuildBattleController::Destroy)
            },
            _hook_record {
                (LPVOID)0x1403d63b0L,
                (LPVOID *)&CGuildBattleControllerDropGravityStone48_user,
                (LPVOID *)&CGuildBattleControllerDropGravityStone48_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerDropGravityStone48_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::DropGravityStone)
            },
            _hook_record {
                (LPVOID)0x1403d6260L,
                (LPVOID *)&CGuildBattleControllerFlip50_user,
                (LPVOID *)&CGuildBattleControllerFlip50_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerFlip50_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::Flip)
            },
            _hook_record {
                (LPVOID)0x1403d6860L,
                (LPVOID *)&CGuildBattleControllerGetCircleZone52_user,
                (LPVOID *)&CGuildBattleControllerGetCircleZone52_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerGetCircleZone52_wrapper),
                (LPVOID)cast_pointer_function((struct CGameObject*(CGuildBattleController::*)(int))&CGuildBattleController::GetCircleZone)
            },
            _hook_record {
                (LPVOID)0x1403d6810L,
                (LPVOID *)&CGuildBattleControllerGetRegener54_user,
                (LPVOID *)&CGuildBattleControllerGetRegener54_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerGetRegener54_wrapper),
                (LPVOID)cast_pointer_function((struct CGameObject*(CGuildBattleController::*)(int))&CGuildBattleController::GetRegener)
            },
            _hook_record {
                (LPVOID)0x1403d67c0L,
                (LPVOID *)&CGuildBattleControllerGetStone56_user,
                (LPVOID *)&CGuildBattleControllerGetStone56_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerGetStone56_wrapper),
                (LPVOID)cast_pointer_function((struct CGameObject*(CGuildBattleController::*)(int))&CGuildBattleController::GetStone)
            },
            _hook_record {
                (LPVOID)0x1403d5820L,
                (LPVOID *)&CGuildBattleControllerInit58_user,
                (LPVOID *)&CGuildBattleControllerInit58_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerInit58_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)())&CGuildBattleController::Init)
            },
            _hook_record {
                (LPVOID)0x1403d56e0L,
                (LPVOID *)&CGuildBattleControllerInstance60_user,
                (LPVOID *)&CGuildBattleControllerInstance60_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerInstance60_wrapper),
                (LPVOID)cast_pointer_function((struct CGuildBattleController*(*)())&CGuildBattleController::Instance)
            },
            _hook_record {
                (LPVOID)0x1403d5bd0L,
                (LPVOID *)&CGuildBattleControllerIsAvailableSuggest62_user,
                (LPVOID *)&CGuildBattleControllerIsAvailableSuggest62_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerIsAvailableSuggest62_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildBattleController::*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int))&CGuildBattleController::IsAvailableSuggest)
            },
            _hook_record {
                (LPVOID)0x1403d5ed0L,
                (LPVOID *)&CGuildBattleControllerJoin64_user,
                (LPVOID *)&CGuildBattleControllerJoin64_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerJoin64_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::Join)
            },
            _hook_record {
                (LPVOID)0x1400ad450L,
                (LPVOID *)&CGuildBattleControllerJoinGuild66_user,
                (LPVOID *)&CGuildBattleControllerJoinGuild66_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerJoinGuild66_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, unsigned int, unsigned int))&CGuildBattleController::JoinGuild)
            },
            _hook_record {
                (LPVOID)0x1403d6600L,
                (LPVOID *)&CGuildBattleControllerKill68_user,
                (LPVOID *)&CGuildBattleControllerKill68_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerKill68_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*, struct CPlayer*))&CGuildBattleController::Kill)
            },
            _hook_record {
                (LPVOID)0x1403d66d0L,
                (LPVOID *)&CGuildBattleControllerLeaveGuild70_user,
                (LPVOID *)&CGuildBattleControllerLeaveGuild70_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerLeaveGuild70_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::LeaveGuild)
            },
            _hook_record {
                (LPVOID)0x1403d5950L,
                (LPVOID *)&CGuildBattleControllerLoad72_user,
                (LPVOID *)&CGuildBattleControllerLoad72_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerLoad72_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)())&CGuildBattleController::Load)
            },
            _hook_record {
                (LPVOID)0x1403d7bb0L,
                (LPVOID *)&CGuildBattleControllerLoadINI74_user,
                (LPVOID *)&CGuildBattleControllerLoadINI74_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerLoadINI74_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(unsigned int*, int*, int*, int*, int*))&CGuildBattleController::LoadINI)
            },
            _hook_record {
                (LPVOID)0x1403d5e40L,
                (LPVOID *)&CGuildBattleControllerLogIn76_user,
                (LPVOID *)&CGuildBattleControllerLogIn76_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerLogIn76_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::LogIn)
            },
            _hook_record {
                (LPVOID)0x1403d6760L,
                (LPVOID *)&CGuildBattleControllerLoop78_user,
                (LPVOID *)&CGuildBattleControllerLoop78_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerLoop78_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::Loop)
            },
            _hook_record {
                (LPVOID)0x1403d64d0L,
                (LPVOID *)&CGuildBattleControllerNetClose80_user,
                (LPVOID *)&CGuildBattleControllerNetClose80_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerNetClose80_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::NetClose)
            },
            _hook_record {
                (LPVOID)0x1402cfca0L,
                (LPVOID *)&CGuildBattleControllerPushClearGuildBattleRank82_user,
                (LPVOID *)&CGuildBattleControllerPushClearGuildBattleRank82_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerPushClearGuildBattleRank82_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::PushClearGuildBattleRank)
            },
            _hook_record {
                (LPVOID)0x1402cfc50L,
                (LPVOID *)&CGuildBattleControllerPushCreateGuildBattleRankTable84_user,
                (LPVOID *)&CGuildBattleControllerPushCreateGuildBattleRankTable84_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerPushCreateGuildBattleRankTable84_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::PushCreateGuildBattleRankTable)
            },
            _hook_record {
                (LPVOID)0x1403d7960L,
                (LPVOID *)&CGuildBattleControllerSaveINI86_user,
                (LPVOID *)&CGuildBattleControllerSaveINI86_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSaveINI86_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)())&CGuildBattleController::SaveINI)
            },
            _hook_record {
                (LPVOID)0x1403d6a80L,
                (LPVOID *)&CGuildBattleControllerSendCurrentBattleInfoRequest88_user,
                (LPVOID *)&CGuildBattleControllerSendCurrentBattleInfoRequest88_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSendCurrentBattleInfoRequest88_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, unsigned int))&CGuildBattleController::SendCurrentBattleInfoRequest)
            },
            _hook_record {
                (LPVOID)0x1403d6910L,
                (LPVOID *)&CGuildBattleControllerSendPossibleBattleGuildList90_user,
                (LPVOID *)&CGuildBattleControllerSendPossibleBattleGuildList90_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSendPossibleBattleGuildList90_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, char, char, unsigned int))&CGuildBattleController::SendPossibleBattleGuildList)
            },
            _hook_record {
                (LPVOID)0x1403d68b0L,
                (LPVOID *)&CGuildBattleControllerSendPossibleBattleGuildListFirst92_user,
                (LPVOID *)&CGuildBattleControllerSendPossibleBattleGuildListFirst92_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSendPossibleBattleGuildListFirst92_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, char))&CGuildBattleController::SendPossibleBattleGuildListFirst)
            },
            _hook_record {
                (LPVOID)0x1403d6980L,
                (LPVOID *)&CGuildBattleControllerSendRankList94_user,
                (LPVOID *)&CGuildBattleControllerSendRankList94_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSendRankList94_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, char, unsigned int, unsigned int, char, unsigned int))&CGuildBattleController::SendRankList)
            },
            _hook_record {
                (LPVOID)0x1403d6a00L,
                (LPVOID *)&CGuildBattleControllerSendReservedScheduleList96_user,
                (LPVOID *)&CGuildBattleControllerSendReservedScheduleList96_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerSendReservedScheduleList96_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)(int, unsigned int, unsigned int, char, char, unsigned int))&CGuildBattleController::SendReservedScheduleList)
            },
            _hook_record {
                (LPVOID)0x1403d5f80L,
                (LPVOID *)&CGuildBattleControllerStart98_user,
                (LPVOID *)&CGuildBattleControllerStart98_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerStart98_wrapper),
                (LPVOID)cast_pointer_function((char(CGuildBattleController::*)(struct CPlayer*))&CGuildBattleController::Start)
            },
            _hook_record {
                (LPVOID)0x1403d6cf0L,
                (LPVOID *)&CGuildBattleControllerUpdateClearRerservedDayInfo100_user,
                (LPVOID *)&CGuildBattleControllerUpdateClearRerservedDayInfo100_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdateClearRerservedDayInfo100_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(unsigned int, unsigned int, unsigned int, unsigned int))&CGuildBattleController::UpdateClearRerservedDayInfo)
            },
            _hook_record {
                (LPVOID)0x1403d6c80L,
                (LPVOID *)&CGuildBattleControllerUpdateDraw102_user,
                (LPVOID *)&CGuildBattleControllerUpdateDraw102_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdateDraw102_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(char, unsigned int, char, unsigned int))&CGuildBattleController::UpdateDraw)
            },
            _hook_record {
                (LPVOID)0x1403d6370L,
                (LPVOID *)&CGuildBattleControllerUpdatePossibleBattleGuildList104_user,
                (LPVOID *)&CGuildBattleControllerUpdatePossibleBattleGuildList104_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdatePossibleBattleGuildList104_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::UpdatePossibleBattleGuildList)
            },
            _hook_record {
                (LPVOID)0x1403d6d80L,
                (LPVOID *)&CGuildBattleControllerUpdateRank106_user,
                (LPVOID *)&CGuildBattleControllerUpdateRank106_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdateRank106_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(char, char*))&CGuildBattleController::UpdateRank)
            },
            _hook_record {
                (LPVOID)0x1403d6dd0L,
                (LPVOID *)&CGuildBattleControllerUpdateReservedGuildBattleSchedule108_user,
                (LPVOID *)&CGuildBattleControllerUpdateReservedGuildBattleSchedule108_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdateReservedGuildBattleSchedule108_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(unsigned int, char*))&CGuildBattleController::UpdateReservedGuildBattleSchedule)
            },
            _hook_record {
                (LPVOID)0x1403d6c10L,
                (LPVOID *)&CGuildBattleControllerUpdateWinLose110_user,
                (LPVOID *)&CGuildBattleControllerUpdateWinLose110_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerUpdateWinLose110_wrapper),
                (LPVOID)cast_pointer_function((bool(CGuildBattleController::*)(char, unsigned int, char, unsigned int))&CGuildBattleController::UpdateWinLose)
            },
            _hook_record {
                (LPVOID)0x1403d56a0L,
                (LPVOID *)&CGuildBattleControllerdtor_CGuildBattleController114_user,
                (LPVOID *)&CGuildBattleControllerdtor_CGuildBattleController114_next,
                (LPVOID)cast_pointer_function(CGuildBattleControllerdtor_CGuildBattleController114_wrapper),
                (LPVOID)cast_pointer_function((void(CGuildBattleController::*)())&CGuildBattleController::dtor_CGuildBattleController)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
