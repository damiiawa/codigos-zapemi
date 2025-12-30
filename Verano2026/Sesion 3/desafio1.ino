// Desafío 1: Mostrar por pantalla valores de la variable ultrasonido.

#include <Zapemi_ShieldV1.h>

int ultrasonido;

void setup() {
  usarMotores();
  usarSensores();
  usarPantalla();

  borrar();
}

void loop() {

  ultrasonido = medirDistancia();

  escribir(0,0,ultrasonido);
  pausa(250);
  borrar();

}
