// Desafío 2: Seguir la línea con 1 solo sensor y detenerse con ultrasonido.

#include <Zapemi_ShieldV1.h>

int ultrasonido;
int sensorLineaCentro;

void setup() {
  usarMotores();
  usarSensores();

  borrar();
}

void loop() {

  ultrasonido = medirDistancia();
  sensorLineaCentro = sensorCentro();

  if(ultrasonido >= 5 && ultrasonido <= 10){
    detener();
  }

  if(sensorLineaCentro == 1){
    avanzar(80,150);
  } else {
    avanzar(150,80);
  }


}
