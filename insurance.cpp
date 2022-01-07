#include<iostream>
using namespace std;
int main()
{
    char health,place,sex;
    int age;
    cout<<"enter the health condition\n press g for good and p for poor\n";
    cin>>health;
    cout<<"enter the age\n";
    cin>>age;
    cout<<"where do you live \n press v village and c for city\n";
    cin>>place;
    cout<<"what is your gender \n press m for male and f for female\n";
    cin>>sex;
    if((health=='g')&&(age>=25)&&(age<=35)&&(sex=='m')&&(place=='c'))
    {
        cout<<"your premium is rs 4 per thousand and your poilicy amount cannot exceed rs 2lakh";
    }
    else if((health=='g')&&(age>=25)&&(age<=35)&&(sex=='f')&&(place=='c'))
    {
        cout<<"your premium is rs 3 per thousand adn your policy amount cannot exceed rs 1 lakh";
    }
    else if((health=='p')&&(age>=25)&&(age<=35)&&(sex=='m')&&(place=='v')) 
    {
        cout<<"your premium is rs 6 per thousand and your policy canoot exceed rs 10,000";
    }
    else
    {
        cout<<"you are not insured";
    }
}