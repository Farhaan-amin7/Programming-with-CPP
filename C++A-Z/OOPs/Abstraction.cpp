#include <iostream>
using namespace std;
/*
 Abstraction: Hiding complex thing behind a procedure that makes that things look simple.
  E.G, Clicking pictures in a smartPhone.
*/
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee {
    private:
        int age;
        string name;
        string company;
    public:
        void IntroduceYourSelf() {
            cout << "Name - " << name << endl;
            cout << "Company - " << company << endl;
            cout << "Age - " << age << endl;
        }
        Employee(int Age, string Name, string Company) {
            name = Name;
            company = Company;
            age = Age;
        }
        void AskForPromotion () {
            if(age > 30) {
                cout << name << " Got promoted" << endl;
            } else {
                cout << name << " Sorry, No promotion for you!" << endl;
            }
        }
};
int main() {
    Employee employee1 = Employee(31, "Farhaan", "Microsoft");
    Employee employee2 = Employee(16, "Furqaan", "Google");
    employee1.AskForPromotion();
    employee2.AskForPromotion();

}