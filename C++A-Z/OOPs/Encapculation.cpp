#include <iostream>
using std::string;
using namespace std;

/*
Rules to keep in mind before using constructors.
    It does not have a return type.
    It has the same name as the class.
    


*/
class Employee { // serves as a blueprint, as a model.
private:
    string name; // Everything inside a class is private by default.
    string company;
    int age;

public:
    void setName(string Name) {
        name = Name;
    }
    string getName() {
        return name;
    }
    void setCompany(string Company) {
        company = Company;
    }
    string getCompany() {
        return company;
    }
    void setAge(int Age) {
        if(Age >= 18)
        age = Age;
    }
    int getAge() {
        return age;
    }
    void IntroduceYourSelf() {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
    Employee(string Name, string Company, int Age) {
        name = Name;
        company = Company;
        age = Age;
    }
};
// Private, public and protected.
int main()
{
    Employee employee1 = Employee("Farhan", "Microsoft", 21);
    employee1.IntroduceYourSelf();
    
    Employee employee2 = Employee("Furqaan", "Google", 15);
    employee2.IntroduceYourSelf();

    employee1.setAge(14);

    cout << "The age of the first employee was fake and now his actual age is: " << employee1.getAge() << " year's old" << endl;
}
