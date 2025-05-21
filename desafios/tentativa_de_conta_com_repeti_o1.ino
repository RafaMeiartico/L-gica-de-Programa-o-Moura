/*Faça um programa que pede ao usuário o
resultado de uma conta simples, como "Quanto é 2 + 2?".
a. Se a resposta estiver errada, exiba "Tente novamente" 
e pergunte se ele quer tentar de novo.
b. Se a resposta estiver certa, exiba "Parabéns!".*/

int resposta, repetir;

void setup()
{
  Serial.begin(9600);
  
  do{
  Serial.println("Quanto eh 2 + 2?");
  while (! Serial.available());
  resposta = Serial.parseInt();
    
    if(resposta == 4){
    Serial.println("Parabens!");
    }else{
     Serial.println("Opa, Tente novamente");
     Serial.println("Deseja tentar mais uma vez? (sim ou nao, em minusculo, por favor.) \n");
     while( ! Serial.available());
     
      if(Serial.readString() == "sim"){
        repetir = 1;
      } else {
      repetir = 0;
        Serial.println("Obrigada por utilizar o nosso programa!");
      }
    }
    
  }while(repetir == 1);
  
}

void loop()
{
  //sem instruções 
}