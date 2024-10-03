#include<iostream>

using namespace std;
string name;
class mon{
    float bal;
    int ac;
    private :
       void withdraw(float minus){
        bal-=minus;
        cout<<"Success !! Money withdrawn from your account ! Your new Balance is "<<bal<<endl;
    }
    void view(){
        cout<<"Your Balance is "<< bal<< endl;
    }
    void deposit(float add){
        bal+=add;
        cout<<"Success !! Money added to your account ! Your new Balance is "<<bal<<endl;
    }

    public:
    int pin;
    void access(int p,int b,int acc)
    {
        pin=p;
        bal=b;
        ac=acc;
        atm();

    }

    void atm()
    {
        int p;
        cout << "Enter your PIN : ";
        cin >> p;
        if(pin==p){
            cout<<"A/c No. :"<<ac<<endl<<"Name : "<<name<<endl;
            int ch=0;
            while(ch!=4){
                cout<<endl<<"Enter Your choice >> " << endl << "1.To withdraw money"<<endl<<"2.To view balance "<< endl <<"3.To deposit"<<endl<<"4.To exit"<<endl;
                cin>>ch;
                float diff;
                switch(ch){
                    case 1:
                        cout<<"Enter money to be withdrawn : ";
                        cin>>diff;
                        withdraw(diff);
                        break;
                    case 2:
                        view();
                        break;
                    case 3:
                        cout<<"Enter money to deposit : ";
                        cin>>diff;
                        deposit(diff);
                        break;
                    case 4:
                        exit(1);
                    default:
                        cout<<"Wrong choice !! try again !! ";
                }
            }
        }
        else
            cout<<"Wrong Pin !! ";
    }

}x;
int main(){
    name="Pritam Mondal";
    x.access (1234,10000,896768);

}