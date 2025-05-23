// C++ code
//

int ledVerde = 13;
int ledAmarelo = 11;
int ledVermelho = 9;
int escolhaLed;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);


  Serial.begin(9600);

  do{

    Serial.println("Ola, escolha uma das opcoes a seguir");
    Serial.println("1 - Ligar Led Verde");
    Serial.println("2 - Desligar Led Verde");
    Serial.println("3 - Ligar Led Amarelo");
    Serial.println("4 - Desligar Led Amarelo");
    Serial.println("5 - Ligar Led Vermelho");
    Serial.println("6 - Desligar Led Vermelho");
    Serial.println("7 - Ligar Todos os Leds");
    Serial.println("8 - Desligar Todos os Leds");
    Serial.println("9 - Sair \n");
    while(! Serial.available());
    escolhaLed = Serial.parseInt();

    switch (escolhaLed){
      case 1:
      digitalWrite(ledVerde, HIGH); 
      Serial.println("led verde ligado.");
      break;


      case 2:
      digitalWrite(ledVerde, LOW); 
      Serial.println("led verde desligado.");
      break;


      case 3:
      digitalWrite(ledAmarelo, HIGH); 
      Serial.println("led amarelo ligado.");
      break;


      case 4:
      digitalWrite(ledAmarelo, LOW); 
      Serial.println("led amarelo desligado.");
      break;


      case 5:
      digitalWrite(ledVermelho, HIGH); 
      Serial.println("led vermelho ligado.");
      break;


      case 6:
      digitalWrite(ledVermelho, LOW); 
      Serial.println("led vermelho desligado");
      break;


      case 7:
      digitalWrite(ledVerde, HIGH); 
      digitalWrite(ledAmarelo, HIGH); 
      digitalWrite(ledVermelho, HIGH); 
      Serial.println("todos os leds ligados.");
      break;


      case 8:
      digitalWrite(ledVerde, LOW); 
      digitalWrite(ledAmarelo, LOW); 
      digitalWrite(ledVermelho, LOW); 
      Serial.println("todos os leds desligados.");
      break;


      case 9:
      Serial.println("Ate breve.");
      break;

      default:
      Serial.println("Opa! opcao invalida, escolha entre as opcoes a cima. \n");
}
    } while(escolhaLed != 9);

}

void loop()
{
  /*digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/
}