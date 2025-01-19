//******************************************************************************
//
//
//      scene_game
//
//
//******************************************************************************

//----< インクルード >-----------------------------------------------------------
#include "all.h"
#include"Mato.h"

#include<sstream>


//------< 変数 >----------------------------------------------------------------
int game_state;
int game_timer;


int matoX;
int matoY;
float posx1;//的1のposx
float posy1;//的1のposy
float poskx1 = 1280/2;
float posky1 = 800;



//------宣言------
bool isHit;//的があった時の判定

//-----画像-------
Sprite* sprBack;
Sprite* sprPush;
Sprite* sprCenter;
Sprite* sprK;

//--------------------------------------
//  ゲームの初期設定
//--------------------------------------
void game_init()
{
    game_state      = 0;
    game_timer      = 0;
}

//--------------------------------------
//  ゲームの終了処理
//--------------------------------------
void game_deinit()
{
#if 11
//******************************************************************************
// TODO:11 プレイヤーの終了処理関数を呼び出す
//------------------------------------------------------------------------------
/*
課題）
    下記でplayer_deinit関数を呼びましょう。
*/
//******************************************************************************
#endif
    //TODO_11


    safe_delete(sprBack);
}

//--------------------------------------
//  ゲームの更新処理
//--------------------------------------
void game_update()            
{
    switch (game_state)
    {
    case 0:
        //////// 初期設定 ////////

        sprBack = sprite_load(L"./Data/Images/back.png");
        sprCenter = sprite_load(L"./Data/Images/senter.png");
        sprK = sprite_load(L"./Data/Images/Okunai.png");

        //TODO_10
      

        game_state++;
        /*fallthrough*/

    case 1:
        //////// パラメータの設定 ////////

        GameLib::setBlendMode(Blender::BS_ALPHA);

        game_state++;
        /*fallthrough*/

    case 2:
        //////// 通常時 ////////

        debug::setString("");
        debug::setString("game_state:%d", game_state);
        debug::setString("game_timer:%d", game_timer);
        debug::setString("game_timer:%d", isHit);

       /* std::ostringstream oss;   */                              // 文字列ストリーム
        POINT point;                                            // 位置用の変数を宣言する
        GetCursorPos(&point);                                   // スクリーン座標を取得する
        ScreenToClient(window::getHwnd(), &point);              // クライアント座標に変換する

        debug::setString("x = %d, y = %d", point.x, point.y);
       
        if (TRG(0) & PAD_TRG1)
        {
           
            
        }


        //1の的がヒットしたら次の的へ
        if (isHit == true)
        {
            isHit = false;
            game_state++;
        }

        break;

    case 3:

        //２の的がヒットしたら次の的へ
        if (isHit == true)
        {
            isHit = false;
            game_state++;
        }

        break;
    case 4:

        //３の的がヒットしたら次の的へ
        if (isHit == true)
        {
            isHit = false;
            game_state++;
        }

        break;
    case 5:

        //４の的がヒットしたら次の的へ
        if (isHit == true)
        {
            isHit = false;
            game_state++;
        }
        break;

    case 6:

        //５の的がヒットしたら次の的へ
        if (isHit == true)
        {
            isHit = false;
            nextScene = SCENE_TITLE;
            break;
        }





        break;
    }

    game_timer++;
}

//--------------------------------------
//  ゲームの描画処理
//--------------------------------------
void game_render()
{
    GameLib::clear(0.2f, 0.2f, 0.4f);

    sprite_render(sprBack, 0, 0);
    sprite_render(sprCenter,1280/2, 720/2,1.0f,1.0f,0,0,128,128,128/2,128/2,0.0f,0.8f,0.8f,0.8f,0.8f,true);

    sprite_render(sprK, poskx1, posky1, 1.0f, 1.0f, 0, 0, 128, 128, 128 / 2, 128 / 2, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, true);


}
