#include<stdlib.h>
int sw = 1;
int n1 = 2;
int n2 = 3;
int n3 = 4;
int p1 = 5;
int p2 = 6;
int p3 = 7;
int p4 = 8;
int p5 = 9;
int p6 = 10;
int p7 = 11;
int p8 = 12;
int p9 = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(sw, INPUT);
  pinMode(n1, OUTPUT);
  pinMode(n2, OUTPUT);
  pinMode(n3, OUTPUT);
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);
  pinMode(p9, OUTPUT);
  
}

  int pattern = -10;
  
  int n;
  
  int all[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};

  int l[][9] = {{1,2,3,4,5,6,7,8,9},
              {4,5,6,7,8,9,16,17,18},
              {7,8,9,16,17,18,25,26,27},
              {16,17,18,25,26,27,22,23,24},
              {19,20,21,22,23,24,25,26,27},
              {10,11,12,19,20,21,22,23,24},
              {19,20,21,10,11,12,1,2,3},
              {1,2,3,4,5,6,10,11,12}};
  
  int m[][9] = {{10,11,12,13,15,16,17,18,5},
                {19,20,21,22,24,25,26,27,14},
                {10,11,12,13,15,16,17,18,23},
                {1,2,3,4,6,7,8,9,14}};
  
  int q[][3] = {{1,2,3},
                {19,11,3},
                {3,12,21},
                {3,15,27},
                {3,6,9},
                {9,15,21},
                {9,18,27},
                {9,17,25},
                {9,8,7},
                {7,17,27},
                {7,16,25},
                {7,13,19},
                {7,4,1},
                {1,13,25},
                {1,10,19},
                {1,11,21}};
                
  int r[] = {1,2,3,12,21,20,19,10,4,5,6,15,24,23,22,13,7,8,9,18,27,26,25,16,17,14,11};
  
  int s[][3] = {{19,10,1},
                {20,11,2},
                {21,12,3},
                {22,13,4},
                {23,14,5},
                {24,15,6},
                {25,16,7},
                {26,17,8},
                {27,18,9}};
                
  int t1[] = {1};
  int t2[] = {2,10,4};
  int t3[] = {19,11,3,5,7,13};
  int t4[] = {22,20,12,14,16,8,6};
  int t5[] = {25,23,21,17,15,9};
  int t6[] = {26,24,18};
 int t7[] = {27};/*  int t1[] = {1};  int t2[] = {2,10,4,1};  int t3[] = {19,11,3,5,7,13,1,2,10,4};  int t4[] = {22,20,12,14,16,8,6,2,10,4,19,11,3,5,7,13};  int t5[] = {25,23,21,17,15,9,19,11,3,5,7,13,22,20,12,14,16,8,6};  int t6[] = {26,24,18,22,20,12,14,16,8,6,25,23,21,17,15,9};  int t7[] = {27,25,23,21,17,15,9,26,24,18};  int t8[] = {26,24,18,27};  int t9[] = {27};*/
  
  int u[] = {1,  2,4,10,  11,3,5,7,13,19,  20,12,6,8,16,22,    23,21,15,9,17,25,   26,24,18,   27};
  
  int v[][9] = {{1,2,3,4,5,6,7,8,9},
                {7,8,9,13,14,15,19,20,21},
                {7,8,9,16,17,18,25,26,27},
                {25,26,27,13,14,15,1,2,3},
                {19,20,21,22,23,24,25,26,27},
                {19,20,21,13,14,15,7,8,9},
                {19,20,21,10,11,12,1,2,3},
                {1,2,3,13,14,15,25,26,27}};
                
  int w[][9] = {{23,14,5,22,13,4,24,15,6},
                {23,14,5,1,10,19,27,18,9},
                {23,14,5,2,11,20,26,17,8},
                {23,14,5,3,12,21,25,16,7}};
                
  int x[][9] = {{13,14,15,10,11,12,16,17,18},
                {13,14,15,1,2,3,25,26,27},
                {13,14,15,4,5,6,22,23,24},
                {13,14,15,7,8,9,19,20,21}};
                
  int y[][5] = {{1,2,3,27,15},
                {1,11,21,27,24},
                {1,10,19,27,23},
                {1,13,25,27,26},
                {1,4,7,27,17},
                {1,5,9,27,18}};

  
  int k;
  int a = 0;
  int b;
  

void loop() {
  // put your main code here, to run repeatedly: 
  
  if(a%10 == 0) pattern++;
  if(pattern >= 12) pattern =0;
  
  a++;
  
  switch(pattern){
    case 0: // all LED 1 by 1 and all at once
      for(k = 1; k <= 27; k++){
        lightLED(k);
        delay(200);
      }
      
      lightLEDs(27, all, 1000);
      
      digitalWrite(n1, HIGH);
      digitalWrite(n2, HIGH);
      digitalWrite(n3, HIGH);
      digitalWrite(p1, HIGH);
      digitalWrite(p2, HIGH);
      digitalWrite(p3, HIGH);
      digitalWrite(p4, HIGH);
      digitalWrite(p5, HIGH);
      digitalWrite(p6, HIGH);
      digitalWrite(p7, HIGH);
      digitalWrite(p8, HIGH);
      digitalWrite(p9, HIGH);
      
      delay(1000);
      
      pattern++;
      
      break;
      
    case 1:  //9 LEDs go around
      for(k = 0; k<=7 ; k++){
        lightLEDs(9, l[k] , 60);
      }
      
      break;
      
    case 2:  //1 LED Spiral and come back
      for(k = 0; k<=27 ; k++){
        lightLED(r[k]);
        delay(60);
      }
      
      break;
      
    case 3: //up and down 1 LED seperate
      for(b = 0; b<3; b++){
        for(k = 0; k<=3 ; k++){
          lightLEDs(9, m[k] , 80);
        }
      }
      
      break;
      
    case 4: //3 LEDs walk
      for(k = 0; k<=15 ; k++){
        lightLEDs(3, q[k] , 60);
      }
    
      break;
      
    case 5:  //1 to 27 plane   
      lightLEDs(1, t1, 60);
      lightLEDs(3, t2, 60);
      lightLEDs(6, t3, 60);
      lightLEDs(7, t4, 60);
      lightLEDs(6, t5, 60);
      lightLEDs(3, t6, 60);
      lightLEDs(1, t7, 60);
    /*  lightLEDs(1, t1, 60);      lightLEDs(4, t2, 60);      lightLEDs(10, t3, 60);      lightLEDs(16, t4, 60);      lightLEDs(19, t5, 60);      lightLEDs(16, t6, 60);     lightLEDs(10, t7, 60);      lightLEDs(4, t8, 60);      lightLEDs(1, t9, 60);*/
      break;
      
    case 6:  //1 to 27 1 LED
      for(k = 0; k<=25; k++){
        lightLED(u[k]);
        delay(50);
      }
      break;
      
    case 7: //9 LED Plane rotate
      for(k = 0; k<=7 ; k++){
        lightLEDs(9, v[k] , 100);
      }
      
      break;
      
    case 8: //9 LED rotate mid static
      for(k = 0; k<=3 ; k++){
        lightLEDs(9, x[k] , 100);
      }
      
      break;
      
    case 9: //5 LED 1-27 rotate
      for(k = 0; k<=5 ; k++){
        lightLEDs(5, y[k] , 80);
      }
    
      break;
      
    case 10:  //Random 
      for(k = 0; k < 10 ; k++){
        n = rand() % 27 + 1;
        
        lightLED(n);
        delay(60);
      }
      
      break;
      
    case 11:  //random fall
      for(b = 0; b < 10 ; b++){
        n = rand() % 9 ;
        
        for(k = 0; k <= 2; k++){
          lightLED(s[n][k]);
          delay(60);
        }
      }
      
      break;
      
  }  
}

void lightLEDs(int size, int LEDs[], int time){
  int i;
  int j = 0;
  while(1){  
    for(i=0; i<size; i++){
      lightLED(LEDs[i]);
      delay(1);
      j++;
      if(j==time) break;
    }
    if(j>=time) break;
  }
}

void lightLED(int light){
  
  digitalWrite(n1, LOW);
  digitalWrite(n2, LOW);
  digitalWrite(n3, LOW);
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  digitalWrite(p6, LOW);
  digitalWrite(p7, LOW);
  digitalWrite(p8, LOW);
  digitalWrite(p9, LOW);
  
  if(light<=9) digitalWrite(n1, HIGH);
  else if(light<=18) digitalWrite(n2, HIGH);
  else digitalWrite(n3, HIGH);
  
  switch (light%9){
     case 1:
       digitalWrite(p1, HIGH);
       break;
     case 2:
       digitalWrite(p2, HIGH);
       break;
     case 3:
       digitalWrite(p3, HIGH);
       break;
     case 4:
       digitalWrite(p4, HIGH);
       break;
     case 5:
       digitalWrite(p5, HIGH);
       break;
     case 6:
       digitalWrite(p6, HIGH);
       break;
     case 7:
       digitalWrite(p7, HIGH);
       break;
     case 8:
       digitalWrite(p8, HIGH);
       break;
     case 0:
       digitalWrite(p9, HIGH);
       break; 
  }
}

