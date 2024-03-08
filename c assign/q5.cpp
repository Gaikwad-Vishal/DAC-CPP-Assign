#include<iostream>
using namespace std;

char accept();
void test(char);

int main(){
    char ch;
    ch=accept();
    test(ch);
    return 0;
}

char accept(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    return ch;
}

void test(char ch){
    if(ch>=65&&ch<=90)
        cout<<"UPPER CASE";
    else if(ch>=97&&ch<=122)
        cout<<"LOWER CASE";
    else if(ch>=48&&ch<=57)
        cout<<"NUMBERS";
    else
        cout<<"SPECIAL SYMBOL";
}