#include "Cercle.h"
#include <iostream>

void CCercle::affiche()const
{
	cout << "Diametre : " << m_x << endl;
	cout << "Rayon : " << m_radius << endl;
}

void CCercle::modifie()
{
	cout << "New diametre : ";
	cin >> m_x;
	m_radius = m_x / 2;
	cout << "New rayon : " << m_radius << endl;
}


CCercle::~CCercle()
{
}
