int tabuada, contador, resultado;

void setup()
{
  Serial.begin(9600);


  Serial.println("Ola, digite o numero que voce deseja a tabuada \n");
  while(! Serial.available());
  tabuada = Serial.parseInt();

  for(int contador = 1; contador <= 10;contador++){
    resultado = tabuada * contador;
    Serial.println(String(tabuada) + "X" + String(contador) + "=" + String(resultado));
  }
}

void loop()
{
  //sem instruções
}