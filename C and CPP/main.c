#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//for fibonacci recursive
//int a=0;
//int b=1;
  /*void function()
{
    int a=10;
}*/
  /*function to add
 int add(int a,int b)
{
  return a+b;
}
*/
  /*factorial fucntion
  int fact(int n)
  {
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
  }
  */
  /*function of fibonacci
  int fib(int n)
  {
    int c;
    if(n==0)
    return 1;
    else
    {
      c=a+b;
      a=b;
      b=c;
      printf(" %d ",c);
      fib(n-1);
    }
  }
  */
  /*function of product of digit of number
  void prod(int n)
  {
    int b;
    int c=1;
    while(n!=0)
    {
      a=n%10;
      c*=a;
      n/=10;
    }
    printf("%d",c);
  }
  */
  /*structure
  struct book
  {
    int number;
    char name[20];
  };*/
  /*structure 2
  struct feet
  {
    int inch;
    int foot;
    int result;
  };
  */
  /*structure 3 size of
  struct abc
  {
    int a;
    char b
    char c;
  };//size will come 8 because 1 cpu cycle is 4 byte, so it adds 2 to 6 */
int main()
{
  /*Print the area
    int p,q,area,perimeter;
    p=4;
    q=5;
    area = p*q;
    perimeter = 2*(p+q);
    printf("%d",area); //%d for integer printing, %c for character
    printf("%d",perimeter);*/
  //function();*
  /*sum of two
    int a, b, sum;
    printf("\nEnter two no: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum : %d", sum);
    */
  /*fibonacci series
    int a=0,b=1,c,num;
    printf("How many Elements you want? : ");
    scanf("%d",&num);
    printf("\nFibonacci Series : ");
    for(int i=1;i<=num;i++)
    {
        printf(" %d",a);
        c=a+b;
        a=b;
        b=c;
    }*/
  /*Greatest among three
     int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b&&a>=c)
        printf("Largest number  is : %d",a);
    if (b>=a&&b>=c)
        printf("Largest number  is : %d",b);
    if (c>=a&&c>=b)
        printf("Largest number  is : %d",c);
        */
  /*programme to swap two numbers(using 3 variables)
    int a,b, temp;
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    printf("\n\nNumbers before Swapping are : ");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\nNumbers after Swapping are : ");
    printf("\na = %d",a);
    printf("\nb = %d",b);*/
  /*programme to swap two numbers (using 2 variables)
    int a,b;
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    printf("\n\nNumbers before Swapping are : ");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("\n\nNumbers after Swapping are : ");
    printf("\na = %d",a);
    printf("\nb = %d",b);*/
  /*Program to print ascii value
    char a;
    scanf("%c",&a);
    printf("%c=%d",a,a);*/
  /*programme to find area of circle
    float r,area;
    printf("Enter the radius : ");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of the circle is : %f",area);*/
  /*post/pre operator

    int a=10,b=20;
    float c=10.5,d=25;
    printf("print a %d",++a);
    printf("print b %d",b++);
    printf("print c %f",++c);
    printf("print d %f",++d);*/
  /*Program to find least significant bit of a number
    int a;
    scanf("%d",&a);
    if(a&1)
        printf("LSB of number is %d", 1);
    else
        printf("LSB of number is %d", 0);*/
  /*program to flip a number using bitwise operator
     int a,flip;
    scanf("%d",&a);
    flip = ~a;
    printf("%d",flip);*/
  /*program to swap number using bitwise operator
     int a,b;
     scanf("%d %d",&a,&b);
     a^=b;
     b^=a;
     a^=b;
     printf("\n%d %d",a,b);*/
  /*Program to check even or odd
     int a;
     char b[10];
     scanf("%d",&a);
     (a%2==0)?printf("Even"):printf("Odd");
     printf("%c",b);*/
  /*program to calculate the basic salary of an employee
    float ba, gr, da, hra;
    printf(" basic salary : ");
    scanf("%f", &ba);
    if(ba <= 10000)
    {
        da  = ba * 0.8;
        hra = ba * 0.2;
    }
    else if(ba<= 20000)
    {
        da  = ba * 0.9;
        hra = ba * 0.34;
    }
    else
    {
        da  = ba * 0.25;
        hra = ba * 0.3;
    }
    gr = ba + hra + da;
    printf("Gross salary is = %f", gr);*/
  /*program to check alphabet using conditional operator
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ? printf("It is ALPHABET"): printf("It is NOT ALPHABET");*/
  /*program to enter year and check whether it's leap year or not
    int a;
    printf("enter  year: ");
    scanf("%d", &a);
    if(a % 400 == 0)
        {
            printf("It is a leap year");
        }
    else if(a % 4 == 0)
        {
            printf("It is a leap year");
        }
    else if(a % 100 == 0)
        {
            printf("It is not a leap year");
        }
    else
        {
            printf("It is not a leap year");
        }
        (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");//using conditional operator
        */
  /*A company insures its drivers in the following case
    int a;
    char gen;
    char m;
    printf("Enter Maritial Status and Gender: ");
    scanf ("%c,%c",&m,&gen);
    printf("Enter Age : ");
    scanf ("%d",&a);
    if (m=='M')
    printf ("The driver is insured");
    else if((m=='U' && gen=="M" && a>30)||(m=='U' && gen=="F" && a>25))
    printf ("Driver is insured");
    else
    printf ("Driver is not insured");*/
  /*simple interest
    int i=0,p,t;
    float r,si;
    while (i<3)
    {
        printf("Enter principle, rate, time : ");
        scanf("%d %f %d", &p,&r,&t);
        si=((p*r*t)/100);
        printf("SI is : %f\n",si);
        i++;
    }*/
  /*table using for loop
    int a=137;
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",a*i);
    }*/
  /*nested for loop
    int sum;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=2;j++)
        {
            sum=i+j;
            printf("i=%d j=%d sum=%d\n",i,i,sum);
        }
    }*/
  /*electricity question using if else
    int unit;
    float amt, total_amt, sur_charge;
    printf("total units : ");
    scanf("%d", &unit);
    if(unit<=50)
    {
        amt= unit*0.50;
    }
    else if(unit<= 150)
    {
        amt= 25+((unit-50)*0.75);
    }
    else if(unit<= 250)
    {
        amt= 100+((unit-150)*1.20);
    }
    else
    {
        amt= 220+((unit-250)*1.50);
    }
    sur_charge=amt*0.20;
    total_amt=amt + sur_charge;
    printf("electricity Bill = Rs. %f", total_amt);*/
  /*vowel or consonent using switch
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'a' : printf("Vowel");
        break;
        case 'e' : printf("Vowel");
        break;
        case 'i' : printf("Vowel");
        break;
        case 'o' : printf("Vowel");
        break;
        case 'u' : printf("Vowel");
        break;
        case 'A' : printf("Vowel");
        break;
        case 'E' : printf("Vowel");
        break;
        case 'I' : printf("Vowel");
        break;
        case 'O' : printf("Vowel");
        break;
        case 'U' : printf("Vowel");
        break;
        default : printf("Consonent");
        break;
    }*/
  /*progran to print all natural numbers
    for(int i=100;i>=1;i--)
    {
        printf("%d\n",i);
    }*/
  /*write program to print all even numbers
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("%d\n",i);
        else
            continue;
    }*/
  /*dowhile 
    int a,sum=0;
    
    do
    {
    	printf("Enter number : ");
    	scanf("%d",&a);
    	sum+=a;
    }while(a!=0);

    printf("Sum is : %d",sum);*/
	/*armstrong
	int a,r,sum=0,temp;

    printf("Enter number : ");
    scanf("%d",&a);

    for(temp=a;a!=0;a/=10){
         r=a % 10;
         sum+=r*r*r;
    }
    if(sum==temp)
         printf("Armstrong");
    else
         printf("Not Armstrong");*/
	/*Armstrong do while
	int a,r,sum=0,temp;

    printf("Enter number : ");
    scanf("%d",&a);
    temp=a;
    do
    {
    	 r=a % 10;
         sum+=r*r*r;
         a/=0;
    }while(a!=10);
    
    if(sum==temp)
         printf("Armstrong");
    else
         printf("Not Armstrong");*/
	/*50 to 100 print for;
	for(int a=50;a<=100;a++)
		{if(a%2!=0)
		printf("%d\n",a);}*/
	/*hours to seconds using switch case
	int hour,a,minutes,seconds;
	printf("Enter hour : ");
	scanf("%d",&hour);
	printf("Enter what you want to do : \n");
	printf("1. Minutes\n");
	printf("2. Seconds\n");
	scanf("%d",&a);
	minutes = hour*60;
	seconds = hour*60*60;
	switch(a)
	{
		case 1 : 
				printf("Minutes is : %d",minutes);
				break;
		case 2 : 
				printf("Seconds is : %d",seconds);
				break;
	}*/
	/*find the area of sqaure,rectangle,circle and triangle using switch
	int x,y,a;
	float area;
	printf("Enter what you want to do : \n");
	printf("1. Area of Square\n");
	printf("2. Area of Rectangle\n");
	printf("3. Area of Triangle\n");
	printf("4. Area of Circle\n");
	printf("Enter choice : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1 : 
				printf("Enter side of sqaure : ");
				scanf("%d",&x);
				area = x*x;
				printf("Area is : %f",area);
				break;

		case 2 : 
				printf("Enter length and breadth of rectangle : ");
				scanf("%d %d",&x,&y);
				area = x*y;
				printf("Area is : %f",area);
				break;

		case 3 : 
				printf("Enter height and base of triangle : ");
				scanf("%d %d",&x,&y);
				area = 0.5*x*y;
				printf("Area is : %f",area);
				break;

		case 4 : 
				printf("Enter radius of circle : ");
				scanf("%d",&x);
				area = 3.14*x*x;
				printf("Area is : %f",area);
				break;

		default : 
				printf("Invalid Choice entered!! Exiting...");
				break;
	}*/
	/*find the product of numbers from 15 to 20
	int prod=1,prod1=1;
	for(int i=15;i<=20;i++)
	{
		prod*=i;
	}
	printf("Producct using for is : %d\n",prod);

	int j=15;
	while(j<=20)
	{
		prod1*=j;
		j++;
	}
	printf("Producct using while is : %d",prod1);*/
	/*program to print pattern1
   int a;
   printf("Enter the number of rows : ");
   scanf("%d", &a);
   for(int i=1;i<= a;i++) 
   {
      for(int j=1;j<= i;j++) 
      	{
         	printf("* ");
      	}
      printf("\n");
   }*/
	/*pattern 2
	int a;
   printf("Enter the number of rows : ");
   scanf("%d", &a);
   for(int i=1;i<= a;i++) 
   {
      for(int j=1;j<= i;j++) 
      	{
         	printf("%d ",j);
      	}
      printf("\n");
   }*/
	/*pattern 2(1)
	int a;
   printf("Enter the number of rows : ");
   scanf("%d", &a);
   for(int i=1;i<= a;i++) 
   {
      for(int j=1;j<= i;j++) 
      	{
         	printf("%d ",i);
      	}
      printf("\n");
   }*/
	/*pattern 2(2)
	int a,x=1;
   printf("Enter the number of rows : ");
   scanf("%d", &a);
   for(int i=1;i<=a;i++) 
   {
      for(int j=1;j<=i;j++) 
      	{
         	printf("%d ",x);
         	x++;
      	}
      printf("\n");
   }*/
	/*pattern 3
   char ch,a='A';
   printf("Enter last row alphabet: ");
   scanf("%c", &ch);
   for (int i=1;i<=(ch-'A'+1);i++) 
   {
      for (int j = 1;j<= i;j++)
       {
         printf("%c ",a);
       }
      a++;
      printf("\n");
   }*/
	/*pattern 4
	int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (int i=a;i>=1;i--)
     {
       for (int j=1;j<=i;j++)
        {
         printf("* ");
        }
      printf("\n");
   }*/
  /*patterb 4 alternate method
   int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (int i=1;i<=a;i++)
     {
       for (int j=a;j>=i;j--)
        {
         printf("* ");
        }
      printf("\n");
   }*/
	/*pattern 1 plus 4 combined
	 int a;
   printf("Enter the number of rows : ");
   scanf("%d", &a);
   for(int i=1;i<= a;i++) 
   {
      for(int j=1;j<= i;j++) 
      	{
         	printf("* ");
      	}
      printf("\n");
    }
      for (int i=1;i<=a;i++)
     {
       for (int j=a-1;j>=i;j--)
        {
         printf("* ");
        }
      printf("\n");
  }*/
	/*print pattern with spaces
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("x ");
		}
		printf("\n");
	}*/
	/*pyramid pattern
	int r;
    printf("Enter Rows :");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
      {
          for(int j=1;j<=r-i;j++)
           {
               printf(" ");
           }
           for(int j=1;j<=i;j++)
           {
               printf("* ");
           }
           printf("\n");
      }*/
  /*alternate method of pyramid
	int r;
	printf("Enter Rows :");
    scanf("%d",&r);
    for(int i =1;i<=r;i++)
    {
    	for(int j=1;j<=2*r-1;j++)
    	{
    		if(j>=r-(i-1) && j<=r+(i-1))
    		{
    			printf("x");
    		}
    		else 
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }*/
  /*inverted pyramid
    int r;
	printf("Enter Rows :");
    scanf("%d",&r);
    for(int i=r;i>=1;i--)
    {
    	for(int j=1;j<=2*r-1;j++)
    	{
    		if(j>=r-(i-1) && j<=r+(i-1))
    		{
    			printf("x");
    		}
    		else 
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }*/
  /*diamond (inverted pyramid * 2)
    int r;
	printf("Enter Rows :");
    scanf("%d",&r);
    for(int i =1;i<=r;i++)
    {
    	for(int j=1;j<=2*r-1;j++)
    	{
    		if(j>=r-(i-1) && j<=r+(i-1))
    		{
    			printf("x");
    		}
    		else 
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }
    for(int i=r;i>=1;i--)
    {
    	for(int j=1;j<=2*r-1;j++)
    	{
    		if(j>=r-(i-1) && j<=r+(i-1))
    		{
    			printf("x");
    		}
    		else 
    		{
    			printf(" ");
    		}
    	}
    	printf("\n");
    }*/
  /*terminate program if 0
    int a;
    scanf("%d",&a);
    while(a==0)
    if(a==0)
    {	
    	printf("teri maa");
    	
    }
    else
    	printf("bhg chutiye");*/
	/*array
	int a[10];
	for(int i=0;i<10;i++)
	{
		printf("enter element : ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("elements are : %d\n",a[i]);
	}*/
  /*program to print following number in reverse order 
  int a[5]={1,2,3,4,5};
  for(int i=4;i>=0;i--)
  {
    printf("%d\n",a[i]);
  }*/
  /*find sum of elements in array
  int n;
  int sum=0;
  printf("Enter number of element of array : ");
  scanf("%d",&n);
  int a[100];
  for(int i=0;i<n;i++)
  {
    printf("Enter Elements : ");
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  printf("Sum is : %d",sum);*/
  /*program to find smallest and largest element in array
  int n,x,y;
  printf("Enter number of element of array : ");
  scanf("%d",&n);
  int a[100];
  for(int i=0;i<n;i++)
  {
    printf("Enter Elements : ");
    scanf("%d",&a[i]);
  }
  x=y=a[0];
  for(int j=1;j<n;j++)
  {
    if(a[j]>y)
    y=a[j];
    else if(a[j]<x)
    x=a[j];
  }
  printf("Smallest element : %d\n",x);
  printf("Largest element : %d\n",y);*/
  /*program to check repetiton of a number in array
  int n,num;
  printf("Enter number of element of array : ");
  scanf("%d",&n);
  int a[100];
  for(int i=0;i<n;i++)
  {
    printf("Enter Elements : ");
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]==a[j])
        num=a[j];
    }
  }
  printf("Common element is : %d",num);*/
  /*program to search linearly
  int ele = 406;
  int flag, index;
  int a[] = {10,20,30,40,50};
  for(int i=0;i<5;i++)
  {
    if(a[i]==ele)
    { 
      flag = 1;
      index = i;
      break;
    }
  }
  if(flag==1)
    printf("Element %d found at index %d ",ele,index);
  else
    printf("Element not found");
    */
  /*binary search
  int a[10];
  int low,mid,high,flag,x,z;
  printf("Enter number of elements in array : ");
  scanf("%d",&z);
  printf("enter elements of array : ");
  for(int i=0;i<z;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter number to search : ");
  scanf("%d",&x);
  low=0;
  high=z;
  while(low<=high)  
  {
      mid=(high+low)/2;
      if(x==a[mid])
      { 
         flag=1;
         printf("\nElement found at %d\n",mid);
         break;
      }
      else if(x<a[mid])
      {
         high=mid-1;
      }
      else if(x>a[mid])
      {
         low=mid+1;
      }
  }
  if(flag==0)
    printf("Element not found");*/
  /*sorting array
   int x[30],a,n;
   printf("Enter the number of element of array : ");
   scanf("%d",&n);
   printf("Enter the numbers : \n");
   for(int i=0;i<n;i++)
   {
      printf("Enter number %d : ",i+1);
      scanf("%d",&x[i]);
   }
   for(int i=0;i<n-1;i++) 
   {
    for(int j=i+1;j<n;j++)
      {
        if(x[i]>x[j]) 
          {
             a=x[i];
             x[i]=x[j];
             x[j]=a;
          }
      }
   }
   printf("sorted array is : ");
   for(int i=0;i<n;i++)
   {
      printf("%d ",x[i]);
   }*/
  /*bubble sort
   int x[30],a,n;
   printf("Enter the number of element of array : ");
   scanf("%d",&n);
   printf("Enter the numbers : \n");
   for(int i=0;i<n;i++)
   {
      printf("Enter number %d : ",i+1);
      scanf("%d",&x[i]);
   }
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(x[j]>x[j+1])
      {
        a=x[j];
        x[j]=x[j+1];
        x[j+1]=a;
      }
    }
  }
   printf("sorted array is : ");
   for(int i=0;i<n;i++)
   {
      printf("%d ",x[i]);
   }*/
  /*matrix
  int a[10][10],b[10][10];
  printf("Enter for 1st Matrix : \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter for 2nd Matrix : \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&b[i][j]);
    }
  }
  printf("\nSum of both matrix is : \n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",a[i][j]+b[i][j]);
    }
    printf("\n");
  }*/
  /*Transpose of Matrix
  int a[10][10];
  printf("Enter  Matrix \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nOriginal Matrix : \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\nTranspose Matrix : \n");
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",a[j][i]);
    }
    printf("\n");
  }*/
  /*Row sum and Column Sum 
   int a[10][10],sum=0;
  printf("Enter  Matrix \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nOriginal Matrix : \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<4;j++)
    {
      sum+=a[i][j];
    }
    printf("\n");
    printf("\nSum of %d row is : %d",i+1,sum);
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<3;j++)
    {
      sum+=a[j][i];
    }
    printf("\n");
    printf("\nSum of %d column is : %d",i+1,sum);
  }*/
  /*matrix multiplication 
  int a[10][10],b[10][10],c[10][10];
  printf("Enter  Matrix 1\n");
  printf("\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n");
  printf("Enter  Matrix 2\n");
  printf("\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("Enter Element : ");
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n");
  printf("\nMatrix 1 is : \n");
  printf("\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\nMatrix 2 is : \n");
  printf("\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",b[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      c[i][j]=0;
      for(int k=0;k<3;k++)
      {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  printf("\n");
  printf("Matrix Multiplication is : \n");
  printf("\n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }*/
  /*swapping number using pointers
  int a=10,b=20,x,y,temp;
  printf("%d %d",a,b);
  x=&a;
  y=&b;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("\n%d %d",a,b);*/
  /*subtraction of pointers
  int *a;
  int b=5,z;
  a=&b;
  z=&b;
  a=a-4;
  printf("\n%d",z);
  printf("\n%d",a);
  */
  /*array elements using pointers
  int a[]={1,2,3,4,5};
  int *p;
  p=a;
  for(int i=0;i<5;i++)
    printf("%d",*(p+i));
  */
  /*array question 
 int a[]={1,2,3};
 int *ptr=a;
 for(int i=0;i<3;i++)
 {
   printf("adress of a[%d]=%x\n",i,ptr);
   printf("value of a[%d]=%d\n",i,ptr);
   ptr++;
 }
 */
  /*pointer array and malloc calloc
int *p;
int (*a)[5];
int arr[5] = {1,2,3,4,5};
p=arr;
a=&arr;
  printf("p=%p,ptr=%p\n",p,a);
  p++; 
  a++;
  printf("p=%p,ptr=%p\n",p,a);
*/
  /*malloc calloc
int n,*p,sum=0;
printf("Enter number of elements : ");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL)
{
  printf("Unable to allocate memory");
  exit(0);
}
for(int i=0;i<n;i++)
{
  scanf("%d",(p+i));
  sum+=(p+i);
}
printf("Sum is : %u",sum);
free(p);
*/
  /*maloc function code
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
int *p=(int*)malloc(n*sizeof(n));
if(p==NULL)
{
  printf("Memory not available");
  exit(1);
}
for(int i=0;i<n;i++)
{
  printf("Enter number : ");
  scanf("%d",p+1);
}
for(int i=0;i<n;i++)
{
  printf("\nNumber is : %d\n",*(p+i));
}*/
  /*realloc
int *ptr=(int*)malloc(2*sizeof(int));
if(ptr==NULL)
{
    printf("Memory not availaible:");
    exit(1);

}
printf("Enter the two nos:\n");
for(int i=0;i<2;i++)
scanf("%d",ptr+i);
//memory allocation for two integers
ptr=(int*)realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not availaible!");
        exit(1);
    }
    printf("Enter 2 more integers:\n");
    for(int i=2;i<4;i++)
    scanf("%d",ptr+i);
    //printing the value on the screen
    for(int i=0;i<4;i++)
    printf("%d",*(ptr+i));
*/
  /*LENGHT OF STRING
char a[20];
printf("Enter name : ");
gets(a);
int b=strlen(a);
printf("Length is : ");
printf("%d",b);
*/
  /*String Copy
  char a[20]="Akshat Pandey";
  char b[20];
  strcpy(b,a);
  printf("%s",b);
  */
  /*string compare
char a[20]="abcd",b[20]="abCd",c[20]="abcd";
int result = strcmp(a,b);
printf("String 1 and 2 compared is (1 means different) : %d\n",result);
result = strcmp(a,c);
printf("String 1 and 3 compared is : %d",result);
*/
  /*reverse string 
char a[20]="akshat";
char temp;
int i=0;
int j=strlen(a)-1;
while(i<=j)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
printf("%s",a);
*/
  /*add function
  printf("%d",add(2,5));
  */
  /*function without return value
greater(6,7);
*/
  /*function with return value
int a;
a=greater1(6,7);
printf("%d is greater",a);
*/
  /*factorial using recusrion
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    printf("factorial is : %d",fact(a));*/
  /*fibonacci using recursion
  int n;
  printf("Enter last number of fibonacci series : ");
  scanf("%d",&n);
  printf("0  1 ");
  fib(n-2);
  */
  /*function to find product of digit of number using recusrion
  int a;
  printf("Enter any number : ");
  scanf("%d",&a);
  prod(a);
  */
  /*structure example
struct book a;
printf("Enter number of book : ");
scanf("%d",&a.number);
printf("Enter name of book : ");
scanf("%s",a.name);
//gets(a.name);
printf("\nName of book is : %s",a.name);
printf("\nNumber of book is : %d",a.number);
int b=sizeof(a);
printf("\nSize of structure is : %d",b);
*/
  /*program to add two distances in inch-feet system
  struct feet a,b;
  printf("Enter inch 1: ");
  scanf("%d",&a.inch);
  printf("Enter inch 2 : ");
  scanf("%d",&b.inch);
  printf("Enter foot 1 : ");
  scanf("%d",&a.foot);
  printf("Enter foot 2 : ");
  scanf("%d",&a.foot);
  a.result=a.inch+b.inch;
  b.result=a.foot+b.foot;
  printf("Inch Result is : %d",a.result);
  printf("\nFoot Result is : %d",b.result);
  */
  /*size of structure
  struct abc var;
  printf("Size is : %d",sizeof(var));
  */
return 0;
}
  /*function with return value
int greater1(int a,int b)
{
  if(a>b)
  {
    return a;
  }
  else
  {
    return b;
  }
}*/
  /*funtion without return value
int greater(int a,int b)
{
  if(a>b)
  {
    printf("%d is greater",a);
  }
  else
  {
    printf("%d is greater",b);
  }
  */