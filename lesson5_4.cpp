#include  <iostream>
#include <conio.h>>
#include "myHeader.h"
#ifndef  _myHeader_h_
#endif

using namespace std;

int main(int args, char **argv) {
    int year ;
    cout<<"消費西元年份:";
    cin>>year;
    if(year>=LASTYEAR){
        cout<<"終身白金卡會員活動已結束!\n是否轉買線上白金卡一年期?(y/n):";
        char ch=getche();
        if(toupper(ch)=='Y'){
            cout<<endl<<M3<<MSG;
        }else{
            cout<<endl<<MSG;
        }
    }
    else if(year>=FIRSTYEAR){

        cout<<M2<<MSG;

    }else{
        cout<<M1<<MSG;

    }

    return 0;
}