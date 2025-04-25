//faça um programa que receba a idade de uma pessoa em anos 
//imprima essa idade em: Meses, dias, Horas, Minutos.

//Declaração de variável
float idade = 0;
float idadeMeses = 0;
float idadeDias = 0;
float idadeHoras = 0;
float idadeMinutos = 0;
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada 
  Serial.println("digite sua idade em anos");
  while( !Serial.available() );//espera o usuário dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em número
  idadeMeses = Serial.parseInt();
  idadeDias = Serial.parseInt();
  idadeHoras = Serial.parseInt();
  idadeMinutos= Serial.parseInt();
  
  //Processamento
  idadeMeses = idade * 12; //
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
  
  //saída
  Serial.println("Idade em meses: " + String(idadeMeses, 0));
  Serial.println("Idade em dias: " + String(idadeDias, 0));
  Serial.println("Idade em horas: " + String(idadeHoras,0 ));
  Serial.println("Idade em minutos: " + String(idadeMinutos, 0));
  Serial.println();
  
  delay(1000);
  
}