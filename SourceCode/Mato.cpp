#include "Mato.h"
#include"all.h"

using namespace std;

//�ϐ�
int mato_state;
int mato_timer;
int matoX;
int matoY;

Sprite* sprMato;

//�����X�V
void mato_init()
{
	mato_state = 0;
	mato_timer = 0;
}

//�I���X�V
void mato_deinit()
{

}

void mato_update()
{
	switch(mato_state)
	{
	case 0:
		//�����ݒ�
		sprMato = sprite_load(L"./Data/Images/mato.png");
		mato_state++;
		break;

	case 1:
		//�p�����[�^�̐ݒ�

		mato_state++;
		break;

	case 2:


	
	}
}

//�`��
void mato_render()
{
	sprite_render(sprMato, 0, 0);
}

