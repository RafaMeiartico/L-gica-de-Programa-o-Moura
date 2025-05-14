/*Calcule a média entre DUAS notas.
Verifique se o aluno foi APROVADO.
Aprovado se média é MAIOR OU IGUAL A 6 e 
SE A frequência É MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota.
Exiba se foi REPROVADO por frequência.
Exiba se foi REPROVADO frequência e média da nota .
Se a média for exatamente 10 e a frequencia for 100, exiba: "Parabéns! Nota máxima!".*/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println();
  Serial.println("Ola, seja bem-vindo(a): ");
  Serial.println("digite a sua primeira nota: ");
  while(! Serial.available());
  float nota1 = Serial.parseFloat();
  
  Serial.println("digite a sua segunda nota: ");
  while(! Serial.available());
  float nota2 = Serial.parseFloat();
  
  Serial.println("digite a sua frequencia em inteiro ex:70: ");
  while(! Serial.available());
  int frequencia = Serial.parseInt();
  
  float media = (nota1 + nota2) / 2;
    
  if(frequencia == 100 && media == 10){
  Serial.println("Parabens! Nota maxima!");
  } else if (media <= 9 && media >= 6 && frequencia <= 100 && frequencia >= 75){
  Serial.println("Parabens! Aprovado");
  } else if (media <= 6 && media >= 0 && frequencia <= 100 && frequencia >= 75){
  Serial.println("Reprovado por nota");
  } else if (media <= 10 && media >= 6 && frequencia <= 75 && frequencia >= 0){
  Serial.println("Reprovado por frequencia");
  } else if (media <= 6 && media >= 0 && frequencia <= 75 && frequencia >= 0){
  Serial.println("Reprovado por media e por frequencia");
  } else {
  Serial.println("Invalido, verifique as informacoes");
  }
  Serial.println();
  
  
  delay(1000);
}