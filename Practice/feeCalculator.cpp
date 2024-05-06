#include <bits/stdc++.h>

using namespace std;

int main() {
    int totalNumberOfStudents,feePerStudent;
    
    cout<<"Enter total number of students \nin your class = ";
    cin>>totalNumberOfStudents;
    
    cout<<endl<<"Enter fee per student in your \nclass = ";
    cin>>feePerStudent;
    
    int totalFee = totalNumberOfStudents*feePerStudent;
    
    cout<<endl<<"Hence total fee of your class \naccording to total number of \nstudents is = "<<totalFee;
    
    return 0;
}
