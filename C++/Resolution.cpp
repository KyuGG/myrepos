#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    do
    {
    cout<<"1. 1920x1080 75hz"<<endl;
    cout<<"2. 1024x768 60hz"<<endl;
    cin>>a;
    system("clear");
    switch(a)
    {
        case 1:
        {
            system("/home/kyugg/Scripts/Normal_Mode.sh");
            break;
        }
        case 2:
        {
            system("/home/kyugg/Scripts/Game.sh");
            break;
        }
        default:
        {
            break;
        }
    }
    }while(a!=0);
    return 0;
}