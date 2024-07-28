#ifndef DIBUJANTE_H  // Inicio de las guardas de inclusión
#define DIBUJANTE_H

#include <iostream>
using namespace std;

class Personajes  // Declaración de la clase 'Personajes'
{
public:
    // Constructor
    Personajes() = default;

    // Destructor
    ~Personajes() = default;

    // Funciones miembro
    void Guerrero() const {
        // Matriz 7x5 para representar la espada
        string classs[7][5] = {
            {" ", " ", "=", " ", " "},
            {" ", "=", "=", "=", " "},
            {" ", "=", "=", "=", " "},
            {" ", "=", "=", "=", " "},
            {"=", "=", "=", "=", "="},
            {" ", " ", "#", " ", " "},
            {" ", " ", "#", " ", " "}
        };

        // Imprimir la matriz
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 5; j++) {
                cout << classs[i][j];
            }
            cout << endl;
        }
    }

    void Mago() const {
        // Matriz estática 7x5 para representar la varita
        char classs[7][5] = {
            {' ', '#', '#', '#', ' '},  
            {' ', '#', ' ', '#', ' '}, 
            {' ', ' ', '#', ' ', ' '},  
            {' ', ' ', '#', ' ', ' '},  
            {' ', ' ', '#', ' ', ' '},
            {' ', ' ', '#', ' ', ' '},  
            {' ', ' ', '#', ' ', ' '}   
        };

        // Imprimir la matriz
        cout << endl;
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 5; j++) {
                cout << classs[i][j];
            }
            cout << endl;
        }
    }

    void Escudero() const {
        // Matriz estática 7x5 para representar el escudo
        char classs[7][5] = {
            {'#', '#', '#', '#', '#'},  
            {'#', ' ', ' ', ' ', '#'},  
            {'#', ' ', ' ', ' ', '#'},
            {'#', ' ', ' ', ' ', '#'},
            {' ', '#', ' ', '#', ' '},  
            {' ', ' ', '#', ' ', ' '},  
            {' ', ' ', ' ', ' ', ' '}   
        };

        // Imprimir la matriz
        cout << endl;
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 5; j++) {
                cout << classs[i][j];
            }
            cout << endl;
        }
    }

    void Arquero() const {
        // Matriz estática 7x5 para representar el arco
        char classs[7][5] = {
            {'#', '#', ' ', ' ', ' '},  
            {'|', ' ', '#', ' ', ' '},  
            {'|', ' ', ' ', '#', ' '},  
            {'|', ' ', ' ', '#', '='},  
            {'|', ' ', ' ', '#', ' '},  
            {'|', ' ', '#', ' ', ' '},  
            {'#', '#', ' ', ' ', ' '}   
        };

        // Imprimir la matriz
        cout << endl;
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 5; j++) {
                cout << classs[i][j];
            }
            cout << endl;
        }
    }
};

#endif // DIBUJANTE_H  // Fin de las guardas de inclusión
