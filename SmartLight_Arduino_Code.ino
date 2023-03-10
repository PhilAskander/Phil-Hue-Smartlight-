void setup() {
// put your setup code here, to run once:
Serial.begin(9600); //Define Baud rate 9600
pinMode(13, OUTPUT); // Define pin 13 as OUTPUT
pinMode (12, OUTPUT); // Define pin 12 as OUTPUT
pinMode(11, OUTPUT); // Define pin 11 as OUTPUT
}

void loop(){
if(Serial.available()>0){
  char data = Serial.read();
  switch (data){
    case 'Z': digitalWrite(13, HIGH); break; // when Z is pressed on the app Turn on Pin 7
    case 'Z': digitalwrite(13, LOW);  break; // when z is pressed on the app Turn off Pin 7
    case 'Y': digitalWrite(12, HIGH); break; // when Y is pressed on the app Turn on Pin 6
    case 'y': digitalwrite(12, LOW);  break; // when y is pressed on the Turn off Pin 6
    case 'X': digitalwrite(11, HIGH); break; // when Y is pressed on the app Turn on Pin 5
    case 'x': digitalwrite(11, LOW);  break; // when y is pressed on the Turn off Pin 5
  default : break;
  }
  Serial.println(data):
  }
  delay(50);
 }
