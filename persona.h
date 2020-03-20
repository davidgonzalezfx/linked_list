#ifndef PERSONA_H
#define PERSONA_H

#include <stdio.h>
#include <stdlib.h>


typedef struct persona {
	char *nombre;
	char *apellido;
	char *correo;
	int edad;
	struct persona *siguiente;
} persona;

int contar_personas(persona *HEAD);
persona *crear_persona_al_inicio(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
persona *crear_persona_al_final(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
void cambiar_persona(persona **HEAD, char *persona_a_cambiar, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
persona *insertar_mitad(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);

#endif /* PERSONA_H */