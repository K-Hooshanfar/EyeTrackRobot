import controlP5.*; 
import processing.serial.*;
Serial port;

ControlP5 cp5; 
PFont font;
PFont font2;

void setup() {

  size(1290, 980);    
 font2 = createFont("Times New Roman Bold", 80);  
font = createFont("Times New Roman Bold", 60);  

//port = new Serial(this, "COM10", 9600);      

  //lets add buton to empty window

  cp5 = new ControlP5(this);

  cp5.addButton("Forward")     
    .setPosition(450, 240)
    .setSize(400, 200)      
        .setFont(font)
    ;   

  cp5.addButton("backward")     
    .setPosition(450, 680) 
    .setSize(400, 200)
    .setFont(font)    
    ;
  cp5.addButton("left")     
    .setPosition(130, 460)  
    .setSize(300, 200)      
    .setFont(font)    
    ;

  cp5.addButton("right")     
    .setPosition(870, 460)  
    .setSize(300, 200)      
    .setFont(font)   
    ;

  cp5.addButton("Stop")     
    .setPosition(450, 460)  
    .setSize(400, 200)      
    .setFont(font)
    ;
}
void draw() {  
  background(214 , 236 , 240); 
  fill(0, 33, 95);
  text("Motor Control GUI", 320, 150);  
    textSize(128);
  textFont(font2);
}


void Forward() {
  port.write('f');
}

void backward() {
  port.write('b');
}

void right() {
  port.write('r');
}

void left() {
  port.write('l');
}

void Stop() {
  port.write('s');
}
