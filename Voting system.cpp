//voting system//

#include<iostream>
using namespace std;

class login
{
public:
    float ph;
    void number()
    {
        cout<<"\nEnter your phone number:"<<endl;
        cin>>ph;
    }
};
class info:public login
{
public:
    string name;
    int adno;
    int age;
    void details()
    {
        cout<<"\nEnter your name :";
        cin>>name;
        cout<<"\nEnter your Aadhar number :";
        cin>>adno;
    }
    void display()
    {
        cout<<"\nName :"<<name;
        cout<<"\nAadhar number :"<<adno;
        cout<<"\nPhone number :"<<ph;
    }
};
int main()
{
    info o;
    o.number();
    int otp;
    cout<<"\nEnter your OTP:";
    cin>>otp;
    int age;
    if(otp == 1234)
    {
        cout<<"\nPlease enter your details:";
        o.details();
        cout<<"\nEnter your age:";
        cin>>age;
        if(age >= 18)
        {
            string gender;
            cout<<"\nYou are eligible to vote";
            cout<<"\nEnter your gender:";
            cin>>gender;
            if(gender == "male" || gender == "Male")
            {
                int choice;
                cout<<"\nYour voting booth is at room no: M2F15";

                vote:
                cout<<"\nChoose the party to vote:";
                cout<<"\n1> New Star ----> * ";
                cout<<"\n2> Youth bull ----> $ ";
                cout<<"\n3> Lotus -----> @ ";
                cout<<"\n4> Sunrise -----> # ";
                cout<<"\nEnter your Choice :";
                cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"\nYou have voted for NEW STAR";
            break;
        case 2:
            cout<<"\nYou have voted for YOUTH BULL";
            break;
        case 3:
            cout<<"\nYou have voted for LOTUS";
            break;
        case 4:
            cout<<"\nYou have voted for SUNRISE";
            break;
        default:
            cout<<"\nEnter a valid choice:";
            goto vote;
            break;
        }
            }
            else if(gender == "female" || gender == "female")
            {
                cout<<"\nYour voting booth is at room no: F1F13";

                int choice;

                vote1:
                cout<<"\nChoose the party to vote:";
                cout<<"\n1> New Star ----> * ";
                cout<<"\n2> Youth bull ----> $ ";
                cout<<"\n3> Lotus -----> @ ";
                cout<<"\n4> Sunrise -----> # ";
                cout<<"\nEnter your Choice :";
                cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"\nYou have voted for NEW STAR";
            break;
        case 2:
            cout<<"\nYou have voted for YOUTH BULL";
            break;
        case 3:
            cout<<"\nYou have voted for LOTUS";
            break;
        case 4:
            cout<<"\nYou have voted for SUNRISE";
            break;
        default:
            cout<<"\nEnter a valid choice:";
            goto vote1;
            break;
        }
            }
            else{
                cout<<"\nEnter a valid gender";
            }
        }
        else if(age <= 18)
        {
            cout<<"\nYou cannot vote. THANK YOU";
        }
        else{
            cout<<"\nEnter a valid age";
        }
    }
    else{
        cout<<"Invalid OTP";
    }


    cout<<"\nTHANK YOU FOR VOTING";

    return 0;
}
