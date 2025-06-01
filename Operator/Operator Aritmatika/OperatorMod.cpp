#include <iostream>
#include <string>
using namespace std;

int main(){
    //Opertor Modulus/Sisa Bagi(*)
    int m = 10, n = 3; 
    int o;
    o = m % n; //10 dibagi 3 adalah 3.33333....
    //tapi perkalian mendekati adalah 3 dikali 3 yaitu 9 jadi angka yang tersisa dari 10 adalah 1 (10-9)
    cout << o << endl; 
}