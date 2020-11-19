#pragma once
/*
  player.h
  プレイヤークラスのヘッダーファイル
*/
class Player
{
private:	//自分のみアクセス可能
	//変数は原則private
	int position_x = 1;			//X座標
	int position_y = 1;			//Y座標
	int hp = 10;					//HP
public:		//誰でもアクセス可能
	Player();					//コンストラクタ (クラスのオブジェクトが生成されたとき実行される関数)
	Player(int x, int y);
	~Player();					//デストラクタ   (クラスのオブジェクトが破棄されたとき実行される関数)

	void Move(int x, int y);	//移動
	void Hp_change(int value);	//HP変動

	int getPositionX() { return position_x; }		//X座標のゲッター
	int getPositionY() { return position_y; }		//Y座標のゲッター
	int getHP() { return hp; }						//HPのゲッター

	void sedPositionX(int x) { position_x = x; }	//X座標のセッター
};

