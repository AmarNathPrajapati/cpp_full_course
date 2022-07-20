#include<iostream>
using namespace std;
/*
    STL------->
        Standered Template library( library of Generic classes and functions)
    
    why STL?---->
        Reuse: well tested components
        Time Saving
        basically STL is used because it is a good idea not to reinvent the wheel.

    Components of STL?
        1.Containers
        2.Algorithms
        3.Iterators
        it work with well defined co-ordination and  uses template.

        1.Containers---->
            it is a object which store the data . for example <vector>
        2.Algorithms---->
            procedure to process data.
            set of instructions , eg. Sorting , Seraching etc.
        3.Iterators------->
            (i) it is a object which point an element in a containers.
            (ii)Handle just like pointers.
            (iii)Connects algorithms with pointers.


            There are three type of container in STL.

            1.Sequence Containers----->
                store data in linera fashion
                eg.Vector , list  and dequeue

                                                    Vector             list
                Random Access                       fast                slow
                middle Insertion/deletion           slow.               Fast
                insertion at the end                fast.               Fast

                
            2.Associative Containers----->
                (i)it design for faster access.
                (ii) store data in tree like data structure.
                (iii) In this containers all operations is fast accept random access because Tree Data Stucture.
                eg. Set/MultiSet and Map/MultiMap

            3.Derived Containers------>
                it is derived from Sequence or Associative Containers
                Real World Modeling
                eg.Stack,Queue,priority Queue,etc.
*/
int main(){
    
return 0;
}