#include "Rectangle.h"

void CRectangle::affiche()const
{
	cout << "X : " << m_largeur << endl;
	cout << "Y : " << m_longeur << endl;
}

void CRectangle::modifie()
{
	cout << "New largeur : ";
	cin >> m_largeur;
	cout << "New longeur : ";
	cin >> m_longeur;
}


CRectangle::~CRectangle()
{
}
