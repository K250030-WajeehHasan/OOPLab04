#include <iostream>
#include <string>
using namespace std;

class Author {
public:
    string name;
    int authorID;
    Author(const string& n, int id) : name(n), authorID(id){
	}
    void display() const {
        cout<<"  Author [" << authorID << "]: "<<name<<endl;
    }
};
class BookAgg {
private:
    string title;
    Author* authors[10];
    int authorCount;
public:
    BookAgg(const string& t) : title(t), authorCount(0) {
	}
    void addAuthor(Author* a) {
        if (authorCount < 10) {
            authors[authorCount++]=a;
        }
    }
    void displayAuthors() const {
        cout<<"Book: \""<<title<<"\"\n";
        for(int i = 0; i < authorCount; ++i) {
            authors[i]->display();
        }
    }
};
int main(){
    Author a1("Qasim",1);
    Author a2("Wajeeh",2);
    Author a3("Hasan",3);

    BookAgg book("C++ Guide");
    book.addAuthor(&a1);
    book.addAuthor(&a2);
    book.addAuthor(&a3);
    book.displayAuthors();
    cout << "\na1 still accessible: " << a1.name << "\n\n";
}
