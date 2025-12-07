
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class student
{
    int rollno;
    char name[50];
    int eng_marks, math_marks, sci_marks, ss_marks, cs_marks;
    double average;
    char grade;

public:
    void getdata();
    void showdata() const;
    void calculate();
    int setrollno() const;
}; 

void student::calculate()
{
    average=(eng_marks+math_marks+sci_marks+ss_marks+cs_marks)/5.0;
    if(average>=90)
        grade='A';
    else if(average>=75)
        grade='B';
    else if(average>=50)
        grade='C';
    else
        grade='F';
}

void student::getdata()
{
    cout<<"Enter student's roll number: ";
    cin>>rollno;
    cout<<"Enter student name: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"ll marks should be out of 100 :"<<endl;
    cout<<"Enter marks in English: ";
    cin>>eng_marks;
    cout<<"Enter marks in Math:  ";
    cin>>math_marks;
    cout<<"Enter marks in Science:  ";
    cin>>sci_marks;
    cout<<"Enter marks in social science:  ";
    cin>>ss_marks;
    cout<<"Enter marks in Computer science:  ";
    cin>>cs_marks;
    calculate();
}
void student::showdata() const
{
    cout<<"Roll number of student : "<<rollno<<endl;
    cout<<"Name of student : "<<name<<endl;
    cout<<"English : "<<eng_marks<<endl;
    cout<<"Maths : "<<math_marks<<endl;
    cout<<"Science : "<<sci_marks<<endl;
    cout<<"Social Science : "<<ss_marks<<endl;
    cout<<"Computer Science :"<<cs_marks<<endl;
    cout<<"Average Marks :"<<average<<endl;
    cout<<"Grade of student is :"<<grade<<endl;
}
int  student::setrollno() const
{
    return rollno;
}
void create_student();
void display_sp(int);
void display_all(); 
void delete_student(int);
void change_student(int);
int main()
{
    char ch;
    cout<<setprecision(2);
    do
    {
        char ch;
        int num;
        system("cls");
        cout<<"MENU:"<<endl;
        cout<<"1.Create student record :"<<endl;
        cout<<"2.Search student record :"<<endl;
        cout<<"3.Display all students records :"<<endl;
        cout<<"4.Delete student record :"<<endl;
        cout<<"5.Modify student record :"<<endl;
        cout<<"6.Exit :"<<endl;
        cout<<"What is your Choice (1/2/3/4/5/6) :";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
            create_student();
            break;
        case '2':
            cout<<"Enter The roll number:";
            cin>>num;
            display_sp(num);
            break;
        case '3':
            display_all();
            break;
        case '4':
            cout<<"Enter The roll number: ";
            cin>>num;
            delete_student(num);
            break;
        case '5':
            cout<<"Enter The roll number:";
            cin>>num;
            change_student(num);
            break;
        case '6':
            cout<<"Exiting, Thank you!";
            exit(0);
        }
    }
    while(ch!='6');
    return 0;
}
void create_student()
{
    student stud;
    ofstream oFile;
    oFile.open("student.dat",ios::binary|ios::app);
    stud.getdata();
    oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
    oFile.close();
    cout<<"\nStudent record Has Been Created:";
    cin.ignore();
    cin.get();
}
void display_all()
{
    student stud;
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be opened !! Press any Key to exit";
        cin.ignore();
        cin.get();
        return;
    }
    cout<<"DISPLAYING ALL RECORDS:\n\n";
    while(inFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
    {
        stud.showdata();
        cout<<"====================================\n";
    }
    inFile.close();
    cin.ignore();
    cin.get();
}
void display_sp(int n)
{
    student stud;
    ifstream iFile;
    iFile.open("student.dat",ios::binary);
    if(!iFile)
    {
        cout<<"File could not be opened... Press any Key to exit:";
        cin.ignore();
        cin.get();
        return;
    }
    bool flag=false;
    while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
    {
        if(stud.retrollno()==n)
        {
            stud.showdata();
            flag=true;
        }
    }
    iFile.close();
    if(flag==false)
        cout<<"\nnrecord does not exist:";
    cin.ignore();
    cin.get();
}
void change_student(int n)
{
    bool found=false;
    student stud;
    fstream fl;
    fl.open("student.dat",ios::binary|ios::in|ios::out);
    if(!fl)
    {
        cout<<"File could not be opened. Press any Key to exit...";
        cin.ignore();
        cin.get();
        return;
    }
    while(!fl.eof() && found==false)
    {
        fl.read(reinterpret_cast<char *> (&stud), sizeof(student));
        if(stud.retrollno()==n)
        {
            stud.showdata();
            cout<<"\nEnter new student details:"<<endl;
            stud.getdata();
            int pos=(-1)*static_cast<int>(sizeof(stud));
            fl.seekp(pos,ios::cur);
            fl.write(reinterpret_cast<char *> (&stud), sizeof(student));
            cout<<"\n Record Updated:";
            found=true;
        }
    }
    fl.close();
    if(found==false)
        cout<<" Record Not Found :"<<endl;
    cin.ignore();
    cin.get();
}
void delete_student(int n)
{
    student stud;
    ifstream iFile;
    iFile.open("student.dat",ios::binary);
    if(!iFile)
    {
        cout<<"File could not be opened... Press any Key to exit...";
        cin.ignore();
        cin.get();
        return;
    }
    ofstream oFile;
    oFile.open("Temp.dat",ios::out);
    iFile.seekg(0,ios::beg);
    while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
    {
        if(stud.retrollno()!=n)
        {
            oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
        }
    }
    oFile.close();
    iFile.close();
    remove("student.dat");
    rename("Temp.dat","student.dat");
    cout<<"\n\n\tRecord Deleted ..";
    cin.ignore();
cin.get();
}