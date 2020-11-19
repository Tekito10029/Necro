#pragma once
/*
  player.h
  �v���C���[�N���X�̃w�b�_�[�t�@�C��
*/
class Player
{
private:	//�����̂݃A�N�Z�X�\
	//�ϐ��͌���private
	int position_x = 1;			//X���W
	int position_y = 1;			//Y���W
	int hp = 10;					//HP
public:		//�N�ł��A�N�Z�X�\
	Player();					//�R���X�g���N�^ (�N���X�̃I�u�W�F�N�g���������ꂽ�Ƃ����s�����֐�)
	Player(int x, int y);
	~Player();					//�f�X�g���N�^   (�N���X�̃I�u�W�F�N�g���j�����ꂽ�Ƃ����s�����֐�)

	void Move(int x, int y);	//�ړ�
	void Hp_change(int value);	//HP�ϓ�

	int getPositionX() { return position_x; }		//X���W�̃Q�b�^�[
	int getPositionY() { return position_y; }		//Y���W�̃Q�b�^�[
	int getHP() { return hp; }						//HP�̃Q�b�^�[

	void sedPositionX(int x) { position_x = x; }	//X���W�̃Z�b�^�[
};

