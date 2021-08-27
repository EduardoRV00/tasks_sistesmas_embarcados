const int ldr = 0; 
// Variaavel que pega a resistencia do sensor
int pegaResistenciaSensor = 0;
//ciclo de trabalho
int dutyCicly = 200;

void setup(){
  //Setando o buzzer no pino 8
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  
}

void loop(){
  
  //Lê o valor de um pino analógico especificado
  pegaResistenciaSensor = analogRead(ldr);
  //Imprime dados na porta serial como texto ASCII
  Serial.println(pegaResistenciaSensor);
  //setando o som do buzzer(porta,som,tempo)
  tone(23,400,400);
  if (pegaResistenciaSensor<4){
    //Aciona uma onda PWM(Pulse Width Modulation) em um pino
    analogWrite(8, dutyCicly);
  }
  else{
    //Aciona um valor HIGH ou LOW em um pino digital.
    digitalWrite(8,LOW);
  }   
  //Pausa o programa por uma quantidade 
  // especificada de tempo (em milissegundos)
  delay(500);
}