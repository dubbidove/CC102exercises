#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    fstream file;
    fstream file1;
    
    file.open("color.txt", ios::out);
    if (file.is_open()){
    file << "Red"    << endl;
    file << "Blue"   << endl;
    file << "Green"  << endl;
    file << "Yellow" << endl;
    file << "Purple" << endl;
    file << "Orange" << endl;
    file << "Pink"   << endl;

    file.close();
    cout<<"file successfully created."<<endl;
    }else {
    cout<<"file failed to create."<<endl;
    }
    
    file1.open("copy-color.txt", ios:: out);
    file.open("color.txt", ios:: in);
    if (file.is_open() && file1.is_open()){
    string line;
    while (getline(file, line)) {
        file1 << line << endl;
        }
        file.close();
    file1.close();
    
    }else {
    cout<<"file failed to creat.";
    }
    

    
    
    

    return 0;
}
    