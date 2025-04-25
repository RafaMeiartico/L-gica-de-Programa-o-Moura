//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Declaração de variável
int anoAtual = 0;
int anoNascimento = 0;
int idade = 0;
long idadeSemanas = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada
  
  Serial.println("digite seu ano de nascimento");
  while( !Serial.available() );//espera o usuário dar <Enter>
  anoNascimento = Serial.parseInt();
  
  Serial.println("digite seu ano atual");
  while( !Serial.available() );//espera o usuário dar <Enter>
   anoAtual = Serial.parseInt();
  
  
 //Processamento
  
  idade = anoAtual - anoNascimento;
  idadeSemanas = idade * 52;
  
 //Saída
  
   Serial.println("Idade: " + String(idade) + " anos");
   Serial.println("Idade em semanas: " + String(idadeSemanas));
  
  delay(1000);
}