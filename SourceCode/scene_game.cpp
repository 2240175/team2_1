//******************************************************************************
//
//
//      scene_game
//
//
//******************************************************************************

//----< �C���N���[�h >-----------------------------------------------------------
#include "all.h"




//------< �ϐ� >----------------------------------------------------------------
int game_state;
int game_timer;

//-----�摜-------
Sprite* sprBack;
Sprite* sprPush;
Sprite* sprCenter;

//--------------------------------------
//  �Q�[���̏����ݒ�
//--------------------------------------
void game_init()
{
    game_state      = 0;
    game_timer      = 0;
}

//--------------------------------------
//  �Q�[���̏I������
//--------------------------------------
void game_deinit()
{
#if 11
//******************************************************************************
// TODO:11 �v���C���[�̏I�������֐����Ăяo��
//------------------------------------------------------------------------------
/*
�ۑ�j
    ���L��player_deinit�֐����Ăт܂��傤�B
*/
//******************************************************************************
#endif
    //TODO_11


    safe_delete(sprBack);
}

//--------------------------------------
//  �Q�[���̍X�V����
//--------------------------------------
void game_update()            
{
    switch (game_state)
    {
    case 0:
        //////// �����ݒ� ////////

        sprBack = sprite_load(L"./Data/Images/back.png");
        sprCenter = sprite_load(L"./Data/Images/senter.png");


        //TODO_10
      

        game_state++;
        /*fallthrough*/

    case 1:
        //////// �p�����[�^�̐ݒ� ////////

        GameLib::setBlendMode(Blender::BS_ALPHA);

        game_state++;
        /*fallthrough*/

    case 2:
        //////// �ʏ펞 ////////

        debug::setString("");
        debug::setString("A D   : LEFT, RIGHT");
        debug::setString("SPACE : JUMP");
        debug::setString("");

        if (TRG(0) & PAD_SELECT)
        {
            nextScene = SCENE_TITLE;
            break;
        }



        break;
    }

    game_timer++;
}

//--------------------------------------
//  �Q�[���̕`�揈��
//--------------------------------------
void game_render()
{
    GameLib::clear(0.2f, 0.2f, 0.4f);

    sprite_render(sprBack, 0, 0);
    sprite_render(sprCenter,1280/2, 720/2,1.0f,1.0f,0,0,128,128,128/2,128/2,0.0f,0.8f,0.8f,0.8f,0.8f,true);



}
