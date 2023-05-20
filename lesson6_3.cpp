#include  <iostream>
#include  <fstream>
using namespace std;

int main(int args, char **argv) {
    fstream fs("hello.txt",ios::in);
//fs.open("hello.txt");
//cout<<fs.is_open()<<endl;
    char *p=new char[100];
    fs.getline(p,100);
    cout<<p<<endl;
//int  n;
//n=fs.get();
//cout<<(char)n<<endl;

    fs.close();
    return 0;
}