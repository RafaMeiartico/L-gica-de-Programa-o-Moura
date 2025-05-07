// Maior de 6 = aprovado
// Menor de 6 = desaprovado

//Variaveis
int nota = 0;


void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Serial.println();
  Serial.println("Digite sua nota: ");
  while( !Serial.available());
  nota = Serial.parseInt();
  Serial.println();

  //processamento
  
  if (nota >= 6){
  Serial.println("aprovado");
  }else {
  Serial.println("reprovado");
  }
    
  delay(2000);
    
}