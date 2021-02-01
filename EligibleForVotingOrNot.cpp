#include <iostream>

using namespace std;

int main(){
    int age;
    LOOP:
    do{
        cout<<"Enter your age: ";
        cin>>age;
        if(age < 0) cout<<"Not a valid age. Try again."<<endl;
        else break;
    }while( age < 0);

    if (age >= 18 && age <= 120) 
        cout<<"You are eligible to vote"<<endl;
    else if( age >=0 && age < 18)
        cout<<"You are not eligible to vote."<<endl;
    else{
        char str = 'Y';
        int i = 0;
        while(str == 'Y' || str == 'y' && i <= 5){
            if(i < 3) cout<<"Really? (Reply in 'y' or 'n' only): ";
            else cout<<"Are you sure? (You know the drill): ";
            cin>>str;
            i++;
        }
        if(str == 'N' || str == 'n') {
            cout<<"\nCool, try again, later."<<endl;
            goto LOOP;
        }
        else if(str == 'Y' || str == 'y') cout<<"\nFine! Sure You can vote."<<endl;
        else {
            cout<<"\nI said, 'y' or 'n' only! Try again."<<endl;
            goto LOOP;
        }
    }
    return 0;
}
