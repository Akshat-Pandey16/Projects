#include <iostream>
#include<cmath>

using namespace std;
    /*function call
   void sayHI(string name, int age)
    {

        cout<<"hello "<<name <<age;
    }
     void sayHello(string name, int age);*/

/*Return types of function
double cube(double num)
{
    double result = num*num*num;
    return result;
}*/

/*If Statement Function
 //
    int getmax(int a, int b,int c)
    {
        int result;
        if(a>b&&a>c)
           {
               result = a;
           }
        else if(b>c)
            {result = b;}
        else
        {
            result = c;
        }
        return result;
    }*/
    /*switch statement fuction
    string dayweek(int daynum)
    {
        string dayname;
        switch(daynum)
        {
            case 1 : dayname = "Sunday";
            break;
            case 2 : dayname = "Monday";
            break;
            case 3 : dayname = "Tuesday";
            break;
            case 4 : dayname = "Wednesday";
            break;
            case 5 : dayname = "Thursday";
            break;
            case 6 : dayname = "Friday";
            break;
            case 7 : dayname = "Saturday";
            break;
            default : dayname = "Invalid Day";
            break;
        }
        return dayname;
    }*/
/*Exponent Function

    long pow(int a, int b){
    int result = 1;
    for(int i=0;i<b;i++)
    {
        result=result*a;
    }
    cout<<result;
    }*/
//classes and constructors and object functions, getters and setters
class book
{
private:
    string author;
public:
    string title;
    int pages;
    book()//constructor 2
    {
        title="No title";
        author="No author";
        pages=0;
    }
    book(string atitle,string aauthor,int apages)//constructor 1
    {
        title = atitle;
        author = aauthor;
        pages = apages;
    }
    bool isNovel() //object function
    {
        if(pages>300)
        {
            return true;
        }
        else
            return false;
    }
    int addpage(int num)
    {
        pages=pages + num;
        return pages;
    }//*/
};

int main()
{
    /*strings
    string abc="abcdef asdkd";
    abc[0]='A';
    string p;
    p= abc.substr(0,6); //abc.length(); //abc.find("asdkd",0);
    cout<<p;*/

    /*numbers
    cout<<10%2<<endl;
    int a=6;
    a*=5;
    cout<<a<<endl;
    long b=pow(2,50);
    cout<<b<<endl;
    cout<<ceil(4.1);
    cout<<floor(4.1)<<endl;
    cout<<fmax(10,3);*/

    /*user input
    string name; //int a;
    cout<<"enter name";
    getline(cin,name);
    cout<<name;*/

    /*Calculator
    long a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<a+b;*/

    /*mad lib game
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    cout<<"Roses are "<<a<<endl;
    cout<<"Violets are "<<b<<endl;
    cout<<"I Love "<<c<<endl*/;

    /*arrays
    int a[20]={1,2,3,4,5,6};
    int b[20];
    a[2]=24;
    a[18]=42435;
    cout<<a[2];
    cout<<a[18];*/

    /*functions
    sayHI("mike",23);
    sayHI("akshat",24);
    sayHello("pandey",25);*/

    /*Return types of function
    cout<<cube(5);*/

    /*If statements
    /*bool ismale=true;
    bool  istall=false;
    if(ismale||istall)
    {
        cout<<"You are a man";
    }
    else
    {
        cout<<"You are female";
    }*/
   // cout<<getmax(4,2,1);

   /*Big calculator
   int a,b,c;
   char x;
   cout<<"Enter first number : ";
   cin>>a;
   cout<<"Enter Operator : ";
   cin>>x;
   cout<<"Enter Second Number : ";
   cin>>b;

   if(x=='+')
   {
       c=a+b;
   }
   else if(x=='-')
   {
       c=a-b;
   }
   else if(x=='*')
   {
       c=a*b;
   }
   else if(x=='/')
   {
       c=a/b;
   }
   else
   {
       cout<<"Invalid Operator";
   }
   cout<<c;*/
    /*switch statement
    cout<<dayweek(3);*/
    /*while loop
    int index=1;
    while(index <=5)
    {
        cout<<index<<endl;
        index++;
    }*/
     /*do while loop
    int index=1;
    do
    {
        cout<<index<<endl;
        index++;
    }while(index <=5);*/
   /*Guessing Game
   int secretnum=7;
   int guess;
   int guesscount=0;
   int guesslimit =3;
   bool outofguess=false;
   do
   {
       if(guesscount<guesslimit)
       {
       cout<<"Enter guess number : ";
       cin>>guess;
       guesscount++;
       }
       else{
        outofguess=true;
       }
   }while(guess !=secretnum && !outofguess);

   if(outofguess)
   {cout<<"You lose";}
   else{cout<<"you win";}*/
    /*for loop
    int i=1;
    for(i;i<=5;i++)
    {
        cout<<i<<endl;
    }*/
    /*Exponent FUnction
    pow(2,3);*/
    /*NEsted loop
   // int number[3][2] = {{1,2},{3,4},{5,6}};
    //cout<<number[2][1];
    int number[10][10];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter element of matrix : ";
            cin>>number[i][j];
        }
            cout<<endl;
    }
    cout<<"Matrix is : "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<number[i][j];
        }
            cout<<endl;
    }*/
    /*POINTERS(all use of * and &)
    int a=35;
    cout<<&a<<endl;//to print address
    int *pa=&a;//to initialize pointer , use *pXYZ=&abc;
    cout<<pa;//to derefernce, use cout<<*pa*/
    //classes and objects and constructors and object functions,getters and setters
    book a("tatti","muttu",500);
    cout<<a.title<<endl;
    cout<<a.author<<endl;
    cout<<a.pages<<endl;

    book b("haggu","potty",200);
    cout<<b.title<<endl;
    cout<<b.author<<endl;
    cout<<b.pages<<endl;

    book c;
    cout<<c.title<<endl;
    cout<<c.author<<endl;
    cout<<c.pages<<endl;

    cout<<a.isNovel()<<endl;//for function
    cout<<b.addpage(53);//*/


    return 0;
}
  /*function call
  void sayHello(string name, int age)
    {

        cout<<"hello "<<name <<age;
    }*/
