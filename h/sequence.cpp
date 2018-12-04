#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Sequence{
public:
    Sequence(string _word){
        word = _word;
    };
    string word;
};

class SeqRepeat:public Sequence{
public:
    SeqRepeat(string _word):Sequence(_word){};
    string run(){
        cout << "insde SeqRepeat run."<< word << endl;
        string res = "result";
        return res;
    }
};

class SeqExtract:public Sequence{
public:
    SeqExtract(string _word):Sequence(_word){};
    string run(){
        cout << "insde SeqExtract run."<< word << endl;
        string res = "result";
        return res;
    }
};

class SeqVariant:public Sequence{
public:
    SeqVariant(string _word):Sequence(_word){};
    string run(){
        cout << "insde SeqVariant run." << word << endl;
        string res = "result";
        return res;
    }
};

class Inverter:public Sequence{
public:
    Inverter(string _word):Sequence(_word){};
    string run(){
        cout << "insde Inverter run." << word << endl;
        string res = "result";
        return res;
    }
};

int main(){
    cout << "starting the app." << endl;

    // read the file
    // loop through the lines
    std::ifstream file("words.dat");
    std::string line;
    while (std::getline(file, line)) {
        cout << "New Line: " << line << endl;
    }

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