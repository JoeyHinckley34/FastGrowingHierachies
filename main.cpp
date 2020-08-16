#include <stdio.h>
#include <iostream>
#include <iomanip>
//Fast-Growing Heirachies

using namespace std;

long long f0 (long long n){
    return n + 1;
}

long long f1 (long long n){
    long long ret = n;
    long long x = 0;
    while(x<n){
        ret = f0(ret);
        x++;
    }
    return ret;
}
long long f2 (long long n){
    long long ret = n;
    long long x = 0;
    while(x<n){
        ret = f1(ret);
        x++;
    }
    return ret;
}
long long f3 (long long n){
    long long ret = n;
    long long x = 0;
    while(x<n){
        ret = f2(ret);
        x++;
    }
    return ret;
}
long long f4 (long long n){
    long long ret = n;
    long long x = 0;
    while(x<n){
        ret = f3(ret);
        x++;
    }
    return ret;
}
long long f5 (long long n){
    long long ret = n;
    long long x = 0;
    while(x<n){
        ret = f4(ret);
        x++;
    }
    return ret;
}


int main(){
    system("clear");
    cout<< "This code calculates the Fast Growing Hierarchy\nWhich is a set of functions used to aproximate massive numbers\n"<<endl;
    cout<< "F0(n) is equal to n+1\n"<<endl;

    cout << "VALS:";
    long long w = 3;
    for(long long x = 0; x < 21; x++){
        cout << x << setw(w);
    }
    cout << "\nF0:  ";
    for(long long x = 0; x < 21; x++){
        cout << f0(x) << setw(w);
    }
    cout << endl;
    cout<< "\n\nF1(n) is equal to F0(n) applied to n n times"<<endl;
    cout<< "For example: F1(3) = F0(F0(F0(3))) = F0(F0(4)) = F0(5) = 6\n"<<endl;

    cout << "VALS:";
    for(long long x = 0; x < 21; x++){
        cout << x << setw(w);
    }
    cout << "\nF1:  ";
    for(long long x = 0; x < 21; x++){
        cout << f1(x) << setw(w);
    }
    cout << endl;
    cout<< "F1(n)=2n"<<endl;

    cout<< "\n\nF2(n) is equal to F1(n) applied to n n times"<<endl;
    cout<< "For example: F2(3) = F1(F1(F1(3))) = F1(F1(6)) = F1(12) = 24\n"<<endl;

    cout << "VALS:0 1 2  3  4   5   6   7    8    9    10    11    12     13     14     15      16      17      18      19       20" << endl;

    cout << "F2:  ";
    for(long long x = 0; x < 21; x++){
        cout << f2(x) << " ";
    }
    cout << endl;
    cout<< "F2(n)=n*2^n"<<endl;

    cout<< "\n\nF3(n) is equal to F2(n) applied to n n times"<<endl;
    cout<< "For example: F3(3) = F2(F2(F2(3))) = F2(F2(24)) = F2("<< f2(24)<<") = over 121 million digits\n" << endl;


    cout << "VALS:0 1    2";
    cout << endl;
    cout << "F3:  ";
      for(long long x = 0; x < 3; x++){
          cout << f3(x) << " ";
      }
    cout << endl;
    cout << "F4:  ";
      for(long long x = 0; x < 2; x++){
          cout << f4(x) << " ";
      }
    cout << "\nF4(2) = F3(F3(2)) = F3(2048) Which is riduclous" << endl;
    cout << "Quickly reached the limit of my computing power using only addition" << endl;
    cout << "Since I am using recusion writing F5 and so on is rather simple" << endl;
    cout << "Just the numbers get to big for my computer to handle" << endl;
    cout << "Loading f2(29): " << endl;
    cout << f2(29) << endl;

    return 0;
}
