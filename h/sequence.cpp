#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

class Sequence{
public:
    string word;
    
    Sequence(string _word){word=_word;};
    Sequence(){};
    bool is_word(){
        bool check_length = word.length() > 2;
        bool check_alphabet = std::all_of(word.begin(), word.end(), [](int i){
            cout << i << endl;
            return (i>96 && i<123);
            }
        );
        return check_length && check_alphabet;
    }

    virtual string emit();
};

class Inverter: public Sequence{
public:
    int i;
    Inverter(){};
    string invert(string word){}
};

class SeqRepeat:public Inverter {
public:
    string emit(string word){

    }
};
class SeqExtract:public Inverter {
public:
    string emit(string word){

    }
};
class SeqVariant:public Inverter {
public:
    string emit(string word){

    }
};

int main(){
    cout << "starting the app." << endl;

    std::ifstream file("words.dat");
    if (! file.is_open()){
        cout << "could not find the file" << endl;
    }
    vector<string> allwords;
    std::string line;
    while (std::getline(file, line)) {
        cout << "New Line: " << line << endl;
        allwords.push_back(line);
    }

    string w = allwords[0];
    Sequence sq (w);
    SeqExtract se(w);
    SeqRepeat sq(w);
    SeqVariant sv(w);

    sq.guess(w)
    
    return 0;
}