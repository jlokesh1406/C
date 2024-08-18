 // Certainly! Here's a comprehensive roadmap for learning C programming, covering both basic and advanced topics:
// **Basics:**
// 1. Introduction to C
// 2. Setting up the C Development Environment
// 3. Hello, World! - Your First C Program
// 4. Variables and Data Types
// 5. Input and Output
// 6. Operators and Expressions
// 7. Control Structures (if, else, switch)
// 8. Loops (for, while, do-while)
// 9. Functions
// 10. Arrays and Strings
// 11. Pointers and Memory Management
// 12. Structures and Unions
// 13. File Input/Output
// 14. Preprocessor Directives
// 15. Command Line Arguments
// 16. Basic Debugging Techniques
// **Intermediate:**
// 17. Enumerations
// 18. Advanced Pointers (Pointer to Function, Pointers to Pointers)
// 19. Dynamic Memory Allocation (malloc, calloc, realloc, free)
// 20. Recursion
// 21. Function Prototypes
// 22. Header Files and Modular Programming
// 23. Standard Input/Output Functions (printf, scanf)
// 24. Error Handling and errno
// 25. Bitwise Operators
// 26. Typedef and Type Conversion
// 27. Data Structures (Linked Lists, Stacks, Queues)
// 28. Command Line Input Processing
// 29. File Handling (fopen, fclose, fread, fwrite)
// 30. Variadic Functions
// 31. Time and Date Functions
// 32. Memory Manipulation Functions (memcpy, memcmp, etc.)
// 33. Signal Handling
// **Advanced:**
// 34. Function Pointers and Callbacks
// 35. Advanced Data Structures (Trees, Graphs, Hash Tables)
// 36. Multithreading and Concurrency (if supported)
// 37. Interprocess Communication (IPC)
// 38. Network Programming (if needed)
// 39. Debugging with GDB
// 40. Performance Optimization Techniques
// 41. Memory Leak Detection and Profiling
// 42. C Standard Library Functions
// 43. Low-Level I/O (read, write, ioctl)
// 44. System Calls (fork, exec, getpid, etc.)
// 45. C in Embedded Systems
// 46. Real-time Programming (if required)
// 47. Secure Coding Practices
// 48. Building Larger Projects
// 49. Working with Libraries (e.g., SDL, GTK, libcurl)
// 50. Understanding the C Standard (C89, C99, C11, C18)
// It's important to practice regularly and work on projects that interest you. Adjust the pace of your learning based on your comfort and understanding of each topic. The journey to becoming proficient in C programming is a continuous process of practice and exploration

/*
   1.Introduction to programming:
      .computer is manchine to perform any task control by the sequential interaction that means program
      .computer only understand 0 | 1 binary lang.
      .Dennis Ritchie in 1972 aat bell labs 
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
//---------------------------------------------------------------------------------------------------------------------------------------//
      7.variable:
           Variable is basically nothing but the name of a memory location that we use for storing data. We can change the value of a variable in C or any other language, and we can also reuse it multiple times.    
//---------------------------------------------------------------------------------------------------------------------------------------//
*/
/*
      operators in c:  
            .In C, an operator is a symbol that performs a specific operation on one or more operands. These operations include arithmetic, logical, relational, bitwise, assignment, and more.
            .operator is symbol which tells computer to perform opreation like ALU operation
       
            int a=1+2;->expression 
            datatype(int) variable(a) assignment operator(=) operands(1) operator(+) operands(2)

            Types of operators based on operations;
               1.unary -> -,++,--,!,&,sizeof() this operators is required only one operands 
               2.binary -> (arithmetic +,-,/,*,%)
                           (Relational >,<.<=,>=)
                           (logical &&,||) 
                           (bitwise & ,|,<<,>>,^,~) 
                           (equality operator ==,!=)
                           (comma operator ,)
                           assignment operator(=)  
               3.ternary ->(expression1 should be conditon operators)?expression2:expression3

      1.arithmetic operators:
         + -> addition 
         - -> subraction
         * -> mulitiplication
         / -> division  // quocianent
         % -> moduls   // remaindor

            example:
               #include<stdio.h>
               int main()
               {
                  int a=23,b=2;
                  printf("%03d \n",a+b);
                  printf("%03d \n",a-b);
                  printf("%03d \n",a*b);
                  printf("%03d \n",a/b);
                  printf("%03d \n",a%b);
                  a=-10;b=70;
                  printf("%d \n",a%b);//-10
                  a=10;b=-70;
                  printf("%d \n",a%b);// 10
                  a=-7;b=10;
                  printf("%d \n",a%b);// -7
                  a=7;b=-10;
                  printf("%d \n",a%b); //7
                  getchar();
                  return 0;
               }
      2.assignment operators   
            #include<stdio.h>
            int main()
            {
               int a,b,c,d;
               a=b=c=d=10;
               printf("%d %d %d %d",a,b,c,d);
               printf("shortend operator");
               printf("%d",a+=1);//a=a+1;
               printf("%d",a*=1);//a=a*1;
               printf("%d",a%=1);//a=a%1;
            }
      3.prefix and postfix
         unary operator
         prefix ++a,a--;
         postfix a++,a--;

         example:
            #include<stdio.h>  
            int main()
            {
               int x=10,y;
               y=++x;
               printf(" x=%d y=%d \n",x,y); // 11 11
               x=10;
               y=x++;
               printf(" x=%d y=%d \n",x,y);// 11 10

               x=10;
               x++;
               printf(" x=%d \n",x);// 11 

               x=10;
               ++x;
               printf(" x=%d \n",x);// 11 

               //example
               int a=5,b,c,d;
               b=++a; // b=6 a=6 
               c=a++; // c=6 a=7
               d=++a; // d=8 a=8
               printf("%d %d %d %d",a,b,c,d);// 8 6 6 8 
            }

      4.relational operators
         .compare the two operands result will be true(1) false(0)
         . < ---->less than
         . > ---->greater than
         . <= ---->less than or equal
         . >= ---->greater than or equal
         . == ---->equal to
         . != ----> no equal to

         Example:    
               #include<stdio.h>
               int main()
               {
                  
                  printf("%d \n",1==1);  //1
                  printf("%d \n",'1'=='1'); //1
                  printf("%d \n",1>2);//0
                  printf("%d \n",1<2<3>1);// working on left to right //0
                  //             1<2=>1
                  //             1<3=>1
                  //             1>1=>0 
                  printf("%d \n",1+2==3>2<1+1);//0
                  //             3==3>2<2
                  //             3==1<2
                  //             3==1
                  //              0
                  printf("%d \n",2.2==2.22);// 0

                  printf("%d \n",1+3==3>=3<23<2+2 !=1);
                  //              2==3>=3<23<4!=1;
                  //              2==1<23<4!=1
                  //              2==1<4!=1
                  //              2==1!=1
                  //              0!=1
                  //              1
               }
      5.logical operator:
           &&  logical and
           ||  logical or
           !   logical not

           Example:
               #include<stdio.h>
               int main()
               {
                  // and
                  // 0 0 0
                  // 0 1 0
                  // 1 0 0
                  // 1 1 1
                  printf("%d \n",1==1&&1<2);
                  printf("%d \n",0&&0);
                  printf("%d \n",1&&1);
                  printf("%d \n",1>1 && 1!=10 && 1<11 && 1>1);
                  //              0 && 1 && 1 && 0
                  //               0&&1&&0
                  //               0&&0
                  //                0

                  // or
                  // 0 0 0
                  // 0 1 1
                  // 1 0 1
                  // 1 1 1

                  int a = 1>=1 && printf("HII1 \n")&&printf("Hii2 \n");
                  int b = 1>1 && printf("HII3 \n")||printf("Hii4 \n");
                  printf("%d \n",a);// 1
                  printf("%d \n",b); // 1

                  printf("%d \n",4&&!0); // 1
                  printf("%d \n",4&&1); // 1
                  printf("%d \n",4&&0); // 0
                  printf("%d \n",0&&1); // 0

                  int c=10,d=5;
                  printf("%d \n",c>d && c++); // 1
                  c=10;d=5;
                  printf("%d \n",c<d||c++); // 1

                  c=1;d=6;
                  printf("%d \n",c-- && ++d); // 1
                  c=1;d=6;
                  printf("%d \n",--c && ++d); // 0
               }
      6.biwise operators in c:
            Bit:
               ~ A bit (short for binary digit) is the smallest unit of data in a computer.
               ~ It can have only two possible values: 0 or 1.
            Byte:
               ~ A byte consists of 8 bits.
               ~ It's a fundamental unit of storage in computing.

            2 bytes:
               ~ A byte consists of 8 bits, so 2 bytes would consist of 16 bits (8 bits * 2).
               ~ In memory, 2 bytes represent a contiguous block of storage that can hold 16 individual binary digits (bits).
               ~ printf("Size of int: %zu bytes\n", sizeof(int)); // Printing the size of an int in bytes
               
               // Printing the binary representation of 'a'
               int a=12;
               for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
                  printf("%d", (a >> i) & 1);
               }
            biwise operators:
                  & --> biwise and
                  | --> biwise or
                  ^ --> biwise xor
                  ~ --> biwise not
                  <<--> left shift
                  >>--> right shift 
                  Example:
                     #include<stdio.h>
                     int main()
                     {
                        printf("BITWIE AND : %d \n",2&2);
                        //  0 0 1 0
                        //  0 0 1 0
                        //------------
                        //  0 0 1 0
                        printf("BITWIE OR : %d \n",2|3);
                        //  0 0 1 0
                        //  0 0 1 1
                        //------------
                        //  0 0 1 1
                        printf("BITWIE xor : %d \n",2^3);
                        //  0 0 1 0
                        //  0 0 1 1
                        //------------
                        //  0 0 0 1
                        int b=6;
                        printf("%d \n",10&6 && b+1 || 0 || b++);
                        //           10&6 &&  7  || 0 || 6
                        //            2 && 7 || 0 || 6
                        //              1||0||6 
                        //                1     
                        int a=10;
                        printf("LEFT SHIFT : %d \n",a<<2);
                        // 0 0 0 0 1 0 1 0   left two bit will dicarded
                        // 0 0 1 0 1 0 X X   X means o answer will be 40

                        // short cut (a x pow(2,2));
                        a=10;
                        int power = pow(2,3);// 3 bit shift
                        printf("LEFT SHIFT SHORT CUT : %d \n",a*power);


                        a=10;
                        printf("RIGHT SHIFT : %d \n",a>>2);
                        // 0 0 0 0 1 0 1 0   right two bit will dicarded
                        // X X 0 0 0 0 1 0   X means o answer will be 2

                        // short cut (a / pow(2,2));
                        a=10;
                        power = pow(2,2);// 2 bit shift
                        printf("RIGHT SHIFT SHORT CUT : %d \n",a/power);

                        int A=10;
                        int B=~A;
                        printf("BITWISE NOT %d \n",B);
                        // 1010
                        //~0101   answer will be -5+-1
                        A=10;
                        B=-(A+1);
                        printf("SHORT CUT FOR BITWISE NOT %d \n",B);
                     }
         7.special operator:
             . comma(,) is last precedence comma is act ass separation between two different variable in same datat type
             Example:   
                     #include<stdio.h>
                     int main()
                     {
                     // int a=10,10;// it will be error
                        int a;
                        a=11,111;
                        printf("%d \n",a); // 11
                     
                        a=(2,22,2222);
                        printf("%d \n",a); // 2222

                        int A=(3,33,3333,33333);
                        printf("%d \n",A); // 33333

                        int B;
                        B=(printf("Hii"),4444,333,22,1); //Hii
                        printf(" %d \n",B);  // 1

                        B=printf("lokesh"),0;
                        printf(" %d \n",B);// 6 len of string
                        
                        A=1;
                        B=(A++,++A);
                        printf("%d \n",B);//3

                        A=1;
                        B=A++,++A;
                        printf("%d \n",B);//1

                        A=8;
                        B=(A++,++A,A>>2);
                        printf("%d \n",B);// 2


                        //operators precedences and associativity

                        printf("1. %d\n",2+3*2); // 8
                        printf("2. %d\n",2+3*3/2*12); 
                        // 2+9/2*12
                        // 2+4*12
                        // 2+48
                        // 50
                        
                        printf("3. %d\n",3*4%5/2); // l ot r  because *%/ is same percedences so that l to r

                        printf("4. %d \n",3*(4%50)/2);
                        //  3*4/2  // l to r
                        //  12/2
                        //   6

                        printf("5. %d\n",3*4+5*6); //l to r

                        a=0;
                        int b=1,c=-1;
                        printf("6. %d\n",--a*(5+b)/2-c++*b);
                        //--a*(6)/2-c++*b
                        //--a*6/2+1*b
                        //-1*6/2+1*b
                        //-6/2+1
                        //-6/3
                        //-2    


                        A=1;  
                        B=A++ + A++;
                        printf("A:%d B:%d \n",A,B); // 3 3

                        A=1;
                        B=++A + ++A;
                        printf("A:%d B:%d \n",A,B); // 3 6

                        A=1;
                        B=A++ + ++A;
                        printf("A:%d B:%d \n",A,B); // 3 4

                        A=1;
                        B=++A + A++;
                        printf("A:%d B:%d \n",A,B); // 3 5
                     }
*/

//---------------------------------------------------------------------------------------------------------------------------------------//
/*
//Formatted input ouput function in c
//unFormatted input ouput function in c
#include<stdio.h>
#include<conio.h>
int main()
{
   //Formatted
   //input
   // int a=5,b=2;//compile time
   // printf("%d %d\n",a,b);
   // scanf("%d %d",&a,&b);//run time & means (a b) value stored in random memory adrees 
   // printf("%d %d\n",a,b);

   // //output
   // printf("%13d\n",a);
   // printf("%02d\n",a);
   // float c=12.3;
   // printf("%.2f\n",c);
   // printf("%13.2f\n",c);
   

   //unFormatted
   //input
   // char ch;
   // ch=getchar();
   // printf("%c \n",ch);

   // char ch1;
   // ch1=getch();
   // printf("hii %c\n",ch1); //immreate print

   // char ch2;
   // ch2=getche();
   // printf("\nhii %c\n",ch2); 

   // char ch3[10];
   // gets(ch3);
   // printf("hi %s\n",ch3); //string

   //output
   // char ch1;
   // ch1=getch();
   // putch('i');
   // putch(ch1);

   // char ch2;
   // ch2=getchar();
   // putchar(ch2);

   // char ch3[10];
   // gets(ch3);
   // puts(ch3); //string


}
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
/*
   control statement in c:
      .Control statements in programming are used to alter the flow of execution
       based on certain conditions or criteria. They allow you to make decisions, 
       repeat actions, or skip certain parts of the code.
   loop in c:
      .Loops in C are control statements that repeatedly execute a block of 
       code as long as a specified condition is true. They are used to automate
       repetitive tasks and iterate over sequences of data. Common types of loops 
       in C include the for, while, and do-while loops. These constructs allow you 
       to efficiently perform tasks such as iterating through arrays, processing 
       data, and implementing algorithms that require repeated execution.
   array in c:
      .Arrays in C are a type of data structure that allows you to store multiple
       elements of the same data type under a single name. They provide a way to
       efficiently manage and access a collection of elements sequentially using
       indices. Arrays in C have a fixed size determined at compile time, and
       elements are stored in contiguous memory locations. They are widely used
       for storing and manipulating data, iterating over collections, and
       implementing algorithms that require ordered data storage and retrieval.

      #include<stdio.h>
      int main()
      {
         int arr1[5]={3,3,3,4,5};
         int arr2[]={3,3,3,4,5};
         int arr3[5]={2,2}; //{2,2,0,0,0};
         int arr4[5]={1};//{1,0,0,0,0}
         int arr5[5]={1,2,3,4,5,6,7,8};//error
         int arr6[5];// grabege value
         int arr7[5]={};//error

         int arr[][2]={{0,0},{2,0}};
         int arr[][2]={{0,0},{2,0}};
      }
*/
//---------------------------------------------------------------------------------------------------------------------------------------//
/*
      Strings in C are sequences of characters terminated by a null character ('\0').
      They are represented as arrays of characters and are commonly used for representing 
      textual data. Strings in C are manipulated using a variety of functions from the standard library 
      (<string.h>), such as strlen() for finding the length, strcpy() for copying, strcat() for concatenation, 
      and strcmp() for comparison. They are essential for tasks like input/output operations, text processing, 
      and data manipulation in C programming.

#include<string.h>
#include<stdio.h>
int main()
{
   char str[10]="lokesh";
   printf("%s %d\n",str,strlen(str));

   // char str[10]; //error
   // str[10]="lokesh";

   // scanf("%4s",str)//only stored 4 character

   char str1[10]="lokesh";
   printf("%s \n",str1);
   printf("%.3s \n",str1);
   printf("%4.3s \n",str1);
   puts(str1);
   puts(str1);
   printf("%s\n",&str1[2]);
   // printf("%s\n",str1[2]);//error

   
   //1.String length
   printf("------String length------\n");
   printf("String length using per defined function %d \n",strlen(str1));
   int ctr=0,i=0;
   while(str1[i]!='\0')
   {
      ctr++;
      i++;
   }
   printf("String length %d\n",ctr);

   //2.String concation:
   printf("-----String concation------\n");
   char ch1[10]="lokes";
   char ch2[10]="lkess";

   int s=strlen(ch1);
   int e=strlen(ch2)+s;
   for(int i=s;i<e;i++)
   {
      ch1[s+i]=ch2[i];
   }
   printf("Without using perdefined fuction %s",ch1);

   char ch3[10]="lokes";
   char ch4[10]="lkess";
   strcat(ch3,ch4);
   printf("%s \n",ch3);
   printf("String concat using per defined function %s \n",strcat(ch3,ch4));

   //3.string compare
      printf("-----String compare-----\n");
      char ch5[6]="lokesh";
      char ch6[6]="lokesh";
      printf("%s",(strcmp(ch5,ch6)==0)?"YES":"NO");

   //4.string reverse
      printf("-----String compare-----\n");
      char ch7[6]="lokesh";
      printf("%s\n",strrev(ch7));

      printf("%s\n",ch7);
     
     char ch8[6]="lokesh";
      int s1=0,e1=strlen(ch8);
      for(int i=0;i<e1/2;i++)
      {
         char temp = ch8[i];
         ch8[i]=ch8[e1-i-1];
         ch8[e1-i-1]=temp;
         s1++;
         e1--;
      }
      printf("%s \n",ch8);

    //5.string lower,upper
     printf("-----String lower,upper-----\n");
     printf("%s\n",strlwr(ch8));
     printf("%s\n",strupr(ch8));
     
}
*/

//---------------------------------------------------------------------------------------------------------------------------------------//
/*
      pointers in c:
            Pointers in C are variables that store memory addresses. 
            They provide a way to indirectly access data stored in memory.
            By holding the address of another variable, pointers enable dynamic memory allocation,
            efficient passing of parameters to functions, and manipulation of data structures like 
            arrays and linked lists. Pointers are fundamental to low-level programming tasks such as memory management 
            and are widely used in C for tasks like dynamic memory allocation, efficient data access, and implementing 
            complex data structures and algorithms.
            declaration:
            .int* p   int *p    int * p   are the same 
            .pointer contains address
            .int means p pointing to address .address value will integer so declare int data type 
*/

//1.simple pointer: 
/*
#include<stdio.h>
int main()
{ 
   int a=3;
   printf("value:%d Address:%d\n",a,&a);

   int *ptr1; // it like a int ptr
   ptr1=&a;   // ptr is value store that a (a address)
   printf("value:%d ptr contains value is pointing to the (a value) by stored address %d\n",ptr1,*ptr1);

   int *ptr2=&a; 
   printf("a address:%d pointing:%d\n",ptr2,*ptr2);
   printf("address of ptr2 %d\n",&ptr2);

   // & ->  address operator 
   // * ->  indirection operator
   // size of pointer depends on computer if it's 16bit ---> 2byte

}
*/

//2.address operator,indirection operator
/*
#include<stdio.h>
int main()
{
   int a=11,b=2,c;
   int *ptr1,*ptr2;
   ptr1=&a;
   ptr2=&b;
   c=*ptr1;
   printf("%d\n",c);
   printf("sum two number addres %d %d \n",ptr1,ptr2);
   printf("sum number by indirection operator %d \n",*ptr1 + *ptr2);
   *ptr2=10;
   printf("%d \n",*ptr2);
   printf("%d \n",b);
}
*/



//3.pointer Assignment:
/*
#include<stdio.h>
int main()
{
   int a=111,b=77,*ptr1,*ptr2;
   ptr1=&a;
   ptr2=&b;
   *ptr1=*ptr2;
   printf("%d %d %d %d ",a,b,*ptr1,*ptr2);// 77 77  77  77
}
*/
//4.pointer to pointer (double pointer)
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *x=&a;
   int **y=&x;
   int ***z=&y;
   printf("%d %d %d %d ",a,*z,**z,***z);// for all so use ***z ==>(*(*(*z))) is also same operaction perform  10 6487560 6487572 10 
}
*/
//5.pointer arithmetic:
/*
#include<stdio.h>
int main()
{
   // *ptr1+*ptr2 is invalid in c

   //add
   int arr[5]={1,2,3,4,5};
   int *ptr=&arr[0]; // staring address
   printf("%d \n",*ptr); //1
   ptr=ptr+2; // means ptr address+2*(sizeof(arr data type))
   printf("%d \n",*ptr); //3

   //sub
   int arr1[5]={1,2,3,4,5}; 
   int *p=&arr1[0];
   int *q=&arr1[3];
   printf("%d \n",*q);//4
   q=q-2; // means ptr address+2*(sizeof(arr1 data type))
   printf("%d \n",*q);//2
   
   // ++ --
   printf("----- ++ -- ----\n");
   int arr2[5]={1,2,3,4,5}; 
   int *p2;
   p2=arr2;
   p2++; // means ptr address+1*(sizeof(arr1 data type))
   printf("%d \n",*p2);// 2
   printf("%d \n",*p2++);//2 ptr 3
   printf("%d \n",*p2);//3
   printf("%d \n",*++p2);//4

   p2=arr2;
   printf("%d %d\n",*p2++,*p2++); //r to l  //   2    1

   p2=&arr2[4];
   printf("%d %d\n",*--p2,*--p2); // r to l  //   3  4

   p2=&arr2[4];
   printf("%d %d\n",*p2--,*p2--); // r to l  //   4  5

   p2=&arr2[4];
   printf("%d %d\n",*--p2,*p2--); // r to l   //   3 5

   p2=&arr2[4];
   printf("%d %d\n",*p2--,*--p2); // r to l   //   4  4

   int  arr3[5]={111,222,33,444,555};
   int *p3,*q3;
   p3=arr3;
   printf("%d %d %d \n",++(*p3),*p3++,*++p3);//    34  222  222
   q3=p3+1;
   printf("%d \n",*q3); 


   int A4=12;
   int *p4=&A4;
   *p4=132;
   printf("%d\n",A4);

   // char is single byte
   char str[]="welcome to Jenny's lectures";
   char *p5=str;
   printf("%c  \n",*p5); // w
   printf("%c  \n",*(p5++ +1));// 100+1  // e
   printf("%c  \n",*((p5--+5)-1)+3); // 101 + 5 =*(105)+3 = m+3 //  e
   printf("%c  \n",*(++p5+10)-3); //  *(101+10)-3 => *(111)-3 => J-3 //G
}
*/


//6.void pointer
/*
#include<stdio.h>
int main()
{
   //pointer is not a assoctive with a data type
     int *a;   // int means is int data will be stored
     float *b; 
     char *c;

     int x=10;
     float y=12.3f;
     char z='a';

     void *d; // this store any the of data type with typecasting
     d=&x;
     printf("%d \n",*(int*)d);
     d=&y;
     printf("%.2f \n",*(float*)d);
     d=&z; 
     printf("%c \n",*(char*)d);
}
*/

//7.Null pointer in c:
/*
#include<stdio.h>
int main()
{
   int *ptr1; // ptr having garbge value
   printf("%d \n",ptr1);

   //NULL----> 0
   int *ptr2=NULL;// NULL doesn't pointing to any other address 
   printf("%d \n",ptr2);

   //NULL----> 0
   int *ptr3=NULL;
   ptr3=(int*)malloc(2*sizeof(int));  
   printf("%d \n",ptr3);
}
*/
/*
//8.dangling pointer in c 
#include<stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr1=(int*)malloc(sizeof(int));
   // malloc is dynamic memory allocation in heap
   printf("%d \n",ptr1);

   *ptr1=10;
   printf("%d \n",*ptr1);

   free(ptr1);// dangling pointer deleting *ptr memory but it's pointing 
   printf("%d \n",*ptr1);
}
*/
//9.wild pointer in c
/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main()
{
   // normal pointer
   int *ptr1;
   int a=10;
   ptr1=&a;
   printf("%d ",*ptr1);

   // wild pointer
   int *ptr2=(int*)malloc(sizeof(int));
   *ptr2=10;
   printf("%d \n",*ptr2);
}
*/
//-------//

/*
#include<stdio.h>
int sum(int arr[],int size)
{
   int sum=0;
   printf("function %d \n",sizeof(arr));
   for(int i=0;i<size;i++)
   {
      sum+=arr[i];
   }
   return sum;
}
int main()
{
   int *ptr1,*ptr2,a=10,b=20;
   ptr1=&a;
   printf("%d %d\n",ptr1,*ptr1);
   *ptr1=12;
   ptr2=ptr1;
   printf("%d %d\n",ptr2,*ptr2);

   int arr[]={1,2,3,4};
   int size = sizeof(arr)/sizeof(arr[0]);// 20/4 ->5
   printf("main %d \n",sizeof(arr));
   printf("%d \n",sum(arr,size));
}
*/

//-------------------------------------------function in c-----------------------------------------------------------------------------------
//function in the use to create a user defined function like sum(),add(),sum()

//1.
/*
#include<stdio.h>
int add(int,int);
void fn();         // function declaration
void fn(int arr[]) // funtion definition
{
   for(int i=0;arr[i];i++)
   {
      arr[i]=arr[i]*2;
   }
}
int main()
{
   int arr[5]={1,2,3,4,1};
   fn(arr); // function calling
   for(int i=0;arr[i];i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
   printf("%d ",add(10,19));
}
int add(int a,int b) // function definition
{
   return a+b;
}

//2.call by value:
#include<stdio.h>
void swap(int,int);
int main()
{
   int x=10,y=20;
   swap(x,y);
   printf("%d %d",x,y);
}
void swap(int a,int b)
{
   a=20;
   b=10;
}


//3.call by Reference:
#include<stdio.h>
void swap(int*,int*);
int main()
{
   int x=10,y=20;
   swap(&x,&y);
   printf("%d %d",x,y);
}
void swap(int *a,int *b)
{
   *a=20;
   *b=10;
}
*/
/* 4.classification of function:
      . no arugument without return type
      . no arugument with return type
      . with arugument with no return type
      . with arugument with return type


      void fn1(void);
      void fn1()
      {
         printf("Z");
      }

      char fn2(void);
      char fn2()
      {
         return 'o';
      }

      void fn3(char);
      void fn3(char ch)
      {
         printf("%c",ch);
      }

      char fn4(char);
      char fn4(char ch)
      {
         ch='h';
         return ch;
      }
*/
// gate qn1
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
   for(int i=0;i<=4;i++)
   {
      j=incr(i);
      printf("%d ",j);//0 1 3 6 10
   }
   printf("\n%d",j);//10
}
*/
/*
//gate qn2
#include<stdio.h>
int r()
{
   static int num=7;
   return num--;
}
int main()
{
   // 0 --> false;
   // 1 --> true;
   for(r();r();r()) // 
   {
      printf("%d ",r());  // 5 2
   }
}
//gate qn3
#include<stdio.h>
void f(int *p,int m)
{
   m=m+5;
   *p=*p+m;
   return;
}
int main()
{
   int i=2,j=4;
   f(&i,j);
   printf("%d",i+j);
}
*/
/*
#include<stdio.h>
char *display()
{
   char *str="lokesh";
   return str;
}
int main()
{
   char *str;
   str=display();
   printf("%s \n",str);
}
*/
// returning pointer from fuction:
/*
#include<stdio.h>
int *returnpointer(int arr[])
{
   arr=arr+2;
   return arr;
}
int main()
{
   int arr[]={1,3,4,5},*ptr;
   ptr=returnpointer(arr);
   printf("%d ",*ptr);
}
*/ 
// gate qn5
/*
#include<stdio.h>
void fn(int *a,int *b)
{
   a=b;
   *a=22;
}
int i=0,j=1; //global declarition
int main()
{
   fn(&i,&j);
   printf("%d %d",i,j);
   return 0;
}
*/
// function pointer:
/*
#include<stdio.h>
int sum(int a,int b)
{
   return a+b;
}
void sum1(int a,int b)
{
   printf("%d %d ",a,b);
} 
void display(void (*ptr)(int,int))
{
   ptr(1,2);
}
int main()
{
   int s=0;
   int (*ptr)(int,int)=sum;
   s=ptr(1,2);
   printf("%d \n",s);

   display(sum1);
}
*/
//-------------------------------------------------recursion----------------------------------------------------------------


/*
#include<stdio.h>
void recursion(int n)
{
   if(n<1)
   {
      return;
   }
   else
   {
      printf("-%d-",n);
      recursion(n-1);
      printf("_%d_",n);
   }
}
int main()
{
   int num=5;
   recursion(num);
}
*/
//2.
/*
#include<stdio.h> 
int function(int n)
{
   int sum=0;
   if(n==1)
   {
      return 0;
   }
   sum=n+function(n-1);
   return sum;
}
int main()
{
   printf("%d ",function(5));
}
*/
//3.tail and non-tail recursion
// the space complecity is o(n) but normal for loop is o(1)
/*
#include<stdio.h>
void print(int a)
{
   if(a<1)
   {
      return;
   }
   else{
      printf("%d ",a);
      print(a/2);
      printf("%d ",a);
   }
} 
int sum(int a)
{
   int s=0;
   if(a<=1)
   {
      return 10;
   }
   s=1 +sum(a-1);
   return s;
}
int main()
{
   print(10);
   printf("\n");
   printf("%d \n",sum(5));
}
*/
// gate 1
/*
void count(int n)
{
   
   static int d=1;
   printf("%d %d ",n,d); 
   d++;
   if(n>1)
   {
      count(n-1);
   }
   printf("%d ",d);
}
int main()
{
   count(3);
}
// 3 1 _ 2 2 _ 1 3_  4 _ 4 4
*/

//-------------------------------------------Dynamic memory & allocations-----------------------------------------------------------------------------
/*
      1.static memory allocations - at compile time
      2.dynamic memory allocations - at run time 

// malloc() memory allocation on heap 
// malloc() memory is a retur address as void so covert any data type
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr;
   scanf("%d",&n);
   //n is a no.of input
   ptr=(int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++)
   { 
      scanf("%d",ptr+i);
   }
   for(int i=0;i<n;i++)
   {
      printf("%d ",*(ptr+i));
   }
   free(ptr);
}
*/


// calloc in c
/*
   .contiguous allocation
   .build-in function in stdlib.h
   .used to dynamicall allocate multiple blocks of memory and each block is of same size

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr;
   scanf("%d",&n);
   //n is a no.of input
   ptr=(int*)calloc(n,sizeof(int));
   for(int i=0;i<n;i++)
   { 
      scanf("%d",ptr+i);
   }
   for(int i=0;i<n;i++)
   {
      printf("%d ",*(ptr+i));
   }
   free(ptr);
}
*/
//realloc() in c
/*
      .reallocation
      .resize increase/decres

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,*ptr;
   scanf("%d",&n);
   //n is a no.of input
   ptr=(int*)realloc(ptr,n*sizeof(int));
   for(int i=0;i<n;i++)
   { 
      scanf("%d",ptr+i);
   }
   for(int i=0;i<n;i++)
   {
      printf("%d ",*(ptr+i));
   }
   free(ptr);
}
*/
//------------------------------------enum in c-----------------------------------------------------------------------
/*
   //enum is user defined data type

      #include<stdio.h>
      enum x{c,java,python};
      int main()
      {
         enum x variable;
         printf("%d ",sizeof(variable));
      }
*/
//--------------------------------------storage classes in c------------------------------------------------------

/*
#include<stdio.h>
int main()
{
   int a=10;
   {
      int a=2;
      printf("Inside block %d \n",a);
      a++;
   }
   {
      printf("%d \n",a++);
   }
   printf("%d ",a);
}
*/
/*
#include<stdio.h>
//auto int x=30  is a wrong
int main()
{
   auto int x=10;
   {
      auto int x;
      printf("%d\n",x); // garbage value
   }
   printf("%d\n",x);
}
*/
//register time less time for excution because using only register on the cpu not a memory

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   register int i,sum=0;
   for(i=0;i<5;i++)
   {
      sum+=i;
   }
   printf("%d ",sum);
   printf("%s \n",__DATE__);
   printf("%s \n",__TIME__);
   printf("%s \n",__FILE__);
   printf("%d \n",__LINE__);
   printf("%d \n",__STDC__);// (compiler ansi std) 1 true 0 false
}
*/
//----------------Escape Sequence in C--------------------------
// #include<stdio.h>
// int main()
// {
//        printf("1.My mobile number is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a  \n");
//        printf("2.lok\besh \? \n");
//        printf("3.\? \\ \" \' ");

// }


















































//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
// Data types:
// 1. Built-in primitives
//    - Integral: int, char
//    - Boolean: bool
//    - Floating point: float, double
// 2. Derived
//    - Array
//    - Pointers
// 3. User-defined
//    - Struct
//    - Enum
//    - Union

In C programming, data types determine the type of data that variables can hold. Here are some commonly used data types along with their sizes in bytes:

1. Built-in primitives:
   - Integral: Used for whole numbers. Examples include:
     - `int`: Format Specifier: `%d`, Range: -2,147,483,648 to 2,147,483,647, Size: 4 bytes on most systems (32-bit).
     - `unsigned int`: Format Specifier: `%u`, Range: 0 to 4,294,967,295, Size: 4 bytes on most systems (32-bit).
     - `short int` (or `short`): Format Specifier: `%hd`, Range: -32,768 to 32,767, Size: 2 bytes on most systems (16-bit).
     - `unsigned short int` (or `unsigned short`): Format Specifier: `%hu`, Range: 0 to 65,535, Size: 2 bytes on most systems (16-bit).
     - `long int` (or `long`): Format Specifier: `%ld`, Range: -2,147,483,648 to 2,147,483,647, Size: 4 bytes on most systems (32-bit).
     - `unsigned long int` (or `unsigned long`): Format Specifier: `%lu`, Range: 0 to 4,294,967,295, Size: 4 bytes on most systems (32-bit).
     - `long long int` (or `long long`): Format Specifier: `%lld`, Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807, Size: 8 bytes on most systems (64-bit).
     - `unsigned long long int` (or `unsigned long long`): Format Specifier: `%llu`, Range: 0 to 18,446,744,073,709,551,615, Size: 8 bytes on most systems (64-bit).
   - Boolean: Used for true/false values. Example: `bool`, Size: 1 byte.
   - Floating point: Used for numbers with decimal points. Examples include:
     - `float`: Format Specifier: `%f`, Size: 4 bytes.
     - `double`: Format Specifier: `%lf`, Size: 8 bytes.

2. Derived:
   - Array: A collection of elements of the same type accessed using an index.
   - Pointers: Variables that store memory addresses.

3. User-defined:
   - Struct: A composite data type used to group variables of different types under a single name.
   - Enum: A user-defined data type consisting of named constants.
   - Union: A special data type that allows storing different data types in the same memory location.
*/




// data type:
// 1.bulit in primitives
//   .integral - int ,char
//   .bool
//   .floating point float ,double
// 2.derived
//   . array , pointers
// 3.user defined
//   .struct
//   .enum
//   .union


/*

In C programming, integers can have various types, and each type has a different range and format specifier associated with it. Here are some common integer types, their format specifiers, and their ranges:

1. `int`:
   - Format Specifier: `%d`
   - Range: -2,147,483,648 to 2,147,483,647 on most systems (32-bit).

2. `unsigned int`:
   - Format Specifier: `%u`
   - Range: 0 to 4,294,967,295 on most systems (32-bit).

3. `short int` (or `short`):
   - Format Specifier: `%hd`
   - Range: -32,768 to 32,767 on most systems (16-bit).

4. `unsigned short int` (or `unsigned short`):
   - Format Specifier: `%hu`
   - Range: 0 to 65,535 on most systems (16-bit).

5. `long int` (or `long`):
   - Format Specifier: `%ld`
   - Range: -2,147,483,648 to 2,147,483,647 on most systems (32-bit).

6. `unsigned long int` (or `unsigned long`):
   - Format Specifier: `%lu`
   - Range: 0 to 4,294,967,295 on most systems (32-bit).

7. `long long int` (or `long long`):
   - Format Specifier: `%lld`
   - Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 on most systems (64-bit).

8. `unsigned long long int` (or `unsigned long long`):
   - Format Specifier: `%llu`
   - Range: 0 to 18,446,744,073,709,551,615 on most systems (64-bit).

The actual range of these types can vary depending on the system and compiler being used. To ensure portability and compatibility, you can use the `<stdint.h>` header, which defines fixed-size integer types with specific ranges, such as `int8_t`, `uint8_t`, `int16_t`, `uint16_t`, `int32_t`, `uint32_t`, `int64_t`, and `uint64_t`.

Here's a quick summary without explanations:

- `int`: `%d`, -2,147,483,648 to 2,147,483,647
- `unsigned int`: `%u`, 0 to 4,294,967,295
- `short int` (or `short`): `%hd`, -32,768 to 32,767
- `unsigned short int` (or `unsigned short`): `%hu`, 0 to 65,535
- `long int` (or `long`): `%ld`, -2,147,483,648 to 2,147,483,647
- `unsigned long int` (or `unsigned long`): `%lu`, 0 to 4,294,967,295
- `long long int` (or `long long`): `%lld`, -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
- `unsigned long long int` (or `unsigned long long`): `%llu`, 0 to 18,446,744,073,709,551,615

float ("%f")
double  ("%lf")
Bit: A bit is the smallest unit of data in a computer and can have two possible values: 0 or 1. It represents the fundamental building block of digital computing.Example:
Imagine a light switch. It can be either turned on (1) or off (0). Each position of the switch represents a single bit.
Byte: A byte is a unit of digital information in computing and data storage. It consists of 8 bits. Bytes are used to represent characters, numbers, and other symbols in computer systems.Example:
Let's consider the ASCII code, which is a character encoding standard used in computers and communication equipment to represent text and control characters. In ASCII, each character is represented by one byte, or 8 bits. For example, the ASCII code for the letter 'A' is 01000001 in binary, which is equivalent to 65 in decimal.
In networking, IP addresses are often represented as sequences of bytes. For instance, an IPv4 address consists of 4 bytes (32 bits) separated by dots. Each byte represents a number from 0 to 255. For example, the IP address 192.168.1.1 is represented in binary as 11000000.10101000.00000001.00000001.
*/ 
// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// int main()
// {
    // float a=234e2; // *200
    // float b=234e-2;  // %200
    // printf("%f\n",a);
    // printf("%f\n",b);

    //km-m-cm-i-ft
    // float km,m,cm,i,ft;
    // scanf("%f",&km);
    // m=km*1000;
    // cm=km*100;
    // i=cm/2.54;
    // ft=i/12;
    // printf("%f\n",km);
    // printf("%f\n",m);
    // printf("%f\n",cm);
    // printf("%f\n",i);
    // printf("%f\n",ft);

    //f-c;
    // float f,c;
    // scanf("%f",&f);
    // c=(f-32)*(5.0/9.0);
    // printf("%0.3f",c);

    // rectangle area ,perimeter
    // float l,b,R_area,R_peri;
    // scanf("%f %f",&l,&b);
    // R_area = l*b;
    // R_peri = (2*(l+b));
    // printf("%f %f",R_area,R_peri);

    // circle area,circumferenc
    // float R,C_area,C_ciru;
    // scanf("%f",&R);
    // C_area=3.14*R*R;
    // C_ciru=2*3.14*R;
    // printf("%f %f",C_area,C_ciru); 

    // int a=3,b=4;                         // 3--> 0 0 1 1
    // printf("%d AND \n",a&b);             // 4--> 0 1 0 0
    //  printf("%d OR \n",a|b);
    //   printf("%d Xor \n",a^b);
    //    printf("%d Not \n",~a);    // -(a+1)

    // int Ls=24;
    // int temp1=Ls<<2;
    // int temp2=Ls>>2;
    // printf("%d LEFT S \n",temp1);    //11000.00  1100000
    // printf("%d RIGHT S \n",temp2);   //11000.00  0011000

//-------------------------------------------------------------------------------------------------
// control statement:
// 1.if statement
// 2.switch 
// 3.conditional operator statement
// 4.loop statement 
// 5.goto statement
// int num;
// scanf("%d",&num);
   //1.
    // switch (num)
    // {
    //     case 1 ... 3:
    //         printf("1 to3 ");
    //         break;
    //     case 4 ... 5:
    //         printf("4 to 5");
    //         break;
    //     case 6 ... 9:
    //         printf("6 to 9 ");
    //         break;

    //     default:
    //         printf("IV");
    //         break;
    // }
    //2
    // switch (num)
    // {
    //     case 1:
    //         printf("st");
    //         break;
    //     case 2:
    //         printf("nd");
    //         break;
    //     case 3:
    //         printf("rd");
    //         break;

    //     default:
    //         printf("IV");
    //         break;
    // }
//3.
// char ch;
// printf("enter char:");
// scanf("%c",&ch);
//     switch (ch)
//     {
//         case 'a':
//             printf("%c-",ch);
//             break;
//         case 'b':
//             printf("%c+",ch);
//             break;
//         case 'j':
//             printf("%c=",ch);
//             break;
//         default:
//             printf("IV");
//             break;
//     }
//4.
    // switch (ch)
    // {
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    // printf("VOWEL");
    //     break;
    
    // default:
    //     break;
    // }

//armstrong numbe ror not
// int num=153;
// int a=num%10;
// int b=(num%100)/10;
// int c=(num%1000)/100;
// int ARM_NUM = (a*a*a)+(b*b*b)+(c*c*c);
// printf("%s",(ARM_NUM==num)?"THE GIVEN NUMBER IS ARMSTRONG NUMBER":"THE GIVEN NUMBER IS NOT ARMSTRONG NUMBER");
//-------------------------------------------------------------------------------------------------
//goto label
    // int i=1000;
    // temp:
    // printf("%d\n",i);
    // i++;
    // if(i<=1010)
    // {
    //     goto temp;
    // }

// //do-while
// int i=0;
// do
// {
//     printf("%d ",i);
//     i++;
// } while (i<=10);

    //break,continue
    // for(int i=1;i<=10;i++)
    // {
    //     // if(i==6)
    //     //     break;
    //     if(i==5)
    //         continue;
    //     printf("%d-",i);
    // }

//-------------------------------------------------------------------------------------------------
    // char str1[100],str2[100],str3[100],str4[100];
    // gets(str1);
    // gets(str2);
    // printf("%s%s ",str1,str2);
    // printf("%d-Length\n",strlen(str1));
    // printf("%s-Reverse\n",strrev(str1));
    // printf("%s-uppercase\n",strupr(str1));
    // printf("%s-lowercase\n",strlwr(str1));
    // scanf("%s %s",str3,str4);
    // printf("%d-compare\n",strcmp(str3,str4)); //( output 0 means the two string are equal )
    // char str5[100],str6[100];
    // scanf("%s",str5);
    // printf("%s\n",strcpy(str6,str5));
    // printf("%s(str6)\n",str6);
    // strcat(str5,str6);
    // printf("%s",str5);
//-------------------------------------------------------------------------------------------------
   //  int num;
   //  scanf("%d",&num);
   //  printf("%f\n",sqrt(2));
   //  printf("%f\n",pow(2,2));
   //  printf("%d\n",abs(num));

   //  printf("ceil\n");
   //  printf("%f\n",ceil(3.9));
   //  printf("%f\n",ceil(3.3));

   //  printf("floor\n");
   //  printf("%f\n",floor(3.9));
   //  printf("%f\n",floor(3.3));

   //  printf("round\n");
   //  printf("%f\n",round(3.9));
   //  printf("%f\n",round(3.3));

// }


/*function
1.inbulid function
2.user define functiion 
      i) call by value
            1.return type (data type):
               .with arguments
               .without arguments
            2.not return (void)
               .with arguments
               .without arguments
      ii).call by reference

               */

// static:
// void factr();
// #include<stdio.h>
// int main()
// {
//    factr();
//    factr();
// }

// void factr()
// {
//    static int i=1;
//    i++;
//    printf("%d\n",i);
// }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*Introduction to programming

   C is a powerful and widely used programming language that was developed in the early 1970s by Dennis Ritchie at Bell Labs. 
   It has had a significant influence on the development of many other programming languages and is considered a foundational language
   in the field of computer science. C is known for its efficiency, portability, and low-level system programming capabilities. 
   In this introduction to C programming, we'll cover some of the fundamental concepts and features of the language.

Key Characteristics of C:
1. Procedural Programming: C is primarily a procedural programming language, which means that it emphasizes the use of functions or procedures to organize code and solve problems. 
You write functions to perform specific tasks, and these functions can be called from the main program or other functions.

2. Low-Level Language: C provides a high degree of control over the hardware and system resources. It allows you to work with memory addresses directly, making it well-suited for system programming, 
device drivers, and other low-level tasks.

3. Portability: C is a portable language, which means that programs written in C can be compiled and run on various platforms with minimal changes. This portability is achieved through the use of 
compilers that translate C code into machine-specific code.

4. Strongly Typed: C is a strongly typed language, which means that variable types must be declared explicitly, and type mismatches are typically caught by the compiler, helping to prevent errors.

5. Extensive Standard Library: C comes with a standard library that provides a wide range of functions for common tasks, such as input/output, string manipulation, and memory management.
 This library makes it easier to perform various operations without having to write everything from scratch.

6. Efficiency: C is known for its efficiency and is often used in situations where performance is critical. It allows fine-grained control over memory and hardware resources, making it suitable 
for embedded systems and real-time applications.


Certainly! Here's a concise explanation of the uses of the C programming language:

C is a versatile and powerful programming language with a wide range of applications. It is commonly used for:

System Programming: C is often used to develop operating systems, device drivers, and firmware due to its low-level features and ability to interact with hardware directly.
Application Development: Many desktop applications, including office suites, graphics software, and databases, are built using C due to its efficiency and portability.
Embedded Systems: C is widely used in embedded systems programming for microcontrollers and other embedded devices due to its ability to access hardware resources efficiently.
Game Development: C is a popular choice for game development due to its performance, control over hardware, and extensive libraries like SDL and OpenGL.
Compilers and Interpreters: C is used to develop compilers, interpreters, and other language tools due to its efficiency and ability to generate optimized machine code.

Basic Syntax:
Here's a simple C program that prints "Hello, World!" to the console:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

In this example:

- `#include <stdio.h>` is a preprocessor directive that includes the standard input/output library, which provides functions like `printf` for input and output operations.

- `int main()` is the main function of the program. Every C program must have a `main` function, which serves as the entry point of the program.

- `printf("Hello, World!\n");` is a function call that prints the specified text to the console.

- `return 0;` indicates that the program has terminated successfully. The value 0 is typically used to signify a successful execution.

C is a versatile language that can be used for a wide range of applications, from system programming to web development. 
Learning C provides a solid foundation for understanding computer science and programming concepts, even if you later choose to work with other languages.

*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//constants in c:
// #include<stdio.h>
// int main()
// {
//    int num;scanf("%d",&num);
//    printf("%d",&num);
//    //octal -demical - binary -hexdecimal
//    //
// }


/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                             String 
*/
//string is array of chatacters .last address of string is should be null('\0') charcter.
// #include<stdio.h>
// #include<string.h>
// int main()
// {
   // char str1[100],str2[100],str3[100];
   // gets(str1);
   // fgets(str2,100,stdin);
   // scanf("%5s",str3);
   // printf("%s",str1);
   // printf("%s",str2);
   // printf("%s",str3);

   // char str4[100],str5[100],str6[100];
   // scanf("%7s",str4);
   // printf("%s\n",str4);
   // printf("%.3s\n",str4);   // print first three character
   // printf("%10.3s\n",str4); // print 10 space after print 3 charcter
   // puts(str4);  //puts print chararcter after "\n" will be printed
   // puts(str4);
   // gets(str5);
   // printf("%s\n",&str5[3]);

   // scanf("%s",str6);
   // printf("%s\n",&str6[3]);

   //string len with fn and without fn
   /*
   char str[100];
   // with per-defined fn
   scanf("%s",str);
   printf("%d\n",strlen(str)); 
   // without per-defined fn
   int len=0,i=0;
   while(str[i]!='\0')
   {
      len++;
      i++;
   }  
   printf("%d",len); 
   */

   //string concatenate
   /*
   char str1[100],str2[100];
   gets(str1);
   gets(str2);
   strcat(str1,str2);
   printf("%s-%s",str1,str2);
   */

   //string compare
   // char str1[100],str2[100];
   // scanf("%s %s" ,str1,str2);
   // printf("%d\n",strcmp(str1,str2));
   // //without fn
   // int flag=0;
   // for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++)
   // {
   //    if(str1[i]!=str2[i])
   //    {
   //       flag=1;
   //       break;
   //    }
   // }
   // printf("%s",(flag==0)?"the given string are equal":"the given string are  not equal");


   //string revers
   /*
      char str1[100];
      scanf("%s",str1);
      with in-bulid function
      printf("%s",strrev(str1));
      without in-bulid function
      int len=strlen(str1);
      for(int i=0;i<len/2;i++)
      {
         char temp=str1[i];
         str1[i]=str1[len-1-i];
         str1[len-1-i]=temp;
      }
      printf("%s",str1);
   */

      //(A-65 Z-90 a-79 z-122) String to covert upper case and lower case both differetion are (**32**) 
      /*
      char str1[100];
      scanf("%s",str1);
      printf("%s\n",strupr(str1));
      printf("%s\n",strlwr(str1));
      upper to lower and also lower to upper
      for(int i=0;str1[i]!='\0';i++)
      {
         if(str1[i]>='A'&&str1[i]<='Z')
         {
            str1[i]=str1[i]+32;
         }
         else 
         {
            str1[i]=str1[i]-32;
         }
      }
      printf("%s\n",str1);
      */
     

// }

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                    pointers in c
int  a;  --> a is a variable
int  *a; --> pointing address of a

&-address 
*-indirection opreator
                                  */

//1.
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *p;  //initial of pointer 
   p=&a;
   printf("%d\n",p); //address;
   printf("%d\n",*p);  // that address of value
   printf("%d\n",&p);
   //
   printf("%u\n",&a);
   printf("%x\n",&a);
}*/
//2 - pointre assignment
/*
#include<stdio.h>
int main()
{
   int a=10,b=220;
   int *p,*q;
   p=&a;
   q=&b;
   *q=*p;
   printf("%d %d %d",a,*p,*q);
}
*/
//3-pointer to pointer (double pointer)
/*
#include<stdio.h>  
int main()
{
   int a=10;
   int *p=&a;
   int **q=&p;
   int ***r=&q;
   printf("%d %d %d %d\n",a,*p,**q,***r);
}
*/
//4.pointer in arithmetic 
/*
#include<stdio.h>
int main()
{
   int a[5]={2,3,4,1,1};
   int *p=&a[0];
   printf("%d %d\n",*p,p);
   p=p+3;
   printf("%d %d\n",*p,p);
   p=p-1;
   printf("%d %d\n",*p,p);
   *p=9;
   printf("%d\n",*p);
}
*/
//4.pointer in arithmetic(++/--) 
/*
#include<stdio.h>
int main()
{
   int a[7]={2,3,4,1,5,6,8};
   int *p;
   p=a; //also pointing first element of address
   printf("%d-%d\n",*p,p);
   p++;
   printf("%d-%d\n",*p,p);

   printf("%d-%d\n",*p++,*p++);//to check  right to  left

   printf("%d-%d\n",*++p,*++p);

   printf("%d-%d\n",*p--,*p--);//to check  right to  left

   printf("%d-%d\n",*--p,*--p);

}
*/
//problem 1:
/*
#include<stdio.h>
int main()
{
   int a[]={2,4,6,8,10,1,5,7,9};
   int *p,*q;
   p=a;
   printf("%d\n",*p);
   printf("%d-%d-%d\n",(*p)++,*p++,*++p);  //to check  right to  left 
   q=p+3;
   printf("%d\n",*q-3);
   printf("%d\n",*--p+5);
   printf("%d\n",*p+*q);
}
*/
//problem 2:
/*
#include<stdio.h>
int main()
{
   int a=-11;
   int *p=&a;
   *p=10;
   printf("%d",*p);
}
*/
//problem 3
/*
#include<stdio.h>
int main()
{
   char ch[]="Welcome to tedtalks world...";
   //         0123456789012345678912345678
   char *ptr=ch;
   printf("%c\n",*ptr);     // (ptr 0-W)
   printf("%c\n",*(ptr++ +1));  // ptr 0 (ptr 1-e) 
   printf("%c\n",*((ptr-- +5)-1)+3);  // 0  m+3 p         to check  right to  left 
   printf("%c\n",*(++ptr + 10)-32);  //  //T
   printf("%c %c %c\n",*ptr,*++ptr,*--ptr);//           e e W
}
*/
// --------------(void pointer) void means empty and also can't depened data type----------------------   
/*
#include<stdio.h>
int main()
{
   int a=10;
   float b=1.11;
   char c='T';
   void *vp;
   vp=&a;
   printf("%d\n",*(int *)vp);  // castcated by (data type*)
   vp=&b;
   printf("%f\n",*(float *)vp);
   vp=&c;
   printf("%c\n",*(char *)vp);
}
*/

//-----------(Null pointer)
/*
#include<stdio.h>
int main()
{
   int *ptr=NULL;
   printf("%d ",*ptr);
   if(ptr==NULL)
   {
      printf("%this is pointer is null");
   }
   else{
      printf("%d\n",*ptr); 
   }
} 
*/
//scanf("%[^\n]c", s);
//---dangling pointer in c
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[]={1,2,3,4,5};  
   int *p;
   p=a;
   printf("%d\n",*p);
   free(p);
   p=NULL;
   for(int i=0;i<5;i++)
   {
      printf("%d ",a[i]);
   }
}
*/
//wild pointer;
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr=(int *)malloc(sizeof(int));   //uninaized having may be garbage value
   printf("%d ",*ptr); 
   *ptr=10;
   printf("\n%d",*ptr);
}
*/
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                       function in c                                                    
*/
//call by value:
/*
#include<stdio.h>
void sum(int a,int b)
{
   printf("%d\n",a+b);
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   sum(a,b);
   
}
// call by reference:
#include<stdio.h>
void sum(int *a,int *b)
{
   printf("%d\n",*a+*b);
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int *p,*q;
   sum(&a,&b);
   
}
*/
/*classification of ffunction:
1.No argument without return type
2.No argument with return type
3.with argument no return type
4.with argument with return type
*/
//1.No argument without return type
/*
#include<stdio.h>
void sum(void);
void sum()
{
   int a=5,b=2;
   printf("%d\n",a+b);
}
int main()
{
   sum();
}
*/
//2.No argument with return type
/*
#include<stdio.h>
//void sum(void); //use depend on the data type
int sum()
{
   int a=5,b=2;
   return a+b;
}
int main()
{
   printf("%d",sum());
}
*/
//3.with argument no return type
/*
#include<stdio.h>
//void sum(int ,int);
void sum(int a,int b)
{
   printf("%d\n",a+b);
}
int main()
{
   sum(2,3);
}
*/
//4.with argument with return type
/*
#include<stdio.h>
//void sum(int ,int);
int sum(int a,int b)
{
   return a+b;
}
int main()
{
   printf("%d",sum(2,222));
}
*/
//GATE QN 2019 probblem-1
/*
#include<stdio.h>
int Number(int a,int b)
{
   a=2*a+b;
}
int main()
{
   int a=10,b=19;
   a=Number(b,a);
   printf("%d\n",a);
   b=Number(a,b);
   printf("%d",b);
}
*/
//GATE QN 2019 probblem-2
/*
#include<stdio.h>
int Number(int a)
{
   static int count=0;  // They are initialized only once and keep their values throughout the program's execution.
   count=count+a;
   return count;
}
int main()
{
   int j=0;
   for(int i=0;i<=3;i++)
   {
      j=Number(i);
      printf("%d-",j);
   }
   printf("\n%d",j);
}
*/
//GATE QN 2019 probblem-3
/*
#include<stdio.h>
int RRR()
{
   static int num=7;
   return num--;
}
int main()
{
   //  6            4
   for(RRR();RRR();RRR())  
   {
      printf("%d ",RRR());  //5
   }
   return 0;
}
*/
//GATE QN 2019 probblem-4
/*
#include<stdio.h>
void fn(int *a,int b)
{
   b=b+5;
   *a=*a+b;
   printf("%d-%d\n",*a,b);
}
int main()
{
   int a=5,b=10;
   fn(&a,b);
   printf("%d",a+b);
}
*/
//passing array as an argument
/*
#include<stdio.h>
int fn(int arr[],int n)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
      sum+=arr[i];
   }
   return sum;
}
int main()
{
   int num;
   scanf("%d",&num);
   int arr[num];
   for(int i=0;i<num;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("%d",fn(arr,num));
}
*/
/*
#include<stdio.h>
char *fn()
{
   char *str="LOKESH";
   return str;
}
int main()
{
   char *str;
   str=fn();
   printf("%s-",str);
}
*/
//returning pointer from function
/*
#include<stdio.h>
int *fn(int a[])
{
   a=a+3;
   return a;
}
int main()
{
   int arr[]={2,3,4,5,6};
   int *ptr;
   ptr=fn(arr);
   printf("%d",*ptr);
}
*/
//gate 2010
/*
#include<stdio.h>
void fn(int *p,int *q)
{
   p=q;
   *p=2;
}
int i=0,j=1;
int main()
{
   fn(&i,&j);
   printf("%d %d ",i,j);
}
*/
//fuction pointer
/*
#include<stdio.h>
int sum(int a,int b)
{
   return a+b;
}
int main()
{
   int s=0;
   int (*ptr)(int,int)=sum;
   s=ptr(2,3);
   printf("%d",s);

}
*/
//callback function
/*
#include<stdio.h>
void sum(int a,int b)
{
   printf("%d\n",a+b);
}
void sub(int a,int b)
{
   printf("%d\n",a-b);
}
void display (void(*ptr)(int,int))
{
   (*ptr)(5,1);
}
int main()
{
   display(sum);
   display(sub);
}
*/
//application of function pointer
/*
#include<stdio.h>
void add(int a,int b)
{
   printf("%d\n",a+b);
}
void sub(int a,int b)
{
   printf("%d\n",a-b);
}
void mul(int a,int b)
{
   printf("%d\n",a*b);
}

int main()
{
   int a,b,ch;
   void(*ptr[3])(int,int)={add,sub,mul};
   scanf("%d %d %d",&ch,&a,&b);
   (*ptr[ch])(a,b);
}
*/

//recursion in c

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 1.constants in case
/*
   #include<stdio.h>
   #define Max 10   //  define Max=10 or define Max 10; this are wrong statement
   int main()
   {
      printf("%d\n",'a'=='a');   //1
      printf("%d\n",'a'=="a");   //0
      printf("%d\n","aa"=="aa"); //1
      printf("%d\n","AA"=="aa"); //0

      const int a=50;
      printf("%d\n",a);//50;
      int A=50;
      printf("%d\n",a==A); //1

   // a=51; //error

   printf("%d\n",Max); // 10
   //Max=11;  //error
   } 
*/
//---------------------------------------------------------------------
//2.variable in c
/*
   #include<stdio.h>
   int main()
   {
      int a;//declaration
      a=10; //initalizations
      int _type;
      printf("%d\n",_type);//1
      _type=77;
      printf("%d\n",_type);//77
      int _keyword;
      printf("%d\n",_keyword);//0
   } 
*/
//----------------------------------------------------------
//3.operatord in c
      /*
            1.unary: it's required only one operands
                  -            ---->  unary minus
                  ++,--      
                  !            ---->  logical not
                  &            ---->  address of
                  sizeof     
      
      #include<stdio.h>
      int main()
      {
         int a=5,b=(-a); // uniary minus
         printf("%d %d\n",a,b);// 5 -5

         a=10,b=11;
         b=a++;
         printf("%d %d\n",a,b);// 11 10

         a=1,b=1;
         a++,--b;
         printf("%d %d\n",a,b);//2 0

         printf("%d\n",1&1);//1
      }
      */

     /*
            2.binary:it's required only two operands
               arithemetic (+,-,/,*,%)
               reletional  (<,>,<=,>=)
               logical     (&&,||)
               bitwise     (&,|,>>,<<,^,~)
               equality    (==,!=)
      
      #include<stdio.h>
      #include<stdbool.h>
      int main()
      {
         int a=10,b=10;
         printf("%d\n",a+b);//20

         a=10,b=10;
         printf("%d\n",a-b);//0

         a=9,b=4;
         printf("%d\n",a/b);//qucient is 2

         a=9,b=4;
         printf("%d\n",a%b);//remainder is 1

         printf("%d\n",-10/-5);// remainder if 2
         printf("%d\n",10/5);// remainder if 2
         printf("%d\n",-10/5);// remainder if -2
         printf("%d\n",10/-5);// remainder if -2
         printf("%d\n",10/10000);// remainder is 0


         printf("%d\n",-9%-5);// q if -4
         printf("%d\n",9%5);// q if 4
         printf("%d\n",-9%5);// q if -4
         printf("%d\n",9%-5);// q if 4

         printf("%d\n",1100%112323);//1100

         int A=10;
         float B=7;
         printf("%d\n",A+B);//0
         B=2.2;
         printf("%d\n",A+B);//gardage value

         a=b=A=10;
         // a=b=A+1=10; // error
         printf("%d %d %d\n",a,b,A);//10 10 10

         a=1,b=1;
         b=a++;
         printf("%d %d\n",a,b);// 2 1

         a=1,b=1;
         b=++a;
         printf("%d %d\n",a,b);// 2 2

         a=1,b=1;
         b=a--;
         printf("%d %d\n",a,b);// 0 1

         a=1,b=1;
         b=--a;
         printf("%d %d\n",a,b);// 0 0

         printf("%d \n",10<5); //0
         printf("%d\n",10>5); //1
         printf("%d\n",10<=5);//0
         printf("%d\n",10>=5);//1

         printf("%d\n",3+5<9);//1
         printf("%d\n",'a'<'b');//1

         printf("%d\n","lokesh"<"lokesh"); // undefinded

         printf("%d\n",-14>5);//0
         printf("%d\n",4.1>4);//1
         printf("%d\n",4.0>4);//0

         printf("%d\n",18<10<9>10); // left to right  // 0
         //            1<10<9>10
         //              1<9>10
         //               1>10
         //                 0
         printf("%d\n",18+1>10);// 1
         //             19>10
         //               1
         printf("%d\n",10+9==10>10<9+10);  //0
         //         < > <= >= == !=
         //             19==10>10<19
         //             19==0<19
         //             19==1
         //               0
         printf("%d\n",10+14==1>=1<10+1!=1);//1
         //             24==1>=1<11!=1
         //             24==1<11!=1
         //             24==1!=1
         //              0!=1
         //               1
         printf("%d\n",10==5 && 5<10);//0
         //              0  &&  1
         //                 0
         printf("%d\n",10==5 || 5<10);//1
         //              0 || 1
         //                 1
         printf("%d\n",!(10>5));// 0

         printf("%d\n",10<100 && printf("lokesh "));//lokesh 1   
         printf("%d\n",10<100 && printf(""));//0   
         printf("%d\n",10>1 && printf("LOKESH ")||printf("Lokesh"));// LOKESH 1
         a=printf("lokesh ");
         printf("%d\n",a);//lokesh 7

         a=10,b=10;
         printf("%d\n",a--&&--b);// 1
         printf("%d %d\n",a,b); // 9 9
 
         a=10,b=10;
         printf("%d\n",--a&&++b);// 1
         printf("%d %d\n",a,b); // 9 11

         printf("bitwise and \n");
         printf("%d\n",10&1);//0
         // 1010
         // 0001
         // ----
         // 0000

         printf("bitwise or \n");
         printf("%d\n",10|1);//11
         // 1010
         // 0001
         // ----
         // 0001

         printf("bitwise xor \n");
         printf("%d\n",10^1);//11
         // 1010
         // 0001
         // ----
         // 1011

         printf("bitwise not \n");
         printf("%d\n",~10);//-11
         
         //      shortcut:-(10+1);
         

         printf("left shift \n");
         printf("%d\n",10<<2); // 40
         // 0000 1010 
         // 0010 10xx
         
         //      shortcut:10*pow(2,2)
         

         printf("right shift \n");
         printf("%d\n",10>>2); // 2
         // 0000 1010 
         //   00 0010

         //     shortcut:10/pow(2,2)
         

       //int A1=1,2; //error
        int A2=(1,2);
        printf("%d\n",A2); //2

        int A3;
        A3=1,2,3,4;
        printf("%d\n",A3);//1

        int A4;
        A4=(1,2,3,4);
        printf("%d\n",A4);//4

        int A5;
        A5=(printf("LOKESH "),2);
        printf("%d\n",A5);//LOKESH 2

        a=8,b=8;
        b=(a++,++a);
        printf("%d\n",b);// 10

        a=8,b=8;
        b=a++,++a;
        printf("%d\n",b);// 8
        
      //   a=scanf("%d %d %d",&A2,&A3,&A4);
      //   printf("%d\n",a); //3

        a=printf("%d %d ",printf("lokesh "),printf("lokesh "));
        printf("%d\n",a); // lokesh lokesh 7 7 4
      }
      */
//---------------------------------------------------------------------
//4.base condition in c
/*
#include<stdio.h>
int main()
{
   if("lokesh")
   {
      printf("1\n");
   }
   else
   {
      printf("2\n");
   }
   //output:1
   int a,b;
   char c;
   scanf("%d %c %d",&a,&c,&b);
   switch (c)
   {
   case '+':
      printf("%d\n",a+b);
      break;
   case '-':
      printf("%d\n",a-b);
      break;
   case '*':
      printf("%d\n",a*b);
      break;
   case '/':
      printf("%d\n",a/b);
      break;
   case '%':
      printf("%d\n",a%b);
      break;
   default:
      printf("invalid");
      break;
   }
}
*/
//---------------------------------------------------------------------------------------
//5.loop
/*
#include<stdio.h>
int main()
{
   int i=1;
   for(;i<5;i++)
   {
      printf("%d-",i);// 1-2-3-4
   }
   printf("\n");

   i=1;
   while(i<5)
   {
      printf("%d-",i++);// 1-2-3-4
   }
   printf("\n");

   i=1;
   do
   {
      printf("%d-",i++); //1-2-3-4
   } while (i<5);
   
}
*/
//----------------------------------------------------------------------------------------------------------
//6.array in c
/*
#include<stdio.h>
int main()
{
   // compile time value will be declured
   int arr1[5]={1,2,3,4,5};
   for(int i=0;arr1[i];i++)
   {
      printf("%d ",arr1[i]);//1 2 3 4 5
   }
   printf("\n");

   int arr2[]={1,2,3,4,5,6,7,8};
   for(int i=0;arr2[i];i++)
   {
      printf("%d ",arr2[i]); //1 2 3 4 5 6 7 8
   }
   printf("\n");

   int arr3[5]={1,2,3};
   for(int i=0;arr3[i];i++)
   {
      printf("%d ",arr3[i]); // 1 2 3
   }
   printf("\n");

   int arr4[5]={1,2,3,4,5,6,7,8}; // error but it will be printed
   for(int i=0;arr4[i];i++)
   {
      printf("%d ",arr4[i]); //1 2 3 4 5
   }
   printf("\n");

   int arr5[5]; 
   for(int i=0;arr5[i];i++)
   {
      printf("%d ",arr5[i]); // 7407456 gardage value will be printed
   }
   printf("\n");

  //run time value will be declured
   int arr6[5]; 
   for(int i=0;i<5;i++)
   {
      scanf("%d",&arr6[i]);
      printf("%d ",arr6[i]); // 1 2 3 4 5
   }
   printf("\n");

   int arr7[5]={10};
   for(int i=0;i<arr7[i];i++)
   {
      printf("%d ",arr7[i]);//10
   }
   printf("\n");
}

// program to print transpose of matrix in c
#include<stdio.h>
int main()
{
   int arr[10][10]=
   {
      {1,2,3},
      {2,2,2},
   };
   for(int i=0;i<2;i++)
   {
      for(int j=0;j<3;j++)
      {
         int temp=arr[i][j];
         arr[i][j]=arr[j][i];
         arr[j][i]=temp;
      }
   }
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<2;j++)
      {
         printf("%d ",arr[i][j]);
      }
      printf("\n");
   }
   
   int arr1[3][3]=
   {
      {1,2,3},
      {4,5,6},
      {7,8,9}
   };
   for(int i=0;i<3;i++)
   {
      for(int j=i+1;j<3;j++)
      {
         int temp=arr1[i][j];
         arr1[i][j]=arr1[j][i];
         arr1[j][i]=temp;
      }
   }
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
      {
         printf("%d ",arr1[i][j]);
      }
      printf("\n");
   }
}
*/
//-------------------------------------------------------------------------------
//8.string in c
/*
#include<stdio.h>
#include<string.h>

int main()
{
   char ch1[]={'a','b','c'};
   printf("%s\n",ch1);//abc

   char ch2[]={'a','b','c','\0'};
   printf("%s\n",ch2);//abc
   printf("%c",ch2);//nothing will be print

   // char ch3[100];
   // gets(ch3);// scanf()
   // puts(ch3);//printf()

   int a=5;
   printf("%02d\n",a);//05
   printf("%10d\n",a);//---------5

   float b=4.1;
   printf("%.6f\n",b);//4.100000
   printf("%10.6f\n",b);//--4.10000

   char c='a';
   printf("%10c\n",c);//---------a

   char d[100]="string";
   printf("%10s\n",d);//-----string

   //string string length
   char e[100]="lokesh";
   int len,i=0;
   while(e[i]!='\0')
   {
      len++;
      i++;
   }
   printf("%d\n",len); //6
   printf("%d\n",strlen(e)); // 6

   //string concatnate two string
   char str1[30]="lokesh ",str2[5]="jaya";
   int len1=strlen(str1);
   for(int i=0;i<strlen(str2);i++)
   {
      str1[len1+i]=str2[i];
   }
   printf("%s\n",str1);//lokesh jaya

   char str3[30]="lokesh ",str4[5]="jaya";
   strcat(str3,str4);
   printf("%s\n",str3);//lokesh jaya

   //compare two string 
   char str6[9]="computer",str7[9]="computer";
   printf("%d\n",strcmp(str6,str7));//0

   char str8[9]="Aomputer",str9[9]="aomputer";
   // 65 97
   printf("%d\n",strcmp(str8,str9));//-1

   char str10[9]="aomputer",str11[9]="Aomputer";
   // 97 65
   printf("%d\n",strcmp(str10,str11));//1

   for(int i=0;str6[i]!='\0'||str7[i]!='\0';i++)
   {
      if(str6[i]!=str7[i])
      {
         printf("Not a Same!\n");
         break;
      }
   }
   printf("Same\n");

   // strrev
   char str12[9]="computer";
   int start=0,end=strlen(str12)-1;
   while(start<end)//len/2
   {
      char ch = str12[start];
      str12[start]=str12[end];
      str12[end]=ch;
      start++;
      end--;
   }
   printf("%s\n",str12);

}
*/
//-------------------------------------------------------------------------------------------------------------------------
//9.pointers in c
/*
#include<stdio.h>
int main()
{
   int a=10;
   int *ptr;
   ptr=&a;
   
      //     a              ptr
      //   ------         --------
      //   | 10 |         | 1000 |
      //   ------         --------
      //    1000            2004
   printf("%d %d\n",a,&a); // 10 1000
   printf("%d %d\n",ptr,&ptr);//1000 2004
   printf("%d \n",*ptr);//0
 
   // float x,y;
   // int a,*ptr;
   // ptr=&x;
   // ptr=&y;
   // printf("%f",*ptr); // error because of pointer data type and variable data type should be equal 

   int b,*ptr1=&b;
   printf("%d\n",*ptr1); // 0

   // & --> address of operator
   // * --> indirection operator
   // size of pointer is if it's (16 bit then 2 byte) or(32 bit then 4 byte) 
} 
*/
//pointer address
/*
#include<stdio.h>
int main()
{
   int a=10,b=11;
   int *ptr1,*ptr2;
   ptr1=&a;
   ptr2=&b;
   printf("%d %d\n",*ptr1,*ptr2); // 10 11

   a=10,b=11;
   ptr1=&a,&b;
   ptr2=(&a,&b);
   printf("%d %d\n",*ptr1,*ptr2);//10 11

   int *ptr3=77;
   printf("%d %d",ptr3,*ptr3);// error
}
*/
//pointer assignment
/*
#include<stdio.h>
int main()
{
   //pointer store only address
   int a=10,b=77;
   int *ptr1,*ptr2;
   ptr1=&a;
   ptr2=ptr1;
   printf("%d %d\n",*ptr1,*ptr2); // 10 10

   int c=10,d=77;
   int *ptr3,*ptr4;
   ptr3=&c;
   *ptr4=*ptr3;
   printf("%d %d\n",*ptr3,*ptr4); // error or nothing will be printed

   
   int e=10,f=77;
   int *ptr5,*ptr6;
   ptr5=&e;
   ptr6=&f;
   *ptr6=*ptr5;
   printf("%d %d %d %d\n",e,f,*ptr5,*ptr6); // 10 10 10 10

}
*/
/*
#include<stdio.h>
int main()
{
   int a=10,b=11;
   int *ptr1,*ptr2;
   ptr1=&a;
   ptr2=ptr1;
   printf("%d %d %d %d\n",ptr1,ptr2,*ptr1,*ptr2);// 65655656 65655656 10 10
}
*/
//double pointer
/*
#include<stdio.h>
int main()
{
   //      a           ptr1           ptr2       ptr3
   //    -------     ---------      ---------   --------
   //    | 777 |     | 1004  |      | 2004  |   | 3004 |
   //    -------     ---------      ---------   --------
   //     1004         2004           3004        4004

   int a=777;
   int *ptr1,**ptr2,***ptr3;
   ptr1=&a;
   ptr2=&ptr1;
   ptr3=&ptr2;
   printf("%d %d %d\n",*ptr1,**ptr2,***ptr3);
}
*/
//arithmetic in pointer
/*
#include<stdio.h>
int main()
{
   int a=10,b=11;
   int *ptr1=&a;
   int *ptr2=&b;
   printf("%d\n",*ptr1-*ptr2);//-1
   printf("%d\n",*ptr1+*ptr2);//21
   ptr1=ptr1+2; // (1000+4*2=1000-1008) |1000 1001 1002 1003|1004 1005 1006 1007|1008 1009 1010 1011|

   int arr[]={1,2,3,4,5};
   int *ptr3=arr;// *ptr3=&arr[0]; 
   printf("%d_%d\n",ptr3,*ptr3);// 6487520_1
   ptr3=ptr3+2;
   printf("%d_%d\n",ptr3,*ptr3);// 6487528_3
   *ptr3=777;
   printf("%d_%d\n",ptr3,*ptr3);// 6487528_777

   int arr1[]={9,8,7,99,100};
   int *ptr4=&arr1[0];
   int *ptr5=&arr1[3];
   printf("%d\n",*ptr4-*ptr5);//-90
   printf("%d\n",*ptr4+*ptr5);//108
   printf("%d\n",ptr5-ptr4);//3
   printf("%d %d\n",ptr5,ptr5-2);//6487484 6487476

   int arr2[]={9,8,7,99,100};
   int *ptr6=arr2;
   ptr6++;
   printf("%d\n",*ptr6);//8
   ptr6--;
   printf("%d\n",*ptr6);//9
   ++ptr6;
   printf("%d\n",*ptr6);//8
   --ptr6;
   printf("%d\n",*ptr6);//9

   printf("%d\n",*++ptr6);// r to l ++p after pointing 8

   printf("%d %d\n",*ptr6++,*ptr6++);// r to l ++p after pointing 7 8

   printf("%d\n",*--ptr6);//7
   ptr6++;//99
   printf("%d %d %d\n",*--ptr6,*--ptr6,*--ptr6);// r to l ----> 9 8 7

   printf("%d %d %d\n",*ptr6++,*++ptr6,*ptr6++);// r to l ----> 7 7 9
   
   int arr3[]={9,8,7,99,100};
   int *ptr7=arr3;
   printf("%d %d\n",*++ptr7,*++ptr7);// r to l ----> 7 8 
   printf("%d %d\n",*ptr7++,*ptr7++);// r to l ----> 99 7
   printf("%d %d\n",*ptr7--,*--ptr7);// r to l ----> 99 99 
   printf("%d %d\n",*--ptr7,*ptr7--);// r to l ----> 9 7


   int arr4[]={11,22,33,44,555};
   int *ptr8;
   ptr8=&arr4[1];
   printf("%d\n",*ptr8-8);// 14
   printf("%d\n",*--ptr8+8);// r to l --ptr8  *ptr8 value+8   11+8 19 
   printf("%d\n",*ptr8++);//11
   printf("%d\n",*ptr8);//22

   ptr8=&arr4[2];// 33
   printf("%d\n",(*(ptr8+2))--);// 555
   printf("%d\n",*(ptr8+2));//554 
   printf("%d\n",*ptr8);//33
   printf("%d\n",*(ptr8++ -1)-1);//21

}
*/
/*
#include<stdio.h>
int main()
{
   const int a=100;
   const int *ptr=&a;
   printf("%d\n",*ptr);//100

   //*ptr=1; -----> error
   printf("%d\n",*ptr);

   char ch[]="welcome to ted home";
   char *ptr1=ch;

   printf("%s\n",ch);//welcome to ted home
   printf("%c\n",*ptr1);//w
   printf("%c\n",*(ptr1++ +1));//e
   printf("%c\n",*((ptr1--+5)-1)+3);//m n o (p)
   printf("%c\n",*ptr1);///w
   printf("%c\n",*(++ptr1+10)-32);//t-32 T
   printf("%c\n",*ptr1);//e
   printf("%c %c %c\n",*ptr1,*++ptr1,*--ptr1);// e e w            
}
*/
//void pointer
/*
#include<stdio.h>
int main()
{
   int *a;
   float *b;
   char *c;
   void *d;
   printf("%d %d %d %d\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d)); // 8 8 8 8

   int A=10;
   float B=20.2;
   char C='a';
   void *D=&A;
   printf("%d\n",*(int*)D); // 10
   D=&B;
   printf("%.2f\n",*(float*)D); //20.20
   D=&C;
   printf("%c\n",*(char*)D); //a 

}
*/
//null pointer in c
/*
#include<stdio.h>
int main()
{
   int *ptr1;
   printf("%d\n",ptr1);//undefined beharivor 1
   int *ptr2=NULL;
   printf("%d\n",ptr2);//0 
}
*/
//dangling pointer in c
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   //dyinamic memory allocation in heap
   int *ptr1=(int*)malloc(sizeof(int));
   *ptr1=10;
   printf("%d ",*ptr1);//10
   free(ptr1);
}
*/
//------------------------------------------------------------------------------------
//-------------------------------------------function in c-----------------------------------------------------------------------------------
//function in the use to create a user defined function like sum(),add(),sum()

//1.
/*
#include<stdio.h>
int add(int,int);
void fn();         // function declaration
void fn(int arr[]) // funtion definition
{
   for(int i=0;arr[i];i++)
   {
      arr[i]=arr[i]*2;
   }
}
int main()
{
   int arr[5]={1,2,3,4,1};
   fn(arr); // function calling
   for(int i=0;arr[i];i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
   printf("%d ",add(10,19));
}
int add(int a,int b) // function definition
{
   return a+b;
}


//2.call by value:
#include<stdio.h>
void swap(int,int);
int main()
{
   int x=10,y=20;
   swap(x,y);
   printf("%d %d",x,y); //10 20
}
void swap(int a,int b)
{
   a=20;
   b=10;
}


//3.call by Reference:
#include<stdio.h>
void swap(int*,int*);
int main()
{
   int x=10,y=20;
   swap(&x,&y);
   printf("%d %d",x,y);// 20 10
}
void swap(int *a,int *b)
{
   *a=20;
   *b=10;
}
*/
/* 4.classification of function:
      . no arugument without return type
      . no arugument with return type
      . with arugument with no return type
      . with arugument with return type

      void fn1(void);
      void fn1()
      {
         printf("Z");
      }

      char fn2(void);
      char fn2()
      {
         return 'o';
      }

      void fn3(char);
      void fn3(char ch)
      {
         printf("%c",ch);
      }

      char fn4(char);
      char fn4(char ch)
      {
         ch='h';
         return ch;
      }
*/
//---------------
//gate 1:
/*
#include<stdio.h>
int fn(int x,int y)
{
   // 5 2 ---- 12 2
   x=2*x+y; // 2*5+2 ----- 2*12+2   
   return x;// 12  ----  26
}
int main()
{
   int x=2,y=5;
   y=fn(y,x);//12
   x=fn(y,x);//26
   printf("%d\n",x);//26
   return 0;
}
*/
//-----------------
//gate 2:
/*
#include<stdio.h>
int incr(int i) // 0 1 2 3 4
{
   static int count=0;
   count=count+i; //0+0 -- 0+1 -- 1+2 -- 3+3 -- 6+4 
   return count;  // 0  --  1   --  3  --  6  -- 10  
}
int main()
{
   int i,j; 
   for(int i=0;i<=4;i++)
   {
      j=incr(i);
   }
   printf("%d ",j);//10
}
*/
//-----------------
//gate 3:
/*
#include<stdio.h>
int fn()
{
   static int num=7;
   return num--;
}
int main()
{
   //  7
   for(fn();fn();fn())  
   {
      // 7 6 
      // 3 4
      printf("%d ",fn());// 5 2
   }
}
*/
//---------------- 
//gate 4:
/*
#include<stdio.h>
void fn(int *ptr1,int j)
{
   // 5 10 -- address and value
   j=j+4;
   *ptr1=*ptr1+j;
   return;
}
int main()
{
   int i=5,j=10;
   fn(&i,j);
   printf("%d %d",i,j);// 19 10
}
*/
//-------------
//gate 5:
/*
#include<stdio.h>
void fn(int arr[])
{
   for(int i=0;arr[i];i++)
   {
      arr[i]=arr[i]*2;
   }
   return;
}
int main()
{
   int arr[]={1,2,3,4};
   fn(arr);
   for(int i=0;arr[i];i++)
   {
      printf("%d ",arr[i]);//2 4 6 8
   }
}
*/
//-----------------
//gate 6:
/*
#include<stdio.h>
void display(char str[])
{
   printf("%s",str); // lokesh
   return;
}
int main()
{
   char ch[]="lokesh";
   display(ch);
}
*/
//-----------------
//gate 7:
/*
#include<stdio.h>
void modify(char *str1,char *str2)
{
   str2[0]='-';
   return;
}
int main()
{
   char str1[]="lokesh";
   char str2[]="jayaseelan";
   modify(str1,str2);
   printf("%s%s",str1,str2);//lokesh-ayaseelan
}
*/
//----------------
//gate 8: return string from a function
/*
#include<stdio.h>
char *display1()
{
   return "lokesh";
}   
char *display2()
{
   static *str2="lokesh";
   return str2;
}
int main()
{
   char *str1;
   str1=display1();
   printf("%s",str1);//lokesh

   char *str2;
   str2=display2();
   printf("%s",str2);//lokesh
}
*/
//----------------------
//returning pointer from the function
/*
#include<stdio.h>
int *fun(int arr[])
{
   arr=arr+2;
   return arr;
}
int main()
{
   int arr[]={1,2,3,4};
   int *ptr=fun(arr);
   printf("%d",*ptr);// 3
}
*/
//----------------------
//gate 9:
/*
#include<stdio.h>
void fun(int *x,int *y)
{
   x=y;
   *x=2;
}
int i=0,j=1;
int main()
{
   fun(&i,&j);
   // 0 1
   printf("%d %d",i,j);// 0 2
}
*/
//------------------------
/*
#include<stdio.h>
int sum(int a,int b)
{
   return a+b;
}
int main()
{
   int (*ptr)(int,int)=&sum;
   int s=(*ptr)(2,29);
   printf("%d\n",s);//32
}
#include<stdio.h>
void sum(int a,int b)
{
   printf("%d\n",a+b);
}
void sub(int a,int b)
{
   printf("%d\n",b-a);
}
void display(void(*ptr)(int,int))
{
   ptr(1,1);
}
int main()
{
   display(sum);//2 
   display(sub);//0
}
*/
//----------------
//10.structure in c
//structure is user defined data type
/*
#include<stdio.h>
struct student
{
   int rollno; // 4
   char name[20];//20
   float marks;//4
}S1={2,"Lokesh",7.71f};
int main()
{
   printf("%d\n",sizeof(struct student));// 28

    printf("%d %s %.2f\n",S1.rollno,S1.name,S1.marks);// 2 Lokesh 7.71

    struct student S2={2,"lokesh",7.72f};
    printf("%d %s %.2f\n",S2.rollno,S2.name,S2.marks);//2 lokesh 7.72

    struct student S3={2,"lokesh"};
    printf("%d %s %.2f\n",S3.rollno,S3.name,S3.marks);//2 lokesh 0.00

    struct student S4=S3;
    scanf("%f",&S4.marks);
    printf("%d %s %.2f\n",S4.rollno,S4.name,S4.marks);//2 lokesh scanf input()
}
//array of structure in c
#include<stdio.h>
struct student
{
   int rollno; // 4
   char name[20];//20
   float marks;//4
};
int main()
{
   struct student s[3];
   for(int i=0;i<3;i++)
   {
      scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
   }
   for(int i=0;i<3;i++)
   {
      printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
   }
}
*/
//pointer to struct
/*
#include<stdio.h>
struct student
{
   int rollno; // 4
   char name[20];//20
   float marks;//4
};
int main()
{
   struct student S1={1,"lokesh",7.7f};
   struct student *ptr=&S1;
   printf("%d %s %f",(*ptr).rollno,ptr->name,ptr->marks);
}
*/
//--------------
//union in c
/*
#include<stdio.h>
union student
{
   int rollno; // 4
   char name; // 1
   float marks;//4
};
int main()
{
   printf("%d\n",sizeof(union student));// 4
   union student S1;
   union student *ptr1=&S1;
   S1.rollno=1;
   S1.name=97;
   S1.marks=7.77;
   printf("%d %c %.2f\n",ptr1->rollno,ptr1->name,ptr1->marks);// 2 Lokesh 7.71// union last value only allocated in max memory
   printf("%d\n",sizeof(union student));// 4
}
*/
//-----------
//typedefined structure in c use to create own data type
/*
#include<stdio.h>
typedef int lokesh;
int main()
{
   lokesh num=10;  
   printf("%d ",num);
}
*/
/*
#include<stdio.h>
typedef struct std
{
   int rollno;
   char name[20];
   float marks;
}std;
int main()
{
   std s1={10,"lokesh",7.7f};
   printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
*/
//------
//structure padding in c
/*
#include<stdio.h>
struct  fun
{
   char a[5];// 1 1 1 1 | 1 X X X | 1 1 1 1 |
   int b;    //    a    |    a    |    b
};
int main()
{
   struct fun temp1;
   printf("%d\n",sizeof(temp1));//12
}
*/
/*
#pragma pack(1)
#include<stdio.h>
struct  fun
{
   char a[5];// 1 1 1 1 | 1 X X X | 1 1 1 1 |
   int b;    //    a    |    a    |    b
};
int main()
{
   struct fun temp1;
   printf("%d\n",sizeof(temp1));//9
}
*/
/*
#include<stdio.h>
struct function
{  
   int a;
   float b;
   char c;
};
int main()
{
   struct function temp1 = {.c='a',.b=11.0,.a=7777};
   printf("%d %f %c\n",temp1.a,temp1.b,temp1.c);//7777 11.000000 a
}
*/
//-----------------------------------------
//   Dynamic Memory Allocation:
//   1.Static Memory Allocation in Compile Time
//   2.Dynamic Memory Allocation in Run Time



//1.malloc --> Memory Allocation it's allocation single block of a memory 
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b,arr[5];//fixed memory on heap size can't reassign in Static Memory Allocation 
   //main function store in stack

   int Num,*Ptr;
   scanf("%d",&Num);
   Ptr=(int*)malloc(Num*sizeof(int));
   for(int i=0;i<Num;i++)
   {
      scanf("%d",(Ptr+i));
   }
   for(int i=0;i<Num;i++)
   {
      printf("%d ",*(Ptr+i));
   }
}
*/
//2. Contiguous Allocation calloc() in c
//   used to dynamially allocate multiple blocks of memory and each block is of same size
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   //calloc(n,sizeof(int))
   //calloc(no.of.block,size each block)
   int Num,*Ptr;
   scanf("%d",&Num);
   Ptr=(int*)calloc(Num,sizeof(int));
   for(int i=0;i<Num;i++)
   {
      scanf("%d",(Ptr+i));
   }
   for(int i=0;i<Num;i++)
   {
      printf("%d ",*(Ptr+i));
   }
}
*/
//3.realloc --> reallocate in memory the size
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num1;
   scanf("%d",&num1);
   int *ptr1=(int*)malloc(num1*sizeof(int));
   for(int i=0;i<num1;i++)
   {
      scanf("%d",(ptr1+i));
   }
   for(int i=0;i<num1;i++)
   {
      printf("%d ",*(ptr1+i));
   }
   //ptr1 is last index is 1000 reallocate what every size required for your application 1000-to-1001
   int num2;
   scanf("%d",&num2); 
   int *ptr2=(int*)realloc(ptr1,num2*sizeof(int));
   for(int i=0;i<num2;i++)
   {
      scanf("%d",(ptr2+i));
   }
   for(int i=0;i<num2;i++)
   {
      printf("%d ",*(ptr2+i));
   }
} 
*/
//---------------------------------------------
//macrons
/*
#include<stdio.h>
#define Max 50
int main()
{
   printf("%d ",Max);//50
   // Max=51; error
   #define Max 59
   printf("%d ",Max);//59
}
*/
//-------------------------------------------
// enum is user defined data type
/*
#include<stdio.h>
enum ENUM{c,cpp,java};
// enum DNUM{c,cpp,java,ENUM};//error
enum DNUM{cppppp,cppp,javaa,ENUM};
int main()
{
   enum ENUM var1;
   printf("%d ",sizeof(var1));//0 1 2 this are the address return as a (4)

   enum DNUM var2;
   printf("%d ",sizeof(var2));//4
   return 0;
}
*/
//-------------------------------------
//storage class in c
/*
#include<stdio.h>
int b=56;
void fn()
{
   int b=65;
   printf("%d\n",b);
}
int main()
{
   int a=1;
   {
      int a=10;
      printf("%d\n",a);//10
   }
   {
      int a;
      printf("%d\n",a);//0
   }
   {
      printf("%d\n",a++);//1
   }
   printf("%d\n",a);//2
   fn();//65
}
*/
//-----------------
// auto storage classes in c
/*
#include<stdio.h>
// auto int x=30; this is not alload in c
int main()
{
   auto int x=10;
   {
      auto int x=20;
      printf("%d\n",x); //20
   }
   printf("%d\n",x);//10

   auto int y=10;
   {
      auto int y;
      printf("%d\n",y); // 0 (gardage value or zero)
   }
   printf("%d\n",y);//10
}
*/
//-----------------
//register storage classes in c
/*
#include<stdio.h>
int main()
{
   register int a;
   //global declaration is not allowed
   printf("%d\n",a);//garbage value or 1
   int sum=0;
   for(register int i=0;i<5;i++)
   {
      sum=sum+i;
   }
   printf("%d\n",sum);//10 
   //using register decresing the excution time 
}
*/
//-----------------------
//static: static lifetime is till the end of the program
//--------------------
//extern storage class
/*
#include<stdio.h>
void fun1()
{
   int a=2;
   a++;
   printf("%d\n",a);
}
int main()
{
   extern int a;// extern means same global declarations
   printf("%d\n",a);//10
   fun1();//3
}
int a=10;
*/
//--------------------------------
//q1.
/*
   #include<stdio.h>
   int a;
   int main()
   {
      printf("%d\n",a);//0
   }

//q2.
   #include<stdio.h>
   int fun()
   {
      static int num=16;
      return num--;
   }
   int main()
   {
      for(fun();fun();fun())
      {
         // 16  15 
         //     12  13
         //     9   10 
         //     6    7
         //     3    4
         //     0    1
         printf("%d ",fun()); // 14 11 8 5 2  
      }
   }
*/
//----------------------
//gate.11
/*
#include<stdio.h>
int a,b,c=0;
void print()
{
   static int a=2;
   int b=1;
   a+=++b;
   printf("%d %d\n",a,b);
   //               4  2 
   //               6   2
}
int main()
{
   static int a=1;
   print();// 4 2
   a+=1;
   print();// 6 2
   printf("%d %d\n",a,b);// 2 0
}
*/
//gate.12
/*
#include<stdio.h>
int a,b,c=0;
void print()
{
   auto int a=2;
   int b=1;
   a+=++b;
   printf("%d %d\n",a,b);
   //               4 2
   //               4 2
}
int main()
{
   //register lifetime is with in a block
   register int a=1;
   print();// 4 2
   a+=1;
   print();// 4 2
   printf("%d %d\n",a,b);// 2 0
}
*/
//gate.13
/*
#include<stdio.h>
int a,b,c=0;
void print()
{
   register int a=2;
   int b=1;
   a+=++b;
   printf("%d %d\n",a,b);
   //               4 2
   //               4 2
}
int main()
{
   //register lifetime is with in a block
   auto int a=1;
   print();// 4 2
   a+=1;
   print();// 4 2
   printf("%d %d\n",a,b);// 2 0
}
*/
//gate.14
/*
#include<stdio.h>
int a,b,c=0;
void print()
{
   register int a=2;
   int b=1;
   a+=++b;
   printf("%d %d\n",a,b);
   //               4 2
   //               4 2
}
int main()
{
   //register lifetime is with in a block
   register int a=1;
   print();// 4 2
   a+=1;
   print();// 4 2
   printf("%d %d\n",a,b);// 2 0
}
*/
//gate.15
/*
#include<stdio.h>
int a,b,c=0;
void print()
{
   auto int a=2;
   int b=1;
   a+=++b;
   printf("%d %d\n",a,b);
   //               4 2
   //               4 2
}
int main()
{
   //register lifetime is with in a block
   auto int a=1;
   print();// 4 2
   a+=1;
   print();// 4 2
   printf("%d %d\n",a,b);// 2 0
}
*/
//----------------------------------------------
//#define & #undef
/*
#include<stdio.h>
#define A 10
#define PI 3.14159
#define MSG "hii !!"
#define Mul(a,b) a*b
#define MAX(a,b) if(a>b)\
                    printf("a is a max");\
                  else\
                    printf("b is max");
int main()
{
   int x=A;
   printf("%d\n",x);//10
   printf("%f\n",PI);//3.14159
   printf("%s\n",MSG);//hii !!
   printf("%d\n",Mul(2,2));// 4
   printf("%d\n",Mul(5-3,7+4));
   //                5-3*7+4
   //                5-21+4
   //                -16+4
   //                 -12
   MAX(1,2);// b is max
   #undef MAX  // no semicolon
}
*/
// pre-defined macros in c
/*
#include<stdio.h>
int main()
{
   printf(" DATE: %s\n",__DATE__);//Jun  4 2024
   printf("Time %s\n",__TIME__);//18:29:06
   printf("File %s\n",__FILE__);//BEINGTO.c
   printf("Line %d\n",__LINE__);//4143
   printf("ANSI %d\n",__STDC__);// if compiler is ANSI std. or not
}
*/ 
//----------------------------------------------------------------------------------------------------------------------------------------------------
/*
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
// #include<stdio.h>
// int main()
// {
//     int i=3,j;
//     j=++i + ++i;//    6  5  4
//     printf("%d \n",j);//16
//     j=++i * ++i * ++i;
//     printf("%d \n",j);//576
// }
//------------------------------------
//compiler time error:
/*
Compiler Error Example
A compiler error occurs when the code is syntactically incorrect,
preventing the program from being compiled.
Copy code
#include <stdio.h>
int main() {
    int x = 10;
    printf("Value of x is: %d\n", x)
    return 0;
}
*/
//runtime error:
/*
A runtime error occurs when the program compiles successfully but encounters an error
during execution.
#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    printf("Accessing out-of-bounds element: %d\n", arr[5]);
    return 0;
}
*/
// #include<stdio.h>
// int main()
// {
//    int h,m,s,h1,m1,s1;
//    scanf("%d:%d:%d %d:%d:%d",&h,&m,&s,&h1,&m1,&s1);
//    int t=(h*3600)+(m*60)+s;
//    int t1=(h1*3600)+(m1*60)+s1;
//    int f=t1-t;
//    printf("%02d:%02d:%02d",(f/3600),(f%3600)/60,f%60);
// }