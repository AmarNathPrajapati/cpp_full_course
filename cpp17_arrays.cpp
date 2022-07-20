#include<iostream>
using namespace std;
//Arrays- it store the variables of same data type
// it can be change after declaration
void printArray(int* marks,int size){
    int sizeOfArray = size;
    int i = 0;
    while (i<sizeOfArray)
    {
        cout << "The value in Array is " << marks[i] << endl;
        i++;
    }
}
int main(){
    int marks[] = {1,23,4,5,3};
    int sizeOfArray = sizeof(marks)/sizeof(int);
    printArray(marks,sizeOfArray);
    marks[3]=50;
    marks[0]=10;
    printArray(marks,sizeOfArray);
;

return 0;
}