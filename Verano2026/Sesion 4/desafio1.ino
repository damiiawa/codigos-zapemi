// Desafío 1: Seguir la línea con 1 solo sensor (centro)

#include <Zapemi_ShieldV1.h>


int sensorLineaCentro;

void setup() {
  usarMotores();
  usarSensores();

  borrar();
}

void loop() {

  
  sensorLineaCentro = sensorCentro();

  if(sensorLineaCentro == 1){
    avanzar(80,150);
  } else {
    avanzar(150,80);
  }

}
