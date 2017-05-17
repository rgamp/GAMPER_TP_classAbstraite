#pragma once
#include "Figures.h"
class CCercle :
	public CFigures
{
	int m_radius;
public:
	CCercle(int dia) :CFigures(m_x, m_y) {
		this->m_x = dia;
		this->m_radius = dia / 2;
	}
	
	void affiche()const;
	void modifie();

	virtual void dess()const {
		cout << "Diametre : " << m_x << endl;
		cout << "Rayon : " << m_radius << endl;
	}
	virtual int aire() {
		int res;
		res = (m_radius * m_radius) * 3,14;
		cout << "L'aire du cercle est de : " << res << endl;
		return res;
	}
	virtual int perimetre() {
		int res;
		res = m_x * 3,14;
		cout << "Le perimetre du cercle est de : " << res << endl;
		return res;
	}

	~CCercle();
};

