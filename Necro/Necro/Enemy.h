/*
	Enemy.h
	作成：得居勇太
*/
#pragma once
/*
			Enemy
	enemy1	enemy2	enemy3



*/
class Enemy
{
private:	//自身のみがアクセスできる
//原則変数はプライベート
	int position_x = 48;		//X座標
	int position_y = 48;		//Y座標
	int hp = 3;				//HP
public:		//誰からでもアクセスできる
	Enemy();				//コンストラクタ（クラスのオブジェクトが生成される時、自動的に実行される関数）
//主に変数の初期化等に使用される
	~Enemy();				//デストラクタ（クラスのオブジェクトが破棄される時、自動的に実行される。）

	Enemy(int x, int y);	//引数ありのコンストラクタ

	void Init(int x, int y, int hp);	//初期化
	void Move(int x, int y);	//移動
	void Hp_change(int value);	//HPの増減

	//ゲッター(特定の変数の値を返すだけの関数)
	int getPositionX() { return position_x; }
	int getPositionY() { return position_y; }
	int getHp() { return hp; }

	//セッター（特定の変数の値を代入するだけの関数）
	void setPositionX(int x) { position_x = x; }
};

