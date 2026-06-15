#ifndef RUTA_H
#define RUTA_H

#include "../ciudad/ciudad.h"

class Ruta {
private:
	Ciudad* caminoOptimo;    // Array dinámico de ciudades en orden: [Origen, ...CiudadesEnMedio, Destino]
    int cantidadCiudadesCamino; // Cuántas ciudades componen esta ruta específica
    int distanciaTotal;      // El costo total del viaje en km (resultado de Dijkstra)

public:
    // El constructor recibe todo lo necesario para calcular
	Ruta(int idOrigen, int idDestino, int** matrizAdyacencia, Ciudad listaCiudades[], int totalCiudadesSistema);
	~Ruta(); // Destructor vital porque 'caminoOptimo' va a ser dinámico

    // Getters para que la UI obtenga la data masticada
	int obtenerDistanciaTotal();
	int obtenerCantidadCiudadesCamino();

	// El método clave para pasarle el camino limpio a la UI
	void pasarCaminoAInterfaz(Ciudad arrayDestinoUI[]);
	void calcularDijkstra(int idOrigen, int idDestino, int** matrizAdyacencia, Ciudad listaCiudades[], int totalCiudadesSistema);
};

#endif
