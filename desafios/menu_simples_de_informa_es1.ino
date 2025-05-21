/*Menu simples de informações - Faça um programa que simula 
um robô de atendimento. Ele deve mostrar o seguinte menu:

1 - Ver telefone
2 - Ver endereço
3 - Sair

a) Se o usuário escolher a opção 1, exiba o telefone: 7070-7070
b) Se o usuário escolher a opção 1, exiba o endereço: 
Rua Niterói 180 – São Caetano do Sul – SP.*/

int escolhaMenu;

void setup()
{
  Serial.begin(9600);

  do {
    

    Serial.println("Ola, seja bem-vindo(a) ao servico de atendimento.");
    Serial.println("Por favor, escolha uma das opcoes:");
    Serial.println("1 - Ver telefone");
    Serial.println("2 - Ver endereco");
    Serial.println("3 - Sair \n");
    while(! Serial.available ());
    escolhaMenu = Serial.parseInt();

    

    switch(escolhaMenu){
      case 1:
      Serial.println("Telefone: 7070-7070 \n");
      break;


      case 2:
      Serial.println("Endereco: Rua Niteoi 180, Sao Caetano do Sul, SP. \n");
      break;

        case 3:
      Serial.println("Ate breve");
      break;

      default:
      Serial.println("Opa, opcao invalida, tente novamente \n");

    }

  } while(escolhaMenu != 3);
  
  

  Serial.println("Para utilizar novamente o programa, reinicie o sistema \n");
}




void loop()
{
  //sem instruções
}