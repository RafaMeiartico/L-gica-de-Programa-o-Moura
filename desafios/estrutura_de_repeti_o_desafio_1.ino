// C++ code
//
void setup()
{
  Serial.begin(9600);

  int contadorWhile = 60;

  while(contadorWhile <= 101){
    if(contadorWhile >= 60 && contadorWhile <= 80){
      if (contadorWhile % 2 == 0){
        Serial.println(contadorWhile);
      }
    } else if(contadorWhile >= 81 && contadorWhile <= 101){
      if (contadorWhile % 2 == 1){
        Serial.println(contadorWhile);
      }
    }
    contadorWhile++;
  }
}
void loop()
{

}