
#ifndef __DRAW_CYCLE_TIMER_H__
#define __DRAW_CYCLE_TIMER_H__

#include "ThreadIntf.h"
#include "TimerThread.h"
#include "TVPTimer.h"
#ifdef ANDROID
#include "Application.h"
#endif
//---------------------------------------------------------------------------
// onDrawを発生させるためのタイマー
//---------------------------------------------------------------------------
class tTVPDrawCycleTimer : public tTVPTimerBase
#ifdef ANDROID
, public iTVPAndroidActivityEventHandler
#endif
{
	tjs_uint32 DrawCycle = 0;		//!< 描画サイクル
	tjs_uint32 LastDrawTick = 0;	//!< 最後の描画時間
	class tTJSNI_BaseWindow* OwnerWindow;
	bool ForceDisable = false;

public:
	tTVPDrawCycleTimer(class tTJSNI_BaseWindow* owner);
	~tTVPDrawCycleTimer() override;

protected:
	void Fire(tjs_uint n) override;
	void CancelEvents() override {}

#ifdef ANDROID
	void onResume() override;
	void onPause() override;
#endif

public:
	/**
	 * 他要因で描画を行ったので待ち時間をリセットする。
	 */
	void ResetDrawCycle();

	/**
	 * 描画サイクルを設定する
	 */
	void SetDrawCycle( tjs_uint32 cycle );

	/**
	 * 描画サイクルを取得する
	 */	
	tjs_uint32 GetDrawCycle() const { return DrawCycle; }
};
//---------------------------------------------------------------------------

#endif // __DRAW_CYCLE_TIMER_H__
