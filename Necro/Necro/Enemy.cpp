#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::Enemy(int x, int y)
{
	position_x = x;
	position_y = y;
}

Enemy::~Enemy()
{

}

void Enemy::init(int x, int y, int HP)
{
	position_x = x;
	position_y = y;
	Enemy::hp = hp;
}

void Enemy::Move(int x, int y)
{
	position_x += x;
	position_y += x;
}

void Enemy::Hp_change(int value)
{
	hp += value;
}