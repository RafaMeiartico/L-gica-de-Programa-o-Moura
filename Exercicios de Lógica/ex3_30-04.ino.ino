//Maior de 18 "maior de idade"
//menor de 18 "menor de idade"

//Variaveis
int idade = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada
  
  Serial.println("Idade: " + String(idade));
  
  Serial.println();
  Serial.println("Digite sua idade");
  while( !Serial.available());
  idade = Serial.parseInt();
  Serial.println();

  //processamento
  
  if (idade >= 18){
  Serial.println("Maior de idade");
  }else {
  Serial.println("Menor de idade");
  }
    
  delay(2000);
    
}