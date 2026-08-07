#include <iostream>
using namespace std;
class MobileRecharge{
    private:
        int mobileNum;
        string name;
        float currentBal;
        int select;
    
    public:
        void acceptDetails(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter mobile number: ";
            cin>> mobileNum;
            cout<<"What is your current balance? (in Rs):" ;
            cin>> currentBal;
        }
        void rechargeBal(){
            cout<<"Select a Recharge Plan:-" <<endl;
            cout<<"1. 3999 Rs Ultimate plan"<<endl;
            cout<<"2. 399 Rs Max plan"<<endl;
            cout<<"3. 39 Rs Begineer plan"<<endl;
            cout<<"4. Exit"<<endl;
            
            while(1){
                cout<<"Select from above: ";
                cin>>select;
                if(select==1){
                    if(currentBal>=3999){
                        cout<<"Recharge done of 3999rs !!"<<endl;
                        break;
                    }
                    else{
                        cout<<"Low Balance in your Account !!"<<endl;
                        cout<<"Choose another..."<<endl;
                    }
                }
                else if(select==2){
                    if(currentBal>=399){
                        cout<<"Recharge done of 399rs !!"<<endl;
                        break;
                    }
                    else{
                        cout<<"Low Balance in your Account !!"<<endl;
                        cout<<"Choose another..."<<endl;
                    }
                }
                else if(select==3){
                    if(currentBal>=39){
                        cout<<"Recharge done of 3999rs !!"<<endl;
                       
                        break;
                    }
                    else{
                        cout<<"Low Balance in your Account !!"<<endl;
                        cout<<"Choose another..."<<endl;
                    }
                }
                else if(select==4){
                    exit;
                }
                else{
                    cout<<"No such plan exist !! Try Again !!"<<endl;
                }
            }
        }
        void deductBal(){
            if(select==1){
                currentBal -=3999;
                cout<<"3999rs deducted from current balance !!"<<endl;
            }
            if(select==2){
                currentBal -=399;
                cout<<"399rs deducted from current balance !!"<<endl;
            }
            if(select==3){
                currentBal -=39;
                cout<<"39rs deducted from current balance !!"<<endl;
            }
        }

        void updatedBal(){
            cout<<"Updated Balance: "<< currentBal<<endl;
        }

};
int main() {
    MobileRecharge m1;

    cout<<"---------Enter Customer Details---------"<<endl;
    m1.acceptDetails();
    cout<<endl;
    m1.rechargeBal();
    cout<<endl;
    m1.deductBal();
    cout<<endl;
    m1.updatedBal();
    cout<<endl;
    return 0;
}