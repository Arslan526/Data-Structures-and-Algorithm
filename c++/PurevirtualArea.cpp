#include <iostream>

using namespace std;
class Shape{
    protected:
    int he , wi;
    public:
    float virtual GetArea() = 0;
    void Sethiegth(int h){
        he = h;
    }
    void Setwidth(int w){
        wi = w;
    }
};
class Tringle : public Shape{
  public:
  int bre ,lei;
  void Setbreath(int b){
      bre = b;
  }
  void Setlegth(int l){
      lei = l;
  }
    float GetArea(){
        return (0.5*(lei*bre));
    }
};
class Rectangle : public Shape{
   public:
   float GetArea(){
       return (2*(he + wi));
   }
};
class Circle : public Shape{
    public:
    int r;
    void Setraduis(int r1){
        r = r1;
    }
   float GetArea(){
        return(3.14*r*r);
    }
};
int main(){

   Rectangle rect;
   Tringle tri;
   Circle cri;
  
   rect.Sethiegth(5);
   rect.Setwidth(6);
   tri.Setbreath(9);
   tri.Setlegth(7);
   cri.Setraduis(3);
   cout<<"Area of Rectangle : "<<rect.GetArea()<<endl;
   cout<<"Area of Triangle  : "<<tri.GetArea()<<endl;
   cout<<"Area of circle    : "<<cri.GetArea()<<endl;

    return 0;
}