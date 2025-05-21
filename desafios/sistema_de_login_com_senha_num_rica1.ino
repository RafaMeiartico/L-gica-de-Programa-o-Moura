/*Faça um programa que peça ao usuário uma
senha de 4 dígitos.
a. Se a senha estiver correta ao que você definir na condição, 
mostrar "Login efetuado com sucesso".
b. Se estiver errada, mostrar "Senha incorreta. 
Tente novamente" e repetir até acertar.
c. Desafio (opcional): Bloquear o acesso por 2 minutos 
após 3 tentativas erradas.*/

int senha, resposta, erro, acerto, tentativa;

void setup()
{
  Serial.begin(9600);
  Serial.println("Ola, digite a sua senha de 4 digitos \n");
  while(! Serial.available());
  senha = Serial.parseInt();

  do{
    Serial.println("Digite a sua senha");
    while(! Serial.available());
    resposta = Serial.parseInt();


    if(senha == resposta){
      Serial.println("Login efetuado com sucesso \n");
      acerto = 1;
      tentativa = 0;

    } else {
      Serial.println("Senha incorreta. Tente novamente \n");
      tentativa++;

      if( tentativa == 3){
        Serial.println("Muitas tentativas, bloqueio de 2 minutos");
        delay(120000);
      }
    }
  } while(tentativa != 0);
}

void loop()
{
  //sem instruções
}