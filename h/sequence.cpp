#include <iostream>
#include <string>
using namespace std;

class Base{
public:
    Base(string _word){
        word = _word;
    };
    string word;
};

class Derived1:public Base{
public:
    Derived1(string _word):Base(_word){};
    string run(){
        cout << "insde Derived 1 run." << endl;
        string res = "result";
        return res;
    }
};

class Derived2:public Base{
public:
    Derived2(string _word):Base(_word){};
    string run(){
        cout << "insde Derived 2 run." << endl;
        string res = "result";
        return res;
    }
};

class Derived3:public Base{
public:
    Derived3(string _word):Base(_word){};
    string run(){
        cout << "insde Derived 3 run." << endl;
        string res = "result";
        return res;
    }
};

int main(){
    cout << "starting the app." << endl;

    Derived1 d("h1");
    string res = d.run();

    Derived2 d2("h1");
    res = d2.run();


    Derived3 d3("h1");
    res = d3.run();

    return 0;
}