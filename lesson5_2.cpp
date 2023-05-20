#include  <iostream>
#include  <conio.h>
#include  <ctime>
#include  <cstdlib>
using namespace std;
#define EQ ==
#define CEOF 27
#define CEND "謝謝光臨\n"
#define SQUARE(x) (x)*(x)
#define CMAX(a,b) (a>b?a:b)
#define CMAX3(a,b,c) CMAX(a,CMAX(b,c))
#define GETRAND(a,b) (rand()%(b-a+1)+a)
#define CSWAP(a,b) a=a+b;b=a-b;a-=b;

typedef char AGE;

int main(int args, char **argv) {
    int a=100,b=200;
    CSWAP(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;
    //    srand(time(0));
//    for(int m=1;m<=10;m++){
//        cout<<char(GETRAND(65,90))<<"\t";
//    }
//    cout<<endl;

//cout<<CMAX3(12,52,112)<<endl;
//cout<<CMAX3(12,52,82)<<endl;
//
//cout<<CMAX(12,52)<<endl;
//cout<<CMAX(92,52)<<endl;

//	cout<<SQUARE(3+3)<<endl;
//	    cout<<SQUARE((3+3))<<endl;

//char ch;
//while(ch!= CEOF){
//	ch=getch();
//	cout<<ch;
//}
//cout<<CEND;
//int score=101;
//if(score EQ 100){
//	cout<<"相等\n";
//}else{
//		cout<<"不一樣\n";
//
//}
//AGE myAge=65;
//AGE score=49;
//cout<<myAge<<endl;
//cout<<score<<endl;

    return 0;
}