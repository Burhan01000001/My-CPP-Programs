#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int totalnumberOfPages;
    int numberOfPagesYouReadEveryday;
    int numberOfDaysYouReadBook;
    
    cout<<"Enter Total Number Of Pages In \nA Book = ";
    cin>>totalnumberOfPages;
    
    cout<<endl<<"Enter Total Number Of Pages In \nA Book You Read Everyday = ";
    cin>>numberOfPagesYouReadEveryday;
    
    cout<<endl<<"Enter Total Number Of Days You \nRead This Book = ";
    cin>>numberOfDaysYouReadBook;
    
    int totalNumberOfPagesYouHaveRead = numberOfDaysYouReadBook * numberOfPagesYouReadEveryday;
    
    int numberOfPagesRemaining = totalnumberOfPages - totalNumberOfPagesYouHaveRead;
    
    cout<<endl<<"You have read "<<totalNumberOfPagesYouHaveRead<<" pages of this \nbook and "<<numberOfPagesRemaining<<" are remaining.";
    
    return 0;
}
