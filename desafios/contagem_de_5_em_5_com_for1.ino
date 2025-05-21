/*Faça um programa que mostre os números de 0 até 50,
aumentando de 5 em 5 (ex: 0, 5, 10, 15...), usando while.*/

void setup()
{
  Serial.begin(9600);
  
  for(int numero = 0; numero <=50; numero += 5){
    Serial.println(numero);}
}

void loop()
{
 //sem instruções
}