
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//reasons to pass by reference
//for classes like ostream/istream, cannont create copies, so pass by reference
//ensure manipulation of variables inside the main method
//avoid making copies for large datatypes
//rule of thumb: use pass-by-reference whenever possible , exception being when you point to nothing
void Write(string& text, ostream& ostream) {
    ostream << text;

}

void Write(const vector<int> numbers, ofstream& ostream) {

    for (int n : numbers)
}

int main()
{
    string text = "Hello World\n";
    cout << text;

    //cin >> text;
    getline(cin, text);
   // cout << text << endl;

    Write(text, cout);

    //output to file
    ofstream output("data.txt");
    output << text;
    output.close();

}
