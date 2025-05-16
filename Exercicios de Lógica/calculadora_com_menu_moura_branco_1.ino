int escolhaDaOperacao;
float numero1;
float numero2;
float resultado;

void setup()
{
  Serial.begin(9600);
  
  int contador;
    
    // /n é um enter via texto
  do{ 
    Serial.println("Bem-vindo(a) a calculadora inteligente :) /n");
    Serial.println("Escolha uma das operacoes");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Dividir");
    Serial.println("4 - Multiplicar");
    while(! Serial.available());
    escolhaDaOperacao = Serial.parseInt();
    
    
    Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite 2 numeros");
    Serial.println("Digite o primeiro numero");
    while(! Serial.available());
    numero1 = Serial.parseFloat();
    
    
    Serial.println("Digite o segundo numero");
    while(! Serial.available());
    numero2 = Serial.parseFloat();
    
    
    switch(escolhaDaOperacao){
    	case 1:
      resultado = numero1 + numero2;
      Serial.println("Seu resultado eh " + String(resultado));
      	  break;
      
      	case 2:
      resultado = numero1 - numero2;
      Serial.println("Seu resultado eh " + String(resultado));
      	  break;
      
      	case 3:
      resultado = numero1 / numero2;
      Serial.println("Seu resultado eh " + String(resultado));
      	  break;
      
      	case 4:
      resultado = numero1 * numero2;
      Serial.println("Seu resultado eh " + String(resultado));
      	  break;
      
      default:
        Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4. :P");
    }
    
    Serial.println("Voce deseja voltar ao menu? Digite sim ou nao (em minusculo, por favor).");
    while(! Serial.available());
   
    if(Serial.readString() == "sim"){
    contador = 1;
    }
    else{
    contador = 0;
      
      Serial.println("Ate breve");
      Serial.println("Caso queira voltar ao menu, reinicie o programa :)");
    }
 
    
    
  }
  while(contador != 0);//Se o contador foi diferente de 0, o mesmo repete
}

void loop()
{
  //sem instruções 
  
  
}