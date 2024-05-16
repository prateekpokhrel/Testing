// Enter the price of any three items from the customer and give him proper bill including 18% GST.
#include<iostream>
using namespace std;
int main()
    {
    
        float pen,pencil,eraser;
 
        cout<<"Enter the price of pen:"<<endl;
        cin>>pen;
        cout<<"Enter the price of pencil:"<<endl;
        cin>>pencil;
        cout<<"Enter the price of eraser:"<<endl;
        cin>>eraser;

        float sum = pen+pencil+eraser;
        float Total_bill = (sum+(sum*0.18));

        cout<<"The total bill made is:"<<Total_bill<<endl;
        return 0;



}
