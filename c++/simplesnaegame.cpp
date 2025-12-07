#include<iostream>
#include<conio.h>
using namespace std;
bool gameOver;
const int width = 20;
const int heigth = 20;
int x,y,fruitx,fruity,score;
int tailx[100],taily[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGT ,UP , DOWN};
eDirection dir;

void Setup(){
      gameOver  = false;
      dir = STOP;
      x = width / 2;
      y = heigth / 2;
      fruitx = rand() % width;
      fruity = rand() % heigth;
      score = 0;
}

void Draw(){
      system("cls");
      for(int i = 0; i < width; i++)
        cout<<"#";
        cout << endl;
        for(int i = 0; i < heigth; i++){

            for(int j = 0; j< width; j++){
                if( j == 0)
                cout<<"#";
                if(i == y && j ==x)
                cout<<"O";
                else if(i == fruity && j == fruitx)
                cout<<"f";
                else{
                   bool print = false;
                  for(int k = 0; k < nTail; k++){
        
                      if(tailx[k] == j && taily[k] == i){
                      cout<< "o";
                      print = true;
                    }
                   
                  }
                  
                  if(!print)
                     cout<<" ";
                }
                
                if(j == width -1)
                cout<<"#";
                
            }
            cout<< endl;
        }
        
      for(int i = 0; i< width+2; i++)
        cout<<"#";
        cout<<endl;
         cout<<"Score:"<<score <<endl;
    } 
void input(){
       if(_kbhit()){
        switch(_getch()){
            case 'a':
            dir = LEFT;
            break;
           case 'b':
           dir = RIGT;
           break;
           case 'w':
           dir  = UP;
           break;
             case 's':
             dir = DOWN;
             break;
               case 'x':
               gameOver = true;
               break;
                
                break;
            
            break;
        }
       }
}
void Logic(){
  int height;
  int prevX = tailx[0];
  int prevY = taily[0];
  int prev2X,prev2Y;
  tailx[0] = x;
  taily[0] = y;
  for(int i =1; i < nTail; i++){
    prev2X = tailx[i];
    prev2Y = taily[i];
    tailx[i] = prevX;
    taily[i] = prevY;
    prevX = prev2X;
    prevY = prev2Y; 
  }
  switch(dir ){
    case LEFT:
         x--;
            break;
           case RIGT:
            x++;
           break;
           case UP:
           y--;
           break;
             case DOWN:
             y++;
             break;
             default:
             break;
  }
  
 if(x >= width ) x = 0; else if (x<0) x = width-1;
 if(y>= height ) x = 0; else if (y<0) x = height-1;
  for(int i = 0; i< nTail; i++)
  if(tailx[i] == x && taily[i] == y)
        gameOver = true;
  if ( x == fruitx && y == fruity ){
    score += 10;
     fruitx = rand() % width;
      fruity = rand() % heigth;
       nTail++;
  }
}
int main(){ 
    Setup();
    while(!gameOver){
       Draw();
       input();
        Logic();
        score = 0;
    }
    return 0;
}
