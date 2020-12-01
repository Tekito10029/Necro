/*
	Enemy.h
	�쐬�F�����E��
*/
#pragma once
/*
			Enemy
	enemy1	enemy2	enemy3



*/
class Enemy
{
private:	//���g�݂̂��A�N�Z�X�ł���
//�����ϐ��̓v���C�x�[�g
	int position_x = 48;		//X���W
	int position_y = 48;		//Y���W
	int hp = 3;				//HP
public:		//�N����ł��A�N�Z�X�ł���
	Enemy();				//�R���X�g���N�^�i�N���X�̃I�u�W�F�N�g����������鎞�A�����I�Ɏ��s�����֐��j
//��ɕϐ��̏��������Ɏg�p�����
	~Enemy();				//�f�X�g���N�^�i�N���X�̃I�u�W�F�N�g���j������鎞�A�����I�Ɏ��s�����B�j

	Enemy(int x, int y);	//��������̃R���X�g���N�^

	void Init(int x, int y, int hp);	//������
	void Move(int x, int y);	//�ړ�
	void Hp_change(int value);	//HP�̑���

	//�Q�b�^�[(����̕ϐ��̒l��Ԃ������̊֐�)
	int getPositionX() { return position_x; }
	int getPositionY() { return position_y; }
	int getHp() { return hp; }

	//�Z�b�^�[�i����̕ϐ��̒l�������邾���̊֐��j
	void setPositionX(int x) { position_x = x; }
};

