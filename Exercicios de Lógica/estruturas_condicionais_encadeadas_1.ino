/*
estruturas condicionais encadeadas (3 ou mais respostas)
*/

//infantil - 5 até 8
//cadete -8 até 12
// juvenil - 12 até 15
//junior - 15 até 18
//adulto - acima de 18
int idade = 4;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Academia do Davi");
  Serial.println();
  Serial.println("Seu sobrinho tem " + String(idade) + " anos");
  
  if(idade >= 5 && idade < 8){//idade entre 5 e 8?
  Serial.println("Cadastrado na categoria Infantil");
  }else if(idade >= 8 && idade < 12){
  Serial.println("Cadastrado na categoria Cadete");
  }else if( idade >= 12 && idade < 15){
  Serial.println("Cadastrado na categoria Juvenil");
  }else if(idade >= 15 && idade < 18){
  Serial.println("Cadastrado na categoria Junior");
  }else if(idade >= 18){
  Serial.println("Cadastrado na categoria Adulto");
  }else{
  Serial.println("Nao pode participar de esportes na academia do Davi");
  }
  
}

void loop()
{
  
  delay(3000);
}