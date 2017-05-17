#pragma once
#include "Figures.h"
class CRectangle :
	public CFigures
{
	int m_largeur, m_longeur;
public:
	CRectangle(int x, int y) :CFigures(m_x,m_y) {
		this->m_largeur = x;
		this->m_longeur = y;
	}

	void affiche()const;
	void modifie();

	virtual void dess()const {
		cout << "Largeur : " << m_largeur << endl;
		cout << "Longeur : " << m_longeur << endl;
	}
	virtual int aire() {
		int res;
		res = m_largeur * m_longeur;
		cout << "L'aire du rectangle est de : " << res << endl;
		return res;
	}
	virtual int perimetre() {
		int res;
		res = 2 * (m_largeur + m_longeur);
		cout << "Le perimetre du rectangle est de : " << res << endl;
		return res;
	}

	~CRectangle();
};

