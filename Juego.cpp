#include <iostream>
#include <windows.h> // Para Sleep, genera un delay en la repeticion//
#include <string> // Para string, ocupamos para tener una matriz de stings//

using namespace std;

//Voy a seguir trabajando en esto

//Funciones//
void Menu();
void Creditos();
int Bucle();
int Animacion(int, int);
void Instrucciones();
int InstruccionesIndividuales(int);

//clases//
//Se construyen y se dibujan las clases//
void Guerrero();
void Mago();
void Escudero();
void Arquero();


//Main//
int main() {
    int key, clave, clave2;
    string Jugador;
    string Jugador2;

  
    Menu();
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
                Creditos();
                cout << "Seleccione una opcion: ";
                cin >> key;
                cout << endl;
                if (key == 2) {
                    system("cls");
                    Menu();
                    cout << "Seleccione una opcion: ";
                    cin >> key;
                    cout << endl;
                }
                break; 
            }
            case 3: {
                do {
                    Instrucciones();
                    cin >> clave;
                } while (clave < 1 || clave > 6);
                if (clave >= 1 && clave <= 5) {
                    InstruccionesIndividuales(clave);
                    cin >> key;

                    
                } else {
                    system("cls");
                    Menu();
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

//Esta funcion lo unico que hace es llamar a la pantalla la escritura del menu para que pueda ser reutilizable//
void Menu() {
    cout << "  Menu " << endl;
    cout << "1- Iniciar" << endl;
    cout << "2- Creditos" << endl;
    cout << "3- Instrucciones" << endl;
    cout << "4- Salir" << endl;
    cout << "Ingresa una opcion: ";
}

//Esta funcion lo unico que hace es llamar a la pantalla la escritura de los creditos para que pueda ser reutilizable//
void Creditos(){
    cout << "   Creditos   " << endl;
    cout << "Este juego fue realizado en la colaboracion de: " << endl;
    cout << "-JEREMY BOANERGES PENATE RECINO, 00063524" << endl;
    cout << "https://github.com/J-BOA" << endl;
    cout << "..................................................." << endl;
    cout << "-BRYAN ALEXANDER PALACIOS MIRANDA, 00185624" << endl;
    cout << "https://github.com/bry019" << endl;
    cout << "..................................................." << endl;
    cout << "-LUIS GERARDO SANDOVAL CHEVEZ, 00014524" << endl;
    cout << "https://github.com/GerardoSandovall" << endl;
    cout << "..................................................." << endl;
    cout << "1- Jugar" << endl;
    cout << "2- Menu" << endl;
    cout << "3- Instucciones" << endl;
    cout << "4- Salir" << endl;
}//agregando contactos

//Esta funcion lo unico que hace es llamar a la pantalla la escritura de las Instrucciones para que pueda ser reutilizable//
void Instrucciones(){
    system("cls");
    cout<< "INSTRUCCIONES DE DUELO DE HEROES" << endl;
    cout<< "Este juego es una simulacion de luchas entre heroes." << endl;
    cout<< "Nostros elegimos a nuestros heroes que lucharan por nuestra victoria" << endl;
    cout<< "Pero para ganar esta batalla necesitas saber las capacidades de tus heroes" << endl;
    cout<< "1. Guerrero" << endl;
    cout<< "2. Mago" << endl;
    cout<< "3. Escudero" << endl;
    cout<< "4. Arquero" << endl;
    cout<< "5. Historia" << endl;
    cout<< "6. regresar"  << endl;
    cout<< "Ingresse un numero para la informacion del heroe: " << endl;
}

int InstruccionesIndividuales(int Clave){
    //Pedira una clave para llamar a la informacion de cada heroe se ocupa un switch para facilitar la legibilidad//
    switch (Clave)
    {
    case 1:
    system("cls");
        cout << "En un reino lejano, rodeado de frondosos bosques y montañas majestuosas," << endl;
        cout << "vivia Aric, un joven guerrero de noble cuna, hijo del renombrado Duque Eldric." << endl;
        cout << "Desde su infancia, Aric había oído las leyendas de su linaje," << endl;
        cout << "de como sus ancestros habían defendido al reino en tiempos de oscuridad." << endl;
        cout << "Sin embargo, para ser aceptado como un verdadero héroe por la Corte de los Renos," << endl;
        cout << "la autoridad mas respetada y mística del reino, debía demostrar su valentía y honor." << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "RESULTADOS DE BATALLAS" << endl;
        cout << "-El Guerrero empatara con el mismo" << endl;
        cout << "-El Guerrero empara con el Escudero" << endl;
        cout << "-El Mago caera bajo la espada del Guerrero" << endl;
        cout << "-El Arquero atacara a la distancia, ganandole al Guerrero" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "OPCIONES" << endl;
        cout << "1- Jugar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Regresar" << endl;
        cout << "4- Salir" << endl;
        break;
     case 2:
     system("cls");
        cout << "En un humilde rincón del bosque, nació Zeno, hijo de leñadores," << endl;
        cout << "rodeado de la magia ancestral de las raíces que alimentaban su hogar." << endl;
        cout << "Desde pequeño, mostró un talento innato para la magia de raíces," << endl;
        cout << "haciendo crecerlas con solo susurros, su fama se extendió más allá del bosque,  " << endl;
        cout << "hasta llegar a los oídos de la corte de los renos, quienes, impresionados por sus habilidades," << endl;
        cout << "Con el tiempo se volvio un miembro muy poderoso de la corte de los renos" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "RESULTADOS DE BATALLAS" << endl;
        cout << "-El Mago empatara con el mismo"  << endl;
        cout << "-El Mago empatara con el arquero debido a que no puede alcanzar al Arquero con sus raices"  << endl;
        cout << "-El Guerrero tomara por sorpresa y cortara las raices del mago, asi es como el Mago perdera la batalla" << endl;
        cout << "-El Mago atrapara con sus raices al Escudero, ganandole al instante" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "OPCIONES" << endl;
        cout << "1- Jugar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Regresar" << endl;
        cout << "4- Salir" << endl;
        break;
     case 3:
     system("cls");
        cout << "En las vastas llanuras blancas de Lisidia, donde el mar de sal se extendía hasta el horizonte," << endl;
        cout << "creció Kael, un joven arquero con ojos de halcón y una precisión letal." << endl;
        cout << "Desde temprana edad, Kael tuvo que cazar para alimentar a su familia," << endl;
        cout << "enfrentándose a los vientos implacables y al reflejo cegador del sol sobre la sal." << endl;
        cout << "La necesidad y la perseverancia afinaron su habilidad para el tiro a distancia," << endl;
        cout << "permitiéndole acertar a su presa desde distancias asombrosas." << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "RESULTADOS DE BATALLAS" << endl;
        cout << "El Arquero empatara consigo mismo" << endl;
        cout << "El Arquero empatara con el Mago debido a que no puede atravesar sus raices" << endl;
        cout << "El Guerrero no podra atrapar por sorpresa al Arquero, llevandose la victoria el Arquero" << endl;
        cout << "El Arquero no podra penetrar la defensa de el escudero, llevara a perder la batalla al Arquero" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "OPCIONES" << endl;
        cout << "1- Jugar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Regresar" << endl;
        cout << "4- Salir" << endl;
        break;
     case 4:
     system("cls");
        cout << "Cerca del imponente volcán Ferroso de Portem, nació Ivar, hijo del mejor herrero de la región." << endl;
        cout << "Desde niño, soñó con proteger su reino con valentía y honor." << endl;
        cout << "Su padre, con manos endurecidas por el fuego y la forja, creó un escudo incomparable:" << endl;
        cout << "el más duro y liviano jamás visto, forjado con el hierro volcánico más puro." << endl;
        cout << "Con este escudo, Ivar se convirtió en escudero, protegiendo a su reino con una devoción inquebrantable." << endl;
        cout << "En cada batalla, su escudo brillaba con el resplandor del volcán." << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "RESULTADOS DE BATALLAS" << endl;
        cout << "El escudero empatara en un combate con si mismo" << endl;
        cout << "El escudero empatara en un combate con el Guerrero" << endl;
        cout << "El Escudero lograra la victoria contra el arquero, acercandose cada vez mas por el origen de las ferocez flechas" << endl;
        cout << "El escudero perdera contra el Mago, confiando en su escudo sus piernas se quedan desprotegidas a un ataque desde el suelo" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "OPCIONES" << endl;
        cout << "1- Jugar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Regresar" << endl;
        cout << "4- Salir" << endl;
        break;

        case 5:
        system("cls");
        cout << "En el mundo medieval de Gwing, \"Los Jugadores\" se preparaban para un duelo decisivo." << endl;
        cout << "La llama imperial, simbolo de poder y gobernanza, estaba en juego, y quien la obtuviera gobernaria el imperio por los proximos cien anos." << endl;
        cout << "La contienda no se resolveria con espadas o magia, sino con un antiguo ritual conocido como \"Duelo de Heroes\", un duelo al estilo de piedra, papel y tijeras." << endl;
        cout << "Cada uno de los jugadores, envueltos en sus capas ceremoniales, se situaba en el centro de la arena, rodeado de expectantes ciudadanos y nobles." << endl;
        cout << "El aire estaba cargado de tension y misticismo, mientras el consejo de ancianos explicaba las reglas una vez mas: cada heroe tenia una fuerza y una debilidad, y la eleccion errada podia significar la derrota inmediata." << endl;
        cout << endl;
        cout << "El sol se ocultaba tras las montanas cuando el duelo comenzo." << endl;
        cout << "Las sombras danzaban alrededor de \"Los Jugadores\", quienes, con sus manos ocultas tras sus capas, eligieron sus heroes en silencio." << endl;
        cout << "Las miradas se cruzaron, determinacion y nerviosismo entrelazados" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "OPCIONES" << endl;
        cout << "1- Jugar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Regresar" << endl;
        cout << "4- Salir" << endl;
        break;

    default:

        break;
    }    
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
                // 4 casos vs respuesta 2
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
                // 4 casos vs respuesta 2
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
                // 4 casos vs respuesta 2
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
        if(Puntos1 > Puntos2){
            
            cout << "JUGADOR UNO GANA" << endl;
            Sleep(3000);
            return 0;
        }
        else if (Puntos1 < Puntos2)
        {
            cout << "JUGADOR DOS GANA" << endl;
            Sleep(3000);
            return 1;
        }
        else{
            cout << "ESTO ES UN EMPATE" << endl;
            Sleep(3000);
            return 2;
        }
        
}

void Guerrero() {
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

void Mago() {
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

void Escudero() {
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
void Arquero() {
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

int Animacion(int Primer, int Segundo){
    system("cls");

    //Hara un tiempo para aumentar el drama de la batalla//
    Sleep(1000);
    cout << "Batallando.";
    Sleep(1000);
    cout << "....";
    Sleep(1000);
    cout << "..............";
    Sleep(1000);
    cout << endl ;

//Si elige 1//
    if (Primer == 1){
        Guerrero(); //Imprimira si o si el guerrero//
        //Para simular batalla//
        cout<< endl << "                  vs                     " << endl;
        //Depende de la segunda peticion imprimira el otro personaje//
        if (Segundo == Primer)
        {
            Guerrero();
        }
        else if (Segundo == 2)
        {
            Mago();
        }
        
        else if (Segundo == 3)
        {
            Escudero();
        }
        else{
            Arquero();
        }
    }
        else if (Primer == 2){ //Sabiendo que eligio 2 imprimer si o si al mago//
        Mago();
        cout<< endl << "                  vs                     " << endl;
        //Depende de la segunda peticion imprimira el otro personaje//
        if (Segundo == Primer){
            Mago();
        }
        else if (Segundo == 1){
            Guerrero();
        }
        else if (Segundo == 3)
        {
            Escudero();
        }
        else{
            Arquero();
        }
    }
        else if (Primer == 3){ //Sabiendo que eligio 3 imprimer si o si al Escudero//
        Escudero();
        cout<< endl << "                  vs                     " << endl;
        //Depende de la segunda peticion imprimira el otro personaje//
        if (Segundo == Primer){
            Escudero();
        }
        else if (Segundo == 1){
            Guerrero();
        }
        else if (Segundo == 2)
        {
            Mago();
        }
        else{
            Arquero();
        }
    }
        else if (Primer == 4){//Sabiendo que eligio 4 imprimer si o si al Arquero//
        Arquero();
        cout<< endl << "                  vs                     " << endl;
        //Depende de la segunda peticion imprimira el otro personaje//
        if (Segundo == Primer){
            Arquero();
        }
        else if (Segundo == 1){
            Guerrero();
        }

        else if (Segundo == 3)
        {
            Escudero();
        }
        else{
            Mago();
        }
    }
    Sleep(1000);
    return 0;
}