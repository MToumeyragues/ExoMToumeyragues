#pragma once

class vector2
{
private:
	float x, y;
public:
	vector2();
	vector2(float, float);
	void set_x(float x);
	void set_y(float y);
	float get_x() const;
	float get_y() const;
	float norm();
	vector2 normalized();
	vector2 operator+(const vector2& right);
	vector2 operator-(const vector2& right);
	vector2 operator*(const float scalar);
	vector2 operator/(const float scalar);
};
