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
    int score=stoi(p);
    score+=6000;
    cout<<score<<endl;
    fstream fos("hello.txt",ios::out|ios::trunc);
//fos.write(to_string(score).c_str(),to_string(score).length());
    fos<<score;
//int  n;
//n=fs.get();
//cout<<(char)n<<endl;

    fs.close();
    return 0;
}
//fstream fis,fos;
//fis.open("ina.txt");
//fos.open("outb.txt",ios::out|ios::trunc);
//bool first=true;//判斷是否為第一個數字
//bool isNumber=false;
//int sum=0,n=0;//sum用來累加的,n為取得檔案中的數字
//char ch;
//while(!fis.get(ch).eof()) {
////1.先印出數字,而後再判斷
////2.再判斷仟,佰,拾
//if(ch>='0' && ch<='9') {
//isNumber=true;
//if(isNumber) {
//n*=10;
//n+=ch-'0';
//}
//} else {
////3.若n不等於0則加總,並寫入檔案
//if(n!=0) {
////4.判斷是否為第一個數字
//if(first) {
//first=false;
//} else {
//cout<<"+";
//fos.put('+');
//}
//cout<<n;
////fos.write(to_string(n).c_str(),to_string(n).length());
//fos<<n;//將上述一行式改為用運算子,程式變精簡
//sum+=n;
//}
//isNumber=false;
//n=0;
//}
//}
//cout<<"="<<sum;
////	fos.put('=');
////	fos.write(to_string(sum).c_str(),to_string(sum).length());
//fos<<"="<<sum;//上面二行可以改成這樣一行
//fis.close();
//fos.close();