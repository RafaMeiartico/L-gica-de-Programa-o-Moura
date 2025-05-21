/*Faça um programa que mostre no Serial Monitor os números
de 0 até 100 usando while.*/

void setup()
{
  Serial.begin(9600);
  int contador = 0;

  while(contador <= 100){
    Serial.println(contador);
    contador++;
  }

  delay(2000);
}

void loop()
{
  //sem instrução
}