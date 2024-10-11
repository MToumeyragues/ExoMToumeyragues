#pragma once
class alive
{
protected:
	float max_health;
	float current_health;
public:
	alive();
	virtual float get_max_health();
	virtual float get_current_health();
	void set_max_health(float HP);
	void set_current_health(float HP);
	bool isAlive();
	virtual void hurt(float dmg);
};

