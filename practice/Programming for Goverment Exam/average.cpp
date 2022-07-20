#include<iostream>
using namespace std;

int main(){
    cout<<"Choose your Problems from following list: "<<endl;
    cout<<"1.Find the unknown vlaue of x from given list"<<endl;
    cout<<"2.if any new person come in the list"<<endl;
    cout<<"3.if any new person went/remove from the list"<<endl;
    cout<<"4.jab ek person ke place par koi naya aa jaye"<<endl;
    cout<<"5.yadi koi galati ho jaye"<<endl;
    int n;
    cin>>n;
    if(n==1){
        cout<<"enter the Total number of character :"<<endl;
        int num;
        cin>>num;//getting the total number of character;
        double arr[num];
        cout<<"Enter the value of the average:"<<endl;
        double average;
        cin>>average;//getting the average;
        double sum = average*num;// getting summation
        cout<<"Enter the given number : ";
        double s=0;
        for (int i = 0; i < num-1; i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        double x = (sum-s);
        cout<<"The vlaue of the X is: "<<x<<" Answer";
    }
    if(n==2){
        cout<<"enter the Total number of character :"<<endl;
        int num;
        cin>>num;//getting the total number of character;
        double arr[num];
        cout<<"Enter the value of the average:"<<endl;
        double average;
        cin>>average;//getting the average;
        double sum = average*num;// getting summation
        cout<<"1.Average badh gaya"<<endl;
        cout<<"2.Naya person aa gaya"<<endl;
        int n1;
        cin>>n1;
        if(n1==1){
            cout<<"how much average increase"<<endl;
            double inc;
            cin>>inc;
            average = average+inc;
            double newSum = average*(num+1);
            cout<<"The vlaue of the new person is :"<<newSum-sum;
        }
        if(n1==2){
            cout<<"Enter the value of the new person: ";
            double newPerson;
            cin>>newPerson;
            double newSum = sum+newPerson;
            cout<<"The value of the new average is : "<<newSum/(num+1)<<" Answer";
        }

    }
    if(n==3){
        cout<<"enter the Total number of character :"<<endl;
        int num;
        cin>>num;//getting the total number of character;
        cout<<"Enter the value of the average:"<<endl;
        double average;
        cin>>average;//getting the average;
        double sum = average*num;// getting summation
        cout<<"1.Average ghat gaya"<<endl;
        cout<<"2.Naya person's value "<<endl;
        int n1;
        cin>>n1;
        if(n1==1){
            cout<<"how much average decrease"<<endl;
            double inc;
            cin>>inc;
            average = average-inc;
            double newSum = average*(num-1);
            cout<<"The vlaue of the removed person is :"<<sum-newSum;
        }
        if(n1==2){
            cout<<"Enter the value of the new person: ";
            double newPerson;
            cin>>newPerson;
            double newSum = sum-newPerson;
            cout<<"The value of the new average is : "<<newSum/(num-1)<<" Answer";
        }

    }
    if(n==4){
        cout<<"enter the Total number of character :"<<endl;
        int num;
        cin>>num;//getting the total number of character;
        double arr[num];
        cout<<"Enter the value of the average:"<<endl;
        double average;
        cin>>average;//getting the average;
        double sum = average*num;// getting summation
        cout<<"1.Average ghat/badh gaya"<<endl;
        cout<<"2.Naya person's value "<<endl;
        int n1;
        cin>>n1;
        if(n1==1){
            cout<<"how much average badha/gata(+/-)"<<endl;
            double inc;
            cin>>inc;
            average = average+inc;
            double newSum = average*(num);
            cout<<"The vlaue of the new person is :"<<newSum-sum;
        }
        if(n1==2){
            cout<<"Enter the value of the old person: ";
            double oldPerson;
            cin>>oldPerson;
            cout<<"Enter the value of the new person: ";
            double newPerson;
            cin>>newPerson;
            double sudhar = oldPerson-newPerson;
            double newSum = sum-sudhar;
            cout<<"The value of the new Average is : "<<newSum/num<<" Answer";
        }
    }
    if(n==5){
        cout<<"enter the Total number of character :"<<endl;
        int num;
        cin>>num;//getting the total number of character;
        double arr[num];
        cout<<"Enter the value of the average:"<<endl;
        double average;
        cin>>average;//getting the average;
        double sum = average*num;// getting summation
        cout<<"Enter the faulty value: "<<endl;
        double fal;
        cin>>fal;
        cout<<"Enter the right value: "<<endl;
        double rig;
        cin>>rig;
        double sudhar = fal-rig;
        double newSum = sum-sudhar;
        cout<<"The value of the new Average is : "<<newSum/num<<" Answer";
    }
return 0;
}   