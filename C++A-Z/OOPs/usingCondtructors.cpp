#include <iostream>
using std::string;
using namespace std;

/*
Rules to keep in mind before using constructors.
    It does not have a return type.
    It has the same name as the class.
    


*/
class Employee { // serves as a blueprint, as a model.
public:
    string Name; // Everything inside a class is private by default.
    string company;
    int Age;

    void IntroduceYourSelf() {
        cout<<"Name - " << Name << endl;
        cout<<"company - " << company << endl;
        cout<<"Age - " << Age << endl;
    }
    Employee(string Name, string company, int Age) {
        Name = Name;
        company = company;
        Age = Age;
    }
};
// Private, public and protected.
int main()
{
    Employee employee1 = Employee("Farhan", "Microsoft", 21);
    employee1.IntroduceYourSelf();
    
    Employee employee2 = Employee("Furqaan", "Google", 15);
    employee2.IntroduceYourSelf();
}
