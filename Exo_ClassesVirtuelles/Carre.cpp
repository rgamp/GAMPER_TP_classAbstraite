#include "Carre.h"
#include <iostream>

using namespace std;

void CCarre::get_bord()const
{
	cout << "Cote : " << m_x << endl;
}

int CCarre::set_bord()
{
	int res;
	cout << "New longeur : ";
	cin >> res;
	m_x = res;
	return res;
}


CCarre::~CCarre()
{
}
