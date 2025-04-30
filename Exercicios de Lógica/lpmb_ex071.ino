// Faça um programa que receba o nome, cargo e salário 
//de um funcionário. Calcule o salário acrescido de 10%. 
//Ao final exiba o nome, o cargo e o novo salário desse 
//funcionário.
 
//Variáveis
String nome = " ";
String cargo = " ";
float salario = 0;
float salariof = 0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Qual o seu nome:");
  while( !Serial.available());
  nome = Serial.readString();
  
  Serial.println("Agora, qual seu cargo na empresa que voce Trabalha?:");
  while( !Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Certo, qual o seu salario?:");
  while ( !Serial.available());
  salario = Serial.parseInt();
  
  
  //processamento
  
  salariof = salario + (salario * 10/100);
  
  //saida
  
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Novo salario: " + String(salariof));
  Serial.println();
}