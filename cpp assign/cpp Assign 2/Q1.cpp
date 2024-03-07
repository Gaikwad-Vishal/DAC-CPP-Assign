#include <iostream>
using namespace std;
class Volume
{
    private:
    int length;
    int width;
    int height;

public:
    Volume(int length, int width, int height) : length(length), width(width), height(height) {}
    int calVol(){
        int vol;
        vol=length * width * height;
        return vol;
    }
    void accept(){
        cout<<" Enter 1.len 2.width 3.height"<<endl;
        cin>>length;
        cin>>width;
        cin>>height;
    }
    void display(){
        cout<<"VOLUME : " <<calVol()<<endl;
    }
};
int main()
{
    Volume v(0, 0, 0);
    int choice;
    do{
    cout<<"    MENU   "<<endl;
    cout<<" 0 : EXIT   "<<endl;
    cout<<" 1 : ACCEPT (1.len,2.width,3.height)  "<<endl;
    cout<<" 2 : DISPLAY Volume   "<<endl;
    cin>>choice;
    switch(choice){
        case 0:
            break;
        case 1:
            v.accept();
            break;
        case 2:
            v.display();
            break;
        default:
            cout<<"invalid input";
            break;
    }
    }while(choice!=0);
    cout<<"Thank YOU"<<endl;
    
    return 0;
}