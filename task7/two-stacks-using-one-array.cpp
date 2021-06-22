// Two stacks implemented using one array


class TwoStacks
{
    int *arr;
    int size;
    int top1,top2;
    public:
     TwoStacks(int n=100)
     {
        size=n;
        arr=new int[100];
       top1=-1;
       top2=size;   
     }
     void push1(int x);
     void push2(int x);
     int pop1();
     int pop2();
};


void twoStacks :: push1(int x)
{
     if(top1<size/2 - 1)
     {
         top1++;
         arr[top1]=x;
     }
     
     return;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
       if(top2>size/2)
       {
           top2--;
           arr[top2]=x;
       }
       
       
       return;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    int t=-1;
      if(top1>=0)
      {
          t=arr[top1];
          top1--;
      }
    
      
    return t;  
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    int t=-1;
    if(top2<=size-1)
    {
        t=arr[top2];
        top2++;
    }
   
    
    return t;
    
}