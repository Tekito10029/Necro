#pragma once
/*
Enemy.h
エネミークラスのヘッダファイル
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

	void Move(int x, int y);	//移動
	void Hp_change(int value);	//HP変動

	int getPositionY() { return position_y; }		//Y座標のゲッター
	int getPositionX() { return position_x; }       //X座標のゲッター
	int getHP() { return hp; }

	void sedPositionX(int x) { position_x = x; }	//X座標のセッター
};

