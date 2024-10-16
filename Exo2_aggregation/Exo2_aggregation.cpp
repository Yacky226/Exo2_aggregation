// Exo2_aggregation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Cercle.h"

int main()
{

    Point P(1.0, 1.0);
    Point P1(1.0, 2.0);
    std::cout << "Creation d'un cercle" << std::endl;
    Cercle *C, C1(2, 5, &P);
    C = new Cercle(1, 5, &P);
    std::cout << "Creation d'un cercle" << std::endl;

    C->Afficher();
    std::cout << "le perimetre : " << C->Perimetre() << std::endl;
    std::cout << "la surface : " << C->Surface() << std::endl;

    if (*C == C1) {
        std::cout << "Les cercles sont egaux" << std::endl;
    }
    else {
        std::cout << "Les cercles ne sont pas egaux" << std::endl;
    }
    // Tester si un point appartient au cercle

    if (C->appart(P1)) {
        std::cout << "Le point ";
        P1.Afficher_Point();
        std::cout << " appartient au cercle" << std::endl;
    }
    else {
        std::cout << "Le point ";
        P1.Afficher_Point();
        std::cout << " n'appartient pas au cercle" << std::endl;
    }
    C->Translate(2.0, 2.0);
    C->Afficher();
    C->UpdateRadius(3);
    C->Afficher();

    delete C;
    P.Afficher_Point();


  return 0;

}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
