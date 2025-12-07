#include<iostream>
#include<cstring>
using namespace std;
class CodeWH{
       protected:
       string tittle;
       float rating;
       public:
       CodeWH(string s ,float r){
        tittle = s;
        rating = r;
       }
       // virtual void display() {}    //virtual function
        virtual void display() = 0;    // pure virtual function
};
class CodeWHVideo : public CodeWH{
        float videolength;
        public:
        CodeWHVideo( string s ,float r, float vl  ): CodeWH( s , r){
            videolength = vl;
        }
        void display(){
           cout<<"This is amminizing video : " << tittle <<endl;
           cout<<"Ratings : " << rating <<"is the 5 star :"<< endl;
           cout<<"Length of the videolength : " << videolength <<" Min "<<endl;
        }
};
class CodeWHtext : public CodeWH{
      int  words;
      public:
      CodeWHtext(string s ,float r, float vl,int wc):CodeWH(s,r){
        words = wc;
      }
       void display(){
        cout<<"This is amminizing video : " << tittle <<endl;
        cout<<"Ratings : " << rating << endl;
       cout<<"number of the words in this text toturial : " << words <<endl;
       }
};
int main(){
      string tittle;
      float rating , vlen;
      int words;
      
      tittle = "Danjo totiral";
      rating = 5.4;
      vlen = 45.9;
      words = 34490;
      CodeWHVideo obj1(tittle ,rating , vlen);
     
      tittle = "Djtext totiral";
      rating = 5.4;
      vlen = 45.9;
      words = 34490;
      CodeWHVideo obj2(tittle ,rating , words);
       
       
       CodeWH*tuts[2];
       tuts[0] = &obj1;
       tuts[1]  = &obj2;
       tuts[0]->display();
       tuts[1]->display();
      

    return 0;
}