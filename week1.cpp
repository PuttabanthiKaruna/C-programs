// a. Define a Student class with attributes: rollNumber, name, marks
#include<iostream>
using namespace std;
class student{
    int r,m,rno,marks;
    char n1[26],n2[26];
    public:
    void s1details()
    {
        cout<<"enter student 1 roll no:"<<endl;
        cin>>rno;
        cout<<"enter student 1 name:"<<endl;
        cin>>n1;
        cout<<"enter student 1 marks:"<<endl;
        cin>>marks;
        
    }
    void s2details()
    {
        cout<<"enter student 2 roll no:"<<endl;
        cin>>r;
        cout<<"enter student 2 name:"<<endl;
        cin>>n2;
        cout<<"enter student 2 marks:"<<endl;
        cin>>m;
    }
    
};

int main()
{
student c1,c2;
c1.s1details();
c2.s2details();
return 0;
}

// output
// enter student 1 roll no:
// 123
// enter student 1 name:
// kavya
// enter student 1 marks:
// 99
// enter student 2 roll no:
// 124
// enter student 2 name:
// priya
// enter student 2 marks:
// 98

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// b. Implement a constructor to initialize objects and a destructor to display a message when an object is deleted
#include<iostream>
using namespace std;
class abc{
    int a;
    public:
    abc()
    {
       cout<<"enter a value"<<endl;
       cin>>a;
    }
     ~abc(){
       cout<<"a value is="<<a;
    }
};
int main()
{
abc c1;
return 0;
}

// output
// enter a value
// 2
// a value is=2
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //d. Input details of n students and display them
#include<iostream>
using namespace std;
class student{
    int rn,m,i,n;
    char name[30];
    public:
    student()
    {  
        
        cout<<"enter student details"<<endl;
        cout<<"->enter student name"<<endl;
        cout<<"->enter student roll number"<<endl;
        cout<<"->enter student marks"<<endl;
        
        
    }
        void studentdetails()
        {
        cout<<"n="<<endl;
        cin>>n;
        for(i=1;i<=n;i++)
        {
        cout<<"enter student details"<<i<<endl;
        cout<<"enter student name:"<<endl;
        cin>>name;
        cout<<"enter student roll no.:"<<endl;
        cin>>rn;
        cout<<"enter student marks:"<<endl;
        cin>>m;
        }   
        }
};
int main()
{   
    student s1;
    s1.studentdetails();
    return 0;  
}
// OUTPUT
// enter student details
// ->enter student name
// ->enter student roll number
// ->enter student marks
// n=
// 2
// enter student details1
// enter student name:
// kavya
// enter student roll no.:
// 1
// enter student marks:
// 99
// enter student details2
// enter student name:
// priya
// enter student roll no.:
// 2
// enter student marks:
// 98
    
    #include<iostream>
using namespace std;
class student
{
        public:
    int id;
    char name[];
    student()
    {
        cout<<"student name"<<endl;
        cout<<"student ID"<<endl;
        
    }
    void display()
    {
         cout<<"student name"<<endl;
         cin>>name;
         cout<<"student ID"<<endl;
         cin>>id;
    }
};
int main(){
     student s1;
     int n,i;
      cout<<"enter n value"<<endl;
     cin>>n;
       s1[i].display();
    // student* student_array=new student[n];
    s1.display();
     for(i=1;i<=n;i++)
        {
         s1[i].display();
        }
}
    
//c.dynamically allocate an array of student objects using new
#include<iostream>
using namespace std;

class student
{
public:
    int id;
    char name[50];

    void display()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student ID: ";
        cin>>id;
    }

    void show()
    {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student ID: "<<id<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    student* s1 = new student[n];   

    for(int i=0; i<n; i++)
    {
        cout<<"\nStudent "<<i+1<<endl;
        s1[i].display();
    }

    cout<<"Student Details\n";
    for(int i=0; i<n; i++)
    {
        s1[i].show();
    }

    delete[] s1;   
    return 0;
}

________________________________________________________________________________________________________________________________    
  2.  
 // a. Implement two overloaded functions add() that can add:Two integers, Two oating-point numbers
#include<iostream>
using namespace std;
class abcd{
    public:
    int sum=0;
    int add(int a,int b){
        return a+b;
    }
    double add(double x,double y){
          return x+y;

       }
};
int main(){
    abcd o1;
    o1.add(2,3);
    o1.add(2.3,1.5);
}
______________________________________________________________________________________________________________________________
   
// b. Define a function template swapValues() that swaps two variables of any type.
#include<iostream>
using namespace std;
template<typename T>
  T SwapValues(T a,T b){
       a=a+b;
       b=a-b;
       a=a-b;
       cout<<"after swapping "<<a<<b;
       return 0;
   } 
int main(){
    SwapValues(2,3);
}
// output
// after swapping 32
____________________________________________________________________________________________________________________________________
3.// a. Create a vector of integers, insert elements, and display them using an iterator
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={10,20,30,40,50};
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" ";
    }
return 0;
}

