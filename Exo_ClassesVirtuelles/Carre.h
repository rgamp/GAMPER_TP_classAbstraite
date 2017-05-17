#pragma once
#include "Rectangle.h"
class CCarre :
	private CRectangle
{
public:
	CCarre(int x) :CRectangle(m_x, m_y) {
		this->m_x = x;
	}

	void get_bord()const;
	int set_bord();

	virtual void dess()const {
		cout << "Cote : " << m_x << endl;
	}
	virtual int aire() {
		int res;
		res = m_x * m_x;
		cout << "L'aire du carre est de : " << res << endl;
		return res;
	}
	virtual int perimetre() {
		int res;
		res = m_x * 4;
		cout << "Le perimetre du carre est de : " << res << endl;
		return res;
	}

	~CCarre();
};

