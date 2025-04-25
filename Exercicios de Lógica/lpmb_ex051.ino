//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

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
  Serial.println("Digite seu numero em cm");
  while( !Serial.available() );
  centimetro = Serial.parseInt();
  
  
 //processamento
  
  polegada = centimetro * 2.54;
  
 //saída
  
  Serial.println("Seu numero em polegadas eh: " + String(polegada));
  Serial.println();
}