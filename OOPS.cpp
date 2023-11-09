#include<iostream>

using namespace std;

class Employee {
private:
   string name;
   string company;
   int age;
   double salary;
public:
   void setname(string Name)
   {  name = Name;}
   string getname ()
   {  return name;  }
   void setcompany(string Company)
   {   company = Company; }
   string getcompany ()
   {   return company;}
   void setage (int Age )
   {  age = Age ;}
   int getage ()
   {   return age;  }
   void setsalary (int Salary)
   {    salary = Salary;  }
   double getsalary ()
   {    return salary ; }

void introduceyourself(){
    cout<<"Name - "<<name<<endl;
    cout<<"Company - "<<company<<endl;
    cout<<"Age - "<<age<<endl;
    cout<<"Salary - "<<salary<<endl;
}

Employee (string NAME , string COMPANY , int AGE , double SALARY){
    name=NAME;
    company = COMPANY;
    age = AGE;
    salary = SALARY;
}
};

int main()
{
  Employee employee1 = Employee("ASHISH","GOOGLE PLEX USA", 20 , 120000.45);
  employee1.setname("Ashu");
  cout<<employee1.getname()<<endl;
  employee1.introduceyourself();
  Employee employee2 = Employee("AMAN", "MICROSOFT", 21, 100000.85);
  employee2.setcompany("AMAZON");
  employee2.introduceyourself();
}