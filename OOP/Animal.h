#pragma once
#include <iostream>

class Animal
{
public:
	//Animal(){}
	Animal() {
		m_limbs = 0;
	}
	Animal(int limb) {
		m_limbs = limb
	}
	virtual void Travel();
	int GetLimbs() {return m_limbs;	}
	void SetLimbs(int limbs) {m_limbs = limbs;}

protected:
	int m_limbs;
};
