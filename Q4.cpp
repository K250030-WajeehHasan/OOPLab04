#include <iostream>
#include <string>
using namespace std;

class Processor {
public:
    string model;
    double speed;
    
    Processor(const string& m, double s) : model(m), speed(s) {
	}
    void display() const {
        cout<<"Processor: "<<model<<" @ "<<speed<<" GHz"<<endl;
    }
};
class RAM {
public:
    int size;
    string type;

    RAM(int s, const string& t) : size(s), type(t) {
	}
    void display() const {
        cout<<"RAM: "<<size<<" GB "<<type<<endl;
    }
};
class Computer {
private:
    string brand;
    Processor cpu;
    RAM ram;
public:
    Computer(const string& b, const string& cpuModel, double cpuSpeed, int ramSize,  const string& ramType):brand(b), cpu(cpuModel, cpuSpeed), ram(ramSize, ramType){
	}
    void displaySpecs() const {
        cout<<"Computer: "<<brand<<"\n";
        cpu.display();
        ram.display();
    }
};
int main() {
    Computer pc("Dell XPS", "Intel Core i9", 5.8, 64, "DDR5");
    pc.displaySpecs();
    Computer laptop("Apple MacBook Pro","Apple M4 Pro", 4.05, 18, "LPDDR5");
    cout<<endl;
    laptop.displaySpecs();
}
