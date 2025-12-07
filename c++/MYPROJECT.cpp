// classes and object 
#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Student{
    int rollno;
    char name[20];
    char gender;
    int age;
    int std;
    float marks;
public:
	char*getname(){
		return name;
	}
int getr()
{
    return rollno;
}
   Student(){
       rollno=0;
       strcpy(name,"NONAME");
       gender='-';
       age=0;
       marks=0;
       std=1;
       cout<<"Default Constructor Invoked.....\n";
   } 
   Student(int rn,char nm[20],char g,int a,int s){
       rollno=rn;
       strcpy(name,nm);
       gender=g;
       age=a;
       std=s;
       cout<<"Paramerterized Constructor Invoked.....\n";
   }
   void getData(){
       cout<<"Enter Student Details\n";
       cout<<"Roll no : ";
       cin>>rollno;
       cout<<"Name   : ";
       cin>>name;
       cout<<"Gender : ";
       cin>>gender;
       cout<<"Age   : ";
       cin>>age;
       cout<<"Standerd : ";
       cin>>std;
   }
   void showData(){
       cout<<"Student Details\n";
       cout<<"Roll no   : "<<rollno<<endl;
       cout<<"Name       : "<<name<<endl;
       cout<<"Gender     : "<<gender<<endl;
       cout<<"Age        : "<<age<<endl;
       cout<<"Standard   : "<<std<<endl;
   }
  
   void listData(){
       cout.setf(ios::left);
       cout<<setw(10)<<rollno;
       cout<<setw(20)<<name;
       cout<<setw(10)<<gender;
       cout<<setw(5)<<age;
       cout<<setw(5)<<age;
       cout<<endl;
   }
};
void menu(){
    cout<<"STUDENT RECORDS\n";
    cout<<"================\n";
    cout<<"0. Exit\n";
    cout<<"1. Register New Student\n";
    cout<<"2. Show All Students\n";
    cout<<"3. Search by Roll no\n";
    cout<<"4. Search by  Name\n";
    cout<<"Enter your choice : ";
}
void heading()
{
       cout.setf(ios::left);
       cout<<setw(10)<<"Roll No.";
       cout<<setw(20)<<"Name";
       cout<<setw(10)<<"Gender";
       cout<<setw(5)<<"Age";
       cout<<setw(5)<<"Std";
       cout<<endl;
}

int main() {
    int n=0,ch ,rn,i,flag=0;
    Student s[10];
  
   do 
   {
       system("cls");
       menu();
       cin>>ch;
       switch(ch)
       {
         case 1: s[n].getData(); n++;
         cout<<"Record saved sucessfull......\n";
         break;
         case 2: 
         if(n<0)
         {
         heading();
         for(i=0;i<n;i++)
         {
            s[i].listData(); 
         }
       }
       else
       {
       cout<<"\n Noting to Dispaly...\n";     
       }
       break;
       case 3:
       	if(n>0){
       cout<<"Enter Roll no To Display : ";
       cin>>rn;
         for(i=0;i<n;i++)
         {
            if(rn==s[i].getr())
            {
                s[i].showData();
                flag++;
            }
            else 
            {
                cout<<"\n Not such Roll number.....\n";
         }
         if(flag==0){
              cout<<"\n Not such Roll number.....\n";
         }
         }
         }
         else
         {
             cout<<"\n Noting to Dispaly...\n";     
         }
            if(flag==0){
               cout<<"\n Not such Roll number.....\n";
         }
       break;
        case 4:
        	if(n>0){
        		char nm[20];
       cout<<"Enter Name To Display : ";
       cin>>nm;
         for(i=0;i<n;i++)
         {
           // if(rn==s[i].getr())
           if(strcmp(nm,s[i].getname())==0)
            {
                s[i].showData();
                flag++;
            }
            else 
            {
                cout<<"\n Not such Roll number.....\n";
         }
         if(flag==0){
              cout<<"\n Not such Roll number.....\n";
         }
         }
         }
         else
         {
             cout<<"\n Noting to Dispaly...\n";     
         }
         if(flag==0){
               cout<<"\n Not such Roll number.....\n";
         }
       break;
       }
       system("pause");
   }while(ch);
    
  

    return 0;
}



