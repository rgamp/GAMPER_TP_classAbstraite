#include <iostream>
#include "Figures.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Carre.h"

using namespace std;

int main()
{
	CFigures grim(15, 15);
	CRectangle leaf(3, 6);
	CCercle automn(10);
	CCarre lord(30);
// Afficher les différentes figures
	grim.affiche();
	leaf.affiche();
	automn.affiche();
	lord.get_bord();
	cout << endl;
// Modifier les figures et afficher leurs nouvelles valeurs
	grim.modifie();
	grim.affiche();
	automn.modifie();
	lord.set_bord();
	lord.get_bord();
	cout << endl;
// Afficher aire et périmètre
	grim.aire();
	grim.perimetre();
	cout << endl;
// Afficher aire et périmètre du rectangle
	leaf.aire();
	leaf.perimetre();
	cout << endl;
// Afficher aire et périmètre du cercle
	automn.aire();
	automn.perimetre();
	cout << endl;
// Afficher aire et périmètre du carré
	lord.aire();
	lord.perimetre();
	cout << endl;

	system("pause");
}