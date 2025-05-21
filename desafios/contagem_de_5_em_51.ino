/*Faça um programa que mostre os números de 0 até 50,
aumentando de 5 em 5 (ex: 0, 5, 10, 15...), usando while.*/

int contador;

void setup()
{
  Serial.begin(9600);
  
  while(contador <= 50){
  Serial.println(contador);
    contador += 5;
  }
}

void loop()
{
  //sem instruções
}