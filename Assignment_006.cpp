#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int num){
    if (num<=1) return false;

    for (int i=2; i*i<=num; i++){
    if (num % i==0) return false;
    }
    return true;
}

int prime(const string &filename="NUMS.TXT"){
    fstream file;
    file.open("NUMS.TXT");
   int num, count=0;

if (!file.is_open()){
    cout<<"File failed to create."<<endl;
    return -1;
}else {
cout<<"File created successfully."<<endl;
}

while (file>>num){
    if (isPrime(num)){
        count++;
    }
}

file.close();

return count;
}

int main(){

    int result= prime("NUMS.TXT");
    if (result!=-1){
        cout<<"Number of prime numbers: "<<result<<endl;

    }
    return 0;

}
