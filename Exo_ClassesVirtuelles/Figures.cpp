#include "Figures.h"
#include <iostream>

using namespace std;

void CFigures::affiche()const
{
	cout << "X : " << m_x << endl;
	cout << "Y : " << m_y << endl;
}

void CFigures::modifie()
{
	cout << "New X : ";
	cin >> m_x;
	cout << "New Y : ";
	cin >> m_y;
}

CFigures::~CFigures()
{
}
