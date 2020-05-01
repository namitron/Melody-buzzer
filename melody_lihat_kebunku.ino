/*int speaker= 9; membuat variabel Speaker dimana variabel ini akan menyimpan nilai 9, yang berarti pin 9 arduino akan digunakan untuk Speaker.
void setup sengaja dikosongkan, karena tidak perlu perintah pinMode(speaker, OUTPUT); , karena pada perintah tone yang ada di void loop, sudah satu paket bahwa Speaker ini adalah OUTPUT.
tone(speaker, 262); digunakan untuk membuat nada DO, nilai 262 adalah frekuensi suara untuk nada DO. 
delay(500); menentukan  bahwa nada DO ini akan berbunyi selama 500 milidetik.
*/
byte speaker = 12;
 
void setup(){
  
}
 
void loop(){
  SOL(); delay(500);    MI(); delay(1000);    SOL(); delay(1000);
  DOO(); delay(1000);   DIAM(); delay(500);
  SOL(); delay(500);    DOO(); delay(500);    SOL(); delay(500);
  FA(); delay(500);     MI(); delay(500);     RE(); delay(1000);
  DIAM(); delay(500);
 
  FA(); delay(500);     RE(); delay(1000);    FA(); delay(1000);
  LA(); delay(1000);    SOL(); delay(500);    DO(); delay(500);
  MI(); delay(500);     RE(); delay(500);     DO(); delay(1000);
  DIAM(); delay(500);
 
  SOL(); delay(500);    MI(); delay(1000);   SOL(); delay(1000);
  DIAM(); delay(500);
 
  SOL(); delay(500);    DOO(); delay(500);   SOL(); delay(500);
  FA(); delay(500);     MI(); delay(500);    RE(); delay(1000);
  DIAM(); delay(500);
 
  FA(); delay(500);     RE(); delay(1000);    FA(); delay(1000);
  LA(); delay(1000);    SOL(); delay(500);    DO(); delay(500);
  MI(); delay(500);     RE(); delay(500);     DO(); delay(1000);
  DIAM(); delay(500);
}
 
// fungsi nada
void DO(){
  tone(speaker, 262);
}
void RE(){
  tone(speaker, 294);
}
void MI(){
  tone(speaker, 330);
}
void FA(){
  tone(speaker, 349);
}
void SOL(){
  tone(speaker, 395);
}
void LA(){
  tone(speaker, 440);
}
void SI(){
  tone(speaker, 494);
}
void DOO(){
  tone(speaker, 523);
}
void DIAM(){
  noTone(speaker);
}
