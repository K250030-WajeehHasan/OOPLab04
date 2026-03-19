#include"iostream"
#include"string"
using namespace std;

class Student {
    static int counter;
    int id;
    string name;
    int marks[5];
public:
    Student() {
        counter++;
        id = counter;
    }
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    float average() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total / 5.0;
    }
    void show() {
        cout << "ID: " << id << "  Name: " << name << "  Average: " << average() << endl;
    }
    float getAvg() {
        return average();
    }
};
int Student::counter = 0;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student list[100];
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        list[i].input();
    }
    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        list[i].show();
    }
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (list[i].getAvg() > list[top].getAvg()) {
            top = i;
        }
    }
    cout << "\nStudent With Highest Average\n";
    list[top].show();
    return 0;
}
