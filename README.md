# b-p
bubbles&amp;pointers

algorithim: 

this program will take 9 integers, and will compare/sort the integers into numerical order, from smallest to largest.

there will be a sort function, a main function, and a swap function.
there will also be a list for the values, as that will allow us to store those integers somewhere, and then let us sort them.

bubble sort part:

constant MAX is max length of array
function sort (array):
    create integer variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

print values section:

create a list of the int_values
print the list, unordered, so they know the before product

swap function:

test the swap first, giving to integers
swap(&x, &y) will swap the values based on what they were originally
and then they'll swap

sort function: 

sort function will sort the values into a new array, in smallest to largest order
printf("After:" \n.) will print the after values in the array
print(values) will priint the sorted array
