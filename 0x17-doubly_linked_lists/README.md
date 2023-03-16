0-print_dlistint.c
Write a function that prints all the elements of a dlistint_t list.

Prototype: size_t print_dlistint(const dlistint_t *h); Return: the number of nodes Format: see example julien@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"1-dlistint_len.c
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h); julien@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

2-add_dnodeint.c
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n); Return: the address of the new element, or NULL if it failed julien@ubuntu:~/0x17. Doubly linked lists$ cat 2-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

3-add_dnodeint_end.c
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); Return: the address of the new element, or NULL if it failed julien@ubuntu:~/0x17. Doubly linked lists$ cat 3-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

4-free_dlistint.c
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head); julien@ubuntu:~/0x17. Doubly linked lists$ cat 4-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

5-get_dnodeint.c
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); where index is the index of the node, starting from 0 if the node does not exist, return NULL julien@ubuntu:~/0x17. Doubly linked lists$ cat 5-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"

8-delete_dnodeint.c
Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); where index is the index of the node that should be deleted. Index starts at 0 Returns: 1 if it succeeded, -1 if it failed julien@ubuntu:~/0x17. Doubly linked lists$ cat 8-main.c #include <stdlib.h> #include <string.h> #include <stdio.h> #include "lists.h"


