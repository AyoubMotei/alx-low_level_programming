
<html>
<head>
  <title>  </title>
</head>
<body>
  <h1>Doubly Linked Lists Tasks</h1>
  <p>This repository contains solutions to various tasks related to doubly linked lists. Each task is implemented as a separate C function and has its own corresponding file.</p>
  <h2>Task 0: Print list</h2>
  <p>Write a function <code>print_dlistint</code> that prints all the elements of a <code>dlistint_t</code> list. The function takes a pointer to the head of the list and returns the number of nodes in the list.</p>
  <pre><code>size_t print_dlistint(const dlistint_t *h);</code></pre>
  <h2>Task 1: List length</h2>
  <p>Write a function <code>dlistint_len</code> that returns the number of elements in a linked <code>dlistint_t</code> list. The function takes a pointer to the head of the list and returns the number of nodes.</p>
  <pre><code>size_t dlistint_len(const dlistint_t *h);</code></pre>
  <h2>Task 2: Add node at the beginning</h2>
  <p>Write a function <code>add_dnodeint</code> that adds a new node at the beginning of a <code>dlistint_t</code> list. The function takes a double pointer to the head of the list and an integer value for the new node. It returns the address of the new element or <code>NULL</code> if it fails.</p>
  <pre><code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></pre>
  <h2>Task 3: Add node at the end</h2>
  <p>Write a function <code>add_dnodeint_end</code> that adds a new node at the end of a <code>dlistint_t</code> list. The function takes a double pointer to the head of the list and an integer value for the new node. It returns the address of the new element or <code>NULL</code> if it fails.</p>
  <pre><code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></pre>
  <h2>Task 4: Free list</h2>
  <p>Write a function <code>free_dlistint</code> that frees a <code>dlistint_t</code> list. The function takes a pointer to the head of the list and frees all the nodes.</p>
  <pre><code>void free_dlistint(dlistint_t *head);</code></pre>
  <h2>Task 5: Get node at index</h2>
  <p>Write a function <code>get_dnodeint_at_index</code> that returns the nth node of a <code>dlistint_t</code> linked list. The function takes a pointer to the head of the list and an unsigned integer index which is the index of the node (starting from 0). If the node does not exist, the function returns <code>NULL</code>.</p>
  <pre><code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></pre>
  <h2>Task 6: Sum list</h2>
  <p>Write a function <code>sum_dlistint</code> that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list. If the list is empty, the function returns 0.</p>
  <pre><code>int sum_dlistint(dlistint_t *head);</code></pre>
  <h2>Task 7: Insert at index</h2>
  <p>Write a function <code>insert_dnodeint_at_index</code> that inserts a new node at a given position. The function takes a double pointer to the head of the list, an unsigned integer idx (index), and an integer n (value for the new node). The function returns the address of the new node on success or <code>NULL</code> on failure.</p>
  <pre><code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></pre>
  <h2>Task 8: Delete at index</h2>
  <p>Write a function <code>delete_dnodeint_at_index</code> that deletes the node at a given index of a <code>dlistint_t</code> linked list. The function takes a double pointer to the head of the list and an unsigned integer index. It returns 1 if the deletion was successful, or -1 if it failed.</p>
  <pre><code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></pre>
  <h2>Task 9: Reverse list</h2>
  <p>Write a function <code>reverse_dlistint</code> that reverses a <code>dlistint_t</code> linked list. The function takes a double pointer to the head of the list and returns a pointer to the first node of the reversed list.</p>
  <pre><code>dlistint_t *reverse_dlistint(dlistint_t **head);</code></pre>
  <h2>Task 10: Print in reverse</h2>
  <p>Write a function <code>print_dlistint_reverse</code> that prints a <code>dlistint_t</code> linked list in reverse order. The function takes a pointer to the tail of the list and returns the number of nodes in the list.</p>
  <pre><code>size_t print_dlistint_reverse(const dlistint_t *h);</code></pre>
  <h2>Task 11: Palindrome list</h2>
  <p>Write a function <code>is_palindrome</code> that checks if a <code>dlistint_t</code> linked list is a palindrome. The function takes a pointer to the head of the list and returns 1 if the list is a palindrome, or 0 if it is not.</p>
  <pre><code>int is_palindrome(dlistint_t **head);</code></pre>
  <h2>Task 12: Advanced</h2>
  <p>Create a new function or set of functions of your choice to showcase more advanced operations on doubly linked lists. Be creative and think about different ways to manipulate or analyze the list. Provide a brief description of the function(s) and their prototypes.</p>
</body>
</html>
