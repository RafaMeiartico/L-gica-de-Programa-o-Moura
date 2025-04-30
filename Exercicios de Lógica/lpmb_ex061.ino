//Faça um programa que receba a medida em polegadas e exiba 
//esse número em centímetros.


//Váriaveis

float centimetro = 0;
float polegada = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("Digite seu numero em polegada:");
  while( !Serial.available() );
  polegada = Serial.parseInt();
  
  
 //processamento
  
  centimetro = polegada * 2.54;
  
 //saída
  
  Serial.println("Seu numero em centimetros eh: " + String(centimetro));
  Serial.println();
}