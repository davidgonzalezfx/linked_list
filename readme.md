# Linked List explanation

- What is a linked list
- How it works

#### Exercise
- Create nodes
   - At the begining of the list
   - At the end of the list
   - At the middle of the list

#### Usage
Execute this to compile:
```$ gcc -g -Wall -pedantic -Werror main.c contar_personas.c crear_persona_final.c crear_persona_inicio.c cambiar_persona.c insertar_mitad.c -o test.exe```

Execute this to execute ```$ ./test.exe```
<br><br>
#### Struct
```c
typedef struct persona {
        char *nombre;
        char *apellido;
        char *correo;
        int edad;
        struct persona *siguiente;
} persona;
```
<br>

#### Prototypes
```c
int contar_personas(persona *HEAD);
persona *crear_persona_al_inicio(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
persona *crear_persona_al_final(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
void cambiar_persona(persona **HEAD, char *persona_a_cambiar, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
persona *insertar_mitad(persona **HEAD, char *n_nombre, char *n_apellido, char *n_email, int n_edad);
```
<br>

#### Files

| File        | Description |
| ----------- | ----------- |
| main.c      | main file for testing our functions|
| persona.h   | Header file, here we define our struct "persona"|
| contar_persona.c | Function to list and print our list of persons|
| crear_persona_inicio.c | Function to create new node "persona" at the beginig of the list|
| crear_persona_end.c | Function to create new node "persona" at the end of the list|
| insertar_mitad.c | Function to create new node "persona" at the mid of the list|
| cambiar_persona.c | Function to edit data of nodes, that match by name|
| test.exe | Executable file
<br>

#### For more info about this PLD you can visit