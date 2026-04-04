# Push Swap
This project has been created as part of the 42 curriculum by `ymarmoud` 

Push swap is a sorting algorithm implementation project and part of the 42 code curriculum. The project is writing a program in C that takes unsorted list of integers as input and sorts them in ascending order using 2 stacks with limited set of operations. the goal of this project is to test studends's understanding of various sorting algorithm, and corresponding complexities and data structures with the ability of students to implement this by coding.

## Data Structures

### Node (t_node)
Represents one elements in a stack.  
- `value` — the integer stored  
- `next` — the pointer to the next node.

### stack (t_stack)
Manages a linked list of nodes.  
- `top` — the pointer to the first node  
- `bottom` — the pointer to the last node.  
- `size` — the integer store the numbers of the currently nodes in the stack. 

##Operations 

### pb (push b)
Takes the top node of stack a and moves it to the top of stack b.
- Saves top of stack_a in a temp pointer node
- Rewires a->top to next node
- Connects saved node to top of stack_b
- Handles edge cases: a becomes empty, b was empty

### pa (push a)
Takes the top of stack b and moves it to the top of stack a;
- Saves top of stack_a in a temp pointer node
- Rewires a->top to next node
- Connects saved node to top of stack_b
- Handles edge cases: b becomes empty, a was empty

### sa (swap a)
Swaps the top two elements of stack a.
- Does nothing if size is 0 or 1
- Swaps values using a tmp integer

### sb (swap b)
Swaps the top two elements of stack b.
- Does nothing if size is 0 or 1

### ss
Calls sa and sb at the same time.

### ra (rotate a)
Shifts all elements of stack a up by one. Top becomes bottom.

### rb (rotate b)
Shifts all elements of stack b up by one. Top becomes bottom.

### rr
Calls ra and rb at the same time.

### rra (reverse rotate a)
Shifts all elements of stack a down by one. Bottom becomes top.

### rrb (reverse rotate b)
Shifts all elements of stack b down by one. Bottom becomes top.

### rrr
Calls rra and rrb at the same time.