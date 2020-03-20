#include "persona.h"

persona *crear_persona_al_inicio(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad)
{
	persona *nueva_persona = malloc(sizeof(persona));
	if (!nueva_persona)
		return (NULL);

	nueva_persona->nombre = n_nombre;
	nueva_persona->apellido = n_apellido;
	nueva_persona->correo = n_email;
	nueva_persona->edad = n_edad;
	nueva_persona->siguiente = *HEAD;

	*HEAD = nueva_persona;

	return (*HEAD);
}