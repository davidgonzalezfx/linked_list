#include "persona.h"

persona *insertar_mitad(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad)
{
	int total_personas = 0;
	int mitad = 0, i = 0;
	persona *tmp = *HEAD;

	for (; tmp; tmp = tmp->siguiente, total_personas++)
	{};
	mitad = total_personas / 2;

	tmp = *HEAD;
	for (; i < mitad; tmp = tmp->siguiente, i++)
	{};

	persona *nueva_persona = malloc(sizeof(persona));
	if (!nueva_persona)
		return (NULL);
	nueva_persona->nombre = n_nombre;
	nueva_persona->apellido = n_apellido;
	nueva_persona->correo = n_email;
	nueva_persona->edad = n_edad;
	nueva_persona->siguiente = tmp;

	tmp = *HEAD;
	for (i = 0; i < mitad - 1; tmp = tmp->siguiente, i++)
	{};
	tmp->siguiente = nueva_persona;

	return (*HEAD);
}