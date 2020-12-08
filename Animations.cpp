#include "Animations.h"

Animations::Animations(){
  init();
}

void Animations::off(){
  for(int i = 2; i <= 13; i++){
    digitalWrite(i, LOW);
  }
}

void Animations::all(){
  off();
  
  for(int i = 2; i <= 13; i++){
    digitalWrite(i, HIGH);
  }
}

void Animations::layers(){
  off();
  
  for(int l = 2; l <= 5; l++){
    
    digitalWrite(l, HIGH);
    
    for(int i = 5; i<=13 ; i++){
      digitalWrite(i, HIGH);
      delay(250);
    }
    
    digitalWrite(l, LOW);
        
    for(int i = 5; i<=13 ; i++){
      digitalWrite(i, LOW);
    }  
  }
}

void Animations::fireflies(int x){
  off();

  for(int r = 0; r < x; r++){
      
      int layer = random(2, 5);
      int column = random(5, 14);

      digitalWrite(layer, HIGH);
      digitalWrite(column, HIGH);
      
      delay(250);
      
      off();
  }
}
