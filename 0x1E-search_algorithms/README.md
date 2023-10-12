C - Search Algorithms
This repository encompasses my ALX project dedicated to search algorithms. It features the implementation of various search algorithms, complete with corresponding space and time complexities for each.

Tests :heavy_check_mark:
tests: A directory containing test files for all project tasks, provided by ALX.
Helper Files :raised_hands:
listint: A collection of helper files designed for Task 12, focusing on singly linked list jump search.

create_list.c: This C function is responsible for creating a listint_t singly linked list.
free_list.c: Here, you'll find a C function for freeing a listint_t singly linked list.
print_list.c: This C function prints the contents of a listint_t singly linked list.
skiplist: A set of helper files designated for Task 13, specifically for singly skipped list jump search.

create_skiplist.c: This C function is responsible for creating a skiplist_t singly skipped list.
free_skiplist.c: Here, you'll find a C function for freeing a skiplist_t singly skipped list.
print_skiplist.c: This C function prints the contents of a skiplist_t singly skipped list.
Header File :file_folder:
search_algos.h: This header file contains the definitions and prototypes for all the types and functions created for this project.
Data Structures

/\*\*

- struct listint_s - singly linked list
-
- @n: Integer
- @index: Index of the node in the list
- @next: Pointer to the next node
-
- Description: singly linked list node structure
- for ALX project
  */
  typedef struct listint_s
  {
  int n;
  size_t index;
  struct listint_s *next;
  } listint_t;

/\*\*

- struct skiplist_s - Singly linked list with an express lane
-
- @n: Integer
- @index: Index of the node in the list
- @next: Pointer to the next node
- @express: Pointer to the next node in the express lane
-
- Description: singly linked list node structure with an express lane
- for Holberton project
  */
  typedef struct skiplist_s
  {
  int n;
  size_t index;
  struct skiplist_s *next;
  struct skiplist_s \*express;
  } skiplist_t;

Function Prototypes

File Prototype
0-linear.c int linear_search(int *array, size_t size, int value);
1-binary.c int binary_search(int *array, size_t size, int value);
100-jump.c int jump_search(int *array, size_t size, int value);
102-interpolation.c int interpolation_search(int *array, size_t size, int value);
103-exponential.c int exponential_search(int *array, size_t size, int value);
104-advanced_binary.c int advanced_binary(int *array, size_t size, int value);
Tasks :page_with_curl: 0. Linear search

0-linear.c: This C function conducts a linear search for a value within an array of integers.
If the value is absent or the array is NULL, it returns -1.
Otherwise, it returns the first index where value is located.

1. Binary search

1-binary.c: This C function performs a binary search for a value in a sorted array of integers.
It assumes the array is sorted in ascending order and that the value being searched for is unique within the array.
If the value is not present or the array is NULL, it returns -1.
Otherwise, it returns the index where value is located. 2. Big O #0

2-O: A text file detailing the worst-case time complexity of linear search. 3. Big O #1

3-O: A text file revealing the worst-case space complexity of iterative linear search. 4. Big O #2

4-O: A text file specifying the worst-case time complexity of binary search. 5. Big O #3

5-O: A text file outlining the worst-case space complexity of binary search. 6. Big O #4

6-O: A text file describing the space complexity of the given algorithm:

int **allocate_map(int n, int m)
{
int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
    }
    return (map);

}

7. Jump search

100-jump.c: This C function carries out a jump search for a value within a sorted array of integers.
It uses the square root of the array size as the jump step.
The algorithm assumes the array is sorted in ascending order and that the value being searched for is unique within the array.
If the value is not present or the array is NULL, it returns -1.
Otherwise, it returns the index where value is located. 8. Big O #5

101-O: A text file displaying the average-case time complexity of jump search in an array of size n using step = sqrt(n). 9. Interpolation search

102-interpolation.c: This C function conducts an interpolation search for a value in a sorted array of integers.
It assumes the array is sorted in ascending order.
If the value is not present or the array is NULL, it returns -1.
Otherwise, it returns the first index where value is located. 10. Exponential search

103-exponential.c: This C function performs an exponential search for a value in a sorted array of integers.
It uses powers of 2 as exponential ranges to search the array.
The algorithm assumes the array is sorted in ascending order.
If the value is not present or the array is NULL, it returns -1.
Otherwise, it returns the first index where value is located.

11. Advanced binary search

104-advanced_binary.c: This C function performs an advanced binary search for a value in a sorted array of integers.
It assumes the array is sorted in ascending order.
If the value is not present or the array is NULL, it returns -1.
Otherwise, it returns the first index where value is located. 12. Jump search in a singly linked list

105-jump_list.c: This C function executes a jump search for a value within a listint_t sorted singly linked list of integers.
It uses the square root of the list size as the jump step.
The algorithm assumes that the singly linked list is sorted in ascending order.
If the value is not present or the head of the list is NULL, it returns NULL.
Otherwise, it returns a pointer to the first node where value is located. 13. Linear search in a skip list

106-linear_skip.c: This C function performs a linear search for a value in a skiplist_t sorted skipped linked list of integers using jump search.
It assumes that the singly linked list is sorted in ascending order.
If the value is not present or the head of the list is NULL, it returns NULL.
Otherwise, it returns a pointer to the first node where value is located. 14. Big O #6

107-O: A text file detailing the average time complexity of jump search in a singly linked list of size n, using step = sqrt(n). 15. Big O #7

108-O: A text file displaying the average time complexity of jump search in a sorted skipped linked list of size n, using step = sqrt(n).
This project explores a variety of search algorithms and their respective complexities, providing valuable insights into their efficiency and performance characteristics.
