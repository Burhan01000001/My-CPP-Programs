#include<iostream>

using namespace std;

int main(){
    int subj1,subj2,subj3,subj4,subj5;
    const int totalMarks = 250;
    
    cout<<"Enter Phy. obtained marks = ";
    cin>>subj1;
    cout<<endl<<"Enter Pak Std. obtained \nmarks = ";
    cin>>subj2;
    cout<<endl<<"Enter Eng. obtained marks = ";
    cin>>subj3;
    cout<<endl<<"Enter Comp. obtained marks = ";
    cin>>subj4;
    cout<<endl<<"Enter Ist. obtained marks = ";
    cin>>subj5;
    
    int totalObtainedMarks = subj1+subj2+subj3+subj4+subj5;
    
    double average = (double(totalObtainedMarks) / totalMarks) * 100;
    // double average = (totalObtainedMarks / totalMarks) * 100;
    
    cout<<endl<<"Hence total obtained marks \nare = "<<totalObtainedMarks<<" and percentage is "<<average<<"%";
    
    return 0;
}