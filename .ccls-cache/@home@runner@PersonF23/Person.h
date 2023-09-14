#include <string>
using namespace std;

class Person{
  private:
    int age=42;
    string name="Bob";
  public:
    Person();
    Person(string, int);
    int getAge();
    void setAge(int);
    string getName();
    void setName(string);
    void haveBirthday();
    };
