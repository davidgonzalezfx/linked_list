#include "persona.h"

void cambiar_persona(persona **HEAD, char *persona_a_cambiar, char *n_nombre, char *n_apellido, char *n_email, int n_edad)
{
	persona *p_actual = *HEAD;
	for (; p_actual->nombre != persona_a_cambiar; p_actual = p_actual->siguiente)
	{};

	p_actual->nombre = n_nombre;
	p_actual->apellido = n_apellido;
	p_actual->correo = n_email;
	p_actual->edad = n_edad;
	
}