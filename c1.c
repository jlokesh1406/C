/*
   1.Introduction to programming:
      .computer is manchine to perform any task control by the sequential interaction that means program
      .computer only understand 0 | 1 binary lang.
      .Dennis Ritchie in 1972 at bell labs 
      .c is system program lang like unix operating system
      .c compile lang
      .c program ==>complier==>object code 
//---------------------------------------------------------------------------------------------------------------------------------------//
   2.high & low level languages:

      low level languages
            .Machine lang
               => (writen in 0 | 1)
               => program is depend on the every system
               => fast excutition because of directly writen in machine lang like 0|1 so excuting fast no need to covert the machine code 
               => Machine lang design specific system  
            .Assembly lang 
               => nimoncis (ADD,SUB,MOV,MUL)
               => NIMONIC PROGRAM --> ASSEMBLER --> MACHINE CODE
               => program is depend on the every system
               => the program is write in partcular system so can't run the same program to other system
               => Assembly lang design specific system    
               => to overcome by the high level lang. 

      high level languages
               => human understand lang
               => no need study about system archituture
               => program to Machine lang converation is more delay
               => program => compiled or interpreted => machine language(object code 0 | 1) 
               => To execute a program in a high-level language, 
                  it can be compiled or interpreted. A compiler translates the entire
                  program written in a high-level language to machine language prior 
                  to execution. An interpreter translates a program line by line during 
                  execution.
               => c,java
//---------------------------------------------------------------------------------------------------------------------------------------//        
      3.language translators:
          =>compiler and  interpreter both are covert  into machine code  
         compiler lang:
            .compiler language is c,c++      
            .allprogram=>compiler=>object code=>output
            .Compiled languages are converted directly into machine code that the processor can execute. As a result, they tend to be faster and more efficient to execute than interpreted languages. 
            .time taken is more
            .after excution all line of program if there is error will show after excution of all line code
            .debug is difficulty
            .it's having machine code
         interpreter lang
            .interpreter lang is javascript
            .program =>  interpreter => output no object code
            .Interpreters run through a program line by line and execute each command.
            .time taken is more
            .error will show at the excution of line
            .debug is easy because of line by line exctution
            .it's not having machine code
//---------------------------------------------------------------------------------------------------------------------------------------//
      4.features of c lang:
         .high level lang
         .it's having 32 keyword only so easy to learn
         .c is core lang many lang like c++,java is depend on c
         .portable means program is excuted on any system
         .building function and operators
         .stuctured lang
         .pointer
         .extensibel lang like function
         .compilition & excution is faster
         .dynamic memory allocation
         .case sensiive  
         .using embedded system
         .platform depeneded
//---------------------------------------------------------------------------------------------------------------------------------------//
      5.structure of c program
         1.documentation section
            /Name:lokesh/ --> single line comment 
         2.link section like header file
            #include<stdio.h>
               # -> preprossing  
               stdio -> prinf ,scanf ->predefined function  
         3.definition section
            # define PI 3.14 - is macros
            # define MAX 0
         4.global and local deleclaration section
            int a=1;  // global variable
            int main()
            {
               int b=2; // local variable
               printf("%d",sum(a,b));
            }
            int sum(int x,int y)
            {
               return x+y;
            }
         5.Main section
            int main()
            {
               declaration part like int a,sum;
               excution part sum=a+1; printf("%d ",sum);
            }
         6.sub program section like function
//---------------------------------------------------------------------------------------------------------------------------------------//
      6.constants in c
         constants are fixed value
         1.numeric - integer,floating
         2.charatcte - char,string

         demical   ->   0 to 9 base is 10
         octal     ->   0 to 7 base is 8
         hexdeciaml->   0 to 15 base is 16

      Decimal to Other Bases

      1. **Decimal to Binary**
         - Repeatedly divide the decimal number by 2.
         - Record the remainder for each division.
         - The binary representation is the remainders read from bottom to top.

         **Example:** Convert 10 to binary.
         - 10 ÷ 2 = 5, remainder 0
         - 5 ÷ 2 = 2, remainder 1
         - 2 ÷ 2 = 1, remainder 0
         - 1 ÷ 2 = 0, remainder 1
         - Binary: 1010

      2. **Decimal to Octal**
         - Repeatedly divide the decimal number by 8.
         - Record the remainder for each division.
         - The octal representation is the remainders read from bottom to top.

         **Example:** Convert 58 to octal.
         - 58 ÷ 8 = 7, remainder 2
         - 7 ÷ 8 = 0, remainder 7
         - Octal: 72

      3. **Decimal to Hexadecimal**
         - Repeatedly divide the decimal number by 16.
         - Record the remainder for each division (using 0-9 and A-F for values 10-15).
         - The hexadecimal representation is the remainders read from bottom to top.

         **Example:** Convert 34527 to hexadecimal.
         - 34527 ÷ 16 = 2157, remainder 15 (F)
         - 2157 ÷ 16 = 134, remainder 13  (D)
         - 134 ÷ 16 = 8, remainder 6
         - 8 ÷ 16 = 0, remainder 8  
         - Hexadecimal: 86DFF

      ### Binary to Other Bases

      1. **Binary to Decimal**
         - Multiply each bit by 2 raised to the power of its position (starting from 0).
         - Sum the results.

         **Example:** Convert 1010 to decimal.
         - \(1 \times 2^3 + 0 \times 2^2 + 1 \times 2^1 + 0 \times 2^0 = 8 + 0 + 2 + 0 = 10\)
         - Decimal: 10

      2. **Binary to Octal**
         - Group the binary digits into sets of three (from right to left).
         - Convert each set to its octal equivalent.

         **Example:** Convert 101010 to octal.
         - Group: (001)(010)(010)
         - Convert: 1 2 2
         - Octal: 122

      3. **Binary to Hexadecimal**
         - Group the binary digits into sets of four (from right to left).
         - Convert each set to its hexadecimal equivalent.

         **Example:** Convert 101010 to hexadecimal.
         - Group: (0001)(0101)
         - Convert: 1 5
         - Hexadecimal: 15

      ### Octal to Other Bases

      1. **Octal to Decimal**
         - Multiply each digit by 8 raised to the power of its position (starting from 0).
         - Sum the results.

         **Example:** Convert 72 to decimal.
         - \(7 \times 8^1 + 2 \times 8^0 = 56 + 2 = 58\)
         - Decimal: 58

      2. **Octal to Binary**
         - Convert each octal digit to its three-digit binary equivalent.

         **Example:** Convert 72 to binary.
         - Convert: 7 -> 111, 2 -> 010
         - Binary: 111010

      3. **Octal to Hexadecimal**
         - First convert the octal number to binary.
         - Then convert the binary number to hexadecimal.

         **Example:** Convert 72 to hexadecimal.
         - Octal to Binary: 72 -> 111010
         - Binary to Hexadecimal: 111010 -> 3A
         - Hexadecimal: 3A

      ### Hexadecimal to Other Bases

      1. **Hexadecimal to Decimal**
         - Multiply each digit by 16 raised to the power of its position (starting from 0).
         - Sum the results.

         **Example:** Convert 72 to decimal.
         - \(7 \times 16^1 + 2 \times 16^0 = 112 + 2 = 114\)
         - Decimal: 114

      2. **Hexadecimal to Binary**
         - Convert each hexadecimal digit to its four-digit binary equivalent.

         **Example:** Convert 72 to binary.
         - Convert: 7 -> 0111, 2 -> 0010
         - Binary: 01110010

      3. **Hexadecimal to Octal**
         - First convert the hexadecimal number to binary.
         - Then convert the binary number to octal.

         **Example:** Convert 72 to octal.
         - Hexadecimal to Binary: 72 -> 01110010
         - Binary to Octal: 01110010 -> 162
         - Octal: 162

      This provides a straightforward approach to converting between these number systems.
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//7.Variables
//--> Variable: int number = 10; declares a variable named number and initializes it with the value 10.
//--> Instance: struct Person person1 = {"Alice", 30}; creates an instance of the Person structure, initializing the fields name with "Alice" and age with 30.
//--> Declaration: A variable must be declared before it is used in the program. The declaration specifies the variable's name and type.int age;float salary;char grade;
//--> Initialization: A variable can be assigned an initial value at the time of declaration.int age = 25;float salary = 50000.0;char grade = 'A';
//--> Keywords:is reseved word or predefined word totally 32 keyword in c
//--> Identifiers: in C are names used to identify variables, functions, arrays, and other user-defined items.


/*
In C, variables must follow specific naming rules to be valid. Here are the rules for valid variable names:
1. Variable names must start with a letter (uppercase or lowercase) or an underscore `_`.
2. Subsequent characters may be letters, digits (0-9), or underscores.
3. Variable names are case-sensitive.
4. Keywords (reserved words) cannot be used as variable names.
Examples of Valid Variable Names
1. age
2. salary
3. totalAmount
4. _counter
5. heightInMeters
6. number_of_students
7. total1
8. MaxValue
9. flag
10. result123
Examples of Invalid Variable Names
1. 1stPlace (starts with a digit)
2. total amount (contains a space)
3. float (keyword)
4. @home (contains a special character `@`)
5. total$amount (contains a special character `$`)
6. break (keyword)
7. int (keyword)
8. total-amount (contains a special character `-`)
9. while (keyword)
10. 99Bottles (starts with a digit)
Summary
- Valid variable names follow the rules and do not contain spaces or special characters other than the underscore.
- Invalid variable names either start with a digit, contain invalid characters, or use reserved keywords.
*/
//---------------------------------------------------------------------------------------------------------------------------------------//




//8.Data type:"A data type in C specifies the kind of data a variable can hold and how much memory it uses."
/*
Data Type:
1. Built in Primitives
    Integral         ----> int , char
    Boolean          ----> bool
    Floating Point   ----> float , double
2. Derived:
    Arrays,Pointers
3. User Defined
    struct,enum,union,typedef

----------------------------------------------------------------------------------------------------
| Data Type             | Memory (bytes) | Range                                | Format Specifier |
|-----------------------|----------------|--------------------------------------|------------------|
|short int              | 2              | -32,768 to 32,767                    | %hd              |
|unsigned short int     | 2              | 0 to 65,535                          | %hu              |
|unsigned int           | 4              | 0 to 4,294,967,295                   | %u               |
|int                    | 4              | -2,147,483,648 to 2,147,483,647      | %d               |
|long int               | 4 or 8         | -2,147,483,648 to 2,147,483,647      | %ld              |
|unsigned long int      | 4 or 8         | 0 to 4,294,967,295                   | %lu              |
|long long int          | 8              | -(2^63) to (2^63)-1                  | %lld             |
|unsigned long long int | 8              | 0 to (2^64)-1                        | %llu             |
----------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------
| Data Type      | Memory (bytes) | Range                               | Format Specifier |
|----------------|----------------|-------------------------------------|------------------|
|  char          | 1              | -128 to 127 (signed)                | %c               |
|  signed char   | 1              | -128 to 127                         | %c or %hhd       |
|  unsigned char | 1              | 0 to 255                            | %c or %hhu       |
--------------------------------------------------------------------------------------------

-----------------------------------------------------------------------------------------------
| Data Type    | Memory (bytes) | Range                                   | Format Specifier  |
|--------------|----------------|-----------------------------------------|-------------------|
| float       | 4               | Approximately ±3.4e-38 to ±3.4e+38      |   %f              |
| double      | 8               | Approximately ±1.7e-308 to ±1.7e+308    |  %lf              |
| long double | 8 or 10 or 16   | Approximately ±3.4e-4932 to ±1.1e+4932  |  %Lf              |
-----------------------------------------------------------------------------------------------

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() 
{
    printf("Integer Types:\n");
    printf("short int: Size %zu bytes, Range %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short int: Size %zu bytes, Range 0 to %u\n", sizeof(unsigned short int), USHRT_MAX);
    printf("unsigned int: Size %zu bytes, Range 0 to %u\n", sizeof(unsigned int), UINT_MAX);
    printf("int: Size %zu bytes, Range %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("long int: Size %zu bytes, Range %ld to %ld\n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int: Size %zu bytes, Range 0 to %lu\n", sizeof(unsigned long int), ULONG_MAX);
    printf("long long int: Size %zu bytes, Range %lld to %lld\n", sizeof(long long int), LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int: Size %zu bytes, Range 0 to %llu\n\n", sizeof(unsigned long long int), ULLONG_MAX);

    // Character types
    printf("Character Types:\n");
    printf("char: Size %zu byte, Range %d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char: Size %zu byte, Range 0 to %d\n\n", sizeof(unsigned char), UCHAR_MAX);

    // Floating-point types
    printf("Floating-Point Types:\n");
    printf("float: Size %zu bytes\n", sizeof(float));
    printf("double: Size %zu bytes\n", sizeof(double));
    printf("long double: Size %zu bytes\n", sizeof(long double));

    return 0;
}


#include<stdio.h>
int main()
{
   char a1='a';
   char a2=98;
   printf("%d %c \n",a1,a1);
   printf("%d %c \n",a2,a2);

   char b1=131; //-128 to 127
   char b2=-131;
   printf("%d %c \n",b1,b1);// -125    --->  131-256 == -125
   printf("%d %c \n",b2,b2);//  125    ---> -131+256 == 125

   unsigned char c1=130; // 0 to 256
   unsigned char c2=-130;
   printf("%d %c \n",c1,c1);//130
   printf("%d %c \n",c2,c2);//126 ---> 256-130=126

}
*/

//---------------------------------------------------------------------------------------------------------------------------------------//


//9.Escape sequences:
// --> Escape sequences in C are special sequences of characters that begin with a backslash (\).
// --> special sequences of characters that are interpreted by the compiler to perform specific actions
/*
#include <stdio.h>
int main() {
    // Demonstrating various escape sequences
    printf("Alert: \a\n");
    printf("Backspace: Before\bAfter\n");
    printf("Form feed: \fText after form feed\n");
    printf("Newline: Line 1\nLine 2\n");
    printf("Carriage return: Line 1\rLine 2\n");
    printf("Horizontal tab: Column 1\tColumn 2\n");
    printf("Vertical tab: Line 1\vLine 2\n");
    printf("Backslash: \\path\\to\\file\n");
    printf("Single quote: \'Single quote inside string\'\n");
    printf("Double quote: \"Double quote inside string\"\n");
    printf("Question mark: What\? Where?\n");
    printf("Null character: Before\0After\n");
    printf("Octal representation: \101\n"); // ASCII code for 'A'
    printf("Hexadecimal representation: \x41\n"); // ASCII code for 'A'
    printf("Unicode representation: \u03A9\n"); // Greek capital letter Omega
    printf("Unicode representation (extended): \U0001F609\n"); // Smiling face emoji
    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------------------------//

//10.oprators in c:
/*
   Operators in C are symbols that represent computations or operations on variables or values. 
   They are used to manipulate data and perform various tasks within a program. 
   Operators: in programming are symbols that perform operations 
   Operands : (variables, constants, expressions) to produce a result. 
   Type of Operators in C 
   1. unary   (- , ++, -- , !, & , sizeof) single operand
   2. Binary  (Arithmetic,reletional,logical,bitwise,equality,comma operator,assignment operator) bi operand
   3. Ternary ( condition?expresion1:expresion2 ) 

//1.Arithmetic Operators (+ - * / %)
#include<stdio.h>
int main()
{
   printf("%d\n",1+1);  // 2
   printf("%d\n",1-1);  // 0
   printf("%d\n",1*1);  // 1

   printf("----------\n");

   printf("%d\n",10/-7); // -1
   printf("%d\n",-10/7); // -1
   printf("%d\n",7/-10); //  0
   printf("%d\n",-7/10); //  0

   printf("----------\n");

   printf("%d\n",10%-7); //  3
   printf("%d\n",-10%7); // -3
   printf("%d\n",7%-10); //  7
   printf("%d\n",-7%10); // -7
}
*/
/*
//2.Assignment Operators (=) Assoctivity right to left 
#include<stdio.h>
int main()
{
   int a,b,c;
   a=b=c=10;
   printf("%d %d %d\n",a,b,c); // 10 10 10
   a+=c*10;
   printf("%d ",a); // 110
}
*/
//3.increment and decrement opreator
/*
#include<stdio.h>
int main()
{
   int a=11;
   printf("%d \n",++a); // Prefix  12
   printf("%d \n",a++); // Postfix 12
   printf("%d \n",a);   //         13

   printf("%d \n",--a); // Prefix  12
   printf("%d \n",a--); // Postfix 12
   printf("%d \n",a);   //         11

   int x=a++;
   printf("%d \n",x); // 11
   printf("%d \n",a); // 12

   x=a--;
   printf("%d \n",x); // 12
   printf("%d \n",a); // 11

   float b=2.2;
   b++;
   printf("%f \n",b); // 3.200000

   b=b+0.5;
   printf("%f \n",b); // 3.700000
}
*/
//4.Relational Operators ( < , > , <= , >= , ==  , != ) Decisiong making operators True(1) or False(0)
/*
#include<stdio.h>
int main()
{
   printf("%d \n",4+3>33+3);// 0

   int a=12,b=23,c=2,d=2;
   printf("%d \n",a<b<c>d); // 0
   //             12<23<2>2
   //              1<2>2
   //               1>2
   //                0

   printf("%d \n",a+c==b>c<c+d);// 0
   //             12+2 == 23>2<2+2;
   //              14 == 23>2<4
   //              14 == 1<4
   //              14 == 1
   //                0

   a=2;b=5;c=3;d=1;
   printf("%d \n", a+c == b>= c < c+d !=1);
   //              2+3 == 5>=3 <3+1!=1
   //              5  ==  1<3+1!=1
   //              5  ==  1+1!=1
   //              5  ==  2!=1
   //              0!=1
   //               1
}
*/ 
//5.logical Operators use to more than one condtion
/*
#include<stdio.h>
int main()
{
   int a=10,b=5;
   printf("%d \n", a==b && b<a); // 0
   //              10==5 && 5<10
   //               0    &&  1
   //                   0

   printf("%d \n", a>b && b!=11 && b<11 && a<5 ); //0
   //              10>5 && 5!=11 && 5<11 && 10<5
   //               1   && 1 && 1 && 0
   //                  0

   a=a>b && printf("LOKESH ");
   printf("%d \n",a); // LOKESH 1

   a=a<b && printf("");
   printf("%d \n",a); // 0

   a=12;b=12;
   a=a>b && printf("LOKESH ") || printf("JAYASEELAN ");
   printf("%d \n",a);// JAYASEELAN 1

   printf("%d \n",4&&!0); // 1
   //             4 && 1
   //               1
   printf("%d \n",4&&0); // 0
   //             4 & 0

   printf("%d \n",4&&-4); // 1
}
*/
//6.Bitwise Operators 
/*
#include<stdio.h>
int main()
{
   int a=10,b=3;
   printf("%d \n",a&b);       //2
   // 10 ---> 1 0 1 0
   // 3  ---> 0 0 1 1
   //-----------------
   //         0 0 1 0 (2) 

   printf("%d \n",a|b);       //11
   // 10 ---> 1 0 1 0
   // 3  ---> 0 0 1 1
   //-----------------
   //         1 0 1 1 (11) 

   printf("%d \n",a^b);       //9
   // 10 ---> 1 0 1 0
   // 3  ---> 0 0 1 1
   //-----------------
   //         1 0 0 1 (9) 

   a=~a;
   printf("%d \n",a);       // -11
   // SHORTCUT:a=-(a+1)
   //          a=-(10+1)
   //          a=-11

   a=10;b=3;
   printf("%d \n",a<<2);     // 40
   //SHORTCUT:a*pow(2,shifting position)
   //         10*pow(2,2)
   //         10*4
   //          40
   printf("%d \n",a);      //10

   printf("%d ",a>>2);     //2
   //SHORTCUT: a/pow(2,shifting position)
   //          10/pow(2,2)
   //          10/4
   //           2

}
*/
//7.Special Operators ( , , sizeOf , * , & )
/*
#include<stdio.h>
int main()
{
   int a;
   a=1,2;
   printf("%d \n",a); // 1
   a=(1,2);
   printf("%d \n",a); // 2
   a=(1,2,3);
   printf("%d \n",a); // 3 
   (a=1),2,3;
   printf("%d \n",a); // 1

   //int b=1,2;//error
   int b=(1,2,3);
   printf("%d \n",b); // 3

   a=(printf("LOKESH "),2,3);
   printf("%d \n",a); // LOKESH 3

   a=1;b=1;
   b=(a++,++a);
   printf("%d %d\n",a,b); //    3 3

   a=1;b=1;
   b=a++,++a;
   printf("%d %d\n",a,b); //  3 1
}
*/ 
//---------------------------------------------------------------------------------------------------------------------------------------//

//---------------------------------------------------------------------------------------------------------------------------------------//
//9.unformatted:

// i).unformatted Input Function in C
// getchar(),getch(),getche(),gets()
/*
#include<stdio.h>
int main()
{
   char ch;
   ch=getchar();// LOKESH
   printf("%c ",ch); //L
}
*/
/*
#include <conio.h>
#include <stdio.h>
int main() {
    char c;
    printf("Press any key: ");
    c = getch();
    printf("\nYou pressed: %c\n", c);
    return 0;
}
*/
/*
#include <conio.h>
#include <stdio.h>
int main() {
    char c;
    printf("Press any key: ");
    c = getche();
    printf("\nYou pressed: %c\n", c);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");//lokes
    gets(str);
    printf("You entered: %s\n", str);//lokes
}
*/
/*
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("You entered: %s\n", str);
    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    char str[100];

    // 1. Reading until a newline character
    printf("1. Enter a string (until newline): ");
    scanf("%[^\n]%*c", str);
    printf("You entered: %s\n", str);

    2. Reading only digits
    printf("2. Enter digits: ");
    scanf("%[0-9]%*c", str);      //  123l32j23
    printf("You entered: %s\n", str); //123

    3. Reading only letters (both uppercase and lowercase)
    printf("3. Enter letters: ");
    scanf("%[a-zA-Z]%*c", str);  // asA12
    printf("You entered: %s\n", str); //asA

    // 4. Reading only lowercase letters
    printf("4. Enter lowercase letters: ");
    scanf("%[a-z]%*c", str);
    printf("You entered: %s\n", str);

    // 5. Reading only uppercase letters
    printf("5. Enter uppercase letters: ");
    scanf("%[A-Z]%*c", str);
    printf("You entered: %s\n", str);

    // 6. Reading only vowels
    printf("6. Enter vowels: ");
    scanf("%[aeiouAEIOU]%*c", str);
    printf("You entered: %s\n", str);

    // 7. Reading until a digit is encountered
    printf("7. Enter a string (until a digit): ");
    scanf("%[^0-9]%*c", str);
    printf("You entered: %s\n", str);

    // 8. Reading only hexadecimal characters
    printf("8. Enter hexadecimal characters: ");
    scanf("%[0-9a-fA-F]%*c", str);
    printf("You entered: %s\n", str);

    // 9. Reading only alphanumeric characters
    printf("9. Enter alphanumeric characters: ");
    scanf("%[0-9a-zA-Z]%*c", str);
    printf("You entered: %s\n", str);

    // 10. Reading until a space character
    printf("10. Enter a string (until space): ");
    scanf("%[^ ]%*c", str);
    printf("You entered: %s\n", str);

    // 11. Reading until a comma character
    printf("11. Enter a string (until comma): ");
    scanf("%[^,]%*c", str);
    printf("You entered: %s\n", str);

    // 12. Reading until a period (dot) character
    printf("12. Enter a string (until period): ");
    scanf("%[^.]%*c", str);
    printf("You entered: %s\n", str);

    // 13. Reading until a specific set of characters
    printf("13. Enter a string (until 'a', 'b', or 'c'): ");
    scanf("%[^abc]%*c", str);
    printf("You entered: %s\n", str);

    // 14. Reading only punctuation marks
    printf("14. Enter punctuation marks: ");
    scanf("%[!\"#$%%&'()*+,-./:;<=>?@[\\]^_`{|}~]%*c", str);
    printf("You entered: %s\n", str);

    // 15. Reading until a semicolon character
    printf("15. Enter a string (until semicolon): ");
    scanf("%[^;]%*c", str);
    printf("You entered: %s\n", str);

    // 16. Reading only consonants
    printf("16. Enter consonants: ");
    scanf("%[bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ]%*c", str);
    printf("You entered: %s\n", str);

    // 17. Reading only specific set of characters (e.g., 'abc123')
    printf("17. Enter 'a', 'b', 'c', '1', '2', '3': ");
    scanf("%[abc123]%*c", str);
    printf("You entered: %s\n", str);

    // 18. Reading until a newline character or space
    printf("18. Enter a string (until newline or space): ");
    scanf("%[^\n ]%*c", str);
    printf("You entered: %s\n", str);

    // 19. Reading until a specific sequence of characters
    printf("19. Enter a string (until 'x', 'y', or 'z'): ");
    scanf("%[^xyz]%*c", str);
    printf("You entered: %s\n", str);

    // 20. Reading only whitespace characters
    printf("20. Enter whitespace characters: ");
    scanf("%[ \t\n\r]%*c", str);
    printf("You entered: %s\n", str);

    return 0;
}
*/
// ii).unformatted Output Function in C
/*
#include<conio.h>
#include<stdio.h>
int main()
{
   char str[]="lokesh";
   putchar(str[0]);//l
   puts(str);//lokesh

}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//

/*
   Control statements, or decision-making statements, in programming are constructs that enable the flow of execution
   to change based on certain conditions. They include structures like if, else, switch, and conditional loops to 
   execute different code blocks based on logical conditions.
*/
/*
   A loop in programming iteratively executes a block of code based on a condition or a set number of iterations.
  
   #include <stdio.h>
   int main()
   {
      for (int i = 1; i <= 5; i++)
      { 
         printf("%d ", i);
      }
      printf("\n");

      int j = 1; 
      while (j <= 5)
      { 
         printf("%d ", j++);
      }
      printf("\n");

      int k = 1;
      do
      { 
         printf("%d ", k++); 
      } while (k <= 5); 
      printf("\n");

      return 0;
   }

*/
/*
  #include<stdio.h>
  int main()
  {
      int num=-10,sum=0;
      for(int i=0;i<=3;i++)
      {
         printf("Hii\n");
         if(num<0)
         {
            continue;
         }
         sum+=num;
      }
      printf("%d ",sum);//0
  }
*/
//array
/*
   "An array in programming is a data structure that contains a collection of 
    elements, each identified by at least one index or key. Arrays are typically
    of fixed size and store elements of the same data type sequentially in memory."
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//10.String 
/*
#include<stdio.h>
int main()
{
   char str1[]="lokesh jayaseelan";
   printf("%s \n",str1);        //lokesh jayaseelan 
   printf("%.5s \n",str1);     //lokes
   printf("%10.5s \n",str1);  //      lokes

   printf("%s ",&str1[2]);  //kesh jayaseelan
   printf("%s \n",str1[2]); // nothing will be printed

}
*/
//1.String length
/*
#include<stdio.h>
int main()
{
   char ch[]="lokesh";
   int count=0,i=0;
   while(ch[i++]!='\0')
   {
      count++;
   }
   printf("%d \n",count);      //6
   printf("%d \n",strlen(ch));//6

   count=0,i=0;
   for(i=0;i<ch[i];i++)
   {
      count++;
   }
   printf("%d \n",count);
}
*/
//2.String Concatenate
/*
#include<stdio.h>
int main()
{
   char ch1[10]="lokesh ",ch2[10]="j";
   strcat(ch1,ch2);
   printf("%s ",ch1); //lokesh j 

   printf("\n");

   char ch3[10]="lokesh ",ch4[10]="j";
   int len1=strlen(ch3),len2=strlen(ch4);
   for(int i=len1;i<len1+len2;i++)
   {
      ch3[i]=ch4[i-len1];
   } 
   printf("%s ",ch3); //lokesh j 
}
*/
//3.String Compare
/*
#include<string.h>
#include<stdio.h>
int main()
{
   char ch1[10]="lokesh ",ch2[10]="lokesh";
   int result1=strcmp(ch1,ch2);
   printf("%s \n",result1==0?"--SAME--":"--NOT A SAME--");  // --NOT A SAME--

   char ch3[10]="lokesh ",ch4[10]="lokesh";
   int flag=0;
   for(int i=0;ch3[i]!='\0'||ch4[i]!='\0';i++)
   {
      if(ch3[i]!=ch4[i])
      {
         flag=1;
         break;
      }
      if(flag==1)
      {
         printf("--NOT A SAME--"); 
         return 0;  
      }
   }
   printf("--SAME--");  // --SAME--
}
*/
//4.String Reverse
/*
   #include<string.h>
   #include<stdio.h>
   int main()
   {
      char str[]="lokesh";
      strrev(str);
      printf("%s ",str); //hsekol 
   }
*/
//---------------------------------------------------------------------------------------------------------------------------------------//

//11.Categories of Functions:
/*
1. **Character Handling (`<ctype.h>`):**
   - `isalpha()`, `isdigit()`, `isalnum()`: Check character types.
   - `toupper()`, `tolower()`: Convert characters to uppercase or lowercase.
   - `isspace()`, `iscntrl()`: Check whitespace or control characters.

2. **String Manipulation (`<string.h>`):**
   - `strlen()`: Calculate string length.
   - `strcpy()`, `strncpy()`: Copy strings.
   - `strcat()`, `strncat()`: Concatenate strings.
   - `strcmp()`, `strncmp()`: Compare strings.
   - `strchr()`, `strrchr()`: Locate characters in strings.
   - `strstr()`: Locate substrings in strings.
   - `strtok()`: Tokenize strings.

3. **Mathematical Functions (`<math.h>`):**
   - `sqrt()`, `pow()`: Square root and power functions.
   - `fabs()`: Absolute value.
   - `ceil()`, `floor()`: Round up or down.
   - `sin()`, `cos()`, `tan()`: Trigonometric functions.

4. **Input/Output (`<stdio.h>`):**
   - `printf()`, `scanf()`: Input and output functions.
   - `getchar()`, `putchar()`: Read and write characters.
   - `fgets()`, `fputs()`: Read and write strings.
   - `fscanf()`, `fprintf()`: Formatted input and output.

5. **Memory Management (`<stdlib.h>`):**
   - `malloc()`, `calloc()`, `realloc()`: Allocate memory.
   - `free()`: Free allocated memory.

6. **Date and Time (`<time.h>`):**
   - `time()`: Get current time.
   - `asctime()`, `ctime()`: Convert time to string.
   - `strftime()`: Format time into a custom string.
7. conio.h
   - getch();  // Wait for a key press
8. stdlib.h library
   - int a = atol(s1);
*/

//---------------------------------------------------------------------------------------------------------------------------------------//


//12.Pointers:
//a pointer is a variable that stores the memory address of another variable. 
//It holds the address of a memory location rather than a value. Pointers are powerful
//features in C, allowing direct manipulation of memory and enabling efficient use of resources.

//pointer contains address of any other value
//pointer is derived datatype 
//1.
/*
   #include<stdio.h>
   int main()
   {
      int a=10;
      //variable contains name,value,address
      int *p; // pointer p contains address of variable whose data type is int
   }
*/
//2. &(address of) and *(indirection) operator
// size pointer depend on machine 16bit -> 2byte (or) 32bit -> 4byte (or) 64bit -> 8byte 
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *ptr=&a;
   printf("%d %d %d %d %d \n",a,&a,ptr,&ptr,*ptr);//10 6487580 6487580 6487568 10 
   printf("%d %x %x %x %d \n",a,&a,ptr,&ptr,*ptr);//10 62fe1c 62fe1c 62fe10 10 

}
*/
//3.Pointer Assignment
/*
#include<stdio.h>
int main()
{
   int a1=10,b1=11;
   int *p1,*q1;
   p1=&a1;
   q1=p1; // *q1=*p1
   printf("%d %d \n",*p1,*q1); //10 10

   int a2=10,b2=11;
   int *p2,*q2;
   p2=&a2;
   q2=&b2;
   *q2=*p2;
   printf("%d %d %d %d  \n",a2,b2,*p2,*q2); //10 10 10 10
}
*/
//4.Pointer to Pointer (double pointer)
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *p=&a;
   int **q=&p;
   int ***r=&q;
   printf("%d %d %d %d \n",a,*p,**q,***r);// 10 10 10 10
}
*/
//5.Pointer Arithmetic
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *p=&a;
   int *q=&a;
  //printf("%d ",p+q); invalid but possible p=p+2;
  //p=p+2 --> p+2*sizeof(datatype)
  //p=p-2 --> p-2*sizeof(datatype)

  int arr1[]={10,1,-1,10,11};
  int *ptr1=&arr1[0]; // *p=arr; also same
  printf("%d %d\n",ptr1,*ptr1);//6487536 10

  ptr1=ptr1+1;
  printf("%d %d\n",ptr1,*ptr1);//6487540 1

  *ptr1=-143;
  printf("%d %d\n",ptr1,*ptr1);//6487540 -143


  int arr2[]={10,1,-1,10,11};
  int *ptr2=&arr2[3]; // *p=arr; also same
  printf("%d %d\n",ptr2,*ptr2);//6487500 10

  ptr2=ptr2-1;
  printf("%d %d\n",ptr2,*ptr2);//6487496 -1

  *ptr2=-143;
  printf("%d %d\n",ptr2,*ptr2);//6487496 -143

  printf("%d \n",ptr1-ptr2);//7
//printf("%d ",p+q); But it's invalid;
}
*/
//6.Pointer Increment/Decrement
/*
#include<stdio.h>
int main()
{
   int arr1[]={22,33,44,55,66};
   int *ptr1=arr1;
   printf("%d %d \n",ptr1,*ptr1);//6487552 22 
   ptr1++;
   printf("%d %d \n",ptr1,*ptr1);//6487556  33 

   printf("%d %d \n",ptr1,*ptr1++);//6487560  33 
   printf("%d %d \n",ptr1,*ptr1);  //6487560  44

   
   printf("%d %d \n",ptr1,*++ptr1);//6487564  55
   printf("%d %d \n",ptr1,*ptr1);  //6487564  55

   // right ot left
   ptr1=arr1;
   printf("%d %d \n",*ptr1++,*ptr1++);//  33  22
   ptr1=arr1;
   printf("%d %d \n",*++ptr1,*++ptr1);// 44  55
   ptr1=arr1;
   printf("%d %d \n",*ptr1++,*++ptr1);// 33  33
   ptr1=arr1;
   printf("%d %d \n",*++ptr1,*ptr1++);// 44  22


   ptr1=arr1;
   printf("%d %d \n",++*ptr1,++*ptr1); //  24  23
   printf("%d %d \n",*ptr1,*ptr1);     //  24  24

   int arr[]={10,11,-1,56,67,5,4};
   int *p,*q;
   p=arr;
   printf("%d \n",p);// 10
   printf("%d %d %d %d\n",*p,(*p)++,*p++,*++p);//         -1  11   11
   q=p+3;
   printf("%d \n",*q-3);//2
   printf("%d \n",*--p+5);//11+5 => 16
   printf("%d \n",*p+*q);//11+5  => 16

   int arr2[]={10,11,-1,56,67,5,4};
   int *ap,*bp;
   ap=arr2;
   bp=&arr2[0]+3;

   printf("%d %d\n",*ap,*bp);//10 56
   printf("%d %d %d %d\n",*ap,(*ap)++,(*ap)++,*(++ap));//13 12 11 11
   printf("%d \n",*ap);//13
   printf("%d \n",(*ap)++);//13
   printf("%d \n",*ap++);//14
   bp--;
   printf("%d %d\n",*bp,(*(bp+2))--);//-1 67
   printf("%d %d\n",*bp,*(bp+2)-2);//-1 67
   printf("%d %d\n",*bp,*(bp++ -2)-1);//  56  9

   char str[]="welcome to jenny's lectures";
   char *ptrs=str;
   printf("%c \n",*ptrs);// w
   printf("%c \n",*(ptrs++ +1));//e
   printf("%c \n",*((ptrs--+5)-1)+3);//p
   printf("%c \n",*(++ptrs+2)-32);//c
   printf("%c %c %c\n",*ptrs,*++ptrs,*--ptrs);// e e w
}
*/
//7.void pointer
// A `void` pointer is a special type of pointer in C that can point to any data type. with help typecasting
// Key Uses:
// 1. Generic Pointer: Since it can point to any type, it is often used for generic functions and data structures like linked lists, stacks,
//                     or queues that can work with any data type.
// 2. Memory Allocation: Commonly used with functions like `malloc` and `calloc` which return `void` pointers.
/*
#include<stdio.h>
int main()
{
   int a=1;
   float b=1.1;
   char c='a';
   void *ptr;
   ptr=&a;
   printf("%d \n",*(int *)ptr); //1
   ptr=&b;
   printf("%f \n",*(float *)ptr);//1.100000
   ptr=&c;
   printf("%c \n",*(char *)ptr);//a

}
*/
//8.Null Pointer
// A `NULL` pointer is a pointer that does not point to any valid memory location.
// It is typically used to indicate that the pointer is not currently assigned to any object or data.
// Null pointer can't dereference
// Key Uses:
// 1. **Indicate Unused Pointers**: Helps to signify that a pointer is not in use or has been intentionally left unassigned.
// 2. **Error Handling**: Functions often return `NULL` to indicate failure or that the required data is not available.
// 3. **Pointer Initialization**: Ensures that a pointer does not hold a garbage value.
/*
#include<stdio.h>
int main()
{
   int *ptr=NULL;
   printf("%d ",ptr);//0  
   printf("%s ",ptr);//(null)
   if(ptr==NULL)
   {
      printf("NULL"); //NULL
   }
}
*/
//9.Dangling Pointer 
/*
   A dangling pointer is a pointer that points to memory that has been freed memory location. address creeted in heap
   It occurs when you allocate memory dynamically and then deallocate it, but the pointer still holds the address of the freed memory.
   Key Uses:
   1. **Avoiding Undefined Behavior**: Accessing a dangling pointer can cause crashes or unpredictable behavior.
   2. **Memory Management Practice**: Set pointers to `NULL` after freeing to avoid dangling pointers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr=(int *)malloc(sizeof(int));
   //pointer contains free memory and consum memory
   *ptr=10;
   printf("%d \n",*ptr);// 10
   free(ptr);
   printf("%d \n",*ptr);//garbage value
   *ptr=NULL;
   printf("%d \n",*ptr);//0
}
*/
//10.wild Pointer
/*
   A **wild pointer** is an uninitialized pointer variable that points to a random memory location. 
   It hasn't been set to point to a specific memory address, so it may contain garbage data or point to an unintended area of memory.
   Key Uses:
   1. **Potential for Errors**: Using a wild pointer can lead to crashes or unpredictable behavior because it doesn't point to a valid memory location.
   2. **Initialization Required**: Always initialize pointers before use to avoid them being wild pointers.

   #include<stdio.h>
   int main()
   {
      int *ptr;
      //if the pointer is uninitialized then it's called as a Wild Pointer
      *ptr=10;// Accessing uninitialized pointer, undefined behavior
      printf("%d ",ptr); // Nothing
   }
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//13.Function in C
/*
a function is a block of code that performs a specific task. 
It's designed to be reusable and can accept inputs (arguments) and produce outputs (return values).
   Key Uses:
   1. Modularity: Functions help break down programs into smaller, manageable parts, improving readability and maintenance.
   2. Code Reusability: Functions can be called multiple times from different parts of the program, avoiding code duplication.
   3. Abstraction: They hide implementation details, allowing users to focus on what a function does rather than how it does it.

   #include <stdio.h>
   // Function declaration (prototype) with parameters 'a' and 'b'
   int add(int a, int b);

   int main() 
   {
      int num1 = 5, num2 = 3;
      int result;

      // Function call with arguments 'num1' and 'num2'
      result = add(num1, num2);
      printf("Result: %d\n", result); // Output: Result: 8
      return 0;
   }
   // Function definition with parameters 'a' and 'b'
   int add(int a, int b) 
   {
      return a + b; // Parameters 'a' and 'b' are used here to perform addition
   }
*/
//Call By value
/*
#include<stdio.h>
void swap(int a,int b)
{
   int temp=a;
   a=b;
   b=temp;
}
int main()
{
   int a=10,b=2; 
   swap(a,b);// Passing only copy a and b
   printf("%d %d",a,b);// 10 2 because of passing only value not a reference  a and b differnent locations same function in swap a and b also diffenent location
}
*/
//Call By Reference
/*
#include<stdio.h>
void swap(int *a,int *b)
{
   *a=2;
   *b=10l;
}
int main()
{
   int a=10,b=2; 
   swap(&a,&b);// Passing only copy a and b
   printf("%d %d",a,b);// 2 10 because of passing only reference to the function 
}
*/
//GATE QN:1
/*
#include<stdio.h>
int jumble(int x,int y)
{
   x=2*x+y;
   return x;
}
int main()
{
   int x=2,y=5;
   y=jumble(y,x);
   // y==>  (5,2)
   // y==>  x=2*5+2
   // y==>  x=12
   x=jumble(y,x);
   // x==> (12,2)
   // x==> x=2*12+2
   // x==> x=26
   printf("%d %d\n",x,y); // 26 12
}
*/
//GATE QN:2
/*
#include<stdio.h>
int incr(int i)
{
   static int count=0;
   count=count+i;
   return count;
}
int main()
{
   int i,j;
   for(i=0;i<=3;i++)
   {
      j=incr(i);
      // 0
      // 0+1 == 1
      // 1+2 == 3
      // 3+3 == 6
   }
   printf("%d %d\n",i,j);//4 6
}
*/
//GATE QN:3
/*
#include<stdio.h>
int r()
{
   static int num=7;
   return num--;
}
int main()
{
   for(r();r();r()) 
   {
      printf("%d-",r()); // 5 2
   }
}
*/
//Passing Array to the function
/*
#include<stdio.h>
int function(int arr[],int sum)
{
   for(int i=0;arr[i];i++)
   {
      sum+=arr[i];
   }
   return sum;
}
int main()
{
   int arr[]={1,2,3,4};
   int sum=function(arr,0);
   printf("%d ",sum);//10
}
*/
//Passing String to the function
/*
#include<stdio.h>
void function1(char str[])
{
   for(int i=0;str[i]!='\0';i++)
   {
      printf("%c-",str[i]);
   }
}
void function2(char *str)
{
   for(int i=0;str[i]!='\0';i++)
   {
      printf("%c-",str[i]);
   }
}
char* function3(char *str)
{
   return str;
}
int main()
{
   char ch[]="lokesh";
   function1(ch);  // l-o-k-e-s-h-
   printf("\n");   
   function2(ch);  // l-o-k-e-s-h-
   char *ch2="lokesh";
   printf("\n");  
   function2(ch2);  //l-o-k-e-s-h-
   printf("\n");
   function1(ch2); //l-o-k-e-s-h-

   printf("\n");
   printf("%s ",  function3(ch2));//lokesh
}
*/
//function pointer
/*
#include<stdio.h>
int sum(int a,int b)
{
   return a+b;
}
int main()
{
   int a=10,b=7;
   int (*ptr)(int,int)=sum;
   a=ptr(a,b);
   printf("%d %d",a,b); // 17 7
}
*/
//callback funciton pointer
/*
#include<stdio.h>
void add(int a,int b)
{
   printf("%d ",a+b);
}
void sub(int a,int b)
{
   printf("%d ",a-b);
}
void display(void(*ptr)(int,int))
{
   ptr(3,5);
}
int main()
{
   display(add); // 8
   display(sub); // -2
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//

//13.Structure in c
/*
Define:
   - a structure is a user-defined data type that allows you to combine different types of data under a single name. 
   - It's used to group related data items of different types.
Use of Structures:
   Organizing Data: Structures help organize related data items into a single unit, making it easier to manage and manipulate complex data.
   Passing to Functions: Structures can be passed as arguments to functions, allowing functions to work with and modify multiple data items at once.
   Memory Efficiency: Structures facilitate efficient memory usage by grouping related data together, reducing the need for separate variables.
*/
//1.declaring variable / objects of structure
/*
   #include<stdio.h>
   //1.method 1
   struct student1
   {
   int rollno;// 4
   char name[10]; // 10
   float marks;//4
   };
   //2.method 2
   struct student2
   {
   int rollno;// 4
   char name[10]; // 10
   float marks;//4
   }std1,std2;
   int main()
   {
      struct student1 s1,s2;
      printf("%d \n",sizeof(struct student1)); //4 4 4 4 1(roundof 4) total 20
      printf("%d \n",sizeof(s1));// 20
      printf("%d \n",sizeof(s2));// 20

      printf("%d \n",sizeof(std1));//20
      printf("%d \n",sizeof(std2));//20
   }
*/
//2.initialization & Accessing of Stucture
/*
  #include<stdio.h>
   struct student1
   {
      //int rollno=1; it's wrong
      int rollno;// 4
      char name[10]; // 10
      float marks;//4
   }s3={104},s4={105};
   struct student1 s5={106,"lokesh",7.52};
   int main()
   {
      struct student1 s1={103};
      printf("%d=%s=%f \n",s1.rollno,s1.name,s1.marks);//103==0.000000 
      struct student1 s2={103,"lokesh",7.52};
      printf("%d=%s=%f \n",s2.rollno,s2.name,s2.marks);//103=lokesh=7.520000

      printf("%d=%s=%f \n",s3.rollno,s3.name,s3.marks);//104==0.000000
      printf("%d=%s=%f \n",s4.rollno,s4.name,s4.marks);//105==0.000000
      printf("%d=%s=%f \n",s5.rollno,s5.name,s5.marks);//106=lokesh=7.520000

    }
*/
//3.Array of structure
/*
#include <stdio.h>
struct student 
{
    int rollno;          // 4 bytes
    char name[10];       // 10 bytes
    float marks;         // 4 bytes
    int phonenumber[10]; // 40 bytes (10 integers)
};
int main() 
{
    struct student s[60];

    s[0].rollno = 1;
    snprintf(s[0].name, sizeof(s[0].name), "lokesh");
    s[0].marks = 7.7; 

    printf("%d = %s = %.1f\n", s[0].rollno, s[0].name, s[0].marks);

    int phone[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    for (int i = 0; i < 10; i++)
    {
        s[0].phonenumber[i] = phone[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", s[0].phonenumber[i]);
    }
    printf("\n");

   //1 = lokesh = 7.7 Phone number: 9876543210
}
*/
//4.pointer to structure / structure pointer
/*
#include<stdio.h>
struct std 
{
   int rollno;
   char name[20];
   float marks;
};
struct std s1={1000,"KARUN",7.7};
int main()
{
   struct std *ptr=&s1;
   printf("%d ",(*ptr).rollno); //1000
   printf("%d ",ptr->rollno);   //1000
   printf("%s ",ptr->name);     //KARUN
   printf("%f ",ptr->marks);    //7.700000
}
*/
/*
#include<stdio.h>
struct std 
{
   int a;
   char b;
   float c;
};
int main()
{
   struct std s={.b='a',.c=2.3};
   printf("%d %c %f",s.a,s.b,s.c);//0 a 2.300000
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//14.union in c
// In C, a **union** is a data structure that allows storing different data types in the same memory location, but only one at a time.
// Unions are useful for memory-efficient storage when a variable may hold different types of data at different times, such as a value that can be an integer, float, or char.
/*
#include<stdio.h>
union std 
{
   int rollno;
   char name[21];
   float marks;
};
int main()
{
   union std u1;
   printf("%d \n",sizeof(u1));//24  padding (3)

   u1.rollno=211;
   printf("%d \n",u1.rollno);//211

   strcpy(u1.name,"lokesh");//lokesh
   printf("%s \n",u1.name);

   u1.marks=2.3;
   printf("%f \n",u1.marks);//2.300000

   union std u2;
   union std *ptr=&u2;
   u2.rollno=12;
   strcpy(u2.name,"lokesh");
   u2.marks=5.5;
   printf("%d %s %f \n",u2.rollno,u2.name,u2.marks);//1085276160  5.500000

}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//15.typedefined structure
/*
In C, **typedef** is used to create an alias or nickname for existing data types.
It allows you to define new names for data types in a concise way.
Use Case:
Typedefs are commonly used to make code more readable and manageable by creating shorter,
more descriptive names for complex data types or structs. For example, `typedef int Number;
creates an alias `Number` for `int`, allowing you to use `Number` instead of `int` throughout your code.

#include<stdio.h>
typedef int Integer;
typedef struct std
{
   int age;
   int rolln;
}std1;
int main()
{
   int a=10;
   Integer b=20;
   printf("%d %d ",a,b);//10 20 

   std1 s={1,2};
   printf("%d %d",s.age,s.rolln);//1 2 
}
*/
//Structure Padding in c
/*
#include<stdio.h>
struct std1
{
   int rollno; // 4
   char name; // 1
   float marks; //4
}s1;
struct std2
{
   int rollno; //4 
   char fname; //1
   char lname; //1
}s2;
int main()
{
   printf("%d \n",sizeof(s1));//12
   printf("%d \n",sizeof(s2));//8
}
*/
//Strucure Packing in c
/*
#include<stdio.h>
#pragma pack(1)
struct std1
{
   int rollno; //4
   char name;  //1
   float marks; //4
}s1;
struct std2
{
   int rollno; //4
   char fname; //1
   char lname; //1
}s2;
int main()
{
   printf("%d \n",sizeof(s1));//9
   printf("%d \n",sizeof(s2));//6
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//

//16.static and dynamic
/*
Static Memory Allocation:
Definition: Memory is allocated at compile-time and remains fixed throughout program execution.
Characteristics:
  - Memory size and type are determined before program execution.
  - Typically used for variables declared globally, or locally (e.g., within functions) using the `static` keyword.
  - No manual memory management needed.
  
Examples:
  Static Array: Declared with a fixed size at compile-time.
    int arr[5];

  Static String: Declared with a fixed content and size.
    char str[] = "Hello";

  Static Pointer: Points to a fixed memory location throughout its lifetime.
    static int *ptr;

Dynamic Memory Allocation:
Definition: Memory is allocated and deallocated during runtime as needed.
Characteristics:
  - Memory size and type can change dynamically based on program logic.
  - Used for variables that need flexibility in size or lifetime.
  - Requires manual memory management (allocation with `malloc`, `calloc`, or `realloc`, deallocation with `free`).
  
Examples:
  -Dynamic Array: Size determined at runtime using `malloc` or `calloc`.
    int *arr = malloc(5 * sizeof(int));

  -Dynamic String: Size determined at runtime for variable length strings.
    char *str = malloc(10 * sizeof(char));

  -Dynamic Pointer: Points to memory allocated dynamically.
    int *ptr = malloc(sizeof(int));
Summary:
-Static allocation** is fixed and known at compile-time, suitable for predictable and constant-sized data.
-Dynamic allocation** is flexible and managed during program execution, ideal for variable-sized data structures and runtime requirements. It requires explicit management to avoid memory leaks or dangling pointers.
*/


//---------------------------------------------------------------------------------------------------------------------------------------//

//17.File Handling in C
/*
   In C, file handling refers to operations that read from or write to files on the computer's storage system.
   Use Case:
   File handling allows programs to:
   - Read data from files (input). r r+
   - Write data to files (output). w w+
   - append  a a+
   - Manipulate files (create, delete, rename).
   - Control file positioning (seeking).
   This capability is essential for tasks like data storage, configuration, and communication with external resources in applications.
   ROM (Read-Only Memory): Non-volatile memory used for storing permanent data or firmware that cannot be easily modified.
   RAM (Random Access Memory): Volatile memory used for storing data temporarily while a computer is running; data is lost when power is turned off.
*/
//1.How to Write into a file in c
//i)fputc
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   char ch='o';
   ptr=fopen("filewrite.txt","w");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   fputc(ch,ptr);//o
}
*/
//ii)fputs
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   char ch[]="lokesh";
   ptr=fopen("filewrite.txt","w");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   fputs(ch,ptr);//lokesh
}
*/
//iii)fprintf
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("filewrite.txt","w");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   fprintf(ptr,"--%d--%s--%c--",123,"LOKESH",'J');//--123--LOKESH--J--
}
*/
//2.How to Read From a file in C
//i)fgetc
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileread.txt","r");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   char ch=fgetc(ptr);
   printf("--%c--",ch);
   fclose(ptr);
}
*/
//ii)feop-end of file
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileread.txt","r");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   while(!feof(ptr))
   {
      char ch=fgetc(ptr);
      printf("%c",ch);//LOKESH JAYASEELAN 
   }
   fclose(ptr);
}
*/

//iii)fgets read only till '\n'
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileread.txt","r");
   if(ptr==NULL)
   {
      printf("---ERROR--");
      exit(1);
   }
   char name[10];
   fgets(name,10,ptr);
   printf("%s ",name); //LOKESH JA     also '\0'
   fclose(ptr);
}
*/

//iv)feof read till end of the file
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileread.txt","r");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   while(!feof(ptr))
   {
      char ch=fgetc(ptr);
      printf("%c",ch);
   }
   fclose(ptr);
}
//LOKESH JAYASEELAN
//CEO OF TED TALKS 
*/

//3.Append Mode in file Handling
//i)fputs
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileappend.txt","a");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   char str[100];
   gets(str); //lokesh
   fputs(str,ptr); //in file:LOKESHlokesh
   fclose(ptr);
}
*/
//ii)fprintf
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileappend.txt","a");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   char str[100];
   gets(str); 
   fprintf(ptr,"\n--%s--",str);
   fclose(ptr);
}
//LOKESHlokesh
//--CEO OF TED TALKS--
*/

//4.r+ mode:
//in file content:LOKESH 
//reading and writing main purpose is reading
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("filereadwite+.txt","r+");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   //read
   while(!feof(ptr))
   {
      char ch=fgetc(ptr);  // JAYASEELAN CEO OF TED TALKS
      printf("%c",ch);
   }
   //write
   fputs(" LOKESH CEO OF TED TALKS ",ptr);
   fputc('J',ptr);
   //after write in a file JAYASEELAN CEO OF TED TALKS LOKESH CEO OF TED TALKS J
}
*/

//5.r+ mode:
//in file content:JAYASEELAN  
//reading and writing main purpose is reading
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("filewriteread+.txt","r+");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   //write
   fputs(" LOKESH CEO OF TED TALKS ",ptr);
   fputc('J',ptr);

   rewind(ptr); // pointer to pointing starting index

   while(!feof(ptr))
   {
      char ch=fgetc(ptr); 
      printf("%c",ch); // LOKESH CEO OF TED TALKS
   }
   fclose(ptr);
}
*/
//6.a+mode
//reading/appending
//in file:LOKESH 
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fileappending+.txt","a+");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   //write
   fputs(" LOKESH CEO OF TED TALKS ",ptr);

   rewind(ptr); // pointer to pointing starting index

   while(!feof(ptr))
   {
      char ch=fgetc(ptr); 
      printf("%c",ch); // LOKESH  LOKESH CEO OF TED TALKS 
   }
   fclose(ptr);
}
*/
//7.fseek() in c
//seek_set ==> set starting position pointer
//seek_cur ==> current position pointer
//seel_end ==> end of th file
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fseek.txt","r+");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   //LOKESH JAYASEELAN
   //01234567890123456
   fseek(ptr,7,SEEK_SET);
   printf("%c \n",fgetc(ptr));//J
   printf("%c \n",fgetc(ptr));//A

   fseek(ptr,-2,SEEK_CUR);
   printf("%c \n",fgetc(ptr));//J
   printf("%c \n",fgetc(ptr));//A

   fseek(ptr,-3,SEEK_END);
   printf("%c \n",fgetc(ptr));//L

   printf("%c \n",fgetc(ptr));//A

}
*/
//7.ftell in c
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("fseek.txt","r+");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   //LOKESH JAYASEELAN
   //01234567890123456

   printf("%d \n",ftell(ptr)); //0
   char str[10];
   fscanf(ptr,"%s ",str);
   printf("%s \n",str);//

   //find length
   fseek(ptr,-1,SEEK_END);
   printf("%d \n",ftell(ptr));//16
}
*/
//8. count no of lines
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr=NULL;
   ptr=fopen("countlines.txt","r");
   if(ptr==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   int ctr=0;
   char i;
   while((i=fgetc(ptr))!=EOF)
   {
      if(i=='\n')
      {
         ctr++;
      }
   }
   printf("%d ",ctr);//4
}
*/
//9.copy one file to another file
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr1=NULL;
   ptr1=fopen("copy1.txt","r"); // para1
   if(ptr1==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   FILE *ptr2=NULL;
   ptr2=fopen("copy2.txt","w"); //para 2
   if(ptr2==NULL)
   {
      printf("---ERROR--"); 
      exit(1);
   }
   char ch;
   while((ch=fgetc(ptr1))!=EOF)
   {
      fputc(ch,ptr2); 
   }
   //copy1-para1
   //copy2-para2
   fclose(ptr1);
   fclose(ptr2);
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
//18.Dynamic Memory Allocation
//SMA-Memory Allocation at compile time.Memory as fixed 
//DMA-Memory Allocation at runntime.

   //    Heap
   //   Stack
   //  Global/static variable intlati and unintalized variable
   // code/text

//heap grow downward
//stack grow upward

//1.DMA using malloc() --> memory Allocation
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr;
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   // for(i=0;i<n;i++)
   // {
   //    scanf("%d",(ptr+i));//1 2 3
   // }
   for(i=0;i<n;i++)
   {
      printf("%d-%d\n",(ptr+i),*(ptr+i));
      // 13374480-1
      // 13374484-2
      // 13374488-3
   }
   printf("\n");
   free(ptr);
   for(i=0;i<n;i++)
   {
      printf("%d-" ,*(ptr+i));//8090320-0-8061264-
   }
}
*/

//2.DMA usnig calloc() --> contiguous allocation
//used to DM multiple block of memory and each block is same size
/*
1. **Number of Arguments**: 
   - `malloc` takes one argument (size in bytes).
   - `calloc` takes two arguments (number of elements and size of each element).

2. **Initialization**: 
   - `malloc` does not initialize the memory; it contains garbage values.
   - `calloc` initializes the memory to zero.

3. **Use Case**:
   - Use `malloc` when you need a single block of memory and you do not require initialization to zero.
   - Use `calloc` when you need multiple blocks of memory and want them to be initialized to zero.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr;
   scanf("%d",&n);
   ptr=(int*)calloc(n,sizeof(int));
   // for(i=0;i<n;i++)
   // {
   //    scanf("%d",(ptr+i));//1 2 3 4
   // }
   for(i=0;i<n;i++)
   {
      printf("%d-%d\n",(ptr+i),*(ptr+i));
         // 10949648-0
         // 10949652-0
         // 10949656-0
         // 10949660-0
   }
   printf("\n");
   free(ptr);
   for(i=0;i<n;i++)
   {
      printf("%d-" ,*(ptr+i));//8090320-0-8061264-
   }
}
*/
//3.realloc() -- reallocation (or) resize
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;

    // Read the initial size of the array
    scanf("%d", &n);

    // Allocate memory using malloc
    ptr = (int*) malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read initial elements
    for (i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Print initial elements with addresses
    for (i = 0; i < n; i++) {
        printf("%p-%d\n", (ptr + i), *(ptr + i));
    }

    int N;
    // Read the new size for the array
    scanf("%d", &N);

    // Resize the memory block using realloc
    int *ptr1 = (int*) realloc(ptr, N * sizeof(int));
    if (ptr1 == NULL) {
        printf("Reallocation failed\n");
        free(ptr);
        return 1;
    }

    // Read new elements if the size increased
    for (i = n; i < N; i++) {
        scanf("%d", (ptr1 + i));
    }

    // Print all elements from the resized array
    for (i = 0; i < N; i++) {
        printf("%p-%d\n", (ptr1 + i), *(ptr1 + i));
    }

    // Free the allocated memory
    free(ptr1);
    
    return 0;
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//

//19.memory leak in c
// A memory leak occurs when a program allocates memory but fails to release it back to the system after
// it's no longer needed, causing reduced available memory and potential program or system instability.
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int ch=1;
   int *ptr;
   while(c<50)
   {
      printf("--Memory leak--");
      ptr=(int*)malloc(4000*sizeof(int));
      scanf("%d",&ch);
      free(ptr);
   }
}
*/
//20.ENUM in c
// In C, an enum (enumeration) is a user-defined data type that consists of integral constants. 
// It assigns names to a set of integer values, improving code readability.

//1.
/*
#include <stdio.h>
enum Month { January, February, March, April, May, June, July,
             August, September, October, November, December };
int main() 
{
    enum Month currentMonth = July;
    printf("The current month is: %d\n", currentMonth + 1); // Prints: 7 (July is 6th index in enum)
    return 0;
}
*/
//2.
/*
#include <stdio.h>
// Enum declaration with custom values
enum Weekday { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main() 
{
    enum Weekday today = Wednesday;

    printf("Today is day %d of the week.\n", today); // Prints: 3 (Wednesday)

    return 0;
}
*/
//3.
/*
#include <stdio.h>
enum Color { Red, Green, Blue };

int main()
{
    enum Color chosenColor = Green;

    switch(chosenColor) {
        case Red:
            printf("You chose Red.\n");
            break;
        case Green:
            printf("You chose Green.\n");
            break;
        case Blue:
            printf("You chose Blue.\n");
            break;
        default:
            printf("Invalid color choice.\n");
    }
    //You chose Green.
    return 0;
}
*/
//4.
/*
#include <stdio.h>
// Enum declaration
enum Status { Active, Inactive };

// Struct containing an enum
struct Employee {
    char name[50];
    int id;
    enum Status status;
};

void printEmployee(struct Employee emp) {
    printf("Employee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Status: %s\n", emp.status == Active ? "Active" : "Inactive");
}

int main() {
    struct Employee emp1 = {"John Doe", 1001, Active};
    struct Employee emp2 = {"Jane Smith", 1002, Inactive};

    printEmployee(emp1);
    printEmployee(emp2);

    return 0;
}
*/

//---------------------------------------------------------------------------------------------------------------------------------------//

//21.Storage Classes in c
// In C programming, storage classes specify the scope, visibility, and lifetime 
// of variables and functions. There are four main storage classes: auto, register, static, and extern.
/*
#include<stdio.h>
void fun()
{
   int a=23;
   printf("%d ",a);
}
int main()
{
   int a=1;
   fun();
   {
      int a=10;
      printf("%d inside block 1\n",a);
   }
   {
      printf("%d inside block 2\n",++a);
   }
   printf("%d inside main\n",a);
}
// 23 10 inside block 1
// 2 inside block 2
// 2 inside main
*/
/*
#include<stdio.h>
int a=50;
void fun()
{
   int a=23;
   printf("%d ",a);
}
int main()
{
   fun();
   {
      int a=10;
      printf("%d inside block 1\n",a);
   }
   {
      printf("%d inside block 2\n",++a);
   }
   printf("%d inside main\n",a);
}
// 23 10 inside block 1
// 51 inside block 2
// 51 inside main
*/
//Type of store Classes in c
//1.auto
//2.register
//3.static
//4.extenal

//1.auto Store Classes 
//- default value will be garbage value
//- auto: Default storage class for local variables, stored in memory with garbage values, 
// and limited to block scope.
//- not allow globle.
//- only allow function and block
//- lifetime will be with in block
//- auto storage in stack
//- int a; by default auto int a;
/*
#include<stdio.h>
//auto int x=50; not allow in auto
int main()
{
   //functional scope
   auto int x=10;
   {
      //block scope
      auto int x;
      printf("%d ",x); //garbaage value
   }
   printf("%d ",x);//10
   //output:garbaage value,10
}
*/
//2.Register Store Classes
//- register: Requests local variable storage in CPU registers for faster access, default value uninitialized, and limited to block scope.
//- could not store in ram so the faster storeing in register.remove switching in cpu to ram
//- default value will be garbage value
/*
#include<stdio.h>
#include<stdlib.h>
//register int x=50; not allow in register
int main()
{
   register int i,sum=0;
   for(i=0;i<10;i++)
   {
      sum+=i;
   }
   printf("%d ",sum);//45
}
*/
//3.static Store Classes
// static: Extends variable lifetime to program duration, initializes to zero (if not explicitly initialized),
// and limits visibility to the file scope (for global variables) or retains value between function calls (for local static variables).
// lifetime will be till the end of the program

//4.Extern Storage Class
// extern: Declares variables or functions that are defined in another file or later in the same file, 
// providing global visibility across multiple files, with no default initialization.

/*
#include<stdio.h>
void fun1()
{
   int x=1;
   x+=5;
   printf("%d ",x);
}
void fun2()
{
   int x=10;
   x+=5;
   printf("%d ",x);
}
int main()
{
   extern int x;
   printf("%d ",x);
   fun1();
   fun2();
}
int x=20;
//output:20 6 15 
*/

//---------------------------------------------------------------------------------------------------------------------------------------//
//22.PreProcessor
//- Preprocessor: Processes directives (e.g., `#include`, `#define`) before compilation to modify the source code, enhancing its flexibility and portability.

//#define & #undef
/*
#include<stdio.h>
#define MSG "HELLO WORLD"
#define MAX(a,b) if(a>b)\
                      printf("%d",a);\
                      else\
                      printf("%d",b);
int main()
{
   printf("%s ",MSG);//HELLO WORLD
   MAX(1,2);//2

   printf("%s \n",__DATE__);//2Jul 18 2024 
   printf("%s \n",__TIME__);//10:21:10
   printf("%s \n",__FILE__);//c1.c
   printf("%d \n",__LINE__);//2536
   printf("%d \n",__STDC__);//std compiler or not

}
*/
/*
#include <stdio.h>
#define PI 3.14159 // Define PI constant
int main() 
{
    printf("Value of PI: %.5f\n", PI);
    #undef PI // Undefine PI constant

    #ifdef PI
        printf("PI is still defined.\n");
    #else
        printf("PI is no longer defined.\n");
    #endif

    return 0;
}
//Value of PI: 3.14159
//PI is no longer defined.
*/

//---------------------------------------------------------------------------------------------------------------------------------------//
 