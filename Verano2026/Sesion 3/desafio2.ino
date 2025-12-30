// Desafío 2: Escribir por pantalla los rangos.

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

  if(ultrasonido > 10){
    escribir(0,0,"Lejos");
    pausa(250);
    borrar();
  } else {
    escribir(0,0,"Cerca");
    pausa(250);
    borrar();
  }

}
