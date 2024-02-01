import controlP5.*; 
import processing.serial.*;
import processing.sound.*;
int i;

Serial port;
ControlP5 cp5; 
SoundFile C;
SoundFile O;
SoundFile N;
SoundFile T;
SoundFile R;
SoundFile L;

PFont font;

void setup() { 

  size(1290, 980);    //window size
  
C = new SoundFile(this, "data/C.wav");
O = new SoundFile(this, "data/O.wav");
N = new SoundFile(this, "data/N.wav");
T = new SoundFile(this, "data/T.wav");
R = new SoundFile(this, "data/R.wav");
L = new SoundFile(this, "data/L.wav");
  
font = createFont("Times New Roman Bold", 80);  
printArray(Serial.list());   //prints all available serial ports

port = new Serial(this, "COM12", 9600);      
cp5 = new ControlP5(this);

  cp5.addButton("A")     
    .setPosition(30, 200)  
    .setSize(120, 120)     
    .setFont(font)
    ;

  cp5.addButton("B")     
    .setPosition(190, 200)  
    .setSize(120, 120)     
    .setFont(font)
    ;

  cp5.addButton("C")    
    .setPosition(350, 200)  
    .setSize(120, 120)     
    .setFont(font)
    ;   
  cp5.addButton("D")     
    .setPosition(510, 200)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
  cp5.addButton("E")    
    .setPosition(670, 200)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
  cp5.addButton("F")     
    .setPosition(830, 200)  
    .setSize(120, 120)
    .setFont(font)
    ;  
  cp5.addButton("G")     
    .setPosition(990, 200)
    .setSize(120, 120)     
    .setFont(font)
    ;    
  cp5.addButton("H")     
    .setPosition(1150, 200)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
    cp5.addButton("I")     
    .setPosition(30, 360)  
    .setSize(120, 120)      
    .setFont(font)
    ;



  cp5.addButton("J")     
    .setPosition(190,  360)
    .setSize(120, 120)      
    .setFont(font)
    ;

  cp5.addButton("K")     
    .setPosition(350,  360)  
    .setSize(120, 120)
    .setFont(font)
    ;   
  cp5.addButton("L")     
    .setPosition(510,  360)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
  cp5.addButton("M")    
    .setPosition(670, 360)  
    .setSize(120, 120)     
    .setFont(font)
    ; 
  cp5.addButton("N")     
    .setPosition(830, 360)
    .setSize(120, 120)      
    .setFont(font)
    ;  
  cp5.addButton("O")     
    .setPosition(990, 360)  
    .setSize(120, 120)     
    .setFont(font)
    ;    
  cp5.addButton("P")     
    .setPosition(1150, 360)  
    .setSize(120, 120)     
    .setFont(font)
    ;  
    cp5.addButton("Q")     
    .setPosition(30, 520)  
    .setSize(120, 120)      
    .setFont(font)
    ;

  cp5.addButton("R")     
    .setPosition(190, 520)  
    .setSize(120, 120)      
    .setFont(font)
    ;

  cp5.addButton("S")     
    .setPosition(350, 520)
    .setSize(120, 120)      
    .setFont(font)
    ;   
  cp5.addButton("T")     
    .setPosition(510, 520)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
  cp5.addButton("U")     
    .setPosition(670, 520)  
    .setSize(120, 120)     
    .setFont(font)
    ; 
  cp5.addButton("V")    
    .setPosition(830, 520)  
    .setSize(120, 120)      
    .setFont(font)
    ;  
  cp5.addButton("W")     
    .setPosition(990, 520)  
    .setSize(120, 120)     
    .setFont(font)
    ;    
  cp5.addButton("X")     
    .setPosition(1150, 520)  
    .setSize(120, 120)      
    .setFont(font)
    ;  
  cp5.addButton("Y")     
    .setPosition(510, 680)  
    .setSize(120, 120)      
    .setFont(font)
    ; 
  cp5.addButton("Z")     
    .setPosition(670, 680)  
    .setSize(120, 120)      
    .setFont(font)
    ;     
 
   
}

void draw() {  

  background(214 , 236 , 240)

  fill(0, 33, 95);
  text("Keyboard", 470, 100);  
  textSize(128);
  textFont(font);
  
  
}


void C() {
  port.write('c');
  C.play();
  //text("C", 30, 690);  // ("text", x coordinate, y coordinat)
  //textSize(90);
}

void O() {
  port.write('o');
    O.play();
}

void N() {
  port.write('n');
    N.play();
}

void T() {
  port.write('t');
    T.play();
}

void R() {
  port.write('r');
    R.play();
}


void L() {
  port.write('l');
    L.play();
}
