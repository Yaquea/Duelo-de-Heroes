#include <iostream>
#include <windows.h> // Para Sleep, genera un delay en la repeticion
#include <string> // Para string, ocupamos para tener una matriz de strings
#include "Funciones/Texto.h"
#include "Funciones/dibujante.h"

using namespace std;

// Funciones
int Bucle();
int Animacion(int, int);

// Main
int main() {
    Escritor texto;
    int key, clave, clave2;
    string Jugador;
    string Jugador2;

    texto.Menu();
    cin >> key;
    cout << endl;

    do {
        switch (key) {
            case 1: {
                do {
                    system("cls");
                    cout << "Bienvenido a Duelo de Heroes" << endl;
                    cout << "Este juego está pensado para 2 jugadores" << endl;

                    cout << "Ingrese el nombre del jugador 1: ";
                    cin >> Jugador;
                    cout << endl;

                    cout << "Ingrese el nombre del jugador 2: ";
                    cin >> Jugador2;
                    cout << endl;
                } while (Jugador == Jugador2);

                cout << "Iniciando......." << endl;
                system("cls");

                clave2 = Bucle();
                Sleep(2000);
                key = 4;

                break;
            }
            case 2: {
                system("cls");
                texto.Creditos();
                cout << "Seleccione una opcion: ";
                cin >> key;
                cout << endl;
                if (key == 2) {
                    system("cls");
                    texto.Menu();
                    cout << "Seleccione una opcion: ";
                    cin >> key;
                    cout << endl;
                }
                break; 
            }
            case 3: {
                do {
                    texto.Instrucciones();
                    cin >> clave;
                } while (clave < 1 || clave > 6);
                if (clave >= 1 && clave <= 5) {
                    texto.InstruccionesIndividuales(clave);
                    cin >> key;
                } else {
                    system("cls");
                    texto.Menu();
                    cout << "Seleccione una opcion: ";
                    cin >> key;
                    cout << endl;
                }
                break; 
            }
            case 4:
                Sleep(2000);
                system("cls");
                cout << "Saliendo del programa......" << endl;
                break; 
            default:
                Sleep(2000);
                system("cls");
                cout << "Opcion no válida. Saliendo del programa......" << endl;
                break;
        }
    } while (key != 4); 

    return 0;
}

int Bucle() {
    int Respuesta1;
    int Respuesta2;
    int Puntos1 = 0, Puntos2 = 0;

    for (int i = 1; i < 4; i++) {
        do {
            system("cls");
            cout << "Round " << i << endl;
            cout << "TURNO DEL JUGADOR 1" << endl;
            cout << "Jugador 2 no es tu turno..... volteate" << endl;
            cout << "Elige tu jugada" << endl;
            cout << "1- Guerrero" << endl;
            cout << "2- Mago" << endl;
            cout << "3- Escudero" << endl;
            cout << "4- Arquero" << endl;
            cin >> Respuesta1;
        } while (Respuesta1 < 1 || Respuesta1 > 4);

        do {
            system("cls");
            cout << "Round " << i << endl;
            cout << "TURNO DEL JUGADOR 2" << endl;
            cout << "Jugador 1 no es tu turno..... volteate" << endl;
            cout << "Elige tu jugada" << endl;
            cout << "1- Guerrero" << endl;
            cout << "2- Mago" << endl;
            cout << "3- Escudero" << endl;
            cout << "4- Arquero" << endl;
            cin >> Respuesta2;
        } while (Respuesta2 < 1 || Respuesta2 > 4);

        system("cls");

        // Guerrero
        if (Respuesta1 == 1) {
            // 4 casos vs respuesta 2
            if (Respuesta2 == 1 || Respuesta2 == 3) {
                Puntos1++;
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "EMPATE" << endl;
                Sleep(1000);
            } else if (Respuesta2 == 2) {
                Puntos1++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 1" << endl;
                Sleep(1000);
            } else {
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 2" << endl;
                Sleep(1000);
            }
        }
        // Mago
        else if (Respuesta1 == 2) {
            if (Respuesta2 == 2 || Respuesta2 == 4) {
                Puntos1++;
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "EMPATE" << endl;
                Sleep(1000);
            } else if (Respuesta2 == 3) {
                Puntos1++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 1" << endl;
                Sleep(1000);
            } else {
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 2" << endl;
                Sleep(1000);
            }
        }
        // Escudero
        else if (Respuesta1 == 3) {
            if (Respuesta2 == 3 || Respuesta2 == 1) {
                Puntos1++;
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "EMPATE" << endl;
                Sleep(1000);
            } else if (Respuesta2 == 4) {
                Puntos1++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 1" << endl;
                Sleep(1000);
            } else {
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 2" << endl;
                Sleep(1000);
            }
        }
        // Arquero
        else {
            if (Respuesta2 == 4 || Respuesta2 == 2) {
                Puntos1++;
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "EMPATE" << endl;
                Sleep(1000);
            } else if (Respuesta2 == 1) {
                Puntos1++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 1" << endl;
                Sleep(1000);
            } else {
                Puntos2++;
                Animacion(Respuesta1, Respuesta2);
                cout << "GANA JUGADOR 2" << endl;
                Sleep(1000);
            }
        }
    }

    if (Puntos1 > Puntos2) {
        cout << "JUGADOR UNO GANA" << endl;
        Sleep(3000);
        return 0;
    } else if (Puntos1 < Puntos2) {
        cout << "JUGADOR DOS GANA" << endl;
        Sleep(3000);
        return 1;
    } else {
        cout << "ESTO ES UN EMPATE" << endl;
        Sleep(3000);
        return 2;
    }
}

int Animacion(int Primer, int Segundo) {
    system("cls");

    Personajes Dibujante;

    // Hara un tiempo para aumentar el drama de la batalla
    Sleep(1000);
    cout << "Batallando.";
    Sleep(1000);
    cout << "....";
    Sleep(1000);
    cout << "..............";
    Sleep(1000);
    cout << endl;

    // Si elige 1
    if (Primer == 1) {
        Dibujante.Guerrero(); // Imprimira si o si el guerrero
        cout << endl << "                  vs                     " << endl;
        // Depende de la segunda peticion imprimira el otro personaje
        if (Segundo == Primer) {
            Dibujante.Guerrero();
        } else if (Segundo == 2) {
            Dibujante.Mago();
        } else if (Segundo == 3) {
            Dibujante.Escudero();
        } else {
            Dibujante.Arquero();
        }
    } else if (Primer == 2) { // Sabiendo que eligio 2 imprimer si o si al mago
        Dibujante.Mago();
        cout << endl << "                  vs                     " << endl;
        // Depende de la segunda peticion imprimira el otro personaje
        if (Segundo == Primer) {
            Dibujante.Mago();
        } else if (Segundo == 1) {
            Dibujante.Guerrero();
        } else if (Segundo == 3) {
            Dibujante.Escudero();
        } else {
            Dibujante.Arquero();
        }
    } else if (Primer == 3) { // Sabiendo que eligio 3 imprimer si o si al Escudero
        Dibujante.Escudero();
        cout << endl << "                  vs                     " << endl;
        // Depende de la segunda peticion imprimira el otro personaje
        if (Segundo == Primer) {
            Dibujante.Escudero();
        } else if (Segundo == 1) {
            Dibujante.Guerrero();
        } else if (Segundo == 2) {
            Dibujante.Mago();
        } else {
            Dibujante.Arquero();
        }
    } else if (Primer == 4) { // Sabiendo que eligio 4 imprimer si o si al Arquero
        Dibujante.Arquero();
        cout << endl << "                  vs                     " << endl;
        // Depende de la segunda peticion imprimira el otro personaje
        if (Segundo == Primer) {
            Dibujante.Arquero();
        } else if (Segundo == 1) {
            Dibujante.Guerrero();
        } else if (Segundo == 3) {
            Dibujante.Escudero();
        } else {
            Dibujante.Mago();
        }
    }
    Sleep(1000);
    return 0;
}
