
// Declara las funciones para inicializar la paleta
// , actualizar su posici�n y dibujarla, adem�s de funciones para obtener su posici�n o estado.
// player.h
#pragma once     

// Estructura de la ia
typedef struct Ia {
    float posY;
    float posX;
    int width;
    int height;
    float speed;
    bool up = false;
    bool down = false;
    bool special = false;


} Ia;

