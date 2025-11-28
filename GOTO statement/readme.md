# GOTO STATEMENT USE

few remarks to clearing the program...
- if the condition is satisfied goto statement transfers control to the label sos, causing printf() following sos to be executed.
- the label can be on a seperate line or on the same line as the statemant following it , as in,
  - sos : printf("To err is human!\n");
- any number of gotos can take control to the same label.
- exit() is a standard library function that terminates the execution of the program. It is necessary to use this function since we don't want the statement { printf("To err is human!\n");}  toecuteed after execution of the else block.
- the argument 1 used in exit() indicates the reason for termination. If there are multiple exit points in the program, this argument can be used to find which exit terminated the execution.
For exit() function to work, we need to #include the file 'stdlib.h'.