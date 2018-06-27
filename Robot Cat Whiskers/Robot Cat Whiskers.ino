int leftWhisker = 5 ;
int rightWhisker = 7 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int lwValue = digitalRead(leftWhisker); 
  int rwValue = digitalRead(rightWhisker);

  Serial.println("Left: ");
  Serial.print(lwValue);
  Serial.println("Right: ");
  Serial.print(rwValue);
  Serial.println(" ");

if(lwValue == 0 && rwValue == 0) {
  Serial.println("Left and Right pressed!");
} else if(lwValue == 0) {
  Serial.println("Left pressed!");
} else if(rwValue == 0) {
  Serial.print("Right pressed!");
} else {
  Serial.println("Neither pressed!");
}
  
delay(100);
}
