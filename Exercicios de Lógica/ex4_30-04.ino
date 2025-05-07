// Senha 1234 = permitido
//qualquer outra = negado

long senha = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  
  Serial.println("Digite a sua senha:");
  while(! Serial.available());
  senha = Serial.parseInt();
  
  //Processamento
  
  if(senha == 1234){
  Serial.println("Permitido");
  }else{
  Serial.println("Negado");
  }
  
  delay(2000);
}