#include <iostream>
#include <vector>
#include "Player.h"
#include "Rooms.h"
#include "Items.h"
#include "Enemy.h"
#include "Movimiento.h"
#include "Enemy.h"
#include "FactoryEnemy.h"
#include <map>

using namespace std;

int main() {
    // Crear jugador
    Player player("Aventurero");

    // Crear cuartos
    Room room1("Cuarto de Entrada", "Un gran vest�bulo oscuro y polvoriento te da la bienvenida.", "Fantasma", 50);
    Room room2("Biblioteca", "Estanter�as llenas de libros antiguos cubren las paredes.", "Libro Viviente", 30);
    Room room3("Sala de Armas", "Una sala llena de armas antiguas y armaduras, algunas parecen haber sido usadas recientemente.", "Caballero Espectral", 40);
    Room room4("Cocina Encantada", "Una cocina que parece preparar platos por s� sola, con ollas y sartenes flotando.", "Cocinero Fantasma", 35);
    Room room5("Jard�n Secreto", "Un hermoso jard�n oculto en el coraz�n del castillo, con una fuente en el centro.", "Hada", 25);
    Room room6("Calabozos", "Un fr�o y h�medo calabozo con cadenas en las paredes y un eco inquietante.", "Prisionero Maldito", 45);
    Room room7("Torre del Mago", "Una torre llena de instrumentos m�gicos y extra�os artefactos brillantes.", "Aprendiz de Brujo", 50);
    Room room8("Galer�a de Retratos", "Largas filas de retratos de antiguos habitantes del castillo, algunos parecen seguirte con la mirada.", "Retrato Encantado", 20);
    Room room9("Habitaci�n Real", "La lujosa habitaci�n del rey o reina del castillo, con un gran lecho y ricos tapices.", "Rey Espectro", 55);
    Room room10("Sala del Tesoro", "Una sala resplandeciente llena de oro, joyas y tesoros incontables, custodiada por un drag�n.", "Drag�n", 60);

    // Crear �tems
    Item espada("Espada");
    Item pocion("Poci�n");
    // ... Crear m�s �tems seg�n sea necesario

    // Asignar �tems y enemigos a cuartos
    room1.addItem(espada);
    room2.addItem(pocion);
    // ... Asignar �tems y enemigos a los dem�s cuartos

    // Mapear los movimientos a cuartos
    map<string, Room*> roomMap;
    roomMap["entrada"] = &room1;
    roomMap["biblioteca"] = &room2;
    roomMap["sala_armas"] = &room3;
    roomMap["cocina_encantada"] = &room4;
    roomMap["jardin_secreto"] = &room5;
    roomMap["calabozos"] = &room6;
    roomMap["torre_mago"] = &room7;
    roomMap["galeria_retratos"] = &room8;
    roomMap["habitacion_real"] = &room9;
    roomMap["sala_tesoro"] = &room10;
    // ... Agregar m�s cuartos al mapa

    // Configurar el cuarto inicial del jugador
    Room* currentRoom = &room1;

    // Bucle principal del juego
    bool gameRunning = true;
    while (gameRunning) {
        // Mostrar informaci�n del cuarto actual
        cout << "Est�s en " << currentRoom->getName() << endl;
        cout << currentRoom->getDescription() << endl;

        // Obtener comando del jugador
        cout << "> ";
        string command;
        getline(cin, command);

        // Procesar el comando
        if (command == "mirar") {
            // Mostrar detalles del cuarto actual, como �tems y enemigos
        }
        else if (command.find("mover ") == 0) {
            // L�gica para moverse a otro cuarto
        }
        else if (command == "recoger") {
            // L�gica para recoger �tems
        }
        else if (command == "combatir") {
            // L�gica para combatir enemigos
        }
        else if (command == "salir") {
            gameRunning = false;
        }
        else {
            cout << "No entiendo ese comando." << endl;
        }
    }

    cout << "Juego terminado." << endl;
    return 0;
}
