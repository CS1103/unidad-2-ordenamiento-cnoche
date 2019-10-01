#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(){
    ifstream myfile;
    myfile.open(DOCNAME.csv);

    while(myfile.good()){
        string line;
        getline(myfile, line, ',');
        cout << line << ",";
    }
    cout<<endl;
}