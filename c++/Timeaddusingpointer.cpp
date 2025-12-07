// Add two time object using call by Address
#include <iostream>
using namespace  std;
class Time{
  int hours ,min , sec;
  public:
  void getdata(){
    cout<<"Enter the hours :";
    cin>> hours;
    cout<<"Enter the min :";
    cin>> min;
    cout<<"Enter the sec :";
    cin>> sec;
  }
  void display(){
    cout<< hours << ":" << min << ":" <<sec << endl;
  }
  void sum( Time *t1 , Time *t2);
};
void Time :: sum(Time *t1,Time *t2)
{ 
     sec = t1->sec +t2->sec;
     min = sec/60;
     sec = sec % 60;
     min = min + t1->min + t2->min;
     hours = min /60;
     min = min % 60;
     hours = hours + t1->hours + t2->hours;
}
    int 	main(){
    Time t1,t2,t3;
    cout<<"Enter the 1st time details:"<<endl;
    t1.getdata();
     cout<<"Enter the 2st time details:"<<endl;
    t2.getdata();
    cout<<"The 1st time enterd:"<< endl;
    t1.display();
   cout<<"The 2st time enterd:"<< endl;
    t2.display();
    t3.sum(&t1,&t2);
    cout<<"The sum of two time:"<<endl;
    t3.display();
        return 0;
}
