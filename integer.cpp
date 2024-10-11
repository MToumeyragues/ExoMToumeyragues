#include "integer.h"

integer::integer()
{
	this->value = 0;
}

integer::integer(int value)
{
	this->value = value;
}

int integer::get_value()
{
	return this->value;
}

void integer::set_value(int value)
{
	this->value = value;
}

integer integer::operator+(const integer& right)
{
	return this->value + right.value;
}

void integer::operator+=(const integer& right)
{
	this->value = this->value + right.value;
}

integer integer::operator-(const integer& right)
{
	return this->value - right.value;
}

void integer::operator-=(const integer& right)
{
	this->value = this->value - right.value;
}

integer integer::operator*(const integer& right)
{
	return this->value * right.value;
}

void integer::operator*=(const integer& right)
{
	this->value = this->value * right.value;
}

integer integer::operator/(const integer& right)
{
	return this->value / right.value;
}

void integer::operator/=(const integer& right)
{
	this->value = this->value / right.value;
}

integer integer::operator%(const integer& right)
{
	return this->value % right.value;
}

void integer::operator%=(const integer& right)
{
	this->value = this->value % right.value;
}

void integer::operator<<(const integer& right)
{
	this->value = right.value;
}

std::string integer::to_string()
{
	return std::to_string(this->value);
}
