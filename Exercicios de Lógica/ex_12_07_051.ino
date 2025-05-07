/*Faça um programa que receba um número do usuário e 
informe se este número é par ou ímpar.*/
//Variaveis
int numero;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite um numero");
  while(!Serial.available());
  numero = Serial.parseInt();

  //saida
  if(numero % 2 == 1){
  Serial.println("Seu numero eh impar");
  }else{
  Serial.println("Seu numero eh par");
  }
   Serial.println();
 delay(2000);
}