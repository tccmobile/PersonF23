#include <iostream>
#include <string>
using namespace std;


class Person{
  private:
    int age;
    string name;
  public:
    Person(string myname, int myage){ name = myname; age = myage;}
    int getAge() {return age;}
    void setAge(int myage) { age = myage;}
    string getName() {return name;}
    void setName(string myname) { name = myname;}
    void haveBirthday() { age++;}
};

int main() {
  Person one("Bob",42);
  Person two("Sue",60);

 // one.setName("Bob");
  cout<<"The name of my first person is: "<<one.getName()<<endl;
  //one.setAge(42);
  cout<<"The age of my first person is: "<<one.getAge()<<endl;
  //two.setName("Sue");
  //two.setAge(60);
  cout<<two.getName()<<"\'s age is "<<two.getAge()<<endl;
    cout<<one.getName()<<"\'s age is "<<one.getAge()<<endl;
  two.setAge(50);
 cout<<two.getName()<<"\'s age is "<<two.getAge()<<endl;
    cout<<one.getName()<<"\'s age is "<<one.getAge()<<endl;
  one.haveBirthday();
   cout<<two.getName()<<"\'s age is "<<two.getAge()<<endl;
    cout<<one.getName()<<"\'s age is "<<one.getAge()<<endl;
  two.setName("Susan");
  cout<<two.getName()<<"\'s age is "<<two.getAge()<<endl;
    cout<<one.getName()<<"\'s age is "<<one.getAge()<<endl;
}