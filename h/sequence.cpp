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

class SeqRepeat:public Base{
public:
    SeqRepeat(string _word):Base(_word){};
    string run(){
        cout << "insde SeqRepeat run."<< word << endl;
        string res = "result";
        return res;
    }
};

class SeqExtract:public Base{
public:
    SeqExtract(string _word):Base(_word){};
    string run(){
        cout << "insde SeqExtract run."<< word << endl;
        string res = "result";
        return res;
    }
};

class SeqVariant:public Base{
public:
    SeqVariant(string _word):Base(_word){};
    string run(){
        cout << "insde SeqVariant run." << word << endl;
        string res = "result";
        return res;
    }
};

class Inverter:public Base{
public:
    Inverter(string _word):Base(_word){};
    string run(){
        cout << "insde Inverter run." << word << endl;
        string res = "result";
        return res;
    }
};

int main(){
    cout << "starting the app." << endl;

    SeqRepeat d("h1");
    string res = d.run();

    SeqExtract d2("h2");
    res = d2.run();


    SeqVariant d3("h3");
    res = d3.run();

    Inverter d4("h4");
    res = d4.run();

    return 0;
}