/*
While - É uma estrutura de repetição que só executa quando a
condição é verdadeira.

*/

//A função SETUP() tem como o objetivo de inivializar o programa.
//Podemos chamar de configuração.
void setup()
{
  Serial.begin(9600);
  
int contadorWhile = 0; //variavel local
  
  while(contadorWhile <= 100){
  Serial.println(contadorWhile);
  contadorWhile += 2;
  }
}

//A função LOOP() tem como o objetivo de repetir varias vezes o 
//programa.
void loop()
{
 
}