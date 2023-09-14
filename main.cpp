#include <iostream>
#include <string>
#include "Person.h"
using namespace std;



int main() {
  Person one("Bob",42);
  Person two("Sue",60);
  Person three;


    cout<<three.getName()<<"\'s age is "<<three.getAge()<<endl;
  two.setName("Susan");
  cout<<two.getName()<<"\'s age is "<<two.getAge()<<endl;
  two.setName("Susan");


  
}