#include "iostream"
#include "string"

using namespace std;


class Sequence{
public:
    Sequence(string _word);
    string run();
    string word;
};

class SeqRepeat:public Sequence {
public:
    SeqRepeat(string _word);
    string run();
};

// class Interver:public Sequence {
// public:
//     Interver(string _word);
//     string run();
//     int i;
// };

// class SeqExtract:public Sequence {
// public:
//     SeqExtract(string _word);
//     string run();
// };

// class SeqVariant:public Sequence {
// public:
//     SeqVariant(string _word);
//     string run();
// };

Sequence::Sequence(string _word){
    word = _word;
}


SeqRepeat::SeqRepeat(string _word): Sequence(_word){};

string SeqRepeat::run(){
    cout << "I am inside SeqRepeat "  << word << endl;
};


// Interver::Interver(string _word): Sequence(_word){}
// string Interver::run(){
//     cout << "I am inside Interver"  << word << endl;
// };


// SeqExtract::SeqExtract(string _word): Sequence(_word){};

// string SeqExtract::run(){
//     cout << "I am inside SeqExtract"  << word << endl;
// };


// SeqVariant::SeqVariant(string _word): Sequence(_word){};

// string SeqVariant::run(){
//     cout << "I am inside SeqVariant"  << word << endl;
// };


int main(){

    SeqRepeat sr("Hello");
    sr.run();
    return 0;
}