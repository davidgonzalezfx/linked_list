#include "persona.h"

int main(void)
{
	persona *HEAD;
	persona primera_persona = {"Alejandro", "Gomez", "ag@gmail.com", 25, NULL};
	HEAD = &primera_persona;

	printf("Numero total: %i\n", contar_personas(HEAD));

	persona *segunda_persona = malloc(sizeof(persona));
	segunda_persona->nombre = "Juan";
	segunda_persona->apellido = "Perez";
	segunda_persona->correo = "jp@gmail.com";
	segunda_persona->edad = 22;
	segunda_persona->siguiente = NULL;

	primera_persona.siguiente = segunda_persona;
	printf("Numero total: %i\n", contar_personas(HEAD));

	crear_persona_al_inicio(&HEAD, "Fernando", "Botero", "fb@gmail.com", 20);
	printf("Numero total: %i\n", contar_personas(HEAD));

	crear_persona_al_final(&HEAD, "Santiago", "Gutierrez", "sg@gmail.com", 21);
	printf("Numero total: %i\n", contar_personas(HEAD));

	cambiar_persona(&HEAD, "Fernando", "Jairo", "Sandoval", "js@gmail.com", 28);
	cambiar_persona(&HEAD, "Santiago", "David", "Gonzalez", "dg@gmail.com", 20);
	printf("Numero total: %i\n", contar_personas(HEAD));

	insertar_mitad(&HEAD, "tmp", "tmp", "tpm@gmail", 21);
	printf("Numero total: %i\n", contar_personas(HEAD));

	return (0);
}