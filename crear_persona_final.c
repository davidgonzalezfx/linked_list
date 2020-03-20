#include "persona.h"

persona *crear_persona_al_final(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad)
{
	persona *nueva_persona = malloc(sizeof(persona));
	if (!nueva_persona)
		return (NULL);

	nueva_persona->nombre = n_nombre;
	nueva_persona->apellido = n_apellido;
	nueva_persona->correo = n_email;
	nueva_persona->edad = n_edad;
	nueva_persona->siguiente = NULL;
	
	persona *persona_actual = *HEAD;
	if (!persona_actual)
		*HEAD = nueva_persona;
	else // recorrer hasta el ultimo nodo
	{
		while(persona_actual->siguiente)
			persona_actual = persona_actual->siguiente;
		persona_actual->siguiente = nueva_persona;
	}

	return (*HEAD);
}