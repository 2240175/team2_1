#include "Mato.h"
#include"all.h"

using namespace std;

//変数
int mato_state;
int mato_timer;
int matoX;
int matoY;

Sprite* sprMato;

//初期更新
void mato_init()
{
	mato_state = 0;
	mato_timer = 0;
}

//終了更新
void mato_deinit()
{

}

void mato_update()
{
	switch(mato_state)
	{
	case 0:
		//初期設定
		sprMato = sprite_load(L"./Data/Images/mato.png");
		mato_state++;
		break;

	case 1:
		//パラメータの設定

		mato_state++;
		break;

	case 2:


	
	}
}

//描画
void mato_render()
{
	sprite_render(sprMato, 0, 0);
}

