/*Faça um programa que peça para o
usuário digitar um número N, 
e depois mostre os números de 0 até N.*/

int contador, numeroU;


void setup()
{
  Serial.begin(9600);

  Serial.println("Digite o numero que deseja contar, a partir do 0 (algum numero inteiro)");
  while(! Serial.available());
  numeroU = Serial.parseInt();


  while(contador <= numeroU){
    Serial.println(contador);
    contador++;
  }  
  delay(3000);
}

void loop()
{
  //sem instruções
}