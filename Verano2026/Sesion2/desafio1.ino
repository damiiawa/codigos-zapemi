// El desafío consiste en utilizar funciones de movimiento y pausa de acciones.
// OPCIONAL: Agregar detener después de cada acción para facilitar visualización y cambio de estado.

#include <Zapemi_ShieldV1.h>

void setup() {
  usarMotores();

}

void loop() {
  avanzar(150);
  pausa(800);
  retroceder(150);
  pausa(800);
  izquierda(150);
  pausa(1200);
  derecha(150);
  pausa(1200);

  apagar();
  

}
