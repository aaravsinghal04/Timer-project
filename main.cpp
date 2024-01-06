#include <iostream>
#include<cstdlib>
#include<windows.h>
#include <unistd.h>

using namespace std;
int main(){
    short mins,secs;
    int time;
    do{
        cout<<"Enter Minutes:";
        cin>>mins;
    }while(mins>59);
    
    do{
        cout<<"Enter Seconds:";
        cin>>secs;
    }while(secs>59);

    time =(mins!=0) ? mins*60 : 0;
    time += secs;

    for(int i = time; i>0; i--){
        system("cls");
        cout<<"time remaining is "<< mins<<" : "<<secs;
        mins=(i%60==0)?--mins:mins;
        secs= (secs==0)?59:--secs;
        sleep(1);
    }
    system("cls");
    cout<<"TIMER ENDED";
    return 0;
}