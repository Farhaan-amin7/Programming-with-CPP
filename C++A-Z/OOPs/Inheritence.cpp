#include <iostream>
using namespace std;
class AbstractEmployee {
    virtual void AskForPromo() = 0;
};
class Employee: AbstractEmployee {
    private:
        int age;
        string company;
    protected:
        string name;

    public:
        void setName(string Name)
        {
            name = Name;
        }
        string getName()
        {
            return name;
        }
        void setCompany(string Company)
        {
            company = Company;
        }
        string getCompany()
        {
            return company;
        }
        void setAge(int Age)
        {
            if (Age >= 18)
                age = Age;
        }
        int getAge()
        {
            return age;
        }

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
        void AskForPromo() {
            if(age > 30) {
                cout << name << " Just got promoted" << endl;
            }
             else {
                cout << name << " Sorry!, No, you are not promoted." << endl;
             }
        }  
};
class Developer: public Employee { // Inheritance is also private by default.
    public:
        string favProgramingLanguage;
        Developer(int Age, string Name, string Company, string FavProgramingLanguage) : Employee( Age, Name, Company) {
            favProgramingLanguage = FavProgramingLanguage;
        }
        void FixBug() {
            cout << name << " Fixed a bug using " << favProgramingLanguage << endl;
        }
};
class Teacher: public Employee {
    public:
        string Subject;
        Teacher(int Age, string Name, string Company, string subject) : Employee( Age,  Name,  Company) {
            Subject = subject;
        }
    void PreparedLesson() {
        cout <<  name << " is preparing " << Subject << " lesson" << endl;
    }

};
int main() {

    Developer d = Developer(21, "Farhaan", "Microsoft", "C++");
    d.FixBug();
    
    Teacher teach = Teacher(45, "Jack", "whatSchool", "ComputerScience");
    teach.PreparedLesson();
    teach.AskForPromo();
}