/*
	Player.h
	�쐬�F�����E��
*/
#pragma once
#include<stdio.h>
#include<conio.h>
class Player
{
private:	//���g�݂̂��A�N�Z�X�ł���
	//�����ϐ��̓v���C�x�[�g
	int position_x = 1;		//X���W
	int position_y = 1;		//Y���W
	int hp = 3;				//HP

	int vec_x = 0;			//�v���C���[�̐i�s����X
	int vec_y = 0;			//�v���C���[�̐i�s����Y
public:		//�N����ł��A�N�Z�X�ł���
	Player();				//�R���X�g���N�^�i�N���X�̃I�u�W�F�N�g����������鎞�A�����I�Ɏ��s�����֐��j
	//��ɕϐ��̏��������Ɏg�p�����
	~Player();				//�f�X�g���N�^�i�N���X�̃I�u�W�F�N�g���j������鎞�A�����I�Ɏ��s�����B�j

	Player(int x, int y);	//��������̃R���X�g���N�^

	bool Main();			//���C���֐�


	//��Ƀ������̉��
	void Move(int x, int y);	//�ړ�
	void Hp_change(int value);	//HP�̑���

	//�Q�b�^�[(����̕ϐ��̒l��Ԃ������̊֐�)
	int getPositionX() { return position_x; }
	int getPositionY() { return position_y; }
	int getHp() { return hp; }

	int getVec_x() { return vec_x; }
	int getVec_y() { return vec_y; }

	//�Z�b�^�[�i����̕ϐ��̒l�������邾���̊֐��j
	void setPositionX(int x) { position_x = x; }
};

