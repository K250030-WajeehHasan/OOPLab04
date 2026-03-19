#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    const string ISBN; 
    string title;

public:
	Book(const string& isbn, const string& t): ISBN(isbn), title(t) {
	}
    void displayDetails() const {
        cout<<"ISBN: "<<ISBN<<endl;
        cout<<"Title: "<<title<<endl;
    }
    void updateTitle(const string& newTitle) {
        title=newTitle;
    }
    // Attempting to modify ISBN inside any function would be an Error
};
int main(){
    Book b1("1001","Python");
    b1.displayDetails();
    b1.updateTitle("Java");
    cout << "\nAfter updateTitle():\n";
    b1.displayDetails();

    const Book constBook("1002", "C++");
    cout << "\nconst Book object:\n";
    constBook.displayDetails();
    // if we update this it will create a compile error
    cout << "\n";
}
