#include <stdio.h>

 int
Step (int x, int y)
{
  
if (x == y)
    {
      
return 0;
    
}
  
 
if (y - x <= 2)
    {
      
return 1;
    
}
  
 
int s = 1;
  
int d = y - x;
  
 
while (d > s * 2)
    {
      
d -= s * 2;
      
s++;
    
}
  
 
if (d <= s)
    {
      
return s + 1;
    
}
  else
    {
      
return s + 2;
    
}

}


 
int
main ()
{
  
int x, y;
  
 
printf ("Enter x: ");
  
scanf ("%d", &x);
  
 
printf ("Enter y: ");
  
scanf ("%d", &y);
  
 
int res = Step (x, y);
  
 
printf ("Minimum number of steps: %d\n", res);
  
 
return 0;

}


