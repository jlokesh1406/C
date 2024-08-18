//1.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    for(int i=7;i!=0;i--)
    {
        printf("%d ",i--); 
    }
}
*/
//output: 7 5 3 1 -1 .......
//---------------------------------------------------------------------------------------------
//2.
/*
#include<stdio.h>
int main()
{
    int i=1;
    do
    {
       printf("%d\n",i++);
       if(i<15)
       {
        continue;
       }
    } while(0);
}
*/
//output: 1

//---------------------------------------------------------------------------------------------
//3.
/*
#include<stdio.h>
int main()
{
    int i=1;
    do
    {
       printf("%d\n",i++);
       if(i<15)
       {
          break;
       }
    } while(1);
}
*/
//output: 1

//---------------------------------------------------------------------------------------------
//4.
/*
#include<stdio.h>
int main()
{
    int i=1;
    do
    {
       printf("%d\n",i++);
       if(i>=15)
       {
          break;
       }
    } while(1);
}
//output: 1 2 3 4 5 6 7 8 9 10 11 12 13 14
*/

//---------------------------------------------------------------------------------------------
//5.
/*
// char *getstring as string
#include<stdio.h>                //         in java
char *getstring()                //   String getString()
{                                //   {
    char *str="lokesh";          //        String str="lokesh";
    return str;                  //        return str;
}                                //   }
int main()
{
    printf("%s ",getstring());
}
*/
//output:lokesh

//---------------------------------------------------------------------------------------------
//6.
/*
#include<stdio.h>
int main()
{
    static int i=5;
    if(--i)
    {
        main();
        printf("%d ",i);
    }
}
//output: 0 0 0 0
*/
//---------------------------------------------------------------------------------------------
//7.
/*
#include<stdio.h>
int main()
{
    static int i=5;
    printf("%d ",i);
    if(--i)
    {
        main();
    }
}
*/
//output: 5 4 3 2 1 

//---------------------------------------------------------------------------------------------

//8.
/*
#include<stdio.h>
int main()
{
    int x;
    printf("%d %d\n",scanf("%d",&x),scanf("%d",&x));
    // 1 means scanf is scanning input form the user
    // 0 means scanf is not scanning input form the user
}
*/
//output:output is depends on the user input either 1 or 0

//---------------------------------------------------------------------------------------------
//9.

// #include<stdio.h>
// int main()
// {
//     int a=10;
//     int b=20,c;
//     c=a/*hii1*/+b;
//     printf("%d /*hii2*/",c);
// }

//output:30 /*hii2*/
//explanation:compiler removes all /**/ except when it's inside quotes 

//---------------------------------------------------------------------------------------------
//10.

// #include<stdio.h>
// int main()
// {
//     for(int i=2;i!=0;i-/*hii*/-)
//     {
//         printf("%d ",i);
//     }
// }
//output:error will occur

// #include<stdio.h>
// int main()
// {
//     for(int i=2;i!=0;i-=/*hii*/-1)
//     {
//         printf("%d ",i);
//         if(i==10)
//         {
//             break;
//         }
//     }
// }
//output:2 3 4 5 6 7 8 9 10 

//---------------------------------------------------------------------------------------------
//11.
/*
#include<stdio.h>
int main()
{
    // = is higher precedence , is less precedence 
    int i;
    i=1,2,3;
    printf("%d \n",i); //1
    i=(1,2,3);
    printf("%d \n",i); //3
    i=(1,2),3;
    printf("%d \n",i); //2
    (i=1),2,3;
    printf("%d \n",i); //1
}
*/
//output:1 3 2 1

//-------------------------------------------------------------------------------------
//12.
/*
#include<stdio.h>
int main()
{
    int a=5,b=1000;
    do
    {
        b/=a;
        printf("%d ",b);
    } while (a--);
    printf("_%d_",b);
    // 200    5
    // 40     4
    // 8      3
    // 1      2
    // 0      1
    // 0      0
}
//output:0

#include<stdio.h>
int main()
{
    int a=3,b=30;
    do
    {
        b=b/a;
        printf("%d ",b);// 10 3 1 0......0
    } while (a!=0);
    
}
//output: 10 3 1 0......0
*/

//---------------------------------------------------------------------------------------------------------
//13.
/*
#define mul(a,b)a*b
#include<stdio.h>
int main()
{
    int a=2,b=23;
    printf("%d ",mul(a+2,b+2));
    // opretor precedence BODMAS
    // B->{[]},o->2^2
    //       a+2*b+2
    //       2+2*23+2
    //        2+46+2
    //          50
    printf("%d ",mul(a+2,b));
    //       a+2*b
    //       2+2*23
    //       2+46
    //       48
}
//output:50
*/

//-------------------------------------------------------------------------
//14.
/*
#include<stdio.h>
int main()
{
    short int a=65000;
    while(a++!=0);
    printf("%d \n",a);
    unsigned int b=65000;
    while(b++!=65000);
    printf("%d \n",b);
}
*/
//output:1  65001

//--------------------------------------------------------------------------------------
//15.
/*
#include<stdio.h>
int main()
{
    char str[]="lokeshj";
    char *str1=str;
    for(int i=-1;i<=3;i++)
    {
        printf("%c ",*str+3);// o o o o o 
        str1++;
    }
    printf("%c ",*str1);// h
}
*/
//output:l l l l l h
//----------------------------------------------------------------------
//16.
/*
#include<stdio.h>
int main()
{
    
        // signed char
        // char 1byte=8bits
        // 2^8=256
        // signed char =[-128,127]
        
    signed char i=0;
    for(;i>=0;i++)
    {
        printf("%d ",i);
    }
}
// output:0 to 127
*/
//----------------------------------------------------------------------------------------
//17.
/*
#include<stdio.h>
int main()
{
    char arr[]={'a','b','e'};
    char *ptr=arr; //this also same char *ptr=&arr;
    if(&ptr==&arr)
    {
        printf("same");
    }
    else
    {
        printf("not a same");
    }
    printf("\n");
    if(ptr==&arr)
    {
        printf("same");
    }
    else
    {
        printf("not a same");
    }
    printf("\n");
    if(*ptr==*arr)
    {
        printf("same");
    }
    else
    {
        printf("not a same");
    }
}
*/
//----------------------------------------------------------------------------------------
//18.
/*
#include<stdio.h>
int main()
{
    char arr1[]={1,2,3};
    char *p1=arr1;
    printf("%d ",sizeof(p1));// 1 byte equla to 8 bit
    printf("%d ",sizeof(arr1)); // 1 * 3 char to 3 byte

    printf("\n");

    int arr2[]={1,2,3};
    char *p2=arr2; 
    printf("%d ",sizeof(p2));// 1 byte equalto 8 bit
    printf("%d ",sizeof(arr2)); // 4 * 3 char to 12 byte
}
//output:8 3
*/
//----------------------------------------------------------------------------------------
//19.
/*
#include<stdio.h>
int main()
{
    int a1=1,b1=1;
    int c1=a1||--b1;   // 1
    int d1=a1--&&--b1; // 1&0==>0
    printf("%d %d %d %d \n",a1,b1,c1,d1); // 0 0 1 0

    int a2=1,b2=0;
    int c2=a2||--b2;   // 1
    int d2=a2--&&--b2; // 1&-1==>1
    printf("%d %d %d %d \n",a2,b2,c2,d2); // 0 -1 1 1
}
*/
//output:0 0 1 0
//       0-1 1 1

//----------------------------------------------------------------------------------------
//20.
/*
#include<stdio.h>
int main()
{
    int a,b=5,c=5;
    a=b==c;
    printf("%d \n",a);//1
    a=b=c;
    printf("%d %d %d\n",a,b,c);//5 5 5

    a=0;
    a+=b==c;
    printf("%d ",a);//1
    // compiler depend ouput old compiler is garbage value+1 but new compiler will be 0+1
}
//output:1 1
*/
//------------------------------------------------------------------------------------
//21.
/*
#include<stdio.h> 
int main()
{
    char arr1[]="lokesh";
    printf("%d ",sizeof(arr1));//6+1 1 means null value('\0')

    char arr2[]="\tlokesh";
    printf("%d ",sizeof(arr2));//7+1 1 means null value('\0')
}
// output:7 8
*/
//------------------------------------------------------------------------------------------------
//22.

/*
#include<stdio.h>
int main()
{
    
    //qn1
    char ch[]="lokesh++lokesh";
    //print lokesh by using arr;
    printf("%s\n",ch+7); //ch+7 to null value

    //qn2
    printf("\"Hello %% world\""); // % sum value

    printf("\n");
    printf("\\");

    printf("\n");
    printf("\\\\");  //   \\\ error
}
*/

//-------------------------------------------------------------------------------------------------
//23.
/*
#include<stdio.h>
int function(int num)
{
    if(num%2) // odd
    {
        return num++;
    }
    else
    {
        return function(function(num-1));
        //     function(function(4-1))
        //     function(function(3))
        //     function(3);
    }
}
int main()
{
    printf("odd:%d \n",function(5)); // 5
    printf("even:%d \n",function(4)); // 3
}
//output: 5 3
*/
//-----------------------------------------------------------------------------
//24. ++ -- > + - * /
/*
#include<stdio.h>
int main()
{
    int a1=1,b1=0;
    b1=++a1 + ++a1;
    // 2 + 3   ===> now a=3
    // a + a
    // 3 + 3
    printf("%d %d\n",a1,b1); // 3 6

    int a2=1,b2=0;
    b2=a2-- + ++a2;
    // 1 + 1   ===> now 0 1
    // a + a   
    // 1 + 1   ===> 2
    printf("%d %d \n",a2,b2); // 1 2


    int a3=1,b3=0;
    b3=a3++ + a3++;
    // 2 + 3   ===> now a=3
    // a + a
    // 3 + 3
    printf("%d %d\n",a3,b3); // 3 3

    int a4=1,b4=0;
    b4= a4++ + ++a4;
    // 1 + 3     ===>  2   3
    // a+a
    // 1+3
    printf("%d %d",a4,b4); // 1 4
}
*/
//-----------------------------------------------------------------------------------------
//25.
/*
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6}; // 4*6=24bytes
    int b=&a;
    int c=&a+1;
    printf("%d %d %d\n",b,c,c-b);//6487552 6487576 24

    b=&a;
    c=&a+2;
    printf("%d",c-b);
}
*/
//output:24 48

//-----------------------------------------------------------------------------------------
//26.
/*
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6}; // 4*6=24bytes
    int *ptr=(int*)(&a+1); // 24+1   // last + 1  
    printf("%d\n",*(ptr-1));
    printf("%d\n",*(ptr-2));
}
*/
//output: 6 5

//-----------------------------------------------------------------------------------------
//27.
/*
#include<stdio.h>
#define R 10
#define C 20
int main()
{
    int (*ptr1)[R][C]; // 4 byte for int  total elements 10*20=200=>200*4==>8
    printf("%d ",sizeof(*ptr1));

    int (ptr2)[R][C]; // 4 byte for int  total elements 10*20=200=>200*4==>8
    printf("%d ",sizeof(ptr2));
}
*/
//output: 800 800

//-----------------------------------------------------------------------------------------
//27.
/*
#include<stdio.h>
#define R 10
#define C 20
int main()
{
    int a=10;
    static int b=10;
    if(a==b)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
    
    // int a2=10;
    // // static int b2=a2; //  error will occur
    // if(a2==b2)
    // {
    //     printf("same");
    // }
    // else
    // {
    //     printf("not same");
    // }
}
//output: same
*/

//----------------------------------------------------------------------------------
//28.
/*
#include<stdio.h>
int main()
{
    int i=0;
    i=printf("loki "),printf("ted ");
    printf("%d \n",i); // 5

    i=0;
    i=(printf("loki"),printf("ted "));
    printf("%d \n",i); // 4

    char str[100];
    i=0;
    scanf("%s%n",str,&i);//lokesh
    printf("%d \n",i); //6
}
*/
//output:5 4

//---------------------------------------------------------------------------------
//29.
/*
#include<stdio.h>
int main()
{
    int a=0,b=2;
    int aa=(1,1,3);
    printf("%d ",aa); // 3
    for(int i=0,j=0;i<aa,j<b;i++,j++)
    {
        printf("TED \n");
    }
}
*/
//output:3
//       TED           
//       TED

//----------------------------------------------------------------------------------
//30.
/*
#include<stdio.h>
int main()
{
   // goto statement
   https://hii.com
    printf("hii");
}

//output: hii

#include<stdio.h>
int main()
{
   // goto statement
   https:                            //tedtalks.com
    printf("hii");
    goto https;
}
*/
//output: hii print infinte times

//----------------------------------------------------------------------------------
//30.
/*
#include<stdio.h>
int main()
{
    int arr[2][2]={{2,2},{1,2}};
    // arr[i][j]==j[i[arr]];
    // arr[j][i]==i[j[arr]];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",j[i[arr]]);
        }
    }
}
//output:2 2 1 2
*/
//----------------------------------------------------------------------------------
//31.
/*
    octal representation is 8 powers
    octal starting is 0
    00011=>8^1+8^0=9

#include<stdio.h>
int main()
{
    int arr[]={0011,0001,1000};
    for(int i=0;i<=2;i++)
    {
        printf("%d ",arr[i]);
    }
}
//output: 9 1 1000

*/
//-----------------------------------------------------------------------
//32.
/*
#include<stdio.h>
int main()
{
    int a=10;
    int b=-a--;
    printf("%d %d\n",a,b);// 9 -10
    a=10;
    b=-a++;
    printf("%d %d\n",a,b);// 11 -10
}
//output:9  -10
//       11 -10
*/
//-------------------------------------------------------------------------------------
//33.
/*
#include<stdio.h>
int main()
{
    int a=0;
    a=(a++)+(a++)-(a++)+(++a);
    // (0) + (1) - (2)+(4)
    //-1+4
    //3
    printf("%d \n",a);

    a=0;
    a=(a++)+(a--)-(a++)+(--a);
    // (0) + (1)-(0)-(0)
    // 1   
    printf("%d \n",a);
}
//output: 3 1
*/
//---------------------------------------------------------------------------
//34.
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = rand()%100;
    //remainder will be 0 to 99 in between
    printf("%d ",a); 

    a=rand()%1;
    printf("%d ",a); // 0
}
*/
//output: 0 to 99  0

//---------------------------------------------------------------------------
//35.
/*
#include<stdio.h>
union uu1
{
    int x,y;// 4,4
    char ch[8]// 1*8==8
}u1; // return max of data type byte
union uu2
{
    double x,y;// 8,8
    int ch[8]// 4*8==32
}u2; // return max of data type byte
struct ss
{
    int x,y;// 4,4
    char ch[8]// 1*8==8
}s; // return total byte of data type

int main()
{
    printf("%d ",sizeof(u1)); //union
    printf("%d ",sizeof(u2)); //union
    printf("%d ",sizeof(s)); //struct
    return 0;
}
*/
//output: 8 32 16
//----------------------------------------------------------------------------------------
//36.
/*
#include<stdio.h>
int main()
{
    int a=0,b=1,c=2,d;
    d=a++||b++||c++;  // 0||1||2
    printf("%d %d %d %d \n",a,b,c,d);// 1 2 2 1

    a=0;b=5;c=1;
    d=a++||b++&&c++;// 0 || 5&&1==>1
    printf("%d %d %d %d \n",a,b,c,d);// 1 6 2 1

}
*/
//---------------------------------------------------------------------------------------
//37.
/*
#include<stdio.h>
int main()
{
    //(arr+1)[2]==*(arr+1+2)==>*(arr+3)
    char ch[4]={1,2,33,4};
    char p=(ch+1)[1];
    printf("%d ",p);// arr+1+1 ==> 33

    p=(ch+0)[0];
    printf("%d ",p);// arr+1+1 ==> 1

}
*/
//output: 33 1

//--------------------------------------------------------------------------------------
//38.
/*
#include<stdio.h>
int main()
{
    printf("%m"); // sum compiler m means (success) will be printed sum compiler (m) will be printed 

    printf("\n");

    printf("%mwii%%d");// mii%%d

    printf("\n");
    printf(2+"lokesh");// kesh

    printf("\n");
    printf(0+"lokesh"); // lokesh

    return 0;
}
*/

//----------------------------------------------------------------------------------------------------------
//39.
/*
#include<stdio.h>
int main()
{
    int a=10;// 4 byte
    float b; // 4 byte
    printf("%d ",sizeof(++a+b));//4
    // sizeof(int+float)
    // sizeof(float)
    //4
    printf("%d \n",a);//10 sizeof(++a)==10 because can't refelcted on outside program

    float c=1.0; // 4 byte
    double d;   //  8 byte
    printf("%d ",sizeof(--c-d));
    // sizeof(float+double)
    // sizeof(double)
    //8
    printf("%d ",c);//1.0 sizeof(++a)==1.0 because can't refelcted on outside program
}
//output:4 10
//       8 1.0
*/

//----------------------------------------------------------------------------------------------------------
//40.

    //register variable store in cpu instead of memory
/*
#include<stdio.h>
int main()
{
    register int i;
    // scanf("%d ",&i);  error will occur
    printf("%d ",i+1); // 2

    int a;
    scanf("%d",&a);  // 10001
    printf("%d ",a); // 10001
}
//output:2 10001
*/

//-------------------------------------------------------------------------------------------------------------
//41.
/*
#include<stdio.h>
int c1=0;//global variable 
int c2=110;
int main()
{
    int a1=5,b1=10;
    {
        int a1=2;//local variable
        a1++;
        b1++;
        c1++;
    }
    printf("%d %d %d\n",a1,b1,c1);// 5 11 1

    int a2=100,b2=101;
    {
        a2=1;
        a2++;
        b2++;
    }
    printf("%d %d %d",a2,b2,c2);// 2 102 110
}
*/
//output:5 11 1
//       2 102 110

//----------------------------------------------------------------------------
//42.
/*
#include<stdio.h>
int main()
{
    int x=10;
    int *y=&x;
    int **z=&y;
    printf("%d \n",*y);
    printf("%d \n",**z);
    printf("%d \n",*(*z));
}
*/
//output:10 10 10

//----------------------------------------------------------------------------
//43.
/*
#include<stdio.h>
int main()
{
    int a=1,b=1,c=3;
    char d=1;
    if(a,b)// it's depend on the b if(b)
    {
        printf("hello");
    }
    if(a,b,c,d) //if(d)
    {
        printf(" hii");
    }
    printf("%c %d",d,d);//  emoji 1 
    if(a,!b,c,!d)
    {
        printf(" hii1");
    }
}
*/
//output:hello hii☺ 1
//---------------------------------------------------------------------------------------------
//44.
/*
#include<stdio.h>
int main()
{
    char *str="lokesh";
    printf("%c",*&*str);//*& cancel (*str);
    // printf("%c",&**str);// error

}
*/
//output:l
//---------------------------------------------------------------------------------------------
//45.
/*
#include<stdio.h>
int main()
{
    printf("%d \n",printf(" is"));//3
    if(printf("Coding")) //if(6)
        switch(printf("is"))  // switch(3)
           while(printf("ff"))   // switch case not having 2



    printf("\n");
    if(printf("\ncoding"))
        switch(printf("\n"))
            case 1:
                printf(" is fun");
}
//ouput:
//     Coding is
//     coding 
//     is fun
*/
//---------------------------------------------------------------------------------------------------------------
//46.
/*
#include<stdio.h>
int main()
{
    int x=1,y=2,z=0;
    if(x==y==z)
    {
        // 1==2==0
        //   0==0
        //     1
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
//output:Yes
*/

//---------------------------------------------------------------------------------------------------------------


//47.
/*
#include<stdio.h>
int main()
{
    int i=7;
    float j=3;
    int k=i%j; // % designed for integer only but in this error will occur
    printf("%d ",k);
}
*/
//output:error


//------------------------------------------------------------------------------------------------------------
//48.
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i=7;
    float j=3;
    int k=fmod(i,j);// for float opration 1
    printf("%d ",k);
}
*/
//------------------------------------------------------------------------------------------------------------
//49.
/*
#include<stdio.h>
int main()
{
    int arr[5]={1,1,2,3,4};
    int a,b=1;
    a=5*4+arr[--b]-(9/b);
    // []>()
    // 5*4+arr[0]-(9/0)
    // (9/0)-->floating point exception
    printf("%d ",a);
}

//output:floating point exception


#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int a,b=1;
    a=5*4+arr[b++]-(9/b);
    // 5*4+arr[1]-(9/2)
    // 5*4+2-4
    //22-4
    //18
}
//output:18
*/

//-----------------------------------------------------------------------
//50.
/*
#include<stdio.h>
int main()
{
    int a1=9;
    float x1=a1/2; // 9/4==>4.5 a is int so that 4 after assgin into x as 4.00000
    printf("%2f \n",x1);

    int a2=9;
    float x2=(float)(a2/2); // 
    printf("%.3f \n",x2);
}
4.000000 
4.500
*/
//-----------------------------------------------------------------------------------
//51.
/*
#include<stdio.h>
int  main()
{
    int x=0,k;
    while(+(+x--)!=0) 
    {
        x++;
    } 
    printf("%d ",x);//-1

    x=0;
    while(+(+x--)==0) 
    {
        x--;
    }
    printf("%d ",x);//-3
}
*/
//output:-1 -3

//--------------------------------------------------------------------------------
//52.
/*
#include<stdio.h>
int reverse1(int num)
{
    if(num>5)
    {
        exit(0);
    }
    printf("%d ",num);
    return reverse1(num++);
}
int reverse2(int num)
{
    if(num>5)
    {
        exit(0);
    }
    printf("%d ",num);
    return reverse2(++num);
}
int main()
{
    reverse1(1);
    reverse2(1);
}
//output:1 1 1 1 1 1 1 1 1 1 1 1 1 1 1.....................
//output:1 2 3 4 5 
*/
//-------------------------------------------------------------------------------------------
//53.
/*
#include<stdio.h>
int main()
{
    int a=130;
    char *ptr;   
    ptr=(char *)&a;
    printf("%d ",*ptr);// -126
}
*/
//output:-126

//------------------------------------------------------------------------------------------
//54.
/*
#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    k++;
    printf("%d ",**k);
    //**k ==> *k-->gardage value-->(*gardage value)==>run time error
}

// output:runtime error
#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    j=&i;
    j++;
    printf("%d ",*j);
    //*j ==> *j-->garbage value
}
//output:garbage value

*/
//-------------------------------------------------------------------------------------------------------
/*
//55.
#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="hello";
    char ch[10];
    strcpy(ch,"world");
    printf("%s %s",ptr,ch);
    return 0;
}
*/
//output:hello world
//-----------------------------------------------------------------------------------------------------
//56.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="hello";
    char ch[10];
    printf("%s %c",ptr,*ptr);// hello h
    *ptr="world";
    printf("%s %s",ptr,ch);//error
}
//output:hello h
//       complier error
*/
//--------------------------------------------------------------------------------------------------------
//57.
/*
#include<stdio.h>
int main()
{
    char *ptr = "lokeshjayaseelan";
    printf("%c \n",*ptr+1);//m
    printf("%c \n",*(ptr+1));//o
    printf(ptr+4);//100+4=104//shjayaseelan
    printf("\n");
    printf("%c",*&*ptr); //l
}
//output:shjayaseelan
*/
//------------------------------------------------------------------------------------------------------
//58.
/*
#include<stdio.h>
int main()
{
    int *ptr1;
    char *ptr2;
    float *ptr3;
    double *ptr4;
    printf("%d %d %d %d",sizeof(ptr1),sizeof(ptr2),sizeof(ptr3),sizeof(ptr4));
    // 4 also correct is depen on the system
}
//output:8 8 8 8
*/
//------------------------------------------------------------------------------------------------------
//59.
/*
#include<stdio.h>
struct classroom
{
    int students[7];
};
int main()
{
    struct classroom temp={1,2,3,4,5,1,2};
    int *ptr;
    ptr=(int*)&temp;
    printf("%d ",*(ptr+4));//5
}
*/
//-------------------------------------------------------------------------------------------
//60.
/*
#include<stdio.h>
int main()
{
    int a=10,b;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    b=777;
    printf("%d %d",*ptr1,*ptr2);// 10 777
}
//output:10 777
*/
//----------------------------------------------------------------------------------------------------------------
//61.
/*
#include<stdio.h>
int i=-1;
int main()
{
    while(i++==1) // -1==1
    {
        printf("loop");
    }
}
*/
//output:prints Nothing

//----------------------------------------------------------------------------------------------------------------
//62.
/*
#include<stdio.h>
int i=5;
int main()
{
    while(--i>0) // 4 3 2 1 0(exit)
    {
        printf("zoho ");
    }
}
*/
//output:zoho zoho zoho zoho

//----------------------------------------------------------------------------------------------------------------
//63.
/*
#include<stdio.h>
int main()
{
    int i=printf("%d",10);//2
    while(printf("%d",10)<5)
    {
        printf("zoho");
    }
    return 0;
}
*/
//output:infinite iterations or infinite loop

//-----------------------------------------------------------------------------------------
//64.
/*
#include<stdio.h>
int main()
{
    
    printf("%d \n",5<5);

    int i=0;
    while(i<(4,5)) //0 1 2 3 4
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
     
    i=0;
    while(i<0,0) //act as 0 false
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");

    i=0;
    while(i<0,10) // 10 is a true act as infinte loop
    {
        printf("%d ",i);
        i++;
    }
    printf("\n");
}
*/
//----------------------------------------------------------------------------------------------------------
//65.
/*
#include<stdio.h>
int main()
{
    int i=0;
    while(0,i<5)
    {
        printf("hii ");
        i++;
    }
}
*/
//output:hii hii hii hii hii
//-------------------------------------------------------------------------------------------------
//66.
/*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<3,i=0,i<5)
    {
        //0<3,i=0,0<5
        //1<3,i=0,0<5
        //2<3,i=0,0<5
        printf("loop");          
    }
}
*/
//output:print infinte times
//-------------------------------------------------------------------------------------------------------------
//67.
/*
#include<stdio.h>
#define NULL 0
int main()
{
    int i=0;
    while(i++) // 0 false
    {
        printf("loop ");
        if(i==3)
            break;
    }
    while(NULL==0)
    {
        printf("loop ");
        break;
    }
}
*/
//ouput:nothing will be printed
//ouput:loop
//-----------------------------------------------------------------------------------------------
//68.
/*
#include<stdio.h>
int main()
{
    int i=4;
    while(i==4--)
    {
        printf("loop");
    }
}
*/
//output:compiler error
//---------------------------------------------------------------------------------------
//69.
/*
#include<stdio.h>
int main()
{
    int i=1;
    while(i==1==printf("%d",5))
    {
        printf("loop ");
    }
    while(i==1==printf("%d",55))
    {
        printf("loop ");
    }
}
*/
//output:infinite loop
//output:55
//-----------------------------------------------------------------------------------------
//70.
/*
#include<stdio.h>
int main()
{
    int i;
    while(sizeof(NULL)) // sizeof(NULL)===>4
    {
        printf("loop ");
        continue;
        break;
    }
}
*/
//output:infinte loop
//-------------------------------------------------------------------------------------------------------
//71.
/*
#include<stdio.h>
int main()
{
    while(sizeof(0))// 4
    {
        printf("loop ");
        if(sizeof(0))
        {
            break;
        }
        else
        {
            break;
        }
    }
}
*/
//output:loop

//----------------------------------------------------------------------------------------------

//72.
/*
#include<stdio.h>
int main()
{
    int i=5,j=0;
    while(i-j)
    {
        printf("loop ");
    }
}
*/
// output:infinite loop


//----------------------------------------------------------------------------------------------

//73.
/*
#include<stdio.h>
int main()
{
    float temp=7.5;
    while(temp)
    {
        // 7.5 7 6.5 6 5.5
        printf("loop");
        temp=temp-0.5;
        if(temp==5.0f)
        {
            break;
        }
    }
}
*/
//output:loop loop loop loop loop
//-----------------------------------------------------------------------------------------------------------------
//74.
/*
#include<stdio.h>
int main()
{
    int i=0;
    while(;;)// error
    {
        printf("loop");
        if(i==2)
        {
            break;
        }
        i++;
    }
}
*/
//output:compilation error
//--------------------------------------------------------------------------------------------------------
//75.
/*
#include<stdio.h>
int main()
{
    while(!!7)
    {
        //  !(!7)==> !(!true) ==> !(false) ==> true
        printf("loop ");
    }
}
*/
//output:infinite loop

//------------------------------------------------------------------------------------------------------------
//76.
/*
#include<stdio.h>
int fun1(int num)
{
    if(num==4)
    {
        return num;
    }
    else
    {
        return 2*fun1(num+1);
    }
}
int fun2(int x,int y)
{
    if(x==0)
    {
        return y;
    }
    return fun2(x-1,x+y);
}
int main()
{
    printf("%d ",fun1(2));
    
    printf("%d ",fun2(3,2));
}
*/
//output:16 8
//--------------------------------------------------------------------------------------
//77.
/*
#include<stdio.h>
void fn1(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d ",n%2); // 10%2==0 -- 5%2==1 --  2%2==0 -- 1%2==1 
    fn1(n/2);  // 5 2 1 0
}
int main()
{
   fn1(10);
}
*/
//output:0 1 0 1 

//--------------------------------------------------------------------------------------
//78.
/*
#include<stdio.h>
int fun1(int num)
{
    if(num<=1)
    {
        return 1;
    }
    if(num%2==0)
    {
        return fun1(num/2);
    }
    return fun1(num/2)+fun1(num/2+1);
}
int main()
{
    printf("%d \n",fun1(11));
    return 0;
    
}
*/
//---------------------------------------------------------------------------------------------------------
//79.
/*
#include<stdio.h>
unsigned int fun(unsigned int n,unsigned int r)
{
    if(n>0)
    {
        return (n%r+fun(n/r,r));
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("%d ",fun(345,10));
}
*/
//output:12
//---------------------------------------------------------------------------------------------------------
//80.
/*
#include<stdio.h>
int fun(int n)
{
    static int i=1;
    if(n>=5)
    {
        return n; // 7
    }
    n=n+i; // 1+1=2 n=2 || 2+2 n=4|| 4+3 n=7 ||
    i++;  // i=2 || i=3 || i=4
    return fun(n);
}
int main()
{
    printf("%d ",fun(1));
}
*/
//--------------------------------------------------------------------------------------------------------------------
// geeks for geeks

//81.
/*
    #include <stdio.h>
    #define scanf  "%s Geeks For Geeks "
    main()
    {
    printf(scanf, scanf);// printf("%s Geeks For Geeks","%s Geeks For Geeks ");
    getchar();
    return 0;
    }
*/
//output://"%s Geeks For Geeks Geeks For Geeks"

//---------------------------------------------------------------------------------------------------------------------------------


//82.
/*
    #include <stdlib.h>
    #include <stdio.h>
    enum {false, true}; // true or false using much be declared
    int main()
    {
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if (i < 15)
            continue;
    } while (false);
    return 0;
    }
*/
//output: 1

//----------------------------------------------------------------------------------------------------------

//83.
/*
    #include <stdlib.h>
    #include <stdio.h>
    enum {false, true};
    int main()
    {
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if (i < 15)
        break;
        } while (true);
        return 0;
    }
*/
//output:1

//----------------------------------------------------------------------------------------------------------

//84.
/*
        #include<stdio.h>
        char *getString()
        {
        char *str = "Nice test for strings";
        return str;
        }
        int main()
        {
        printf("%s", getString());
        return 0;
        }
*/
//output:"Nice test for strings"

//--------------------------------------------------------------------------------------------------------

//85.
/*
        #include<stdio.h>
        char *getString()
        {
            char str[] = "Will I be printed?";    
            return str;
        }
        int main()
        {
            printf("%d", getString());
        }
*/
//output:garbage value

//--------------------------------------------------------------------------------------------------------------------

//86.
/*
        #include<stdio.h>
        int main()
        {
            static i=5; // 4 3 2 1 0(exit)
            if(--i){
                main();
                printf("%d ",i);
            }   
        }
*/
//output:0 0 0 0

//-------------------------------------------------------------------------------------------------------
//87.
/*
    #include<stdio.h>
    int main()
    {
        static int var = 5;
        printf("%d ",var--); // 5 4 3 2 1
        if(var) // 4 3 2 1 0(exit)
            main();                   
    }
*/
//output: 5 4 3 2 1

//-----------------------------------------------------------------------------------------------------------

//88.
/*
        #include <stdio.h>
        int main()
        {
            int i=0;
            for(i=0; i<20; i++)
            {
                switch(i)
                {
                    case 0: 
                        i+=5;
                    case 1:
                        i+=2;
                    case 5:
                        i+=5;
                    default:             
                        i+=4;
                        break;
                }
                printf("%d  ", i);
            }
            return 0;
        }
*/ 
//ex: 5+2+5+(17*4) ==> 12+68 =>80
//output:  


//-------------------------------------------------------------------------------------------------

//89.
/*
    #include <stdio.h>
    int main()
    {
        printf("%p", main);
        getchar();
        return 0;
    }
*/
//output:Address of function main.

//-------------------------------------------------------------------------------------------------

//90.
/*
        #include <stdio.h>
        int main()
        {
        printf("\new_c_question\by");
        printf("\rgeeksforgeeks ");
        printf("ooo");
        }

*/
//output:geeksforgeeks ooo


//-------------------------------------------------------------------------------------------------

//91.
/*
    #include<stdio.h>
    #include<stdlib.h>
    void fun(int *a)
    {
        a = (int*)malloc(sizeof(int));
    }
    int main()
    {
        int *p;
        fun(p);
        *p = 6;
        printf("%d\n",*p);
        
        getchar();
        return(0);
    }
*/
//output:nothing will be printed

//-------------------------------------------------------------------------------------------------

//92.
/*
    #include <stdio.h>
    int main()
    {
        int i;
        i = 1, 2, 3;         
        printf("i = %d\n", i);

        i=(1,2,3);
        printf("%d \n",i);
    }
*/
//output:1
//output:3

//----------------------------------------------------------------------------------------------------
//93.
/*
    #include‹stdio.h›
    int main()
    {
        struct site
        {
            char name[] = "GeeksforGeeks";
            int no_of_pages = 200;
        };
        struct site *ptr;
        printf("%d",ptr->no_of_pages);
        printf("%s",ptr->name); 
        getchar();
        return 0;
    }
*/
//output:compiler error

//---------------------------------------------------------------------------------------------------
//94.
/*
#include<stdio.h>
int main()
{
    char a[2][3][3] = {'g','e','e','k','s','f','o',
                           'r','g','e','e','k','s'};
    printf("%s ", *a);
    return 0;
}
*/
//output:geeksforgeeks 

//----------------------------------------------------------------------------------------------------------
//95.
/*
    #include <stdio.h>
    int fun(int n)
    {
        int i, j, sum = 0;
        for(i = 1;i<=n;i++)
            for(j=i;j<=i;j++)
                sum=sum+j;//1+2+3+4+5+6+7+8+9+10+11+12+13+14+15
        return(sum);
    }
    int main()
    {
        printf("%d", fun(15));
        getchar();
        return 0;
    }
    //output:120
*/
//----------------------------------------------------------------------------------------------------------
//95.
/*
    int main()
    {
        unsigned int i=10;
        while(i-- >= 0)
            printf("%u ",i);// 10 9 8 7 6 5 4 3 2 1 0 UNSIGNED MAX UNSIGNED MAX-1 UNSIGNED MAX-2 ........ 
        return 0;
    }
*/

//--------------------------------------------------------------------------------------------------------

//96.
/*
    int main()
    {
        int x, y = 2, z, a;
        if (x = y % 2)
            z = 2;
        a = 2;
        printf("%d %d ", z, x);
        return 0;
    }
*/
//output:0 0

//--------------------------------------------------------------------------------------------------------
//97.   
/*
#include<stdio.h> 
int main()
{
    int a[10];
    printf("%d \n",*a);
    printf("%d",*a+1-*a+3);
    return 0;
}
//output:4
*/
//--------------------------------------------------------------------------------------------------------
//98.  
/*
    int main() 
    { 
        unsigned int i=65000;  // after reach max of unsigned in then start 0
        while ( i++ != 0 ); 
        printf("%d",i); 
        return 0; 
    } 
*/
//output:1;

//------------------------------------------------------------------------------------------------
//99.
/*
    #include<stdio.h>
    int main() 
    { 
        int i=0; 
        while ( +(+i--) != 0)  
            i-=i++;
        printf("%d",i); 
        return 0; 
    } 
//output:-1
*/
//-------------------------------------------------------------------------------

//100.
/*
    #define a 10
    int main()
    {
        #define a 50
        printf("%d",a);
    }
*/
//output:50

//-------------------------------------------------------------------------------

//100.
/*
    #include<stdio.h>
    int main()
    {
        char str[] = "geeksforgeeks";
        char *s1 = str, *s2 = str;	 
        int i;
        
        for(i = 0; i < 7; i++)
        {
            printf(" %c ", *str);
            ++s1;	 
        }
        printf("\n");
        for(i = 0; i < 6; i++)
        {
            printf(" %c ", *s2);
            ++s2;	 
        }
    }
*/
/*
    output:
     g  g  g  g  g  g  g 
     g  e  e  k  s  f
*/

//-----------------------------------------------------------------------------------------------------

//101.
/*
    #include<stdio.h>
    int main()
    {
        char str[] = "geek";
        int i;
        for(i=0; str[i]; i++)
            printf("\n%c%c%c%c", str[i], *(str+i), *(i+str), i[str]);
        
        getchar();
        return 0;
    }
*/
//output:
// gggg
// eeee
// eeee
// kkkk

//-------------------------------------------------------------------------------------------------------------


//102.
/*
    #include<stdio.h>
    int main()
    {
        char *p;
        printf("%d %d ", sizeof(*p), sizeof(p));
    }
*/
//Output: Compiler dependent. I got output as “1 4”

//-------------------------------------------------------------------------------------------------------------

//103.
/*
    #include<stdio.h>
    int main()
    {
        int x = 5, p = 10;
        printf("%*d", x, p);
    }
*/
//output:  10

//-------------------------------------------------------------------------------------------------------------

//104.
/*
    #include<stdio.h>
    int main()
    {
        char arr[] = "geeksforgeeks";
        char *ptr = arr;

        while(*ptr != '\0')
            ++*ptr++;
        printf("%s ", arr);
   }
*/
//output:hffltgpshfflt 

//---------------------------------------------------------------------------------------------------------------
//105.
/*
    #include<stdio.h>
    int main()
    {
        signed char i=0;
        for(; i >= 0; i++);
        printf("%d\n", i);
        getchar();
        return 0;
    }
*/
//output:-128

//-----------------------------------------------------------------------------------------------------------------
//106.
/*
    #include<stdio.h>
    int main()
    {
        char arr[] = {1, 2, 3};
        char *p = arr;
        if(&p == (char*) &arr)
        printf("Same");
        else
        printf("Not same");
    }
//output:Not same

    
    #include<stdio.h>
    int main()
    {
        char arr[] = {1, 2, 3};
        char *p = arr;
        if(p == (char*) &arr)
        printf("Same");
        else
        printf("Not same");
    }    
//output:same
*/
//-------------------------------------------------------------------------------------------------------

//107.
/*
    #include<stdio.h>
    int x = 0;
    int f() 
    {
        return x; 
    }
    
    int g() 
    { 
        int x = 1; 
        return f(); 
    }
    int main()
    {
        printf("%d", g());//0
        printf("\n");
    }
*/
//-------------------------------------------------------------------------------------------------------------  
//108.
/*
    #include<stdio.h>
    int main() 
    {
        typedef int i;
        i a = 0; 
        printf("%d", a);
    }
*/ 
    //output:0


//-------------------------------------------------------------------------------------------------------------  
//109.
/*
#include<stdio.h>
int main()
{
    char *s1,*s2;
    printf("%d %d\n",sizeof(s1),sizeof(s2));
    printf("%d %d\n",sizeof(*s1),sizeof(*s2));
}
*/
//-------------------------------------------------------------------------------------------------------------  
//110.
/*
#include<stdio.h>
int x=100;
int main()
{
    int x=20;
    printf("%d\n",x);
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//111.
/*
#include<stdio.h>
int main()
{
    extern int i;
    i=20;
    printf("%d\n",sizeof(i));//undefined
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//112.

// #include<stdio.h>
// int i=0;
// int main()
// {
//     extern int i;
//     i=20;
//     printf("%d %d\n",sizeof(i),i);//4 20
// }
// #include<stdio.h>
// int i=0;
// int main()
// {
//     extern int i;
//     printf("%d %d\n",sizeof(i),i);//4 0
// }

//-----------------------------------------------------------------------------------------------------------------------
//113.
/*
#include<stdio.h>
int main()
{
    display();
}
void display()
{
    printf("cccc");
}
//output:implicit declaration of 'display'  declaration error
*/

//--------------------------------------------------------------------------------------------------------------
//114.
/*
#include<stdio.h>
int main()
{
    int i=4;
    switch (i)
    {
    default:
        printf("defalut");  
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
    }
}
*/
//output:defalutone

//--------------------------------------------------------------------------------------------------------------
//115.
/*
#include<stdio.h>
int main()
{
    int i=1;
    for(;;)
    {
        printf("%d",i++);
        if(i>10)
            break;
    }
}
*/
//output:12345678910
//----------------------------------------------------------------------------------------------------------
//116.
/*
#include<stdio.h>
int main()
{
    int i=1;
    while()
    {
        printf("%d",i++);
        if(i>10)
            break;
    }
}
*/
//output:error while loop is must a condition
//--------------------------------------------------------------------------------------------------
//117.
// #include<stdio.h>
// int main()
// {
//     int i=4,j=3;
//     switch (i)
//     {
//     case 4*1:
//        printf("hh");
//         break;
//     case 1:
//         printf("ii");
//     default:
//         break;
//     }
// }
//output:hh

// #include<stdio.h>
// int main()
// {
//     int i=4,j=3;
//     switch (i)
//     {
//     case j:
//        printf("hh");
//         break;
//     case 1:
//         printf("ii");
//     default:
//         break;
//     }
// }
//output:error

// #include<stdio.h>
// int main()
// {
//     int i=4,j=3;
//     switch (i)
//     {
//     }
//     printf("hii");
// }
//output:hii

// #include<stdio.h>
// int main()
// {
//     int i=1;
//     switch (i)
//     {
//         printf("hiia");
//         case 1:
//            printf("hiib");
//            break;
//         case 2:
//             printf("ii");
//             break;
//     }
// }
//output:hiib

//--------------------------------------------------------------------------------------------------
//118.
// #include<stdio.h>
// int main()
// {
//     int a=10,b;
//     a>=10?b=10:b=20;
//     printf("%d ",b);
// }
//output:error
//-----------------------------------------------------------------------------------------------
//119.
/*
#include<stdio.h>
int main()
{
    int i=1,j=0;
    printf(i==1?"hii\n":"byee\n"); // hii
    i>=5?j=0:(j=100);
    printf("%d %d\n",i,j);//1 100
}
/output:hii   1 100
*/
//------------------------------------------------------------------------------------------------------
//120
/*
#include<stdio.h>
int main()
{
    static int a[20];
    int i=0;
    a[i]=++i;
    printf("%d %d %d",a[0],a[1],i);//0 1 1
}
*/
//-----------------------------------------------------------------------------------------
//121.
/*
#include<stdio.h>
int main()
{
    int i=3;
    i=i++;
    printf("%d ",i);//3
}
*/
//-----------------------------------------------------------------------------------------
//122.
/*
#include<stdio.h>
int main()
{
    int i=1;
    printf("%d %d\n",++i,++i); // 3 3

    i=1;
    printf("%d %d\n",i++,i++); // 2 1

    i=1;
    printf("%d %d\n",++i,i++);// 3 1

    i=1;
    printf("%d %d\n",i++,++i);// 2 3


    printf("----------------\n");

    int a=1,b=0;
    b=++a + ++a;
    printf("%d %d\n",a,b);//3 6

    a=1,b=0;
    b=a++ + a++;
    printf("%d %d\n",a,b);//  3 3

    a=1,b=0;
    b=++a + a++;
    printf("%d %d\n",a,b); // 3 5

    a=1,b=0;
    b=a++ + ++a;
    printf("%d %d\n",a,b); // 3 4

    printf("------------------\n");
    a=1,b=0;
    b=(++a + ++a);
    printf("%d %d\n",a,b); 

    a=1,b=0;
    b=(a++ + a++);
    printf("%d %d\n",a,b);

    a=1,b=0;
    b=(++a + a++);
    printf("%d %d\n",a,b);

    a=1,b=0;
    b=(a++ + ++a);
    printf("%d %d\n",a,b);

     printf("------------------\n");

    printf("%d \n",-1&1); // 1
    printf("%d \n",0.7<=0.7);// 1

    float c=0.2;
    printf("%d \n",c<0.7f);//1

    float d;
    printf("%d %d\n",d,4*d);// 0 0

    printf("%d \n",sum(33,2));// 35

}
sum(int a,int b)
{
    return a+b;
}
*/
//------------------------------
//123.
/*
#include<stdio.h>
int main()
{
    int a=5,b=8;
    int x=(a++)+(++b)+(a--)+(--b);//  5+9+6+8=> 28           //a-5 b=8 
    int y=(b--)+(--a)+(++b)+(a++);//  8+4+8+4=> 24          // a-5 b=8
    printf("%d %d %d %d ",a,b,x,y);
}
*/
//----------------------------------
//124.
/*
#include<stdio.h>
int main()
{
    int a=777,b=6;
    if((b=777)==777)
    {
        printf("%d ",b); // 777
    }
}
output:777
*/
//---------------------------------
//125.
/*
#include<stdio.h>
int main()
{
    int a=77;
    static int b=0;
    b=a; //a=b-->77 77
    printf("%d %d",a,b);
}
//output:77 77
*/
//---------------------------------
//126.
/*
#include<stdio.h>
int main()
{
    int arr[5]={1};
    printf("%d %d %d",arr[0],arr[1],arr[2]);// 1 0 0
}
//output:1 0 0
*/
//---------------------------------
//127.
/*
#include<stdio.h>
int arr[10];
int main()
{
    int i=0;
    arr[i]=i++;
    arr[i]=++i;
    arr[i]=i+1;
    printf("--%d--",i);
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
}
*/
//output--2-- 0 0 3 0 0 0 0 0 0 0 
//---------------------------------
//128.
/*
#include<stdio.h>
int arr[10];
int main()
{
    int arr[2][3][2]={1,2,1,1,1,3,1,4,2,3,4,6};
    // {
    //     // {{1,2},{1,1},{1,3}}
    //     // {{1,4},{2,3},{4,6}}
    // }
    printf("%d",arr[1][1][1]);

}
*/
//output: 3
//---------------------------------
//129.
/*
#include<stdio.h>
int main()
{
    extern int a;
    printf("%d %d ",a++,++a); // 2 2
    printf("%d ",a); // 3
}
a=1;
*/
//-----------------------------
//130.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    static int a;
    // printf("%d ",++a,++a,++a);// 3
    char ch[]="lokesh" ;// 6
    int sum=0;
    for(++a;++a;++a)
    {
        if(a>=strlen(ch))
        {
            break;
        }
        printf("%c->%d\n",ch[a],(int)(ch[a]));
        sum=sum+(int)(ch[a]);
    }
    printf("%d ",sum);
}
//output:
    // k->107
    // s->115
    // 222
*/
//--------------------------------------
//131.
/*
#include<stdio.h>
int main()
{
    int *a,**b,*c;
    int i=3,j=7,k=3;
    char arr[]="welcome to zoho corp";
    c=&i;
    b=&c;
    for(int i=0;i<10;i++)
    {
        printf("%c ",arr[**b+*c]);
    }
}
//output:e e e e e e e e e e
*/
//-----------------------------------
//132.
/*
#include<stdio.h>
int main()
{
    int arr[]={1111,2111,3111,4111,5,6,7,8};
    printf("%d ",(arr+1)[2]);
}
*/
//output:4111

//------------------------------------
//133.
/*
#include<stdio.h>
int main()
{
    // printf("%d ",0%1);//1
    // printf("%d ",1%0);// error division by zero

    int count=0xA1;
    count=count+0x12;
    printf("%d ",count);//179

    while(printf(""))
    {
        if(printf("000"))
        {
            printf("hii");
            break;
        }
        else
        {
            printf("bye..");
            break;
        }
    }
    printf("dei..");

    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d"); // nothing will print
}
//output:dei
*/
//--------------------------------------
//134.
/*
#include<stdio.h>
int main()
{
    int i=2;
    switch(i)
    {
        case 1:
              printf("hii1");
        case 2:
              printf("hii2");
        case 3:
              printf("hii3");
        case 4:
              printf("hii4");
        default:
              printf("hii5");
    }
}
*/
//output:hii2hii3hii4hii5
//---------------------------------------
//135.
/*
#include<stdio.h>
int main()
{
    <math.h>	It is used to perform mathematical operations like sqrt(), log2(), pow(), etc.


        <ctype.h>	
    It contains function prototypes for functions that test characters for certain properties, and also function prototypes for 
    functions that can be used to convert uppercase letters to lowercase letters and vice versa.
    S.No	Function	Description	Return Values
    1.	isalnum()	This function identifies the alphanumeric characters	Returns 0 if the passed argument is non – alphanumeric character
    Returns non zero value if the passed argument is alphanumeric character
    2.	isalpha()	This function identifies the alphabets from other characters	Returns 0 if the passed argument is not an alphabet
    Returns non zero value if the passed argument is an alphabet
    3.	isblank()	This function identifies the blank spaces from other characters	Returns 0 if the passed argument is not a blank space
    Returns nonzero value if the passed argument is a blank space
    4.	iscntrl()	This function identifies the control characters(\n, \b, \t, \r).	Returns 0 if the passed argument is not a control character
    Returns nonzero value if the passed argument is a control character
    5.	isdigit()	This function identifies numbers in character.	Returns 0 if the passed argument is not a number
    Returns nonzero value if the passed argument is a number
    6.	islower()	This function identifies the lowercase alphabets.	Returns 0 if the passed argument is not a lowercase alphabet
    Returns nonzero value if the passed argument is a lowercase alphabet
    7.	isprint()	This function identifies the printable characters.	Returns 0 if the passed argument is a non printable character
    Returns nonzero value if the passed argument is a printable character
    8.	ispunct()	This function identifies punctuation characters (characters that are neither alphanumeric nor space).	Returns 0 if the passed argument is not a punctuation character
    Returns nonzero value if the passed argument is a punctuation character
    9.	isspace()	This function identifies white-space characters.	Returns 0 if the passed argument is not a white-space character
    Returns nonzero value if the passed argument is a white-space character
    10.	isupper()	This function identifies the uppercase alphabets.	Returns 0 if the passed argument is not an uppercase alphabet
    Returns nonzero value if the passed argument is an uppercase alphabet
    11.	isxdigit()	This function identifies the hexadecimal digit.	Returns 0 if the passed argument is not a hexadecimal digit
    Returns nonzero value if the passed argument is an hexadecimal digit
    12.	tolower()	This function converts uppercase alphabet to lowercase alphabet.	Returns lowercase alphabet of the corresponding uppercase alphabet
    13.	toupper()	This function convert lowercase alphabet to uppercase alphabet.	Returns uppercase alphabet of the corresponding lowercase alphabet

        <stdio.h>	It is used to perform input and output operations using functions like scanf(), printf(), etc.
        <setjump.h>	
        It contains standard utility functions like malloc(), realloc(), etc. It contains function prototypes for functions that allow bypassing 
            of the usual function call and return sequence.

        <string.h>	It is used to perform various functionalities related to string manipulation like strlen(), strcmp(), strcpy(), size(), etc.


        // Find the value of 9^3 using a
    // function in math.h library
    res = pow(9, 3);
    printf("Using math.h, "
           "The value is: %ld\n",
           res);
 
    // Convert a string to long long int
    // using a function in stdlib.h library
    long int a = atol(s1);
    printf("Using stdlib.h, the string");
    printf(" to long int: %ld\n", a);
 
    // Copy the string s3 into s2 using
    // using a function in string.h library
    strcpy(s2, s3);
    printf("Using string.h, the strings"
           " s2 and s3: %s %s\n",
           s2, s3);

    // Using conio.h functions
    printf("Press any key to print message \n");
    getch();  // Wait for a key press

}
*/
//---------------------------------------------------------------------------
//136.
/*
#include<stdio.h>
int main()
{
    int a=1;
    int b=1;
    int c=++a||b++;
    int d=b--&&--a;
    printf("%d %d %d %d",a,b,c,d);//1 0 1 1
}
*/
//--------------------------------------------------------------------
//137.
/*
#include<stdio.h>
int main()
{
    printf("%s ",main()); //nothing wil be print
}
*/
//---------------------------------------------------------------
//138.
/*
#include<stdio.h>
int main()
{
    int a;
    int b;
    b=(a=10,a+1212);
    printf("%d %d ",a,b);//10 1222 
}
*/
//-----------------------------------------------
//139.
/*
#include<stdio.h>
int main()
{
    // int a=1,2,3;
    // printf("%d ",a); //error

    int b;
    b=1,2,3;
    printf("%d ",b); //1
}
*/
//-----------------------------------------------

//140.
/*
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("%d %d ",sizeof(arr),sizeof(arr[0]));// 24 4
}
*/
//-----------------------------------------------
//141.
/*
#include<stdio.h>
int main()
{
    
    char a=7;
    printf("%d ",a);//7
    a=a^5;
    // 0 1 1 1
    // 0 1 0 1
    // 0 0 1 0
    printf("%d ",a); //2
    printf("%d ",printf("%d",a+3)); //51 

    printf("%d","rs"); // garrbage value
    printf("%d",printf("lokesh"));//lokesh 6
}
*/
//-------------------------------------------
//142.
/*
#include<stdio.h>
int main()
{
    
    char a=7;
    printf("%d ",a*2);//14

    char b='0';
    printf("%d ",b*2); //96
}
*/
//--------------------
//143.
/*
#include<stdio.h>
int main()
{
    int a=5,b=3;
    int c;
    c=(a<b)||(b++);
    printf("%d %d %d\n",a,b,c);// 5 4 1

    a=5,b=3;
    c=(a<b)&&(b++);
    printf("%d %d %d\n",a,b,c);// 5 3 0

    a=10,b=11;
    printf("%d \n",a+++b);//21 

    a=1,b=1;
    printf("%d \n",a+ ++b); // 3
}
*/
//-----------------------------
//143.
/*
#include<stdio.h>
union test1
{
    int x; //4 
    char ch[777]; //777
    int y;//4
    float z;//4
};
struct test2
{
    int x;
    char ch[777];
    int y;
    float z;
};
int main()
{
    printf("%d ",sizeof(union test1));// 777+(3 4bytes)
    printf("%d ",sizeof(struct test2)); 
//     /Size of x: 4 bytes
// Size of ch[777]: 777 bytes
// Padding after ch[777] to align y: 3 bytes (to make the total 784 bytes, which is a multiple of 4)
// Size of y: 4 bytes
// Size of z: 4 bytes
}
*/
//-----------------------------------------------------------------------------------------------------
//144.
/*
#include<stdio.h>
#define SQRT(X) X*X
#define A -B
#define B -C
#define C 5
int main()
{
    printf("%d ",A); //5
    
    int a=10;
    printf("%d ",SQRT(a+2)); //32
    // 10+2*10+2
    //  10+20+2
}
*/
//--------------------------------------------------------------------------
//144.
/*
#include<stdio.h>
#define max abc
#define abc 777

#define MAX 100
static int a=100;
int b=100;

#define fun(x) x*x
int main()
{
    // printf("%d ",max);// no macro name given in #define directive

    //  int MAX=1;
    // printf("%d ",MAX); // macro can't reassign

    static int a=77;
    printf("%d ",a); //77

    static int b=77;
    printf("%d ",b); //77

    int A=36/fun(6);//36 / 6 * 6
    printf("%d ",A);// 36
    printf("%d ",36/36);//1
}

*/
//-----------------------------------------
//145.
/*
#include<stdio.h>
#define isEqual(x,y) x==y
int main()
{
    #if isEqual(x,1)
        printf("Hii");
    #else
        printf("byy");
    #endif
        return 0;
}
//output:byy..
// correct code
#include <stdio.h>
#define isEqual(x, y) ((x) == (y))
int main()
{
    int x = 1; // Define x for the comparison
    if (isEqual(x, 1)) {
        printf("Hii");
    } else {
        printf("byy");
    }
    return 0;
}
// output:hii
*/
//--------------------------------
// 146.
// #include<stdio.h>
// #define X 3
// #if !X
//     printf("in");
// #else
//     printf("lok");
// #endif
// int main()
// {
//     return 0;
// }

// #include<stdio.h>
// #define str(msg) #msg
// #define fun(x,y) x##y
// int main()
// {
//     printf(str(hello));//hello
//     printf("%d ",fun(100,10));//100100
// }
//-------------------------
/*
#include<stdio.h>
int main()
{
    int a = 1>=1 && printf("HII1 \n")&&printf("Hii2 \n");
    int b = 1>1 && printf("HII3 \n")||printf("Hii4 \n");
    printf("%d \n",a);
    printf("%d \n",b);
    int c=1,d=6;
    printf("%d \n",c-- && ++d); // 1
    c=1;d=6;
    printf("%d \n",-1 && -1); // 1
    printf("%d \n",-1 && 1); // 1

    int B=printf("len of string"),0;
    printf(" %d \n",B);// 2 len of string
}
*/
//-----------------------
/*
#include<stdio.h>
int main()
{
    int a=0,b=0,c=13;
    printf("%d ",sizeof(c/=a+b)); // 4
    printf("%d ",c);//13
}
*/
/*
#include <stdio.h>
int main() {
    char str[100];
    int len = 0;

    // Read a string from the user
    printf("Enter a string: ");
    scanf("%s%n", str, &len); // %s reads the input string, %n stores the number of characters read

    // Print the string and its length
    printf("You entered: %s\n", str);
    printf("Length of the string: %d\n", len);

    return 0;
}
*/
//------------------------------------------------------
/*
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("%f\n",sqrt(2));
    printf("%f\n",pow(2,2));
    printf("%d\n",abs(num));

    printf("ceil\n");
    printf("%f\n",ceil(3.9));
    printf("%f\n",ceil(3.3));

    printf("floor\n");
    printf("%f\n",floor(3.9));
    printf("%f\n",floor(3.3));

    printf("round\n");
    printf("%f\n",round(3.9));
    printf("%f\n",round(3.3));
}
*/
//-----------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------

//1.
/*
    #include<stdio.h>
    int main()
    {
        char *a;
        int *b;
        float *c;
        printf("%d %d %d",sizeof(a),sizeof(b),sizeof(c)); // 8 8 8
    }
*/
//output:8 8 8
//------------------------------------------------------------------------------------------------------------------------
//2.
/*
    #include<stdio.h>
    int x=10;
    int main()
    {
        int x=20;
        printf("%d\n",x);//20
    }
*/
//output:20
//--------------------------------------------------------------------------------------------------------------------------
//3.
/*
    #include<stdio.h>
    int main()
    {
        int x=10;
        {
            int x=20;
            printf("%d\n",x);//20
        }
        printf("%d\n",x);//10
    }
*/
//output:20 10
//--------------------------------------------------------------------------------------------------------------------------
//4.
/*
    #include<stdio.h>
    int main()
    {
        extern int i;
        i=20;
        printf("%d %d\n",i,sizeof(i));// Error,i undefined reference
    }
*/
//output:Error,i undefined reference
//--------------------------------------------------------------------------------------------------------------------------
//5.
/*
    #include<stdio.h>
    int main()
    {
        extern int i;
        i=20;
        printf("%d %d\n",i,sizeof(i));// 20 4
    }
    int i=0;
*/
//output:20 4
//-------------------------------------------------------------------------------------------------------------------------------
//6.
/*
    #include<stdio.h>
    int main()
    {
        extern int a;
        printf("%d\n",a);//20
    }
    int a=20;
*/
    //output:20
//-------------------------------------------------------------------------------------------------------------------------------
//7.
/*
    #include<stdio.h>
    void display()
    {
        printf("hello");
    }
    int main()
    {
        display();//hello
    }
*/
    //output:hello
//-------------------------------------------------------------------------------------------------------------------------------
//8.
/*
    #include<stdio.h>
    int fun(aa)
    float aa;
    {
        return ((int)aa);
    }
    int main()
    {
        extern int fun(float);
        int a;
        a=fun(3.14);
        printf("%d\n",a);//3
    }
*/
    //output:error
//-------------------------------------------------------------------------------------------------------------------------------
//9.
/*
    #include<stdio.h>
    fun(int aa)
    {
        int bb;
        bb=aa*aa;
        return bb;
    }
    int main()
    {
        printf("%d\n",fun(3));
    }
*/
    //output:error because of undefined data type in function
//-------------------------------------------------------------------------------------------------------------------------------
//10.
/*
    #include<stdio.h>
    struct temp 
    {
        char name[20];
        int age;
    };
    fn(struct temp temp1)
    {
        printf("%s %d\n",temp1.name,temp1.age);
    }
    int main()
    {
        struct temp s1={"lokesh",20};
        fn(s1);
    }
*/
    //output:error because of undefined data type in function
//-------------------------------------------------------------------------------------------------------------------------------
//11.
/*
    #include<stdio.h>
    int main()
    {
        int arr[5]={2,4};
        printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);// 2 4 0 0 0
    }
*/
    //output:2 4 0 0 0
//-------------------------------------------------------------------------------------------------------------------------------
//12.
/*
    #include<stdio.h>
    int main()
    {
        struct std
        {
            char name[20];
            int age;
            float marks;
        };
        struct std temp={"lion"};
        printf("%s %d %f",temp.name,temp.age,temp.marks);
    }
    //output:lion 0 0.000000
*/
//-------------------------------------------------------------------------------------------------------------------------------
//13.
/*
        #include<stdio.h>
        int main()
        {
            union temp
            {
                int i;
                char name[10];
            };
            union temp temp1=512;
            printf("%d %d",temp1.name[0],temp1.name[1]);   
        }
        //output:error-invalid initializer
*/
//-------------------------------------------------------------------------------------------------------------------------------
//14.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        switch (i)
        {
            default:
                printf("hii1 ");
            case 1:
                printf("hii2 ");
                break;
            case 2:
                printf("hii3 ");
                break;
            case 3:
                printf("hii4 ");   
        }
    }
    //output:hii2
*/
//-------------------------------------------------------------------------------------------------------------------------------
//15.
/*
    #include<stdio.h>
    int main()
    {
        int i=4;
        switch (i)
        {
            default:
                printf("hii1 ");
            case 1:
                printf("hii2 ");
                break;
            case 2:
                printf("hii3 ");
                break;
            case 3:
                printf("hii4 ");   
        }
    }
    //output:hii1 hii2
*/
//-------------------------------------------------------------------------------------------------------------------------------
//16.
/*
    #include<stdio.h>
    int main()
    {
        int i=4;
        switch (i)
        {
            default:
                printf("hii1 ");
                break;
            case 1:
                printf("hii2 ");
                break;
            case 2:
                printf("hii3 ");
                break;
            case 3:
                printf("hii4 ");   
        }
    }
    //output:hii1
*/
//-------------------------------------------------------------------------------------------------------------------------------
//17.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        switch (i)
        {
            case 1:
                printf("hii1 ");
            case 2:
                printf("hii2 ");
            case 3:
                printf("hii3 ");   
            case 4:
                printf("hii4 ");
                break;
            case 5:
                printf("hii5 ");
            case 6:
                printf("hii6 ");  
        }
    }
    //output:hii1 hii2 hii3 hii4 
*/
//------------------------------------------------------------------------------------------------------------------------------------
//18.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        for(;;)
        {
            printf("%d-",i++);//1 2 3 4 5 6 7 8
            if(i>8) // 2 3 4 5 6 7 8 9
            {
                break;
            }
        }
    }
    //output:1 2 3 4 5 6 7 8
*/
//-------------------------------------------------------------------------------------------------------------------------------
//19.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        while()
        {
            printf("%d ",i++);
            if(i>8)
            {
                break;
            }

        }
    }
    //output:error because of the while should  have condition
*/
//-------------------------------------------------------------------------------------------------------------------------------
//20.
/*
        #include<stdio.h>
        int main()
        {
            int num=1;
            temp:
            if(num<=4)
            {
                printf("%d-",num++);// 1 2 3 4 
                goto temp;// 2 3 4 5
            }
        }
        //output:1 2 3 4 
*/
//-------------------------------------------------------------------------------------------------------------------------------
//21.
/*
    #include<stdio.h>
    int main()
    {
        int i=1,j=2;
        switch (i)
        {
        case 1:
            printf("hii1 ");
            break;
        case j:
            printf("hii1 ");
            break;
        default:
            break;
        }
    }
    //output:error should be value
*/
//-------------------------------------------------------------------------------------------------------------------------------
//22.
/*
    #include<stdio.h>
    int main()
    {
        int i=1,j=2;
        switch(i)
        {
        case 1:
            printf("hii1 ");
            break;
        case 1*2+1:
            printf("hii1 ");
            break;
        }
    }
    //output:hii1
*/
//-------------------------------------------------------------------------------------------------------------------------------
//23.
/*
    #include<stdio.h>
    int main()
    {
        int a=10;
        switch(a)
        {

        }
        printf("hi");
    }
    //output:hi
*/
//-------------------------------------------------------------------------------------------------------------------------------
//24.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        switch(i)
        {
            printf("hi ");
            case 1:
                printf("hi1 ");
                break;
            case 2:
                printf("hii2 ");
                break;
        }
    }
    //output:hi1
*/
//-------------------------------------------------------------------------------------------------------------------------------
//25.
/*
    #include<stdio.h>
    int main()
    {
        int a=10,b;
        a>=5?b=100:b=200;
        printf("%d",b);// error
    }
    //output:error required as left operand of assignment
*/
//-------------------------------------------------------------------------------------------------------------------------------
//26.
/*
    #include<stdio.h>
    int main()
    {
        char str[]="lokesh";
        int a=5;
        printf(a>10?"%5s+":"%.3s-",str);// lok-
        a=100;
        printf(a>10?"%5s+":"%.3s-",str);// lokesh+
    }
    //output: lok-  lokesh+
*/
//---------------------------------------------------------------------------------------------------------------------------------
//27.
/*
    #include<stdio.h>
    int main()
    {
        static int arr[20];
        int i=0;
        arr[i]=i++;
        printf("%d %d %d %d\n",i,arr[0],arr[1],arr[2]);// 1 0 0 0
    }
*/
//-------------------------------------------------------------------------------------------------------------------------------
//28.
/*
    #include<stdio.h>
    int main()
    {
        int i=1;
        i=i++;
        printf("%d ",i);//1
    }
    //output:1
*/
//-------------------------------------------------------------------------------------------------------------------------------
//29.
/*
    #include<stdio.h>
    int main()
    {
        int i=2;
        //                 5   4   3    r to l
        printf("%d %d %d \n",++i,++i,++i);// 5 5 5 

        i=2;
        //                  4   3   2 r to l
        printf("%d %d %d \n",i++,i++,i++);// 4 3 2

        i=2;
        //                 3    3
        printf("%d %d \n",i++,++i);// 3 4

        i=2;
        //                 4    2
        printf("%d %d \n",++i,i++);// 4 2

    }
    //output:1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//30.
/*
    #include<stdio.h>
    int main()
    {
        int x=10,y=20,z=30,i;
        i=x<y<z;
        printf("%d",i);//1
    }
    //output:1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//31.
/*
    #include<stdio.h>
    int main()
    {
        int i=-3,j=2,k=0,m;
        m=++i&&++j||++k;
        printf("%d %d %d %d",i,j,k,m);//-2 3 0 1
    }
    //output:-2 3 0 1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//32.
/*
    #include<stdio.h>
    int main()
    {
        int i=-3,j=2,k=0,m;
        m=++j&&++i||++k;
        printf("%d %d %d %d",i,j,k,m);//-2 3 0 1
    }
    //output:-2 3 0 1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//33.
/*
    #include<stdio.h>
    int main()
    {
        int i=-3,j=2,k=0,m;
        m=++i||++j&&++k;
        printf("%d %d %d %d",i,j,k,m);//-2 2 0 1
    }
    //output:-2 2 0 1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//34.
/*
    #include<stdio.h>
    int main()
    {
        int i=-3,j=2,k=0,m;
        m=++i&&++j&&++k;
        printf("%d %d %d %d",i,j,k,m);//-2 3 1 1
    }
    //output:-2 3 1 1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//35.
/*
    #include<stdio.h>
    int main()
    {
        float a=0.7;
        printf("%s \n",a<0.7?"C":"C++"); // C
        printf("%s \n",a<0.1?"C":"C++"); // C++
        printf("%s \n",a<0.17?"C":"C++");// C++
        printf("%s \n",a<0.91?"C":"C++");// C
        float b=0.7f;
        printf("%s \n",b<0.7f?"C":"C++"); // C++
        printf("%s \n",b<0.1f?"C":"C++"); // C++
        printf("%s \n",b<0.17f?"C":"C++");// C++
        printf("%s \n",b<0.91f?"C":"C++");// C
        float c=0.7;
        printf("%s \n",b<0.7f?"C":"C++"); // C++
        printf("%s \n",b<0.1f?"C":"C++"); // C++
        printf("%s \n",b<0.17f?"C":"C++");// C++
        printf("%s \n",b<0.91f?"C":"C++");// C
        float d=0.7f;
        printf("%s \n",b<0.7?"C":"C++"); // C
        printf("%s \n",b<0.1?"C":"C++"); // C++
        printf("%s \n",b<0.17?"C":"C++");// C++
        printf("%s \n",b<0.91?"C":"C++");// C
    }
//output:
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//36.
/*
    #include<stdio.h>
    #include<math.h>
    int main()
    {
        printf("%f\n",sqrt(36.0));
    }
    //output:6.000000
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//37.
/*
    #include<stdio.h>
    int main()
    {
        float a;
        scanf("%f",&a);// 1.0
        printf("%f\n",a+a+a);//3.000000
        printf("%f\n",3*a);//3.000000
    }
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//38.
/*
#include<stdio.h>
int main()
{
    printf("%d %d %d",sizeof(3.14f),sizeof(3.14),sizeof(3.14l));// 4 8 16
}
*/
//output:4 8 16
//-------------------------------------------------------------------------------------------------------------------------------------
//39.
/*
#include<stdio.h>
int sumdig(int n) 
{
    static int s=0;
    int d;
    if(n!=0)
    {
        //123
        //12
        //1
        d=n%10;// 3 2 1
        n=(n-d)/10;// 12 1 0 
        s=s+d;// 0+3 3+2 5+1
        sumdig(n);// 12 1 0
    }
    else
    {
        return (s); //6
    }
}
int main()
{
    int a,b;
    a=sumdig(123);//6
    b=sumdig(123);//12
    printf("%d %d",a,b);
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//40.
/*
    #include<stdio.h>
    int fun(int a,int b)
    {
        int a=1;
        printf("%d ",a)
        return a;
    }
    int main()
    {
        return 0;
    }
    //output: error:redeclaration of a
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//41.
/*
    #include<stdio.h>
    float fun(int aa,float bb)
    {
        return ((float)aa+bb);//13.14
    }
    int main()
    {
        int a;
        a=fun(10,3.14);
        printf("%d",a);//13
    }
    //output:13
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//42.
/*
    #include<stdio.h>
    void fn()
    {
        printf("hi\n");
    }
    int main()
    {
        int a=10;
        void fn();
        a=fn();
        printf("%d",a);
    }
    //output:error: void value not ignored as it ought to be
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//43.
/*
    #include<stdio.h>
    int fun(int a)
    {
        a>20?return(11):return(22);
    }
    int main()
    {
        int b=fun(20);
        printf("%d ",b);
    }
    //output: error: expected expression before 'return'
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//44.
/*
    #include<stdio.h>
    int fun1(int a,int b)
    {
        return(fun2(20));
    }
    int fun2(int a)
    {
        return (a*a);
    }
    int main()
    {
        printf("%d\n",fun1(1,1));//400
    }
    //output:400
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//45.
/*
        #include<stdio.h>
        int main()
        {
            printf("hii\n");
            main();
        }
        //output:error stack overflow 
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//46.
/*
    #include<stdio.h>
    #define SQR(X) (X*X)
    int main()
    {
        int a,b=3;
        a=SQR(b+2);
        printf("%d\n",a);
        //   SQR(3+2*3+2)
        //        3+6+2
        //          11
    }
    //output:11
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//47.
/*
    #include<stdio.h>
    #define CUBE(X) (X*X*X)
    int main()
    {
        int a,b=3;
        a=CUBE(b++);
        printf("%d\n",a);
        //   CUBE(b++*b++*b++)
        //        3++*3++*3++
        //        3*4*5
        //         60
    }
    //output:60
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//48.
/*
    #include<stdio.h>
    #define SWAP(a,b,c) (c t;t=a;a=b;b=t;)
    int main()
    {
        int x=10,y=1;
        SWAP(x,y,int);
        printf("%d %d",x,y);
    }
    //error: t undeclarated
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//49.
/*
    #include<stdio.h>
    #define CIRCUM(R) (3.14*R*R);
    int main()
    {
        float r=1.0,c;
        c=CIRCUM(r);
        printf("%f\n",c);
        if(CIRCUM(r)==6.28)
        {
            printf("Hii");
        }
    }
    //output:error macro should be without semicolon
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//50.
/*
    #include<stdio.h>
    #define CIRCUM(R) (3.14*R*R)
    int main()
    {
        float r=1.0,c;
        c=CIRCUM(r);
        printf("%f\n",c);
        if(CIRCUM(r)==6.28)
        {
            printf("Hii");
        }
    }
    //output:3.140000
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//51.
/*
    #include<stdio.h>
    #define Infinite while(1)
    int main()
    {
        Infinite
        printf("hii ");
    }
    //output: infinite time hii will be printed
*/
//---------------------------------------------------------------------------------------------------------------------------------------
//52.
/*
    #include<stdio.h>
    #define MESS Junk
    int main()
    {
        printf("MESS");
    }
    //output:MESS
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//53.
/*
    #include<stdio.h>
    #define MAX(a,b)(a>b?a:b)
    int main()
    {
        int x=MAX(123,124233);
        printf("%d ",x);
    }
    //output:124233
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//54.
/*
    #include<stdio.h>
    int main()
    {
        printf("%d",int);
    }
    //error
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//55.
/*
    #include<stdio.h>
    #define Print(int) printf("%d",int) // int act as variable
    int main()
    {
        int x=2,y=3,z=4;
        Print(x);
        Print(y);
        Print(z);
    }
    //output:2 3 4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//56.
/*
    #include<stdio.h>
    #define Print(int) printf("int=%d ",int) // int act as variable
    int main()
    {
        int x=2,y=3,z=4;
        Print(x);
        Print(y);
        Print(z);
    }
    //output:int=2 int=3 int=4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//57.
/*
    #include<stdio.h>
    int main()
    {
        printf("hii1","hii2","hii3");
    }
    //output:hii1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//58.
/*
    #include<stdio.h>
    DEBUG:x=1
    DEBUG:y=3.14
    DEBUG:ch=A
    int main()
    {
        int x=4;
        float a=3.14;
        char ch='a';
        DEBUG(x,%d);
        DEBUG(a,%d);
        DEBUG(ch,%c);
    }
    //output:error
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//59.
/*
    #include<stdio.h>
    #define str(x) #x 
    #define Xstr(x) str(x)
    #define oper multiply
    int main()
    {
        char *op=Xstr(oper);
        printf("%s ",op);
    }
    //output:multiply 
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//60.
/*
    #include<stdio.h>
    int main()
    {
        int arr[]={1,2,3,4,5,16};
        printf("%d %d %d\n",sizeof(arr),sizeof(*arr),sizeof(arr[0]));// 6*4=24 4 4
    }
    //output:24 4 4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//61.
/*
#include<stdio.h>
int main()
{
    char a[]="lokeshjaya";
    char *b="lokesh";
    printf("%d %d\n",sizeof(a),sizeof(b));// 11 8
    printf("%d %d\n",sizeof(*a),sizeof(*b));// 1 1
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//62.
/*
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    printf("%d %d\n",arr,sizeof(arr));// address 4*4=16
    printf("%d %d\n",arr,&arr);// 6487568 6487568 both are same address
    printf("%d %d\n",arr+1,&arr+1);//6487572 6487584   first one incre by 4bit and another incre bt 16bit
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//63.
/*
#include<stdio.h>
int main()
{
    char a[]="lokesh";
    char *ptr="lokesh";
    a="lokesh";
    ptr="lokesh";
    printf("%s %s",a,ptr);
}
//output: 4080:6: error: assignment to expression with array type
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//64.
/*
    #include<stdio.h>
    int main()
    {
        float arr[]={12.3,1.3,12.2,1.2};
        printf("%d\n",sizeof(arr)/sizeof(arr[0]));//4
    }
    //output:4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//65.
/*
#include<stdio.h>
int main()
{
    int arr[3][4]=
                 {
                    1,2,3,4,
                    5,6,7,8,
                    9,10,11,12
                 };
    // adrress 65472
    printf("%u %u %u",arr,arr+1,&arr+1);// 65472 65472+16 65472+32
}
//output:65472 65472+16 65472+32
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//66.
/*
#include<stdio.h>
void fun(int **ptr)
{
    printf("%d ",**ptr);
}
int main()
{
    int arr[3][4]=
                 {
                    1,2,3,4,
                    4,5,6,7,
                    1,2,3,4
                 };
    int *ptr;
    printf("%d %d ",arr[0][1],arr[2][0]);//2 1
    ptr=&arr[0][2];
    fun(&ptr);// 3
}
//output:2 1 3
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//67.
/*
    #include<stdio.h>
    int main()
    {
        printf(5+" jayaseelan");
    }
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//68.
/*
    #include<stdio.h>
    int main()
    {
        char str1[]="lokesh";
        char str2[]="lokesh";
        if(str1==str2)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }
        printf("\n");
        char *str3="lokesh";
        char *str4="lokesh";
        if(str3==str4)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }
    }
    //output:Not Equal --- Equal  
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//69.
/*
    #include<stdio.h>
    int main()
    {
        printf("%c","lokes"[2]);//k
    }
    //output:k
*/
//----------------------------------------------------------------------------------------------------------------------------------------
//70.
/*
    #include<stdio.h>
    int main()
    {
        char str[7]="lokesh";
        printf("%s",str);
    }
    //output:lokesh
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//71.
/*
    #include<stdio.h>
    int main()
    {
        char ch='a';
        printf("%d %d\n",sizeof(ch),sizeof('a'));//  1 4
        printf("%d %d %d\n",sizeof('3'),sizeof("33"),sizeof(3));// 4 3 4
    }
    //output: 1 4
    //        4 3 4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//72.
/*
    #include<stdio.h>
    #include<string.h>
    int main()
    {
        char *str1="lokesh";
        char *str2="jaya";
        char *str3;
        str3=strcat(str1,str2);
        printf("%s ",str3);
    }
    //output: Nothing will be printed
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//73.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="lokesh..!";
    char str2[40];
    strcpy(str2,str1);
    printf("%s",str2);
}
//output:lokesh..!
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//74.
/*
    #include<stdio.h>
    int main()
    {
        char *str[]={"one","two","three","four","five"};
        printf("%d %d ",sizeof(str),sizeof(str[0]));// 8*5 8
    }
    //output:40 8
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//75.
/*
    #include<stdio.h>
    int main()
    {
        int a=250;
        printf("%10d \n",a);  //250-3char ====> 10-3=7spaces
        float b=3.15529;
        printf("%6.2f \n",b); 
        printf("%6.3f \n",b); 
        printf("%5.4f \n",b); 
        printf("%1.2f \n",b); 
    }

    // output:
    //        250 
    //   3.16
    //  3.155
    // 3.1553
    // 3.16
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//76.zoho qn
/*
    #include<stdio.h>
    int main()
    {
        int i;
        for(i=0;i<4;i++)
        {
            switch(i)
            {
                case 1:
                    printf("ONE \n");
                    break;
                {
                    case 2:
                        printf("ONE \n");
                        break;
                    case 3:
                        printf("ONE \n");
                        break;
                }
            }
        }
    }
    //output:error
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//77.
/*
    #include<stdio.h>
    int main()
    {
        char str1[100]="lokesh";
        printf("%d \n",sizeof(str1));//100
        char *str2="lokeshjaya";
        printf("%d \n",sizeof(str2));//8
    }
    //output:100 8
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//78.
/*
    #include<stdio.h>
    int main()
    {
        static int i=3;
        printf("%d ",i--);// 3  2  1
        return i>0?main():0; // 2>0 1>0 return 0  
    }
    //output: 3 2 1
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//79.
/*
#include<stdio.h>
int main()
{
    char *str[]={"lokesh","vice","pencil","dog"};
    char **ptr;
    ptr=str;
    printf("%d \n",sizeof(str)); // 32
    printf("%d \n",sizeof(str[0])); // 8

    printf("%s \n",*ptr);//lokesh
    printf("%s \n",++*ptr);//okesh
    printf("%s \n",*ptr);//okesh

    printf("%s \n",*ptr++);//okesh
    printf("%s \n",*ptr);//vice

    printf("%s \n",++*ptr);//ice
    printf("%s \n",*ptr);//ice
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//80.
/*
    #include<stdio.h>
    int main()
    {
        int i,n;
        char *x="lokesh";
        n=strlen(s);
        x[n]=x[n];
        printf("%s\n",x);
        for(int i=0;i<=n;i++) 
        {
            printf("%s ",x);
            x++;
        }
        printf("\n",x);
    }
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//81.
/*
    #include<stdio.h>
    int main()
    {
        int x=20,y=35;
        x=y+++x++; 
        y=++y+++x;
        printf("%d %d",x,y);
    }
    //output:error
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//82.
/*
    #include<stdio.h>
    int main()
    {
        int x=20,y=35;
        x=y++ + x++; // 35+20 ==> 55   x=55,y=36
        y=++y + ++x; // 37+56 ==> 93     
        printf("%d %d",x,y); //  55 93
    }
    //output: 55 93
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//83.
/*
#include<stdio.h>
int main()
{
    union temp
    {
        int i;
        char ch[2];
        int t;
    };
    union temp temp1;
    temp1.i=0;
    temp1.t=100;
    temp1.ch[0]='a';
    temp1.ch[1]='A';
    printf("%c %c %d %d\n",temp1.ch[0],temp1.ch[1],temp1.i,temp1.t);
}
//output:a A 16737 16737
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//84.
/*
    #include<stdio.h>
    int main()
    {
        struct value
        {
            int bit1:1;
            int bit2:4;
            int bit3:16;
        }bit;
        printf("%d\n",sizeof(bit));
    }
    //output:4
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//85.
/*
#include<stdio.h>
int main()
{
    enum days{MON=-1,TUE,WED=6,THU,FRI,SAT};
    printf("%d %d %d %d %d %d\n",MON,TUE,WED,THU,FRI,SAT);
}
//output:-1 0 6 7 8 9
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//86.
/*
#include<stdio.h>
int main()
{
    int i=4,j=8;
    printf("%d %d %d\n", i|j&j|i, i|j&j|i , i^j); // 12 12 12
    // 0 1 0 0     1 1 0 0   1 0 0 0
    // 1 0 0 0 |   1 0 0 0   0 1 0 0
    //----------   --------  --------
    // 1 1 0 0     1 0 0 0   1 1 0 0

    //--
    // 0 1 0 0
    // 1 0 0 0 ^
    // 1 1 0 0 
}
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//87.
/*
#include<stdio.h>
int main()
{
    int a=0;
    int b=20;
    char x=1;
    char y=10;
    if(a,b,x,y)
    {
        printf("Hello..");
    }
    else
    {
        printf("Bye..");
    }
}
//output:y=10 output will be a Hello.. | y=0 output will be a Bye..
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//89.
/*
#include<stdio.h>
int main()
{
    printf("%d %d %d %d",72,072,0X72,0X72); 
    
        // 1.decimal is 72
        // 2.octal is 7x8^1 + 2x8^0 ===> 56+2 ==> 58
        // 3.hexadecimal 7x16^1 + 2x16^0 ==> 112+2 ==> 114
    
}
//output:72 58 114 114
*/

//-------------------------------------------------------------------------------------------------------------------------------------
//90.
/*
    #include<stdio.h>
    int main()
    {
        printf("%d %o %x \n",72,72,72);
        //72%8 q=9  r=0
        //9%8  q=1  r=1 
        //1&8  q=0  r=1

        //72%16  q=4 r=8
        //4%16   q=0 r=4
    }
    //output:72 110 48
*/
//-------------------------------------------------------------------------------------------------------------------------------------
//91.
/*
#include<stdio.h>
int main()
{
    char a;
    int b;
    float c;
    printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c)); 
}
//output:1 4 4
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//92.
/*
#include<stdio.h>
int main()
{
    printf("%d %d %d\n",sizeof(char),sizeof(int),sizeof(float)); 
}
//output:1 4 4
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//93.
/*
#include<stdio.h>
int main()
{
    printf("%d %d %d\n",sizeof('a'),sizeof(7),sizeof(7.0));    
}
//output:4 4 8
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//94.
/*
    #include<stdio.h>
    int main()
    {
        //char range form -128 to 127
        char ch=128;
        printf("%d %d %c\n",21474836,ch,ch);   
        ch=291;
        printf("%d %d %c\n",21474836,ch,ch);   
    }
    //output:(warning: overflow in implicit constant conversion)
    // 21474836 -128 Ç
    // 21474836 35 #
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//95.
/*
    #include<stdio.h>
    int main()
    {
        float a=5,b=2;
        int c=a%b;
        printf("%d\n",c);
    }
    //output:error invalid operands
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//96.
/*
#include<stdio.h>
int main()
{
    // 2*2/2 4/2
    long int num=300000*300000/300000;
    printf("%lu\n",num);//300000
}
//output:300000
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//97.
/*
#include<stdio.h>
int main()
{
    float a=4/2;
    printf("%f %f",a,4/2);
}
//output:2.000000 0.000000
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//98.
/*
#include<stdio.h>
int main()
{
    printf("%d,%d",sizeof(4)/sizeof(2.0),sizeof(2.0)/sizeof(4));
}
//output:0 2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//99.
/*
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",a,b);
    printf("%d %d",a,b);
}
//output:nothing will be printed
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//100.
/*
#include<stdio.h>
int main()
{
    int x=10,y=5;
    int p=x>9;  //1
    int q=x>3&&y!=3;//1
    printf("%d %d",p,q);
}
//output:1 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//101.
/*
#include<stdio.h>
int main()
{
    int a=30,b=40,x;
    x=(a!=10)&&(b=50);
    printf("%d %d %d",a,b,x);// 30 50 1
}
//output:30 50 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//102.
/*
#include<stdio.h>
int main()
{
    int x=0,y=1;
    y!=x;
    x!=y;
    printf("%d %d",x,y);// 0 1
}
//output: 0 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//103.
/*
#include<stdio.h>
int main()
{
    int x=3,y=4,z=4;
    printf("%d",(z>=y>=x?100:200));
    //           1>=x
    //           1>=3  200
}
//output:200
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//104.
/*
#include<stdio.h>
int main()
{
    float a=12.25,b=12.25;
    printf("%s \n",a==b?"EQUAL":"NOT EQUAL");//EQUAL
    a=12.25,b=12.2;
    printf("%s \n",a==b?"EQUAL":"NOT EQUAL");//NOT EQUAL
    a=12.25,b=12.95;
    printf("%s \n",a==b?"EQUAL":"NOT EQUAL");//NOT EQUAL
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//105.
/*
#include<stdio.h>
int main()
{
    printf("%s ",'Z'<'z'?"YES":"NO"); //YES
    printf("%s ","Lok"<"Lokesh"?"YES":"NO"); //YES
    printf("%s ","Lok"=="Lokesh"?"YES":"NO"); //NO
    printf("%s ","Lokesh"=="Lokesh"?"YES":"NO"); //YES
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//106.
/*
#include<stdio.h>
int main()
{
    float a=0.7;
    printf("%s \n",a<0.7?"YES":"NO"); //YES
    printf("%s \n",a<0.7f?"YES":"NO"); //NO
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//107.
/*
#include<stdio.h>
int main()
{
    int c=0,d=5,e=10,a;
    a=c>1?d>1||e>1?100:200:300;
    printf("%d\n",a);
}
//output:300
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//108.
/*
#include<stdio.h>
int main()
{
    float a=0.5,b=0.9;
     printf("%s ",a&&b>0.9?"YES":"NO"); 
}
//output:NO
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//109. 
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;printf("%d ",i));
}
//output:infinte loop 1 printed
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//110.
/*
#include<stdio.h>
int main()
{
    int i=1;
    for(;i++;)
    {
        printf("%d\n",i);
    }
}
//output:infinte loop i printed
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//111.
/*
#include<stdio.h>
int main()
{
    int x=3,y,z;
    z=y=x;
    z*=y=x*x;
    //z=z*y=x*x
    //y=9
    //z=27
    printf("%d %d %d",x,y,z);// 3
}
//output:3 9 27
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//112.
/*
#include<stdio.h>
int main()
{
    int x=3,z;
    z=x/++x; // 3/4
    printf("%d %d",x,z);
}
//output: 4 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//113.
/*
#include<stdio.h>
int main()
{
    int x,y,z;
    x=y=z=1;
    z=++x||++y&&++z;
    printf("%d %d %d",x,y,z);//2 1 1
}
//output: 2 1 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//114.
/*
#include<stdio.h>
int main()
{
    int x,y,z;
    x=y=z=1;
    z=++x&&++y||++z;
    printf("%d %d %d\n",x,y,z);// 2 2 1
}
//output: 2 2 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//115.
/*
#include<stdio.h>
int main()
{
    int i=3;
    switch(i)
    {
        case 1:
            printf("HII1 ");
        case 2:
            printf("HII2 ");
            break;
        case 3:
            continue;
        default:
            printf("Bye..");   
    }
}
//output:error: continue statement not within a loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//116.
/*
#include<stdio.h>
int main()
{
    char s=3;
    switch(s)
    {
        case '1':
            printf("HI1..");
        case '2':
            printf("HI2.");
        default:
            printf("C");
    }
}
//output:C
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//117.
/*
#include<stdio.h>
int main()
{
    int k=-2,j=4;
    switch(k/=j/k)// k/=j/k          4/-2 ==> -2   -2/-2 ==> 1     
    {
        default:
            printf("Lokesh");
        case 0:
            printf("HI0..");
        case 1:
            printf("HI1..");
        case 2:
            printf("HI2..");
    }

}
//output:HI1..HI2..
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//118.
/*
#include<stdio.h>
int main()
{
    int j,x=0;
    for(j=0;j<=5;j++)
    {
        switch(j-1)
        {
            case 0:
            case -1:
                x+=1;
                break;
            case 1:
            case 2:
            case 3:
                x+=2;
                break;
            default:
                x+=3;
        }
        printf("%d ",x);// 1 2 4 6 8 11
    }
}
//output: 1 2 4 6 8 11
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//119.
/*
#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=10;i++)
    {
        switch(i)
        {
            case 2:
              printf("0 ");
              continue;
            case 3:
              break;
            case 4:
            case 5:
              printf("1 ");
              break;
            default:
              printf("2 ");
        }
    }
}
//output:0 1 1 2 2 2 2 2 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//120.
/*
#include<stdio.h>
int main()
{
    char ch='A';
    switch(ch)
    {
        case (ch>=65 && ch<=90):
            printf("Capital Letter\n");
            break;
        case (ch>=48 && ch<=57):
            printf("Digit \n");
            break;
        default:
            printf("Other \n");
    }
}
//output:error: case label does not reduce to an integer constant
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//121.
/*
#include<stdio.h>
int main()
{
    char ch='A';
    switch(ch)
    {
        case 65 ... 96:
            printf("Capital Letter\n");
            break;
    }
}
//output:Capital Letter
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//122.
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(int j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            if(j<10)
            {
                go out;
            }
        }
        printf("This ");
        printf("Mit ");
        printf("Psg ");
        out:
        printf("this anna university");
    }
}
//output:error: unknown type name 'go'
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//123.
/*
#include<stdio.h>
int main()
{
    C()
    {
        c()
        {
            printf("hi1..");
        }
        printf("hi2..");
    }
    printf("hi3..");
}
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//124.
/*
#include<stdio.h>
int main()
{
    // printf("%d\n",sum(1,2));  error
    int sum(int a,int b)
    {
        return a+b;
    }
    printf("%d\n",sum(1,2));
}
//output:3
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//125.
/*
#include<stdio.h>
int fun(int k)
{
    k++;
    return k;
}
int main()
{
    int k=35,z;
    k=fun(k=fun(k=fun(k)));
    // fun(k=fun(k=36));
    // fun(k=fun(36));
    // fun(k=37); 
    //k=38 
    printf("%d ",k);
}
//output:38
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//126.
/*
#include<stdio.h>
void pri(int i,int a)// 99 3.14
{
    printf("%d %f\n",i,a);// 99 0.000000
    printf("%f %d\n",a,i);//0.000000 3
}
void print(float a,int i)//3.14 99
{
    printf("%f %d\n",a,i);// 3.140000 99
    printf("%d %f\n",i,a);// 99       3.140000
}
int main()
{
    float a=3.14;
    int i=99;
    pri(i,a);// 
    print(a,i);
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//127.
/*
#include<stdio.h>
int main()
{
    int k=35,*z,*y;
    z=&k;
    y=z;
    *z++=*y++;
    k++;
    printf("%d %d %d",k,z,y);// 36 address address
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//128.
/*
#include<stdio.h>
int main()
{
    int a=100,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;
    printf("%d %d %d %d",a,*b,**c,***d);
}
//output:/100 100 100 100
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//129.
/*
#include<stdio.h>
int main()
{
    int z=44;
    printf("%d ",printf("%d %d\n",z,z)); // 44S44\n
}
//output 44 44  6
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//130.
/*
#include<stdio.h>
void junk(int i,int *j)
{
    i=i*1;
    *j=*j * *j;
}
int main()
{
    int i=-5,j=-2;
    junk(i,&j);
    printf("%d %d",i,j);
}
//output:-5 4 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//131.
/*
#include<stdio.h>
int main()
{
    float a=7.999999;
    float *b,*c;
    b=&a;
    c=b;
    printf("%d %d %d \n",&a,b,c);
    printf("%d %d %d ",*(&a),*b,*c);
    printf("%f %f %f ",*(&a),*b,*c);
}
// 6487564 6487564 6487564 
// -1073741824 -1073741824 -1073741824
// 7.999999 7.999999 7.999999 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//132.
/*
#include<stdio.h>
int main()
{
    int i;
    printf("hi..");
    for(int i=1;i<=10;i++)
    {
        main();
        return 0;
    }
}
//output:infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//133.
/*
#include<stdio.h>
int main()
{
    if(printf("hi.. "))
    {
        main();
    }
}
//output:infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//134.
/*
#include<stdio.h>
int main()
{
    float a=0.7;
    double b=0.7;
    if(a==b)
    {
        printf("--Condition--");
    }
    else
    {
        printf("%f %lf",a,b);
    }
}
//output:0.700000 0.700000
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//135.
/*
#include<stdio.h>
int main()
{
    float a=0.7;
    long double b=0.7;
    if(a==b)
    {
        printf("--Condition--");
    }
    else
    {
        printf("%f %lf",a,b);
    }
}
//output: 0.700000 0.000000
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//136.
/*
#include<stdio.h>
void change()
{
    auto int i=100;
    register int j=200;
    printf("%d %d\n",i,j);
}
int main()
{
    auto int i=10;
    register int j=20;
    printf("%d %d\n",i,j);
    change();
    printf("%d %d\n",i,j);
}

// output:
// 10 20
// 100 200
// 10 20
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//137.
/*
#include<stdio.h>
int main()
{
    double x,d=4.4;
    int i=2,y;
    x=(y=d/i)*2;// x=4 y=2
    printf("%lf %d ",x,y);
    y=(x=d/i)*2;
    printf("%lf %d ",x,y);
}
//output:4.000000 2 2.200000 4 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//138.
/*
#include<stdio.h>
int main()
{
    double x,d=5.0;
    int y;
    x=d*(x=2.5/d);
    printf("%lf\n",x);//1/2 5.0*1/2
    x=d*(x=(int)2.5+1.5);//  2+1.5=>3.5 -- 5.0*.3.5
    printf("%lf %d\n",x,y);
}
//output:2.500000 17.500000 0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//139.
/*
#include<stdio.h>
int main()
{
    int c=5;
    printf("%d\n",c--);// 5 5 5...
    if(c) // 4 4 ...
    {
        main();
        return 0;
    }
}
//output: 5 5 5 .... infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//140.
/*
#include<stdio.h>
int function(int x)
{
    static int a=2;
    a--;
    return(a-x);
}
int i;
int main()
{
    int j;
    for(;;)
    {
        if(j=function(i))// 1
        {
            printf("%d\n",j);
        }
        else
        {
            break;
        }

    }
}
//output:1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//141.
/*
#include<stdio.h>
int main()
{
    long num1=2;
    short num2=2;
    signed num3=2;
    printf("%ld %d %d",num1,num2,num3);// 2 2 2
}
//output : 2 2 2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//142.
/*
#include<stdio.h>
int main()
{
    char ch=122,ch1='z';
    printf("%c\n",ch);//97+25==>122('z')
    printf("%d\n",ch1);//122
}
//output:z 122
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//143.
/*
#include<stdio.h>
int main()
{
    unsigned int a=25;
    unsigned b=25;
    long unsigned c=345L;
    long signed d=345L;
    printf("%u %u ",a,b);
    printf("%u %u ",c,d);
}
//output:25 25 345 345 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//144.
/*
#include<stdio.h>
int main()
{
    auto int i=100;
    printf("%d ",i);
    {
        i+=1;
        printf("%d ",i);
        {
            i+=1;
            printf("%d ",i);
        }
        printf("%d ",i);
    }
    printf("%d ",i);
}
//output:100 101 102 102 102 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//145.
/*
#include<stdio.h>
int main()
{
    auto int i; //same as register 1 to 100 printed
    for(i=1;i<=100;i++)
    {
        printf("%d ",i);
    }
}
//output:1 to 100 printed
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//146.
/*
#include<stdio.h>
#define CUBE(X) (X*X*X)
int main()
{
    int a;
    a=27/CUBE(3);
    // 3*3*3==>
    printf("%d \n",a); 
}
//output:1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//147.
/*
#include<stdio.h>
#define CUBE(X) (X*X*X)
int main()
{
    int a,b=4;
    a=CUBE(b++)/b++;
    // b++*b++*b++
    // 6*5*4/7
    printf("%d ",a); // 17
    printf("%d %f",120/7,120/7);
}
// output:17 17 0.000000
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//148.
/*
#include<stdio.h>
#define AND &&
#define OR ||
#define LE <=
#define GE >=
int main()
{
    char ch='D';
    if((ch GE 65 AND ch LE 90) OR (ch GE 97 AND ch LE 122))
    {
        printf("..Alpha..");
    }
    else
    {
        printf("..Nothing..");
    }
}
//output:..Alpha..
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//150.
/*
#include<stdio.h>
int main()
{
    static float arr[]={1.2,12,2.3,35};
    for(int i=0;i<4;i++)
    {
        printf("%f ",arr[i]);
    }
}
//output:1.200000 12.000000 2.300000 35.000000 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//152.
/*
#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],i;
    for(i=0;i<=5;i++)
    {
        // A-65 a-97
        arr1[i]='A'+i;
        arr2[i]='a'+i;
        printf("%d ",arr2[i]-arr1[i]);//97-65(32) -- 32 -- 32 -- 32 -- 32
    }
}
//output:32 32 32 32 32 32 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//153.
/*
#include<stdio.h>
int main()
{
    static int array1[]={10,20,30,40,50};
    for (int i = 0;array1[i]; i++)
    {
        printf("%f %d - ",i[array1],i[array1]);
    }   
}
//output:0.000000 10 - 0.000000 20 - 0.000000 30 - 0.000000 40 - 0.000000 50 - 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//154.
/*
#include<stdio.h>
int main()
{
    static int arr[5]={5,10,15,20,25};
    int i=++arr[1];
    int j=arr[1]++;
    printf("%d %d %d ",i,j,arr[1]);//11 11 12
    i=1;
    int m=arr[i++];
    printf("%d %d ",i,m);//2 12
    i=2;
    int n=arr[i++];
    printf("%d %d ",i,n);// 3 15
}
//output:11 11 12 2 12 3 15 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//155.
/*
#include<stdio.h>
int main()
{
     int arr[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        printf("%d ",*arr);
        arr++;//error
    }
}
//output:error: lvalue required as increment operand
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//156.
/*
#include<stdio.h>
int main()
{
    static int arr[]={10,20,30,40,50,60};
    int i,*k;
    k=&arr[4]-4;
    for(i=0;i<=1;i++)
    {
        printf("%d ",*k);
        k++;
    }
}
//output:10 20
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//157.
/*
#include<stdio.h>
int main()
{
    static int arr[]={2,4,6,8,10};
    for(int i=0;i<=3;i++)
    {
        *(arr+i)=arr[i]+i[arr];
        printf("%d ",*(i+arr));
    }
}
//4 8 12 16 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//158.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int *ptr;
    for(ptr=&arr[0];ptr<=&arr[2];ptr++)
    {
        printf("%d ",*ptr);
    }
}
//output:0 1 2 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//159.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int *ptr,i;
    for(ptr=&arr[0],i=0;i<=4;i++)
    {
        printf("%d ",ptr[i]);
    }
}
//output:0 1 2 3 4 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//160.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4,5};
    int *ptr,i;
    for(ptr=arr,i=0;ptr+i<=arr+4;ptr++,i++)
    {
        printf("%d ",*(ptr+i));
    }
}
//output:0 2 4 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//161.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4,5};
    int *ptr;
    for(ptr=arr+4;ptr>=arr;ptr--)
    {
        printf("%d ",*ptr);
    }
}
//4 3 2 1 0 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//162.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int *ptr,i;
    for(ptr=arr+4,i=0;i<=4;i++)
    {
        printf("%d ",ptr[-i]);
    }
}
//output:4 3 2 1 0 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//163.
/*
#include<stdio.h>
int main()
{
    int arr[]={0,1,2,3,4};
    int *ptr,i;
    for(ptr=arr+4;ptr>=arr;ptr--)
    {
        printf("%d ",arr[ptr-arr]);
    }
}
//output:4 3 2 1 0 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//164.
/*
#include<stdio.h>
int main()
{
    static int arr[]={0,1,2,3,4,5};
    static int *ptr1[]={arr,arr+1,arr+2,arr+3,arr+4};
    int **ptr2=ptr1;
    printf("%d %d\n",arr,*arr);//address 0
    printf("%d %d %d\n",ptr1,*ptr1,**ptr1);//address address 0
    printf("%d %d %d\n",ptr2,*ptr2,**ptr2);//address address 0
}
// 4206672 0
// 4206624 4206672 0
// 4206624 4206672 0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//165.
/*
#include<stdio.h>
int main()
{
    static int arr[]={0,1,2,3,4};
    static int *ptr1[]={arr,arr+1,arr+2,arr+3,arr+4,arr+5};
    for(int i=0;arr[i];i++)
    {
        printf("%d ",*ptr1[i]);//nothing will printed
        printf("%d ",*ptr1);
        ptr1++;// error
    }
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//166.
/*
#include<stdio.h>
int main()
{
    static int a[]={0,1,2,3,4,5};
    static int *p[]={a,a+1,a+2,a+3,a+4};
    int **ptr=p;
    ptr++;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);// 1 1 1
    *ptr++;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);// 2 2 2
    *++ptr;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr); // 3 3 3
    *++ptr;
    printf("%d %d %d\n",ptr-p,*ptr-a,**ptr);// 4 4 4
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//167.
/*
#include<stdio.h>
int main()
{
    static int n[3][3]={2,4,3,6,8,5,3,5,111};
    printf("%d %d %d\n",n,n[2],n[2][2]);//4206624 4206648 111
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//168.
/*
#include<stdio.h>
int main()
{
    static int arr[3][2][4]=
                         {
                            {2,4,3,6,1,6,7,9},
                            {8,2,1,1,2,3,7,3},
                            {1,6,2,4,0,7,9,5}
                         };
    printf("%d %d\n",arr[2][1][3],*(*(*(arr+2)+1)+3));
}
//output: 5 5
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//169.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="lokesh";
    printf("%d\n",*(str+strlen(str)));
}
//output:gardge value or 0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//170.
/*
#include<stdio.h>
int main()
{
    char str[20];
    static int i;
    for(;;)
    {
        i++[str]='A'+2;
        if(i==9)
        {
            break;
        }
    }
    i[str]='\0';
    printf("%s",str);
}
//output:CCCCCCCCC
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//171.
/*
#include<stdio.h>
int main()
{
    char str[]="lokesh";
    for(int i=0;str[i];i++)
    {
        printf("%c %c %c %c\n",str[i],*(str+i),i[str],*(i+str));
    }
}
//l l l l
// o o o o
// k k k k
// e e e e
// s s s s
// h h h h
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//172.
/*
#include<stdio.h>
int main()
{
    char str[]="lokesh jayaseelan";
    printf("%c\n",*(&str[2]));//h jayaseelan
    printf("%s\n",(str+5));//h
    printf("%s\n",str);//lokesh jayaseelan
    printf("%c\n",*(str+2));//k
    printf("%d\n",str);//stating address
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//173.
/*
#include<stdio.h>
int main()
{
    char *ptr1[]={"one","two","three","four"};
    char **ptr2[]={ptr1+3,ptr1,ptr1+1,ptr1};
    for(int i=0;i<4;i++)
    {
        printf("%s ",**(ptr2+i));
    }
}
//output:four one two one 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//174.
/**
#include<stdio.h>
int main()
{
    char *ptr1[]={"one","two","three","four"};
    char **ptr2[]={ptr1+3,ptr1,ptr1+1,ptr1};
    char **ptr3=ptr2;
    printf("%s\n",**++ptr3);
    printf("%s\n",*--*++ptr3+3);
    printf("%s\n",*ptr3[-2]+3);
    printf("%s\n",ptr3[-1][-1]+1);
}
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//175.
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="lokesh jayaseelan";
    char *ptr;
    int i;
    for(ptr=str,i=0;ptr+i<=str+strlen(str);ptr++,i++)
    {
        printf("%c ",*(ptr+i));
    }
}
//output:l k s   a a e l n 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//176.
/*
#include<stdio.h>
int main()
{
    char str1[]="malayalaM";
    char *str2;
    str2=str1+8;
    while(str2>=str1)
    {
        printf("%c ",*str2);
        str2--;
    }
}
//output:M a l a y a l a m 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//177.
/*
#include<stdio.h>
int main()
{
    char str[]="each undeclared identifier is reported only once";
    printf("%s\n%s\n%s\n",str,str+6,str+9);
}
// each undeclared identifier is reported only once
// ndeclared identifier is reported only once
// clared identifier is reported only once
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//178.
/*
#include<stdio.h>
int main()
{
    int arr[12];
    printf("%d\n",sizeof(arr));//12*4
}
//output:48
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//179.
/*
#include<stdio.h>
int main()
{
    struct employee
    {
        char name[25];
        int age;
        float marks;
    };
    struct employee temp;
    temp.name="lokesh";
    temp.age=18;
    printf("%s %d",temp.name,temp.age);
}
//output:error: assignment to expression with array type temp.name="lokesh";
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//180.
/*
#include<stdio.h>
int main()
{
    struct
    {
        char name[20];
        char lang[20];
    }a;
    static struct a={"lokesh","2"};
    printf("%s %s",a.name,a.lang);
}
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//181.
/*
#include<stdio.h>
int main()
{
    static char str1[]="Lokesh";
    char str2[20];
    struct word
    {
        char str3[20];
    };
    static struct word s1={"lokesh"};
    struct word s2;
    strcpy(str2,str1);
    s2=s1;
    printf("%s %s\n",s1.str3,s2.str3);
    printf("%s %s\n",str1,str2);
}
//output:lokesh lokesh
//Lokesh Lokesh
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//182.
/*
#include<stdio.h>
int main()
{
    static struct temp
    {
        char name[20];
        int age;
        struct address
        {
            char city[20];
            long int pin;
        }a;
    }e={"lokesh",30,"Lokesh",631102};
    printf("%s %s\n",e.name,e.a.city);
}
//output:lokesh Lokesh
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//183.
/*
#include<stdio.h>
int main()
{
    struct temp
    {
        char arr[10];
        int a;
        float b; 
    }e[2];
    printf("%d %d %d\n",e[0].arr,&e[0].a,&e[0].b);
    printf("%d %d %d\n",e[1].arr,&e[1].a,&e[1].b);
}
//output:
//6487536 6487548 6487552
// 6487556 6487568 6487572
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//184.
/*
#include<stdio.h>
int main()
{
    struct a
    {
        char ch[7];
        char *str;
    };
    static struct a s1={"lokesh","Lokesh"};
    printf("%c %c\n",s1.ch[0],*s1.str);
    printf("%s %s\n",s1.ch,s1.str);
}
//output:
// l L
// lokesh Lokesh
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//185.
/*
#include<stdio.h>
int main()
{
    struct s1
    {
        char *z;
        int l;
        struct s1 *p;
    };
    static struct s1 a[]=
    {
        {"lokesh",1,a+1},
        {"lokesh",2,a+2},
        {"lokesh",3,a}
    };
    struct s1 *ptr=a;
    printf("%s\n",++(ptr->z));
    printf("%s\n",a[(++ptr)->l].z);
    printf("%s\n",a[--(ptr->p->l)].z);
}
//output:
// okesh
// lokesh
// lokesh
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//186.
/*
#include<stdio.h>
int main()
{
    static char str[]="lokesh";
    printf("%s %s",str,"academy");
}
//output:lokesh academy
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//187.
/*
#include<stdio.h>
int main()
{
    printf("%20s\n","short leg");
     printf("%20s\n","long leg");
      printf("%20s\n","deep fine leg");
       printf("%20s\n","backward short leg");
        printf("%20s\n","legs all the same");
}
//            short leg
//             long leg
//        deep fine leg
//   backward short leg
//    legs all the same
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//189.
/*
#include<stdio.h>
int main()
{
    printf("Hello1\nHi1\n");
    printf("Hello2\rHi22\n");
}
//Hello1
// Hi1
// Hi22o2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//190.
/*
#include<stdio.h>
int main()
{
    printf("Hello\b\b\b\b\b");
    printf("Hi!\b\b\b\bBye\n");
    printf("I\tam\ta\tboy\n");
}
//Byelo
//I       am      a       boy
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//191.
/*
#include<stdio.h>
int main()
{
    char name[20]="lokesh";
    int salary=150;
    printf("%s %d\n",name,salary);
    fprintf(stdout,"%s %d\n",name,salary);
}
//output:
// lokesh 150
// lokesh 150
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//192.
/*
#include<stdio.h>
int main(int argc,char *argv[])
{
    printf("%d\n",argc);// 1
    printf("%s\n",argc[0]);//error
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//193.
/*
#include<stdio.h>
int main()
{
    short int i=32,j=65,k;
    k=i|35;
    printf("%d\n",k);//35
    k=~k;
    printf("%d\n",k);//-(k+1) -36
    k=i&j;
    //1 0 0 0 0 0
//  1 0 0 0 0 0 1
    printf("%d\n",k);//0
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//194.
/*
#include<stdio.h> 
void main() 
{ 
    int movie = 1; 
    switch (movie << (2 + movie)) 
    { 
        // 1*(2*2*2)
    default: 
        printf(" Traffic"); 
    case 4: 
        printf(" Sultan"); 
    case 5: 
        printf(" Dangal"); 
    case 8: 
        printf(" Bahubali"); 
    } 
} 
//output: Bahubali
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//195.
/*
#include <stdio.h> 
int main() 
{ 
    int num = 2; 
    switch (num + 2) 
    { 
    default: 
        printf("Default: "); 
    case 1: 
        printf("Case 1: "); 
    case 2: 
        printf("Case 2: "); 
    case 3: 
        printf("Case 3: "); 
    } 
    return 0; 
} 
//output:Default: Case 1: Case 2: Case 3: 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//196.
/*
#include<stdio.h> 
#define L 10 
void main() 
{ 
    auto int a = 20; 
    switch (a, a*2) 
    { 
    case L: 
        printf("ABC"); 
        break; 
  
    case L*2: 
        printf("XYZ"); 
        break; 
  
    case L*3: 
        printf("PQR"); 
        break; 
  
    default: 
        printf("MNO"); 
  
    case L*4: 
        printf("www"); 
        break; 
    } 
    printf("\n");
    a = 10; 
    switch (a, a*2) 
    { 
    case L: 
        printf("ABC"); 
        break; 
  
    case L*2: 
        printf("XYZ"); 
        break; 
  
    case L*3: 
        printf("PQR"); 
        break; 
  
    default: 
        printf("MNO"); 
  
    case L*4: 
        printf("www"); 
        break; 
    } 
} 
//output:www XYZ
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//197.
/*
#include<stdio.h> 
void main() 
{ 
    switch(2) 
    { 
    case 1L: 
        printf("No"); 
  
    case 2L: 
        printf("%s","GEEKS"); 
        goto Love; 
  
    case 3L: 
        printf("Please"); 
  
    case 4L:Love: 
        printf("FOR"); 
    } 
} 
//output:GEEKSFOR
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//198.
/*
#include<stdio.h> 
int main() 
{  
    int a[] = { 1, 2, 3, 4, 5} ; 
    int *ptr; 
    ptr = a; 
    printf(" %d ", *( ptr + 1) );// 2
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//199.
/*
#include<stdio.h> 
int main() 
{ 
	int a = 5; 
	int *ptr ; 
	ptr = &a; 
	*ptr = *ptr * 3; 
	printf("%d", a); 
	return 0; 
} 
//output:15
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//200.
/*
#include<stdio.h> 
int main() 
{ 
	int i = 6, *j; 
	j = &i; 
	printf("%d\n", i * *j * i + *j); // 6*6*6+6 ====> 
	return 0; 
} 
//output:222
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//201.
/*
#include<stdio.h> 
int main() 
{ 
	int x = 20, *y, *z; 
	// Assume address of x is 500 and 
	// integer is 4 byte size 
	y = &x; // 500
	z = y; //500
	*y++; //21
	*z++;
	x++; //501
	printf("%d %d %d \n", x, y, z); 
	return 0; 
} 
//output:x=21 y=504 z=504
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//202.
/*
#include<stdio.h> 
int main() 
{ 
	int x = 10; 
	int *y, **z; 
	y = &x; 
	z = &y; 
	printf("x = %d, y = %d, z = %d\n", x, *y, **z); // 10 10 10
	return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//203.
/*
#include <stdio.h> 
int main() 
{ 
    int i = 0, j = 0; 
    while (i<7,j<5) // 0 1 2 3 4
    { 
        i++; // 1 2 3 4 5
        j++; 
    } 
    printf("%d %d", i, j); 
} 
// output:5 5
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//204.
/*
#include <stdio.h> 
int main() 
{ 
    int i = 0, j = 0; 
    while (i<5 & j<10) // 1&1 = 1  0&1==0
    { 
        i++; 
        j++; 
    } 
    printf("%d %d", i, j); 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//205.
/*
#include<stdio.h>
int main()
{
    short i;
    for(i=1;i>0;i++)
    {
        printf("%d ",i);
    }
}
//output:Numbers will be displayed until the signed limit of short and program will successfully terminate
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//206.
/*
#include<stdio.h>
int main()
{
    short i=32768;
    i++;
    printf("%d ",i);// -32767
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//207.
/*
#include <stdio.h> 
void main() 
{ 
    int i = 0, j = 0; 
    for (i = 0; i < 5; i++)  
    { 
        for (j = 0; j < 1;) 
        { 
            break; 
        } 
        printf("GeeksQuiz "); 
    } 
} 
//output:GeeksQuiz GeeksQuiz GeeksQuiz GeeksQuiz GeeksQuiz 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//208.
/*
#include <stdio.h> 
void main() 
{ 
	double k = 0; 
	for (k = 0.0; k < 3.0; k++); 
	printf("%lf", k); //3.000000
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//209.
/*
#include<stdio.h>
int main(void)
{
    char *ptr = "Linux";
    printf("\n [%c] \n", *ptr++);
    printf("\n [%c] \n", *ptr);
    return 0;
}
//output: L i
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//210.
/*
#include<stdio.h>
int main()
{
	int i;
	char ch[] = {'a','b','c'};
    //            97 98   99
	char *ptr, *str1;
	ptr = ch;
	str1 = ch;
	i = (*ptr-- + ++*str1) - 10;// 97+98 ==> 195 ==>185
	printf("%d", i);
	return 0;
}
//output:185
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//211.
/*
#include <stdio.h>
int main()
{
		int num1 = 5;
		int num2 = 3;
		int num3 = 2;
		num1 = num2++;
		num2 = --num3;
		printf("%d %d %d", num1, num2, num3);// 3 1 1
		return 0;
}
//output:3 1 1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//212.
/*
#include <stdio.h> 
void main() 
{ 
	while (printf("geeks")) {} 
} 
//output:infinite time geeks
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//213.
/*
#include <stdio.h> 
int main() 
{ 
    while (printf("geeks")) 
        return 0; 
} 
//output:geeks
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//214.
/*
#include <stdio.h> 
int main() 
{ 
    if (printf("geeks")) 
        switch (printf("for")) 
            while (printf("geeks")) 
                return 0; 
} 
//output:geeksfor
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//215.
/*
#include <stdio.h> 
int main() 
{ 
    if (printf("geeks") != 5) 
    { 
    } 
    else
    {
        printf("geeksforgeeks");
    } 
    return 0; 
} 
//output:geeksgeeksforgeeks
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//216.
/*
#include <stdio.h> 
#define int n = printf("geeks") 
int main() 
{ 
    int n = 10; 
    printf("%d", n); 
    return 0; 
} 
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//217.
/*
#include <stdio.h> 
int main(void) 
{ 
    int i = 40 >> 5 << 3 >> 2 << 1; 
    // 40/2*2*2*2*2 == > 40/32 ==>1
    // 1<<3  1*(2*2*2) ==> 8
    // 8>>2  8/4 ==> 2
    // 2<<1 2*2 ==>4
    printf("%d", i); 
    return 0; 
} 
//output:4
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//218.
/*
#include <stdio.h> 
int main(void) 
{ 
	int i = 10 > 9 > 7 < 8; 
    // 1>7<8
    //0<8
    //1
	printf("%d", i); 
	return 0; 
} 
//output:1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//219.
/*
#include <stdio.h> 
int main(void) 
{ 
    int x = 4, y = 4, z = 4;
    // 4==4==4
    // 1==4 
    if (x == y == z) { 
        printf("Hello"); 
    } else { 
        printf("GEEKS"); 
    } 
    return 0; 
} 
//output:GEEKS
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//220.
/*
#include <stdio.h> 
int main(void) 
{ 
	int x = 10, y = 15; 
	x ^= y ^= x ^= y; 
    //x=x^y=y^x=x^y
    // x=10 --> 1010 
    // y=15 --> 1111
    //--------------
    //x     --> 0101(5) x=5,y=15;
    //--------------
    //x=5   --> 0101
    //y=15  --> 1111
    //--------------
    //y         1010 (10) x=5,y=10
    //--------------
    //x=5   --> 0101
    //y=10  --> 1010
    //--------------
    //x         1111(15) x=15,y=10
	printf("%d %d", x, y); 
	return 0; 
} 
//output:15 10
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//221.
/*
#include <stdio.h> 
int main(void) 
{ 
    int a; 
    int i = 4; 
    a = 24 || --i; 
    printf("%d %d", a, i); 
    return 0; 
} 
//output:1 4
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//222.
/*
#include <stdio.h> 
int main() 
{ 
    int x = 2; 
    switch (x) { 
        x--; 
        switch (x) { 
        case 1: 
            printf("Hello"); 
            break; 
        case 2: 
            printf("GFG"); 
            break; 
        case 3: 
            printf("Welcome"); 
            break; 
        default: 
            printf("BYE"); 
        } 
    } 
    return (0); 
} 
//output:Nothing will printed (No Output)
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//223.
/*
#include <stdio.h> 
int main() 
{ 
    int x = 2; 
    switch (x) { 
    case 1: 
        printf("Hello1"); 
        break; 
    case 2: 
        printf("Hello2"); 
        break; 
    case 3: 
        printf("GFG"); 
        break; 
    default: 
        printf("BYE"); 
    } 
    return (0); 
} 
//ouput:Hello2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//224.
/*
#include <stdio.h> 
int main() 
{ 
    int i; 
    for (i = 1; i <= 100; i++) { 
        printf("GFG\n"); 
        if (i == 5) 
            break; 
    } 
    return (0); 
} 
//output: 5 times
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//225.
/*
#include <stdio.h> 
int main() 
{ 
    int i; 
    for (i = 1; i <= 10; i++) { 
        printf("welcome\n"); 
        continue; 
        printf("hii"); 
    } 
    return (0); 
} 
//output:print welcome 10 times
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//226.
/*
#include <stdio.h> 
int main() 
{ 
    int i; 
    for (i = 2; i = 10; i += 2) 
    { 
        printf("%d ",i);
    } 
    return (0); 
} 
//output:Infinitely
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//227.
/*
#include <stdio.h> 
int main() 
{ 
    int a; 
    int b = 1; 
    int x[5] = { 1, 2, 3, 4, 5 }; 
    a = 5 * 4 + x[--b] - (9 / b); 
    // 5 * 4 + 1 - (9 / 0);
    // 5*4+1-(9)
    //21-9
    //13 
    printf("--%d--", a); 
    return 0; 
} 
//output: Abnormal Termination because of divied by zero
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//228.
/*
#include <stdio.h> 
int main(void) 
{ 
    int a; 
    int b = 1; 
    int x[5] = { 1, 2, 3, 4, 5 }; 
    a = 5 * 4 + x[b++] - (9 / b);
    // 5*4+2-9/2
    //20+2-4
    //22-4
    //18 
    printf("%d", a); 
    return 0; 
} 
//output:18
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//229.
/*
#include <stdio.h> 
int main() 
{ 
    int a; 
    int i = 1; 
    int b = 10 * i + sizeof(--i) + 4 - 10 / i; 
    //  10 * i + 4 + 4 - 10 / i;
    //  10*1+8-10
    //10+8-10
    //18-10
    //8
    printf("%d", b); 
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//230.
/*
#include <stdio.h> 
int main() 
{ 
    int a = 9; 
    float x; 
    x = a / 2; 
    printf("%f", x); //4.000000
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//231.
/*
#include <stdio.h> 
int main(void) 
{ 
    int a = 9; 
    float x; 
    x = (float)va / 2; 
    printf("%f", x);//4.500000 
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//232.
/*
#include <stdio.h> 
int main() 
{ 
    int x, a = 0; 
    x = sizeof(a++) ? printf("Geeks for Geeks\n") : 0; 
    printf("Value of x:%d\n", x); //16
    printf("Value of a:%d", a); //0
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//233.
/*
#include <stdio.h> 
int main() 
{ 
	int x; 
	x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
	printf("Value of x:%d", x); //30
	return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//234.
/*
#include <stdio.h> 
int main() 
{ 
    int x; 
    x = 5 < 8 ? 1 != 2 < 5 == 0 ? 10 : 20 : 30; 
    printf("Value of x:%d", x); //10
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//235.
/*
#include <stdio.h>
int main() 
{ 
    int x; 
    x = 2 > 5 != 1 ? 5 < 8 && 8 > 2 ? !5 ? 10 : 20 : 30 : 40; 
    printf("Value of x:%d", x); //20
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//236.
/*
#include <stdio.h> 
int main() 
{ 
    int x; 
    x = 2 > 5 ? 1 != 2 > 5 ? 10 : 20 : 5 < 8 ? 2 != 2 > 5 ? !5 ? 30 : !1 != 1 ? 40 : 50 : 60 : 70; 
    printf("Value of x:%d", x); //40
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//237.
/*
#include <stdio.h>  
int main() 
{ 
    unsigned int x = 3; 
    while (x-- >= 0) { 
        printf("%d  ", x); 
    } 
    return 0; 
} 
//output:infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//238.
/*
#include <stdio.h>  
int main() 
{ 
    int x = 3, k; 
    while (x-- >= 0) // 3 2 1 0
    { 
        printf("%d  ", x); //2 1 0 -1    
    } 
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//239.
/*
#include <stdio.h>  
int main() 
{ 
    int x = 0, k; 
    while (+(+x--) != 0) { 
        x++; 
    } 
    printf("%d  ", x); 
    return 0; 
} 
//output:-1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//240.
/*
#include <stdio.h> 
int main() 
{ 
    int x = -10; 
    while (x++ != 0);// -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 
    printf("%d  ", x); //1
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//241.
/*
#include <stdio.h> 
int main() 
{ 
    while (1) { 
        if (printf("%d", printf("%d"))) 
            break; 
        else
            continue; 
    } 
    return 0; 
} 
//output:garbage value
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//242.
/*
#include <stdio.h> 
int main() 
{ 
    for (5; 2; 2) 
        printf("Hello\n"); 
    return 0; 
} 
//output: infinite loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//243.
/*
#include<stdio.h>
int main()
{
    static int i; 
    for (i++; ++i; i++)
    { 
        // 1 3
        // 3 5
        printf("%d ", i); //3 5
        if (i == 6) 
            break; 
    } 
    return 0; 
}
//output:infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//244.
/*
#include <stdio.h> 
int fun() 
{ 
    int static num = 10; 
    return num--; 
}  
int main() 
{ 
    for (fun(); fun(); fun()) { 
    //    10  ; 9
    //        ;  6   ; 7
    //        ;   3  ; 4
    //        ;    0  ; 1
        printf("%d ", fun());//8  5 2
    } 
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//245.
/*
#include <stdio.h> 
int main() 
{ 
    char i = 0; 
    for (; i++; printf("%d", i)); 
    printf("%d", i); 
    return 0; 
} 
//output:1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//247.
/*
#include <stdio.h>
int main() 
{ 
    int i; 
    for (i = 0; i < 0, 1; i++) // i<0,0 thing will printed
        printf("%d ", i); 
    return 0; 
} 
//output:1to infinte number will be printed
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//248.
/*
#include <iostream> 
using namespace std; 
int main() 
{ 
    printf("value is = %d", (10 ++)); 
    return 0; 
} 
//compile time error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//249.
/*
#include <stdio.h> 
int main() 
{ 
    int i = 0, j = 1, k = 2, m; 
    m = i++ || j++ || k++; 
    printf("%d %d %d %d", m, i, j, k); // 1 1 2 2
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//250.
/*
#include<stdio.h>
int main() 
{ 
    int y = 10; 
    if (y++ > 9 && y++ != 10 && y++ > 11) 
    //  10>9 && 11!=10 12>11
        printf("%d", y); 
    else
        printf("%d", y); 
    return 0; 
} 
//output:13
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//251.
/*
#include<stdio.h>
int main() 
{ 
    int i = 10; 
    i = !i > 14; 
    printf("i=%d", i); 
    return 0; 
} 
//output:0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//252.
/*
#include <stdio.h> 
int main() 
{ 
    int a = 3, b = 5, c, d; 
    c = a, b; 
    d = (a, b); 
    printf("c=%d d=%d", c, d); // 3 5
    return 0; 
} 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//253.
/*
#include<stdio.h>
int main() 
{ 
    int y = 10; 
    if (y++ > 9 && y++ != 11 && y++ > 11) 
    //  10>9 && 11!=11
        printf("%d", y); 
    else
        printf("%d", y); 
    return 0;
} 
//output:12
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//254.
/*
#include<stdio.h>
int main()
{
    int count = 0;
    for (;;) {
        if (count == 10)       // 0 1 2 3 4 5 6 7 8 9 10!
            break;
        printf("%d ", ++count);// 1 2 3 4 5 6 7 8 9 10
    }
    return 0;
}
//output:1 2 3 4 5 6 7 8 9 10 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//255.
/*
#include <stdio.h>
int main()
{
    unsigned char counter = 0;
    for (counter = 0; counter <= 255; counter++) {
        printf("%d ", counter);
    }
    return 0;
}
// output:infinte loop
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//256.
/*
#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    for (count = 0; count < 10; ++count) 
    {
        printf("#");
        if (count > 6) // 0>6 1>6 2>6 3>6 4>6 5>6 6>6 7>6(!)  
            continue;
        printf("%d ", count);
    }
    return 0;
}
//output:#0 #1 #2 #3 #4 #5 #6 # # #
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//257.
/*
#include<stdio.h>
int main()
{
    const int i=0;
    printf("%d\n", i++);
    return 0;
}
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//258.
/*
#include<stdio.h>
int main()
{
    const int c = -11;
    const int d = 34;
    printf("%d, %d\n", c, d);
    return 0;
}
//output:-11 34
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//259.
/*
#include<stdio.h>
int main()
{
    const int i=0;
    printf("%d\n", i++);
    return 0;
}
//output:error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//260.
/*
#include <stdio.h>
int main() 
{ 
    int i, j, var = 'A'; 
  
    for (i = 5; i >= 1; i--) { 
        for (j = 0; j < i; j++) 
            printf("%c ", (var + j)); 
        printf("\n"); 
    } 
    return 0; 
} 
// A B C D E 
// A B C D
// A B C
// A B
// A
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//261.
/*
#include <stdio.h>
int main() 
{ 
    int counter = 1; 
    do { 
        printf("%d, ", counter); 
        counter += 1; 
    } while (counter >= 10); 
    printf("\nAfter loop counter=%d", counter); 
    printf("\n"); 
    return 0; 
} 
//output:1 2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//262.
/*
#include <stdio.h>
int main() 
{ 
    int counter = 1; 
    while (counter >= 10) { 
        printf("%d, ", counter); 
        counter += 1; 
    } 
    printf("\nAfter loop counter=%d", counter); 
    printf("\n"); 
    return 0; 
} 
//output:1
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//263.
/*
#include <stdio.h>
int main() 
{ 
    int loopvar = 4; 
    while (printf("Hello ") && loopvar--) ;
    //5&&4 5&&3 5&&2 5&&1 5&&0 
    return 0; 
} 
//output:Hello Hello Hello Hello Hello 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//264.
/*
#include <stdio.h>
int main() 
{ 
    int counter = 1; 
    while (counter <= 10 && 1 ++) 
        printf("Hello"); 
    return 0; 
} 
//output:)compilation error
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//265.
/*
#include <stdio.h>
void main()
{
    enum status { pass,
                  fail,
                  atkt };
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = fail;
    stud3 = atkt;//atk -----> error
    printf("%d %d %d", stud1, stud2, stud3);//0 1 2
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//266.

// #include<stdio.h>
// struct geeks{
//   int i;
//   char c;
// } obj;
// int main()
// {
//   printf("%d", sizeof(obj));// 4byte 8bit
// }
//output:8

//------------------------------------------------------------------------------------------------------------------------------------------------
//267.
/*
#include<stdio.h>
int main(){
 
  char a = 0;
  short int b = 0;
  printf("%d %d %d",sizeof(b),sizeof(a+b),sizeof(b) == sizeof(a+b));
  return 0;
}
//output:2 4 0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//268.
/*
#include<stdio.h>
int main()
{
  char a = ' '*13; // ' ' --> 32
  //32*13 ==> 416%256 == 160 ==> 160-256 ==> -96
  printf("%d", a);//-96
  return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//269.
/*
#include<stdio.h>
int main()
{
  int i = 3;
  printf("%d", (((i >= i) << i) >> i) < i);
  //              1<<3>>3 <=16
  //             8>>3 <=i
  //     8/2^3
  //     1<=3
  return 0;
}
//output:3
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//270.
/*
#include<stdio.h>
int main()
{
  int i = 0;
  int ans = i++ + ++i; // 0+2
  printf("%d ", ans);
  return 0;
}
//output:2
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//271.
/*
#include <stdio.h>
int var = 20;
int main()
{
    int var = var;
    printf(\"%d \", var);
    return 0;
}
//output:compile time erro
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//271.
/*
#include <stdio.h>
int var = 20;
int main()
{
    int var = var;
    printf("%d ", var);
    return 0;
}
//output:0
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//272.
/*
#include <stdio.h>
extern int var;
int main()
{
    var = 10;
    printf("%d ", var);
    return 0;
}
//output:Compiler Error: var is not defined
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//273.
/*
int main()
{
  {
      int var = 10;
  }
  {
      printf(" %d ", var);  
  }
  return 0;
}
//output:Compiler Error: var is not defined
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//274.
/*
int main()
{
  {
      int var = 10;
  }
  {
      printf(" %d \", var);  //error
  }
  return 0;
}
//output:Compiler Error: var is not defined
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//275.
/*
#include <stdio.h>
int main()
{
  int x = 1, y = 2, z = 3;
  printf(" %d,  %d, %d ", x, y, z); // 1 2 3
  {
       int x = 10;
       float y = 20;
       printf(" %d, %f, %d ", x, y, z); // 10 20.000000 3
       {
             int z = 100;
             printf(" %d,  %f, %d ", x, y, z);// 10 20.000000 100
       }
  }
  return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//276.
/*
//#include \"stdio.h\"  -----> error
#include<stdio.h>
int * gPtr;
int main()
{
    int * lPtr = NULL;
    if(gPtr == lPtr)
    {
        printf("Equal!");
    }
    else
    {
        printf("Not Equal");
    }
}
//output:Equal!
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//277.
/*
#include<stdio.h>
int * gPtr;
int main()
{
    int *ptr;
    printf("%s %d",ptr,ptr); // nothing will be printed
    printf("%s %d",gPtr,gPtr); //(null) 0
}
//output:Equal!
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//278.
/*
#include <stdio.h>
int main()
{
    int i;
    for ( i=0; i<5; i++ )
    {
        int i = 10;
        printf ("%d ", i );
        i++;
    }
}
//output:10 10 10 10 10
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//279.
/*
#include<stdio.h> 
int  main() 
{ 
   unsigned int x = -1; 
   int y = ~0; 
   if (x == y) 
      printf("same"); 
   else
      printf("not same"); 
   return 0; 
}
//output:same
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//280.
/*
#include <stdio.h>
int main()
{
    char a = 012;
    printf("%d", a);
    //       1*8+2*1
    return 0;
}
//output:10
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//281.
/*
#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d %d %d ", i++, i++, i++);//       7  6  5
    i = 5;
    printf("%d %d %d ", ++i, ++i, ++i);//       8  7 6   // 8 8 8
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//282.
/*
#include <stdio.h>
int main()
{
  printf("%d", main);  
  return 0;
}
// address of main function
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//283.
/*
#include <stdio.h>
int fun(int n)
{
  for(;n > 0; n--)
    printf("GeeksQuiz ");
  return 0;
}
int main()
{
    int (*ptr)(int ) = fun;
    (*ptr)(3);
    return 0;
}
//output:GeeksQuiz GeeksQuiz GeeksQuiz 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//284.
/*
#include<stdio.h>
void dynamic(int s, ...)
{
    printf("%d", s);
}
int main()
{
    dynamic(2, 4, 6, 8);
    dynamic(3, 6, 9);
    return 0;
}
//output: 2 3
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//285.
/*
#include <stdio.h>
void demo()
{
    printf("GeeksQuiz ");
}
int main()
{
    void demo();
    void (*fun)();
    fun = demo;
    (*fun)();//GeeksQuiz
    fun();//GeeksQuiz
    return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//286.
/*
#include<stdio.h>
void foo(int n, int sum)// 2048 0  -- 204 8 -- 20 12 -- 2 12 --0 14
{
  int k = 0, j = 0;
  if (n == 0) return;
    k = n % 10; // 8 | 4 | 0 | 2
  j = n / 10;  // 204 |20 | 2 | 0|
  sum = sum + k;// 0+8 |8+4| 12+0| 12+2 |14
  foo (j, sum);// 204 8 -- 20 12 -- 2 12 -- 0 14
  printf ("%d-%d ", k,j);
}
int main ()
{
  int a = 2048, sum = 0;
  foo (a, sum);
  printf ("%d ", sum);
}
//output:2-0 0-2 4-20 8-204 0 
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//287.
/*
#include<stdio.h>
int incr(int i)  // 0 1 2 3 4 5
{
   static int count = 0; // 0 0  1 3 6  10
   count = count + i; //0+0 0+1 1+2 3+3 6+4 10+5
   return (count); // 0  1  3 6 10 15
}
int main()
{
   int i,j;
   for (i = 0; i <=5; i++)
      j = incr(i);
    printf("%d ",j);
}
//output:15
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//289.
/*
#include<stdio.h>
void f1 (int a, int b)
{
  int c;
  c=a; a=b; b=c;
}
void f2 (int *a, int *b)
{
  // 5 6
  // 6 5
  int c;
  c=*a;
  *a=*b;
  *b=c;
}
int main()
{
  int a=4, b=5, c=6;
  f1(a, b);
  f2(&b, &c); 
  // a-4 b-6 c-5
  printf ("%d", c-a-b);//5-4-6 --> 1-6 --> -5 
  return 0;
}
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//290.
/*
#include <stdio.h>
int main()
{
 int a = 10;
 int b = 15;
 printf("%d %d",(a++),(b=a+2));// 10 12
 printf(" %d",b);//12
 return 0;
}
//output:10 12 12
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//291.
/*
#include <stdio.h>
int main()
{
 int a = 10;
 printf("%d %d ",(a+1));
 return 0;
}
//output:
//1.11 11027648  (wrong)
//2.Undefined behavior (correct)
*/
//------------------------------------------------------------------------------------------------------------------------------------------------
//292.
/*
#include <stdio.h>
#include <string.h>
void myStrcat(char *a, char *b)
{
    int m = strlen(a);
    int n = strlen(b);
    int i;
    for (i = 0; i <= n; i++)
       a[m+i]  = b[i];
}
int main()
{
    char *str1 = "Geeks ";
    char *str2 = "Quiz";
    myStrcat(str1,str2);
    printf("%s", str1);
    return 0;
}
*/
//output:
//-------------------------------------------------

//293.
/*
#include <stdio.h>
int main()
{
   char str1[] = "GeeksQuiz";
   char str2[] = {'G', 'e', 'e', 'k', 's', 'Q','u','i', 'z'};
   printf("%d ",sizeof(str1));//10
   printf("%d",sizeof(str1[0]));//1
   int n1 = sizeof(str1)/sizeof(str1[0]);
   int n2 = sizeof(str2)/sizeof(str2[0]);
   printf("%d %d", n1, n2); // 10 9
   return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
//294.
/*
#include<stdio.h>
void swap1(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
} 
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 
int main()
{
  char *str1 = "Geeks";
  char *str2 = "Quiz";
  swap1(str1, str2);
  printf("%s %s ", str1, str2);// Geeks Quiz

  int A=10;int B=11;
  swap2(&A,&B);
  printf("%d %d ",A,B);// 11 10
  return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
//295.
/*
#include <stdio.h>
int fun(char *str1)
{
  char *str2 = str1;
  while(*++str1);
  return (str1-str2);
}
int main()
{
  char *str = "GeeksQuiz";
  printf("%d", fun(str));
  return 0;
}
//output:9
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
//296.
/*
#include<stdio.h>
int main()
{
    char str[] = "GeeksQuiz";
    printf("%s %s %s ", &str[5], &5[str], str+5);// Quiz Quiz Quiz
    printf("%c %c %c ", *(str+6), str[6], 6[str]);// u u u
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
//297.
/*
int main()
{
    char a[2][3][3] = {'g','e','e','k','s','q','u','i','z'};
    printf("%s \n", *a); // geeksquiz 
    printf("%s ", **a);  // geeksquiz 
    return 0;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------

