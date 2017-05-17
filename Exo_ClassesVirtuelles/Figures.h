#pragma once
#include <iostream>

using namespace std;

class CFigures
{
public:
	int m_x, m_y;
	CFigures(int x, int y) {
		this->m_x = x;
		this->m_y = y;
	}

	void affiche()const;
	void modifie();

	virtual void dess()const {
		cout << "X : " << m_x << endl;
		cout << "Y : " << m_y << endl;
	}
	virtual int aire() {
		int res;
		res = m_x * m_x;
		cout << "L'aire est de : " << res << endl;
		return res;
	}
	virtual int perimetre() {
		int res;
		res = 4 * m_x;
		cout << "Le perimetre est de : " << res << endl;
		return res;
	}

	virtual ~CFigures();
};

