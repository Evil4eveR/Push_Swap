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

## Project Structure

- `push_swap.h` — header file, structs and prototypes
- `main.c` — entry point, input parsing, stack initialization
- `operations.c` — all 11 stack operations
- `Makefile` — compiles the project

## Instructions

### Compilation
```bash
make
```

### Usage
```bash
./push_swap 4 67 3 87 23
```

### Cleanup
```bash
make fclean
```

## Input Validation

The program validates all arguments before processing:
- Arguments can be passed as separate integers or quoted strings with spaces
- Example: `./push_swap 1 "4 5 6" 7` is valid
- Each number is validated using `ft_atol` which checks:
  - Only digits with optional +/- sign
  - Within INT range (-2147483648 to 2147483647)
- Duplicates are detected before pushing to stack
- Any invalid input prints `Error` to stderr and exits

## Stack Filling

### ft_push_node
Creates a new node and adds it to the bottom of stack a.
- Handles empty stack edge case
- Updates top, end and size

### ft_is_dupl
Walks stack a and checks if a value already exists.
- Calls ft_error if duplicate found

### ft_fill_stack
Parses all arguments and fills stack a.
- Splits each argument by space to handle quoted strings
- Validates each piece with ft_atol
- Checks duplicates with ft_is_dupl
- Pushes valid numbers with ft_push_node

### ft_atol
Converts string to long while validating.
- Handles whitespace, optional sign
- Calls ft_error on non-digit characters
- Calls ft_check_limit to catch integer overflow

### sort_3
this sort function handle 5 cases. For each one tell me which operations and 3 integers  

```  
1 3 2  → rra + sa 

2 1 3  → sa  

2 3 1  → rra  

3 1 2  → ra  

3 2 1  → ra + sa  
```
