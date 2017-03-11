int buton = 5; // 5. pine butonumuzu bağladık.
int led = 8; // 8. pine ledimizi bağladık.

void setup(){

pinMode(led, OUTPUT);
pinMode(buton,INPUT);
}

void loop(){
digitalRead(buton, HIGH);
digitalWrite(led, HIGH);

if{buton=1, digitalWrite(led, HIGH);} // eğer butona basılırsa ledi yak.

else{digitalWrite(led, LOW);
}
}


