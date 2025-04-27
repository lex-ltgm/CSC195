#pragma once
#include "Shape.h"	

class Circle : public Shape {
public: 
	Circle(float r);
	~Circle() override;

	float Area() override;
	void SetRadius(float radius);
	float GetRadius();

private:
	float m_radius;
};
