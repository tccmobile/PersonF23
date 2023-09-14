#include "Person.h";


 Person::Person() {};
Person::Person(string myName, int myAge): name(myName), age(myAge){};
int Person::getAge() {return age;};
void Person::setAge(int myAge){ age=myAge;};
string Person::getName() {return name;};
void Person::setName(string myName) {name = myName;};
void Person::haveBirthday() {age++;};

