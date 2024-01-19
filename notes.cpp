#include <iostream>

using namespace std;

int main(){

    cout << "test" << endl;

    return 0;
}

/*
WEEK14: SORTING ALGORITHMS

> when comparing algorithms, you look into certain things such as:
    > running time
        > you can represent this using O, Omega, or Big O Notation
    > in-place
        > when an algorithm doesn't use extra space/memory than it was given
    > stability
        > i can really describe this in my own words, here's a quote
        i found online:
            > A stable sort is one which preserves the original order of the input set, 
            where the comparison algorithm does not distinguish between two or more items.

        > update, i think i got it:
            >if there is more than one of the same element (e.g., two 10s in an array),
            then when sorting the array the order in which they appear doesn't change
                > see array = [10, 20, 30, 10, 10]
                sorteed array = [10, 10, 20, 30]
                    > the first 10 should still be first when sorted, with the second appearing 10
                    placed second, third appearing 10 placed third and so on.


> examples of sorting algorthims:
    > selection sort
    > insertion sort
    > divide and conquer algorithms
        > merge sort
        > quick sort

> analysis methods for algorithms:
    > substitution method
    > recursion-tree method
    > the master method
*/