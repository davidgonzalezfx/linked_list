#include "persona.h"

int contar_personas(persona *HEAD)
{
	int numero_personas = 0;
	persona *actual = HEAD;

	printf("\nInicio de la lista\n");
	printf("- - - - - -\n");
	while(actual)
	{
		printf("Nombre: %s %s - correo: %s - edad: %d\n", actual->nombre, actual->apellido, actual->correo, actual->edad);
		numero_personas++;
		actual = actual->siguiente;
	}
	
	return (numero_personas);

}