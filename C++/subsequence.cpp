/*
    Authors Name : Niladri Adhikary
    Date Modified: 21 Oct, 2022
*/

#include <iostream>
using namespace std;

void subseq(string s,string out){
    if(s.length() == 0){
        cout << out << endl;
        return;
    }

    subseq(s.substr(1),out);
    subseq(s.substr(1),out + s[0]);
}

int main(){
    string s;
    cin >> s;
    subseq(s,"");
}