#include "vector2.h"
#include <cmath>
#include <iostream>
#include <string>

vector2::vector2() : x(0.f), y(0.f)
{
}

vector2::vector2(float x, float y) : x(x), y(y)
{
}

void vector2::set_x(const float x)
{
	this->x = x;
}

void vector2::set_y(const float y)
{
	this->y = y;
}

float vector2::get_x() const
{
	return x;
}

float vector2::get_y() const
{
	return y;
}

float vector2::norm()
{
	return static_cast<float>(sqrt(pow(x, 2) + pow(y, 2)));
}

vector2 vector2::normalized()
{
	return { this->get_x() / norm(), this->get_y() / norm() };
}

vector2 vector2::operator+(const vector2& right)
{
	return {this->x + right.x, this->y + right.y};
}

vector2 vector2::operator-(const vector2& right)
{
	return { this->x - right.x, this->y - right.y};
}

vector2 vector2::operator*(const float scalar)
{
	return { this->x * scalar, this->y * scalar};
}

vector2 vector2::operator/(const float scalar)
{
	return { this->x / scalar, this->y / scalar };
}

