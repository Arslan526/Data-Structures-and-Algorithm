#include<iostream>
using namespace std;
void BackTohome(int gh , int home){
    cout<< "Ghar " << gh << " Home " << home << endl;
    
    // Base case
    if(gh == home){
        cout<<"Ghar Pahuch gya "<< endl;
        return ;
    }
    // Processing ek step aage badhgaa
    gh++;
    // Recursvi call
    BackTohome(gh , home);

}
int main(int argc, const char** argv) {
    int gh = 1;
    int home = 12;
    cout<< endl;
    BackTohome(gh , home);
}