#include<iostream>
using namespace std;
class Hero{
    private:

    int health;
    char level;
    public:
    // Constcotr 
    Hero(){
        cout<<"Simple consroctor clled "<< endl;
    }
    // parametrzesed constroctor
    Hero(int health , char level){
        this-> health = health;
        this-> level = level;
    }
    void print(){
        cout<<"Health "<< health <<endl;
        cout<<"Level "<< level << endl;
    }
    //copy constrctor

    
    int gethealth( ){
        return health;
    }
    int getlevel( ){
        return level;
    }
    void sethealth(int h ){
        health = h;
    
    }
    void setlevel(char ch){
        level  = ch;
    }

};
int main(int argc, const char** argv) {
    // create the oject
    Hero h1(12 , 'A');
    h1.print();


    /*h1.sethealth(20);
    h1.setlevel('a');
    cout<<"Size of h1 "<< sizeof(h1) << endl;
    cout<<"Health is "<< h1.gethealth() << endl;
    cout<<"Level is " << h1.getlevel() << endl;
    */
    return 0;
}