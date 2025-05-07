/*Faça um programa receba dois valores e imprima qual 
é o maior número digitado.*/
//Variaveis
int numero, numero2;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu numero");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  Serial.println("Certo, agora digite outro numero");
  while(! Serial.available());
  numero2 = Serial.parseInt();
  
  if(numero < numero2){
    Serial.println("Maior numero: " + String(numero2));
  }else{
  Serial.println("Maior numero: " + String(numero));
  }
}