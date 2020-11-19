#pragma once
/*
Enemy.h
�G�l�~�[�N���X�̃w�b�_�t�@�C��
*/

class Enemy
{
private:
	int position_x = 48;
	int position_y = 48;
	int hp = 3;
public:
	Enemy();
	Enemy(int x, int y);
	~Enemy();

	void init(int x, int y, int HP);

	void Move(int x, int y);	//�ړ�
	void Hp_change(int value);	//HP�ϓ�

	int getPositionY() { return position_y; }		//Y���W�̃Q�b�^�[
	int getPositionX() { return position_x; }       //X���W�̃Q�b�^�[
	int getHP() { return hp; }

	void sedPositionX(int x) { position_x = x; }	//X���W�̃Z�b�^�[
};

