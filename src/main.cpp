#include <Arduino.h>
/*#include "led.h"

Led ledAmareloA(48);
Led ledVermelhoA(0);
Led ledVerdeA(35);


void setup()
{
 ledAmareloA.iniciar();
 ledAmareloA.ativarPiscar();

 ledVermelhoA.iniciar();
 ledVermelhoA.ativarPiscar(1000);

 ledVerdeA.iniciar();
 ledVerdeA.ativarPiscar(2000);
}

void loop()
 {
  ledAmareloA.atualizar();
  ledVermelhoA.atualizar();
  ledVerdeA.atualizar();

 }*/
#include "botao.h"

Botao boot(0);

void setup()
{
    boot.iniciar();
    Serial.begin(9600);
}
void loop()
{
    boot.atualizar();
}