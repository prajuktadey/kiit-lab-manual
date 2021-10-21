C PROGRAMMING I: (THEORY)

C library output functions:
1. printf(), putchar(), puts()
2. Sends one or more characters to output.
3. Requires the stdio.h header file.
4. Part of the standard C library.

Single line comment: //            //
Multi Line comment: /*  */

puts() printed the two statements in two different lines.
printf() printed the two statements in the same line.

printf() is more powerful that puts().

In order to print the next statement in a different line, we must add the escape function.

```
printf("This is the way the world enters.\n");
  printf("The end is near.");
  
```

Here, the "\n" is the escape function which allows the strings to print in two different lines.

To print two statements in two different lines using a single printf() statement we use this:

```
printf("Hello, this is me \nThis is a line\n");
```

C programming encloses a string in two double quotes.
The entire string has to be in one line other wise the second line or the lines after that will be taken as a new statement.

To get rid of the above mentioned trouble, we use new line character. (\n)
The new line character is an escape sequence.

\n: Newline, start a new line of text.
\t: Tab, hop over so many spaces.
\': Escaped single quote.
\": Escaped double quote.
\\: Display backslash character.

Within a string, the escape sequences can be used within double quotes.
If we wanna use them as individual characters, we use single quotes.

%: placeholder tag.
d: integer value.

```
 printf("Here is a value: %d\n", 27);
```
%d is the placeholder and it prints: Here is the value:27

```
 printf("The answer to this is 2+2= %d\n", 4);
```
The output is "2+2=4"

```
printf("The answer to this is %d+%d= %d\n", 2,2,2+2);
```
We can make the computer do math as well.

```
printf("You are a %s\n","programmer" );
```
For strings, we do this.

%f: Floating point values.
%c: Single characters.
%%: The percent sign.
%s: Strings.
%d: Integer(whole number) values.

C Language Constants and Variables:

Constants have constant values.

1. Variables have contents that can change.
2. Variables can have contents that have a variety of data types.
3. A variable is a data container.
4. It must be declared for a specific type of data.
5. It must be given a unique name, starting with a letter.
6. Variables are declared before they're used in the code.

int, float, double and char are C language keywords.
C language does not have string keyword and instead uses the char keyword.

C language Data Types:

Qualifiers:
1. long
2. short
3. signed
4. unsigned

Declaring a variable:

char ch;

1. The variable's data type is char, single character.
2. The variable's name is ch.
3. The statement ends in a semicolon.

Assigning  a value to a variable:

ch='x';                Use the equal assignment operator.
a=z;                     Assign the value of another variable.
y=line/4;            Assign the result of an expression.
w=width();        Assign the return value of a function.

```
int age;
 age=30;
 printf("The C language is over %d years old\n", age);
```
An example of assigning integer values.

Input/Output Functions:

To read input, you need an input function.
To generate output, you need an output function.
C language keywords do not deal with I/O.

Data Types:

1. getchar(): Fetchers a character from standard input.
2. putchar(): Sends a character to standard output.

They require:
1. Require the stdio.h header file included.
2. Work with int(not char) values.
3. Are stream oriented.


```
int c;
 printf("Type a letter:");
 c=getchar();
 printf("You typed '%c'.\n", c);
```
The user will take input a character and display it.

The scanf() function:

1. Standard input function.
2. Popular  in beginner tutorials, despite its cryptic format.
3. Requires inclusion of the stdio.h header file.
4. Reads specific data types from standard input.
5. Assign values to a variable.
6. Uses printf() placeholders.
7. Uses the &(address-of) operator.

 scanf("format" ,&var);

1. format is text formatting string.
2. Determines the type of input requested.
3. Uses printf() placeholders, %d, %c and so on.
4. var is a declared variable in the code.
5. The & operator prefixes the variable.
6. The & is not required to prefix a string or an array.

```
int x;
 printf("Type an integer :");
 scanf("%d", &x);
 printf("Integer %d\n", x);
```
  For an integer:

```
printf("Type a character :");
 scanf("%c", &x);
 printf("Character %c\n", x);
```
For a character:

Strings in C:

1. An array of char variables.
2. Enclosed in double quotes.
3. The final character of the string is the null character.
4. Null character escape sequence is \0.

To declare  a string:
1. Declared as an array: char string [] 
2. Square brackets are empty if immediately assigned.
3. Square brackets specify a size for the string, plus one of the null character.

```
char password[]= "spatula";
 printf("The password is %s\n", password);
```
Output: The password is spatula

To input a string:
```
char name[100];
 printf("Your name");
 scanf("%s", name);
 printf("You are %s\n",name);
```
However, if your input is your full name that is including your surname, it won't read your full name but will only read your first name.

Input: Prajukta Dey
Output: Prajukta

scanf() is a string word input function.

Instead of scanf() we should use this for string inputs which will not just print the first word but the whole sentence we give.
```
char input[64]; //63 characters plus null//
 printf("Instructions:");
 fgets(input,64,stdin);
 puts("Thank you! Here are your instructions:");
 puts(input);
```
stdin is a file in C.

Math in  a programming language:

It's the computer that does the math. You just need to craft the equation.

In C, the result goes on the left side of the equation.
r= age*12;

Results can be used immediately.
printf("That's  %d months.\n", age,12);

Complex math equations are solved by using the order of precedence.

1. Equations are evaluated left to right.
2. Multiplication and Division are done first.
3. Addition and Subtraction are done next.
4. Parentheses are used to prioritize some calculations.

```
int a;
 int b=5;
 printf("Input an integer:");
 scanf("%d", &a);
 printf("%d+ %d= %d\n",a,b,a+b);
```

A math program to input an integer and do a math equation.

```
int x=20;
 printf("%d\n",x);
 x=x+1;
 printf("%d\n",x);
```
Increment by 1 and the printing both the numbers.
We can use x++ instead of x=x+1 as x++ is a unary operator and takes less time in execution.

1. C language lacks operators for some operations.
2. The ^ operator is not the power operator.
3. C has no square root operator.

1. INCLUDE the math.h header file to use such operations.
2. Work with real numbers, floating point values.
3. double variables required; float okay.
4. double carries twice the precision of float.

The exponent function in C is:
```
r= pow(2.0,8.0);
```
Here, 2 is raised to the power of 8.


1. What's one thing you must remember when you use the scanf() function?
-  It uses the printf() function's placeholders.
- Prefix the variable name with the ampersand, the address-of operator.

2. The printf() formatting string has three placeholders. What does this imply?
- The statement must have three arguments, one to match each placeholder.

3. How are the puts() and printf() functions different?
- The printf() function does not automatically add a newline to text it outputs.
- The printf() function is also more powerful than puts().

4. Which of the following is correct about the puts() function?
- It sends a string of text to standard output.

DECISIONS IN YOUR CODE:

1. Programs execute top-down.
2. Decisions break the top down flow,
3. The if statement tests a condition.
4. When the condition is true, the program flow is altered.

SWITCH CASE FORMAT:

```
char a;
  printf("Your choice (A,B,C): ");
  scanf("%c" ,&a);
  switch (a)
  {
    case 'A':
         puts("Excellent choice!");
         break;
    case 'B':
         puts("This is the most common choice.");
         break;
    case 'C':
         puts("I question your decision.");
         break;
    default:
         puts("That's not a valid choice.");
  }
```

Altering a program flow:

1. Make a decision, if or switch case.
2. Repeat chunks of text by using a loop.

```
int x;
  x=1;
  while(x<=10)
  {
    printf("%d\n", x);
    x++;
  }
```
A while loop for printing natural numbers till 10.

A do while loop will always execute once because the print statement is before the check statement.

```
char ch;
  ch=='A';
  do{
    putchar(ch);
    ch++;
    }
    while(ch!='Z');
    putchar('\n'); //exit condition//
```
A do while loop.

```
while (1)
  {
    printf("I'm endlessly looping.");
  }
```
An infinite loop.

```
int a=0; 
  while (1)
  {
    printf("I'm endlessly looping.");
    a++;
    if(a>10)
    break;
  }
```
To prevent endless looping, we use a break statement.

```
int x;
  for(x=0; x<10;x++)
      printf("%d\n", x);
```
A for loop program to print numbers 0-9.

```
y=-10;
  while(y<=10)
  {
  printf("%d\n", y);
  y=y+2;
  }
  
```
A while loop.

```
char alpha;
 int numeric;
 for(alpha='A'; alpha<'K';alpha++)
 {
   for(numeric=0;numeric<10;numeric++)
   {
     printf("%c-%d\t", alpha, numeric);
   }
   putchar('\n');
 }
```
A nested loop.

FUNCTIONS IN C:

1. Program  flow goes off to the function.
2. Execution continues within the function.
3. Control returns from the function to the original code.

type name( arguments){}

1. type, the value returned from the function.
2. name, a unique name given to the function.
3. arguments, zero, one or  more values passed to the function.
4. Statement block  belonging to the function.

void alpha(void)

1. The function returns no value(void type)
2. The function's name alpha.
3. The function has no arguments, void is specified.

int count(void) {}

1. The function returns an integer value.
2. The function's name is count.
3. The function has no arguments, void is specified.

void hangup(char ch) {}

1. The function returns no value.
2. the function's name is hangup.
3. The function has one argument, a char variable ch.

void grid(int a, int b) {}

1. The function returns no value.
2. The function's name is grid.
3. The function has two arguments.

- Functions must be introduced or prototyped before they're used.
- A functions's arguments are used within the function using the same variable names mentioned in the argument list.
- Any other variables declared in the function are local; their values exist only when the function is executed.
- The function cannot access variables used elsewhere in the code.
- Functions that return a value use the return keyword.
- The return keyword can be used to leave a function before the last statement is executed.

```
#include <stdio.h>
void blorf(void);
int main()
{
  puts("The main() function always runs first");
  blorf();
  puts("Thanks, blorf()");
  return(0);
}
void blorf(void)
{
  puts("The blorf() function runs when it's called");
}
```

void blorf(void); 
The main function is required in every C program. You also see the blorf function. Line 3 prototypes the blorf function. This informs the compiler of the function type and arguments. The compiler can confirm that the function is being used properly by checking the prototype. Also, the prototype is a statement. It ends in a semi-colon.

```
#include <stdio.h>
void repeat(int count); // function prototype to declare function prototype and parameters//
int main()
{
  puts("At first the raven was like:");
  repeat(1);
  puts("But then he was all:");
  repeat(5);
  return(0);
}
void repeat(int count)
{
  int x;
  for (x=0; x<count;x++)
       puts("Nevermore!");
}
```
 Output:
At first the raven was like:
Nevermore!
But then he was all:
Nevermore!
Nevermore!
Nevermore!
Nevermore!
Nevermore!

```
#include <stdio.h>
char gimmeAnA(void);
int main()
{
  char grade;
  grade=gimmeAnA();
  printf("On this test you received an %c.\n", grade);
  return(0);
}
char gimmeAnA(void)
{
  return ('A');
}
```
A function with  a return type.

Manipulating single characters:

The library to be used is: <ctype.h>

```
int ch = 'a';
  printf("Original %c\n",ch);
  printf("Lowercase %c\n",tolower(ch));
  printf("Uppercase %c\n",toupper(ch));
  printf("Original %c\n",ch);
```
Output:
Original a
Lowercase a
Uppercase A
Original a

```
#include <stdio.h>
#include <ctype.h>
int main()
{
  int ch = 'a';
  printf("Original %d\n",ch);
  printf("Lowercase %d\n",tolower(ch));
  printf("Uppercase %d\n",toupper(ch));
  printf("Original %d\n",ch);
  return(0);
}
```
Output:
Original 97
Lowercase 97
Uppercase 65
Original 97

LOGICAL OPERATORS:

1. Compare two or more expressions( comparisons, evaluations, math)
2. Determine whether comparison is true or false.
3. Help evaluate complex situations or configurations.

&& :    AND (both expressions have to be true)
||     :   OR     (either of the expressions have to be true)
!      :   NOT  (the expression must be false)

NON ZERO VALUES ARE TRUE.
ZERO= FALSE.

Strings in C:

1. An array of char variables.
2. The final character is null character.
3. String manipulation functions are defined in <string.h>

```
#include <stdio.h>
#include <string.h>
int main()
{
  char string[]= "Just how long am I";
  int len;
  
  len= strlen(string);
  printf("The following string:\n");
  puts(string);
  printf("is %d character long\n", len);
  
  return(0);
}
```

The above is a program to find out the length of the string.

Building a string in C:
1. Create a char buffer(array) large enough to hold the new string.
2. Copy the first string into the char buffer.
3. Append/ concatenate, the second string onto the first string in the char buffer.

HOW TO CONCATENATE A STRING:

```
#include <stdio.h>
#include <string.h>
int main()
{
  char first[]= "This is the first sentence.";
  char second[]="This is the second sentence.\n";
  char buffer[50];
  strcpy(buffer, first);
  strcat(buffer, second);
  puts(buffer);
  return(0);
}
```

1. The string copy (strcpy) function copies the first string to the buffer.
2. The string concatenate (strcat) function concatenates the second string to the first or whatever there is in the buffer.
3. The buffer storage should be large enough to hold both the strings including the null characters.
4. Use fgets() or another solid string -input function.

C language constants:

1. Represent unchnaging values, characters, or string.
2. Three types: immediate values , constant data types, and constant expressions.
3. Constant data types and expressions need to be changed in only one location.

Immediate Values:

Appear directly in the code.

Value= 99+a;
Alpha= 'A';

When the specific value is used often, create another type of constant instead.

1. Declared like any data type variable.
2. Uses the kyword const.
3. Value assigned when created.
4. Cannot alter the value without an error.
5. The constant is valid only in the function where it's defined.

Constant Expression:
1. Created by using the preprocessor directive #define.
2. Name is traditionally in ALL CAPS, one word, no underlines.
3. Assigned to an immediate value.
4. No semicolon, unless the semicolon is part of the constant.
5. Expanded at compile time.
6. Is valid for all functions in the source code file.

#define  VERSION 3
1. The constant expression is named VERSION.
2. Its expanded value is 3.
3. No semicolon.

#define AUTHOR "Prajukta Dey"
1. The constant expression is named AUTHOR.
2. Its expanded to the string "Prajukta Dey".
3. Double quotes are included in the expansion.

#define ROWS 20
#define COLUMNS 60
#define GRID ROWS* COLUMNS

Three constant expressions are defined ROWS, COLUMNS AND GRID.
The values of GRID is based on the product of ROWS AND COLUMNS.

```
#include <stdio.h> 
int main() 
{ 
  const int x= 5; 
  printf("%d squared is %d\n", x, x*x); 
  printf("%d squared is %d\n", x, x*x); 
  return(0); 
}
```

ARRAYS:

An array is a collection of several variables, all of the same data type.
1. Declared like any variable.
2. Data type comes first.
3. Variable name.
4. Square brackets listing the number of elements.
5. Empty square brackets when elements defined.

int deliverries[15];
1. Integer array declared.
2. Array anme is deliveries.
3. Array can hold up to 15 elements.

int totals[]: {5, 13, 6};
1. Integer array totals created.
2. Array has 3 elements defined in braces, separated by commas.
3. Final element isn't followed by a comma.

THE FIRST ELEMENGT IN AN ARRAY IS 0.

totals[n]=16;
printf("%d\n", total[n]);

1. After creating the array, it's size cannot be increased.
2. Uninitialized arrays contain garbage.

```
#include <stdio.h> 
#define MEALS 3 
int main() 
{ 
  int calories[MEALS]; 
  int x, total; 
  total=0; 
  puts("Calorie Counter"); 
  for(x=0;x<MEALS;x++) 
  { 
    printf("Calories at meal %d: " , x+1); 
    scanf("%d", &calories[x]); 
    total=total + calories[x]; 
  } 
  printf("You had a total of %d calories\n", total); 
  return(0); 
}
```
An array to find out how many calories of food a person had.

```
#include <stdio.h>
int main()
{
  char names[4][5]= {
  "Ant",
  "Bee",
  "Cat",
  "Duck"
  };
  int x;
  for(x=0;x<4;x++)
      printf("%s\n", names[x]);
  return(0);
}How to declare
```
How to declare a character array:

```
#include <stdio.h>
int main()
{
  char names[5][9]= {
  "Ant",
  "Bee",
  "Cat",
  "Duck",
  "Elephant"
  };
  int x;
  for(x=0;x<5;x++)
      printf("%s\n", names[x]);
  return(0);
}
```
The char names[5][9] means: 5 words and 9 is the length of the longest word present including the null value.

Understanding structure:

The most complex  C language variable type is structure.  It's a combination of other variables all tied together in a single package.

Structures start with the keyword struct.

```
#include <stdio.h>
int main()
{
  struct bank{
    int account;
    float balance;
};
struct bank checking;
{
  checking.account= 1234;
  checking.balance= 567.89;
  printf("Checking account %d has a balance of %f\n",
  checking.account,
  checking.balance
  );
  return(0);
  
};
return (0);
}
```

The values added should be in accordance to the data types.

```
#include <stdio.h>
int main()
{
  struct person{
    char name[32];
    int age;
  };
  struct person president={
    "George Washington",
    67
  };
  printf("%s was %d years old\n", president.name, president.age);
  return(0);
}
```
Having a character structure.
 The structure variable is followed by a dot and then the member name.

Exploring variables:

A variable should always be initialised to 0.
sizeof() is a keyword that is considered as an operator that returns how many bytes of storage are used by a variable.

int occupies 4 bytes of storage.
char occupies 1 bytes of storage.
short occupies 2 bytes of storage.
long occupies 4 bytes of storage.
float occupies 4 bytes of storage.
double occupies 8 bytes of storage.

```
#include <stdio.h>
int main()
{
  int a;
  printf("The value of a is %lu\n", sizeof(a ));
  return(0);
}
```

```
#include <stdio.h>
int main()
{
  struct stuff{
    int a;
    float b;
    char c[32];
  };
 printf("The structure 'stuff' occupies %lu bytes of storage\n", sizeof(struct stuff));
  
  return(0);
}
```
We can also find out the  bytes occupied by a structure.


We can also find out the memory location.
```
#include <stdio.h>
int main()
{
  
    int a;
    char b;
    float c;
    puts("Memory locations:");
    printf("A is at %p\n", &a);
    printf("B is at %p\n", &b);
    printf("C is at %p\n", &c);
  
  return(0);
}
  
  
```
The &a,&b,&c gives the memory locations.

POINTERS:

1. Intimidating, frightening to many C programmers.
2. Highly useful and powerful.

A pointer is a variable that holds a memory location, an address.

1.  A pointer is a variable.
2. Declared of a specific data type.
3. The * operator is prefixed before the pointer variable name.
4. Pointers must be initialized before they're used.
5. A pointer is assigned to the address of another variable.
6. The pointer data type and  the variables data type must match.
7. Pointers can also be assigned to allocate chunks of memory.

The dual nature of the pointer variables:

1. Pointers use the * operator when declared.
2. When used without the * operator, the pointer represents an address.
3. When used with the operator *, the pointer represents the value at its address.

```
#include <stdio.h>
int main()
{
  int pokey;
  int *p;
  pokey = 987;
  p = &pokey;
  printf("The address of `pokey` is %p\n",&pokey);
  printf("The address of `p` is %p\n",p);

  printf("The value of `pokey` is %d\n",pokey);
  printf("The value of `*p` is %d\n",*p);

  return(0);
}
```

You must declare an asterisk while declaring a pointer variable.

```
#include <stdio.h>
int main()
{
  int a,b;
  int *ptr;
  a=1234;// value of variable a//
  ptr= &a; //address of variable a//
  b=*ptr;//b is assigned the variable a's value//
  
  printf("A is %d and B is %d\n", a,b);
  return(0);
  
}
```

A pointers value can change in the code.

ALWAYS INITIALISE THE POINTER VALUE.
ptr=&price;

Arrays don't exist in C.
What you really deal with are pointers.

```
#include <stdio.h>
int main()
{
  int array[]={11, 13, 17, 19};
  int x;
  int *aptr;
  aptr=array; //no & needed for an array//
  for(x=0;x<4;x++)
  {
    printf("Element %d: %d\n", x+1,*aptr);//value of the address represented by *aptr//
    aptr++; //the address is increased//
  }
  return(0);
}
```
How to use a pointer in an array.

```
#include <stdio.h>
int main()
{
  int array[]={11, 13, 17, 19};
  int x;
  int *aptr;
  aptr=array; //no & needed for an array//
  //aptr=aptr+1 : to print the second element//
  //aptr=aptr+2 : to print the third element//
  //aptr=aptr+3 : to print the fourth element//
  for(x=0;x<4;x++)
  {
    printf("Element %d: %d\n", x+1,*aptr);//value of the address represented by *aptr//
    
  }
  return(0);
}
```

Local and global variables.

We can create an array of pointers.
%p  gives the memory address.

Memory Usage:

1. Memory is provided by the operating system.
2. Your code creates storage for individual variables.
3. Your code can create arrays/ buffers.
4. Your code can request more memory from the operating system as it runs.

To request more memory:
1. Use the malloc() function.
2. malloc () stands for memory allocation.
3. Require including the stdlib.h header file.

The malloc() function:
1. Requires one argument, the size of the memory to allocate.
2. Returns the address of the chunk of memory allocated.
3. Upon an error, the NULL pointer is returned.
4. NULL is a constant you can use to represent the NULL pointer.
5. The NULL constant is not the same as the null character.

To determine how much memory is needed, use the:

1. Use the sizeof() operator to determine how many bytes are used by the data type requested.
2. Multiply the result of the sizeof operator by the number of units desired.
malloc(sizeof(int)*100);

3. Ensure the pointer used with malloc() is of the same data type requested.
4. Always test for the NULL pointer.
