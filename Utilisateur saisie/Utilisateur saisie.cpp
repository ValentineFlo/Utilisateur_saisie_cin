// Utilisateur saisie.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int Nmb;
    std::cout << "Ecrire un nombre : " << std::endl;
    std::cin >> Nmb; // cin pour entrer des caractères
    std::cout << "Voici la variable de nombre : "<< Nmb << std::endl;

    int Age;
    std::cout << "Quel est ton age : " << std::endl;
    std::cin >> Age;
    std::cout << "ton age est de " << Age << " ans " << std::endl;
}

