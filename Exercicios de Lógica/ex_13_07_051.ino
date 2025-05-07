/*Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.*/
//Variaveis
long numero; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite seu numero de usuario");
  while(!Serial.available());
  numero = Serial.parseInt();

  //saida
  if(numero % 2 == 0){
  Serial.println("Numero: " + String(numero));
  }else{
  Serial.println("Numero: ");
  }
   Serial.println();
 delay(2000);
}