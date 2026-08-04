#include<iostream>
#include<string>

using namespace std;
class Student{

private:
string name;
int rollNo;
float marks;
  
public: 
void inputDetails(){
    cout<<"Enter student Name:";
    getline(cin>>ws,name);
    cout<<"Enter Roll Nmuber:";
    cin>>rollNo;
    cout<<"Enter Marks:";
    cin>>marks;
}

void displayDetails() const{
 cout<<"\n-----Student Details----\n";
 cout<<"Name: "<<name<<endl;
 cout<<"roll No.:"<<rollNo<<endl;
 cout<<"Marks:"<<marks<<endl;
 


}
};

int main(){
    Student s;

    s.inputDetails();
    s.displayDetails();
    
    return 0;

}


