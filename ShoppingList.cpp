//wapcpp to implement a shopping list
#include<iostream>
using namespace std;
    class shop{
    private:
        float price[50];
        int code[50];
        int count;
    public:
        void ct(){
            count=0;
        }
        void get(){
            cout<<"Enter Item code :"<<endl;
            cin>>code[count];
            cout<<"Enter Item Price :"<<endl;
            cin>>price[count];
            count++;
        }
        void sum(){
            float sum=0;
            for(int i=0;i<count;i++)
                sum+=price[i];
            cout<<"Total price :"<<sum<<endl;
        }
        void remove(){
            int ch;
            for(int i=0;i<count;i++)
                cout<<"Item "<<i+1<<" code : "<<code[i]<<endl<<"Item "<<i+1 << " Price :"<<price[i]<<endl<<endl;
            cout<<"Enter Item no. to remove : ";
            cin>>ch;
            for(int i=ch-1;i<count;i++){
                code[i]=code[i+1];
                price[i]=price[i+1];
            }
            count--;
            cout<<"Item "<<ch<<" removed successfully !! "<<endl;
        }
        void display(){
            for(int i=0;i<count;i++)
                cout<<"Item "<<i+1<<" code : "<<code[i]<<endl<<"Item "<<i+1<<" Price :"<<price[i]<<endl<<endl;
        }
        void menu(){
            while(1) {
            int ch;
            cout<<"--------Shopping List--------"<<"\n1.Add Item \n2.Remove Item\n3.Display List\n4.Total\n5.Reset List\n6.Exit \nEnter Your Choice : ";
            cin>>ch;
            switch(ch){
                case 1:get();break;
                case 2:if(count<1)
                        cout<<"No items left to remove !!";
                        else
                         remove();
                        break;
                case 3:display();break;
                case 4:sum();break;
                case 5:ct();break;
                case 6:exit(0);
                default:cout<<"Try again";

            }
            }
        }
    }x;
    int main(){
        x.ct();
    x.menu();
    }
