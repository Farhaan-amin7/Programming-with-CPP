#include <iostream>
using std::string;
using namespace std;

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
};
// Private, public and protected.
int main() {
    int numbers;
    Employee employee1;
    employee1.Name = "Farhaan Amin Mir";
    employee1.company = "Microsoft";
    employee1.Age = 21;
    employee1.IntroduceYourSelf();

    Employee employee2;
    employee2.Name = "Furqaan amin";
    employee2.company = "Google";
    employee2.Age = 15;
    employee2.IntroduceYourSelf();

}

