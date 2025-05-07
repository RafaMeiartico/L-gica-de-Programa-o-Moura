/*Faça um programa que receba um número inteiro do usuário 
e informe se este número é positivo ou negativo.*/
//Variaveis
int numero;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite um numero inteiro");
  while(!Serial.available());
  numero = Serial.parseInt();

  //saida
  if(numero<0){
  Serial.println("Seu numero eh negativo");
  }else{
  Serial.println("Seu numero eh positivo");
  }
   Serial.println();
 delay(2000);
}