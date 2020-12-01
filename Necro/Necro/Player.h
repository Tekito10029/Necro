/*
	Player.h
	作成：得居勇太
*/
#pragma once
#include<stdio.h>
#include<conio.h>
class Player
{
private:	//自身のみがアクセスできる
	//原則変数はプライベート
	int position_x = 1;		//X座標
	int position_y = 1;		//Y座標
	int hp = 3;				//HP

	int vec_x = 0;			//プレイヤーの進行方向X
	int vec_y = 0;			//プレイヤーの進行方向Y
public:		//誰からでもアクセスできる
	Player();				//コンストラクタ（クラスのオブジェクトが生成される時、自動的に実行される関数）
	//主に変数の初期化等に使用される
	~Player();				//デストラクタ（クラスのオブジェクトが破棄される時、自動的に実行される。）

	Player(int x, int y);	//引数ありのコンストラクタ

	bool Main();			//メイン関数


	//主にメモリの解放
	void Move(int x, int y);	//移動
	void Hp_change(int value);	//HPの増減

	//ゲッター(特定の変数の値を返すだけの関数)
	int getPositionX() { return position_x; }
	int getPositionY() { return position_y; }
	int getHp() { return hp; }

	int getVec_x() { return vec_x; }
	int getVec_y() { return vec_y; }

	//セッター（特定の変数の値を代入するだけの関数）
	void setPositionX(int x) { position_x = x; }
};

