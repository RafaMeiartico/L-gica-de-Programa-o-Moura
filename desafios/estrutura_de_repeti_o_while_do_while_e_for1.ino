/*
While - É uma estrutura de repetição que só executa quando a
condição é verdadeira.

*/

//A função SETUP() tem como o objetivo de inivializar o programa.
//Podemos chamar de configuração.
void setup()
{
  Serial.begin(9600);
  
  /*tipos de dados(principais)
  -INT (numeros inteiros)
  -LONG (numeros inteiros, é um int com maior capacidade)
  -FLOAT (numeros com casas decimais)
  -STRING (caracteres: alfanúmericos e especiais )
  -BOOL (true e false)
  */
  //Variaveis inicializadora
  int contadorWhile = 5; //variavel local
  
  while(contadorWhile >= 1){
  Serial.println(contadorWhile);
  contadorWhile--;
  //2a - contadorWhile = contadorWhile + 1;
  //3a - contadorWhile += 2;
  }
  
  /*
  aritméticos: +,-,*,/,%
  
  logico:
  -|| (PIPI)
  -&& (E COMERCIAL)
  -! (PONTO DE EXCLAMAÇÃO - NEGAÇÃO/INVERTE)
  
  relacional:
  - == (comparação)
  - 
  */
}

//A função LOOP() tem como o objetivo de repetir varias vezes o 
//programa.
void loop()
{
 
}