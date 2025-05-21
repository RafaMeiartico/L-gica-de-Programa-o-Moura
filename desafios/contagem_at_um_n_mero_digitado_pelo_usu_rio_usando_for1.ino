/*Faça um programa que peça para o
usuário digitar um número N, e depois mostre 
os números de 0 até N.*/

int contador = 1;
int numeroU;

void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("Digite um numero que voce deseje contar, a partir do 0");
  while(! Serial.available());
  numeroU = Serial.parseInt();
  
  for(contador = 1; contador <= numeroU ; contador+=1){
      Serial.println(contador);

  }
}

void loop()
{
 //sem instruções
}