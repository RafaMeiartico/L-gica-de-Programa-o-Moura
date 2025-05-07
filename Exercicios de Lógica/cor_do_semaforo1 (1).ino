//Verde "siga"
//Vermelho "pare"

//Variaveis
String corSemaforo = "";

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  
  Serial.println();
  Serial.println("Digite a cor de um semaforo, entre verde e vermelho:");
  while( !Serial.available());
  corSemaforo = Serial.readString();
  Serial.println();

  
  if (corSemaforo == "vermelho"){
  Serial.println("pare");
  }else {
  Serial.println("siga");
  }
    
  delay(2000);
    
}