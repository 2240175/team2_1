#ifndef PLAYER_H
#define PLAYER_H

//******************************************************************************
//
//
//      player.h
//
//
//******************************************************************************

//------< 定数 >----------------------------------------------------------------
#if 4
//******************************************************************************
// TODO:04 プレイヤーの画像に関する定数を定義
//------------------------------------------------------------------------------
/*
課題）
    下記でプレイヤーの画像関連の定数を定義しましょう。
        プレイヤーの画像1つの幅と高さ、
        プレイヤーの基準点の座標が必要です。
        ※ 今は定数名などを指定しますが、そのうち自分で名前を考えていく必要が出てきます。

手順）
    下記を#defineで定義していきます。
        PLAYER_TEX_W        128.0f     （プレイヤーの画像1つの幅）
        PLAYER_TEX_H        128.0f     （プレイヤーの画像1つの高さ）
        PLAYER_PIVOT_X      64.0f      （プレイヤーの横方向の中心）
        PLAYER_PIVOT_Y      128.0f     （プレイヤーの縦方向の下端）
*/
//******************************************************************************
#endif
//TODO_04
#define PLAYER_TEX_W 128.0f
#define PLAYER_TEX_H 128.0f
#define PLAYER_PIVOT_X      64.0f
#define PLAYER_PIVOT_Y      128.0f 

#if 14
//******************************************************************************
// TODO:14 重力の定数を定義
//------------------------------------------------------------------------------
/*
課題）
    下記で重力の定数GRAVITYを定義しなさい。値は1.0fとする。
*/
//******************************************************************************
#endif
//TODO_14
#define GRAVITY 1.0f

#if 21
//******************************************************************************
// TODO:21 プレイヤーの加速・減速の定数
//------------------------------------------------------------------------------
/*
課題）
    プレイヤーを横方向に移動させていきます。その際に使用する定数をここで定義して
    おきます。

    プレイヤーの横方向の加速度（加速用）  PLAYER_ACCEL_X      0.3f
    プレイヤーの横方向の加速度（減速用）  PLAYER_DECEL_X      0.4f
    プレイヤーの横方向の速度の最大値      PLAYER_SPEED_X_MAX  8.0f
*/
//******************************************************************************
#endif
//TODO_21
#define PLAYER_ACCEL_X      0.3f
#define PLAYER_DECEL_X      0.4f
#define PLAYER_SPEED_X_MAX  8.0f

//TODO_24
#define PLAYER_LIMIT_L (PLAYER_TEX_W *0.5f) //画面左端
#define PLAYER_LIMIT_R (SCREEN_W - PLAYER_TEX_W*0.5f)//画面右端

#if 19
//******************************************************************************
// TODO:19 地面の高さの定数を定義
//------------------------------------------------------------------------------
/*
課題）
    仮にY座標が640のところに床があるとしましょう。プレイヤーのY座標がこの数値より
    大きくなれば（下方向がプラス）地面にめり込んだ事にするための、定数を定義して
    おきます。

手順）
    下記で地面の高さの定数GROUND_Yを定義しなさい。値は640.0fとする。
*/
//******************************************************************************
#endif
//TODO_19 地面の高さの定数
#define GROUND_Y (640.0)

//------< 状態 >----------------------------------------------------------------


//------< 関数 >----------------------------------------------------------------
void player_init();
void player_deinit();
void player_update();
void player_render();

//
void player_moveX();
void player_moveY();

#endif//PLAYER_H