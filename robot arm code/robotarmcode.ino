#include <Servo.h>
Servo left;
Servo middle;
Servo right;

int pos = 50;
int pos2 = 50; 
int pos3 = 120;
int angleright;
int angleleft;
int anglemiddle;
int i=0;
char val;
int m1a = 3;
int m1b = 5;
int m2a = 6;
int j=0;
int k=0;
int n=0; 
int t=0;
int r=0;
int p=0;
int l=0;
int y=0;
int w=0;

void C(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
//    central position

        right.write(50);
        left.write(180);
        middle.write(50);
    
      delay(1500);
     
     // go to writing position
      
        for (pos = 50; pos <=82; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <= 124; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 145; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }


//C
  
  for (pos = 82; pos <= 90; pos += 1) { // goes from 180 degrees to 0 degrees

    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50); 
    right.write(pos2);
    pos2+=2;
    delay(15); 
    
  }

  
    for (pos = 90; pos <=98; pos += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  
    pos2-=3;

    left.write(pos3);
    pos3-=1;
    delay(15);
    
     middle.write(pos);
    delay(50);
  }
 

    for (pos = 98; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees

      
      middle.write(pos);
      delay(50);
      
     right.write(pos2);
     pos2-=1;
     delay(15);

      left.write(pos3);
      pos3-=1;
      delay(15);
      
     
  }
  
//  right.write(108);
//  left.write(134);
//  middle.write(90);
  
  
//back to central position
 
          for (pos3 = 129; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }     
          for (pos2 = 108; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
          for (pos = 90; pos >=50; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}

///////////////////////////////////////////////////////////////////

void O1(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
 //    central position

      right.write(50);
      left.write(180);
      middle.write(50);
      
      delay(1500);
      // go to writing position
      
        for (pos = 50; pos <=72; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=120 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 140; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }



   //O
  
  for (pos = 72 ; pos <= 80; pos += 1) { // goes from 180 degrees to 0 degrees

     middle.write(pos);
  
      delay(15);// waits 15ms for the servo to reach the position
      right.write(pos2);
      pos2+=1;
    
  }
  
//  right.write(128);
//  left.write(140);
//  middle.write(80);

//  delay(1500);
//  
    for (pos = 80; pos <= 86; pos += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  
    pos2-=3;
     left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);  
    pos3-=1;
    

     middle.write(pos);
      delay(150);// waits 15ms for the servo to reach the position
      
  }
 
//  right.write(110);
//  left.write(134);
//  middle.write(85);

//delay(1500);

    for (pos = 86; pos >= 80; pos -= 1) { // goes from 180 degrees to 0 degrees

     

      right.write(pos2);
      pos2-=1;
      delay(15);
      
      left.write(pos3);
      pos3-=1;
      delay(15);
      
      middle.write(pos);
      delay(50);
  }
  
//  right.write(104);
//  left.write(126);
//  middle.write(80);

//delay(1500);

 for (pos2 =104; pos2 <= 124; pos2 += 1) { // goes from 180 degrees to 0 degrees

      if(pos>72){
      middle.write(pos);
      pos-=1;
      delay(15);}
    right.write(pos2);
     delay(15);
     left.write(pos3);
     pos3+=1;
      delay(15);// waits 15ms for the servo to reach the position
     
  }

  //  right.write(124);
//  left.write(146);
//  middle.write(72);

//  delay(1500);
  
//back to central position
 
          for (pos3 = 144; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }     
          for (pos2 = 124; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
          for (pos = 72; pos >=50; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  

}
///////////////////////////////////////////////////////////////////

void N(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
 //    central position

        right.write(50);
        left.write(180);
        middle.write(50);
      

      
      delay(1500);

      
      // go to writing position
      
        for (pos = 50; pos <=70; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=100 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 140; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

      
      //N
      
    for (pos2 = 100; pos2 <= 135; pos2 += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  

   if(pos3>140)
   {left.write(pos3);
   pos3-=1;
   delay(15);}
   
  }
//       right.write(130);
//      left.write(140);
//      middle.write(70);


//  delay(1500);

      for (pos2 = 135; pos2 >=100; pos2 -= 2) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15); 
    
    if(pos3>135){ 
    left.write(pos3);
    pos3-=1;
    delay(15);}
    if(pos>60){
     middle.write(pos);
      pos-=1;
      delay(15);// waits 15ms for the servo to reach the position
    }
  }
  
 //       right.write(100);
//      left.write(135);
//      middle.write(60);

//delay(1500);



      for (pos2 =100 ; pos2 <=125; pos2 += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  

if(pos3>130){ 
    left.write(pos3);
    pos3-=1;
    delay(15);}
  }

  
//       right.write(125);
//      left.write(130);
//      middle.write(60);

//  delay(1500);
  
//back to central position

  
          for (pos3 = 130; pos3 <= 180; pos3 += 3) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 125; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
     

          for (pos = 60; pos >=50; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  

}

/////////////////////////////////////////////////////////////////
void T(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
//    central position

        right.write(50);
        left.write(180);
        middle.write(50);
        


      
      delay(1500);

      
      // go to writing position
      
        for (pos = 50; pos <=54; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=102 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 130; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

      
      //T-1
      
    for (pos2 = 102; pos2 <= 125; pos2 += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  

   if(pos3<145)
   {left.write(pos3);
   pos3+=1;
   delay(15);}
  }
  
 //       right.write(122);
//      left.write(145);
//      middle.write(54);

    //pen-up
    
    for (pos3 = 145; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  } 
    for (pos2 = 125; pos2 >= 110; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  

    
 
    delay(150); 
    



     //T-down
     
           // go to writing position
      
        for (pos = 54; pos <=60; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 110; pos2 <=122 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 145; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

  
      //T-2
     for (pos = 60; pos >=50; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
//    right.write(pos2);
//    pos2+=1;
//    delay(15);
  }
  
 //       right.write(62);
//      left.write(160);
//      middle.write(50);

//back to central position

          for (pos3 = 145; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  } 
  
           for (pos2 = 122; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    

          for (pos = 50; pos <=50; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}
//////////////////////////////////////////////////////////////////////
void R(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
//    central position

        right.write(50);
        left.write(180);
        middle.write(50);
        


      
      delay(1500);


      
      // go to writing position
      
        for (pos = 50; pos >=47; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=102 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 130; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }


  //R


      for (pos2 = 102; pos2 <= 125; pos2 += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);

   left.write(pos3);
   pos3+=1;
   delay(15);

  }
  delay(150);
  
//        right.write(125);
//        left.write(150);
//        middle.write(47);


      for (pos = 47; pos >= 40; pos -= 1) { // goes from 180 degrees to 0 degrees
if(pos2<128)
   { right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    pos2+=1;}

   middle.write(pos);
   delay(15);

  }
  //        right.write(128);
//        left.write(150);
//        middle.write(42);

//  delay(1500);
  
      for (pos2 = 128; pos2 >= 118; pos2 -= 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    left.write(pos3);
    pos3-=1;
    delay(15);
  }
//        right.write(118);
//        left.write(140);
//        middle.write(42);
//
//delay(1500);

      for (pos = 40; pos <= 50; pos += 1) { // goes from 180 degrees to 0 degrees

    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);
//    right.write(pos2);
//    pos2-=0.25;
//    delay(15);
    left.write(pos3);
    pos3-=1;
delay(15);
  }
  
//        right.write(118);
//        left.write(145);
//        middle.write(50);

  
//delay(1500);


      for (pos2 = 118; pos2 >= 108; pos2 -= 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    if(pos>40){
    middle.write(pos);
    pos-=1.5;
    delay(15);}
    left.write(pos3);
    pos3-=0.5;
delay(15);
  }
  
//        right.write(108);
//        left.write(140);
//        middle.write(42);

  
//delay(1500);


  //back to central position
  

  
          for (pos3 = 140; pos3 <= 180; pos3 += 2) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }     
           for (pos2 = 108; pos2 <= 50; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
          for (pos = 42; pos <=50; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

////////////////////////////////////////////////////////////////////
void O2(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
//    central position

        right.write(50);
        left.write(180);
        middle.write(50);
        


      
      delay(1500);


      
      // go to writing position
      
        for (pos = 50; pos >=34; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=105 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 136; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }


  //O-2


      for (pos2 = 105; pos2 <= 127; pos2 += 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    
   left.write(pos3);
   pos3+=1;
   delay(15);
   if (pos<=37)
{   middle.write(pos);
    pos+=1;
    delay(150);
  }   
  }
//  delay(1500);
  
//        right.write(127);
//        left.write(158);
//        middle.write(37);

      for (pos = 37; pos >= 32; pos -= 1) { // goes from 180 degrees to 0 degrees
        
   middle.write(pos);
   delay(15);
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    pos2+=1.5;

  }
    delay(1500);
  
//        right.write(134);
//        left.write(158);
//        middle.write(31);

      for (pos2 = 134; pos2 >= 110; pos2 -= 1) { // goes from 180 degrees to 0 degrees
        

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    
    left.write(pos3);
    pos3-=1;
    delay(15);
    
   if(i>=5){
  if(pos>=30){
     middle.write(pos);
   delay(150);
   pos-=1;}
      }
  i++;    }

//    delay(1500);
  
//        right.write(110);
//        left.write(134);
//        middle.write(29);

      for (pos = 29; pos <= 34; pos += 1) { // goes from 180 degrees to 0 degrees
        
   middle.write(pos);
   delay(15);
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);
    pos2-=1;

  }
//    delay(1500);
  
//        right.write(105);
//        left.write(134);
//        middle.write(34);





  //back to central position
 
          for (pos3 = 134; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }     
          for (pos2 = 105; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
          for (pos = 34; pos <=50; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
////////////////////////////////////////////////////////////
void L(int x, int y, int z) {
//
      right.attach(x); 
      left.attach(y);
      middle.attach(z);
            
//    central position

        right.write(50);
        left.write(180);
        middle.write(50);
        


      
      delay(1500);


      
      // go to writing position
      
        for (pos = 50; pos >=27; pos -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
         for (pos2 = 50; pos2 <=137 ; pos2 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
        for (pos3 = 180; pos3 >= 160; pos3 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }


  //L


      for (pos2 = 137; pos2 >=115; pos2 -= 1) { // goes from 180 degrees to 0 degrees

    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);  
    
   left.write(pos3);
   pos3-=1;
   delay(15);
//   if(pos<=28){
//   middle.write(pos);
//   delay(15);
//   pos-=1;}

  }
  delay(150);
  
 
//       right.write(118);
//        left.write(141);
//        middle.write(27);

      for (pos = 27; pos >=17; pos -= 1) { // goes from 180 degrees to 0 degrees
        
   middle.write(pos);
   delay(15);
   
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);    
    pos2+=1;
    
   left.write(pos3);
   pos3+=1;
   delay(15);


      }

  
//  delay(1500);
  
  //       right.write(128);
//        left.write(151);
//        middle.write(17);

  //back to central position
 
          for (pos3 = 148; pos3 <= 180; pos3 += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    left.write(pos3);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }     
          for (pos2 = 125; pos2 >= 50; pos2 -= 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    right.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
          for (pos = 17; pos <=50; pos += 1) { // goes from 0 degrees to 180 degrees in steps of 1 degree
    middle.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
}





//////////////////////////////////////////////////////////////////////





void setup() {
  // put your setup code here, to run once:
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin  
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(j==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'c') // Forward
    {
    C(m1a, m1b, m2a); 
    j++;
    }
  }
  ///////////////////////////
  if(k==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'o') {
    O1(m1a, m1b, m2a); 
    k++;
    }
  }
  ///////////////////////////////
  ///////////////////////////
  if((k==1) && (w==1)){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'o') {
    O2(m1a, m1b, m2a); 
    k++;
    }
  }
  ///////////////////////////////
  
  if(n==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'n') {
    N(m1a, m1b, m2a); 
    n++;
    }
  }
  if(t==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 't') {
    T(m1a, m1b, m2a); 
    t++;
    }
  }

  if(r==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'r') // Forward
    {
    R(m1a, m1b, m2a); 
    r++;
    w++;
    }
  }

 ///////////////////////////////
  if(l==0){
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
    if( val == 'l') {
    L(m1a, m1b, m2a); 
    l++;
    }
  }
///////////////////







  
  }
