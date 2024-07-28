#ifndef TEXTO_H
#define TEXTO_H

#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;

class Escritor {
public:
    Escritor() = default;
    ~Escritor() = default;

    void Menu() const {
        cout << "  Menu " << endl;
        cout << "1- Iniciar" << endl;
        cout << "2- Creditos" << endl;
        cout << "3- Instrucciones" << endl;
        cout << "4- Salir" << endl;
        cout << "Ingresa una opcion: ";
    }

    void Creditos() const {
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
    }

    void Instrucciones() const {
        system("cls");
        cout << "INSTRUCCIONES DE DUELO DE HEROES" << endl;
        cout << "Este juego es una simulacion de luchas entre heroes." << endl;
        cout << "Nostros elegimos a nuestros heroes que lucharan por nuestra victoria" << endl;
        cout << "Pero para ganar esta batalla necesitas saber las capacidades de tus heroes" << endl;
        cout << "1. Guerrero" << endl;
        cout << "2. Mago" << endl;
        cout << "3. Escudero" << endl;
        cout << "4. Arquero" << endl;
        cout << "5. Historia" << endl;
        cout << "6. regresar" << endl;
        cout << "Ingresse un numero para la informacion del heroe: " << endl;
    }

    int InstruccionesIndividuales(int Clave) const {
        switch (Clave) {
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
};

#endif
