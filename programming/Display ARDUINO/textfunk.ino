void setPos(int xc,int yc){
  dac.setVoltageA(2000);
  dac.updateDAC();
  dac1.setVoltageA(map(yc,0,1000,minx,maxx));
  dac1.setVoltageB(map(xc,0,1000,miny,maxy));
  dac1.updateDAC();
}
void E(int startpunktx,int startpunkty){
   
   setPos(startpunktx,startpunkty);
   delay(1);
   digitalWrite(8, HIGH);
   delay(1);
   setPos(startpunktx+100,startpunkty);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty+100);
   delay(1);
   setPos(startpunktx+100,startpunkty+200);
   delay(1);
   setPos(startpunktx,startpunkty+200);
   delay(1);
   
   digitalWrite(8, LOW);
   delay(1);
}
void A(int startpunktx,int startpunkty){
  
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx, startpunkty + 200);  

  delay(1);
  setPos(startpunktx + 100, startpunkty+200);  
  delay(1);
  setPos(startpunktx + 100, startpunkty); 

  delay(1);
  setPos(startpunktx + 100, startpunkty + 100);  
  delay(1);
  setPos(startpunktx, startpunkty + 100);  
  delay(1);
  
  digitalWrite(8, LOW);
  delay(1);
}
void B(int startpunktx, int startpunkty){
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx+40, startpunkty+200);  
  delay(1);
  setPos(startpunktx+40, startpunkty+100);  
  delay(1);
  setPos(startpunktx+100, startpunkty+100);  
  delay(1);
  setPos(startpunktx, startpunkty+100);  
  delay(1);
  setPos(startpunktx, startpunkty);  
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void C(int startpunktx, int startpunkty){
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty+200);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void D(int startpunktx, int startpunkty){
  setPos(startpunktx +100, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx+60, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty+150);  
  delay(1);
  setPos(startpunktx, startpunkty+50);  
  delay(1);
  setPos(startpunktx+60, startpunkty);  
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void N(int startpunktx, int startpunkty){
  setPos(startpunktx +100, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty);  
  delay(1);
  setPos(startpunktx, startpunkty+200);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void O(int startpunktx, int startpunkty){
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void R(int startpunktx, int startpunkty){
  
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty+200);  
  delay(1);
  setPos(startpunktx, startpunkty+100);  
  delay(1);
  setPos(startpunktx+100, startpunkty+100);  
  delay(1);
  setPos(startpunktx, startpunkty);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
void U(int startpunktx, int startpunkty){
  
  setPos(startpunktx+100, startpunkty+200);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+100, startpunkty);  
  delay(1);
  setPos(startpunktx, startpunkty);  
  delay(1);
  setPos(startpunktx, startpunkty+200);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
 
}
void I(int startpunktx, int startpunkty){
  setPos(startpunktx+25, startpunkty);  
  delay(1);
  digitalWrite(8, HIGH);
  delay(1);
  setPos(startpunktx+75, startpunkty);  
  delay(1);
  setPos(startpunktx+50, startpunkty);  
  delay(1);
  setPos(startpunktx+50, startpunkty+200);  
  delay(1);
  setPos(startpunktx+25, startpunkty+200);  
  delay(1);
  setPos(startpunktx+75, startpunkty+200);  
  delay(1);
  digitalWrite(8,LOW);
  delay(1);
}
