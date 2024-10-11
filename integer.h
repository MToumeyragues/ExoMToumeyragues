#pragma once
#include <string>

class integer
{
protected:
	int value;
public:
	integer();
	integer(int value);
	int get_value();
	void set_value(int value);
	integer operator+(const integer& right);
	void operator+=(const integer& right);
	integer operator-(const integer& right);
	void operator-=(const integer& right);
	integer operator*(const integer& right);
	void operator*=(const integer& right);
	integer operator/(const integer& right);
	void operator/=(const integer& right);
	integer operator%(const integer& right);
	void operator%=(const integer& right);
	void operator<<(const integer& right);

	std::string to_string();
};

