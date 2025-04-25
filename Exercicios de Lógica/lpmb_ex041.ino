//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - 
//IMC = peso/ (altura * altura).

//declaração das variáveis
String nome = "";
int peso = 0;
float altura = 0;
float imc = 0;
  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite seu nome:");
  while( !Serial.available());
  nome = Serial.readString();
  
  Serial.println("Digite seu peso:");
  while( !Serial.available());
  peso = Serial.parseInt();
  
  Serial.println("Digite sua altura:");
  while( !Serial.available());
  altura = Serial.parseInt();
  
  //processamento 
  imc = peso/ (altura * altura);
  imc = Serial.parseInt();
    
  //saída
   Serial.println("Nome: " + nome);
   Serial.println("Seu IMC eh:" + String(imc));
   Serial.println();
  
  delay(1000);
}