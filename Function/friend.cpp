
#include <iostream>
using namespace std;
class Sqaure;
class Rectangle
{
  int hiegth, wiedth;
public:
  void Setdata (int h, int w)
  {
    hiegth = h;
    wiedth = w;
  }
  friend void display (Rectangle &, Sqaure &);
};

class Sqaure
{
  int side;
public:
  void Setdata (int s)
  {
    side = s;
  }
  friend void display (Rectangle &, Sqaure &);
};

void
display (Rectangle & r, Sqaure & s)
{
  cout << "Area of Rectangle : " << r.hiegth * r.wiedth << endl;
  cout << "Area of Sqaure : " << s.side * s.side * s.side << endl;
}

int main(){
    int hiegth , wiedth , side;
    cout<<"Enetr a hiegth of Rectangle : ";
    cin>>hiegth;
    cout<<"Enetr a wiadth of Rectangle : ";
    cin>>wiedth;
    cout<<"Enter a side of Sqaure : ";
    cin>>side;
    Rectangle rect;
   Sqaure seq;
   rect.Setdata (hiegth , wiedth);

   seq.Setdata (side);
   display (rect, seq);
   return 0;
}
