#include <iostream>
#include <string>
using namespace std;

class University {
private:
    static int totalStudents;
    string universityName;

public:
    University(const string& name){
    	universityName=name;
        ++totalStudents;
    }
    static int getTotalStudents(){
        return totalStudents;
    }
    void displayInfo() const {
        cout<<"University : "<<universityName<<endl;
    	cout<<"Total students enrolled: "<<totalStudents<<endl;
    }
};
int University::totalStudents = 0;
int main() {
    University u1("IBA");
    University u2("FAST");
    University u3("LUMS");

    u1.displayInfo();
    cout << "\n";
    u2.displayInfo();
    cout << "\n";
    u3.displayInfo();
    cout << "\nUniversity::getTotalStudents() = "<< University::getTotalStudents()<<"\n\n";
}
