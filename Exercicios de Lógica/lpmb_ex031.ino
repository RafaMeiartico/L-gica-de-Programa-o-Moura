//Faça um programa que receba um número e exiba o seu dobro.
  
//Declaração de variáveis
long numero = 0;


void setup()
{
  Serial.begin(9600);
}


void loop()
{
 //Entrada
  Serial.println("Digite seu numero");
  while( !Serial.available() ); //espera o usuário dar enter
  numero = Serial.parseInt(); 
  
 //Processamento
  
    numero = numero * 2;
      
 //Saída
    
    Serial.println("Seu numero dobrado eh "  + String(numero));
    Serial.println();
  
  delay(1000);
}