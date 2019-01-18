#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num,i,j,abc=0;
int s[2];
int random(){                         // Generating the three digit random number
  srand(time(NULL));
  num= (rand()%900)+100;
  return num;
   }
int main(){
int b[3],a,z;
int ud,nom,bn;
int x=0,y=0,w=0;
printf("Welcome\n");
nom=random();

abc=nom;
  for(i=2;i>=0;i--)
  {
      s[i]=abc%10;
      abc=abc/10;
  }
  for(i=0;i<2;i++)                    // To check if the digits are not repeated in the random number generated
   for(j=1;j<=2;j++)
    {
        if(i!=j)
        {
            if(s[i]==s[j])
            {
                nom=random();
                abc=nom;
                for(i=2;i>=0;i--)
                 {
                     s[i]=abc%10;
                     abc=abc/10;
                 }
            }
            else
                nom=nom;
        }
    }

a=0;
while(a<10)
{
    printf("Enter the 3 digit number\n");
    scanf("%d",&ud);
    bn=ud;
    for(i=2;i>=0;i--)                 // Splitting the three digits entered by the user
    {
        b[i]=bn%10;
        bn=bn/10;
    }
    for(i=0;i<3;i++)                  // Compare the digits with the digits of the pre-generated random number
    {
        z=0;
        for(j=0;j<3;j++)
        {
            if(b[j]==s[i])
            {
                if(i==j)
                    y++;
                else
                    x++;
            }
            else
            {
                z++;
                if(z==3)
                    w++;
            }
        }
    }
    if(y==1 && x==0)
        printf("1 bull\n");
    else if(y==2 && x==0)
        printf("2 bulls\n");
    else if(x==1 && y==0)
        printf("1 cow\n");
    else if(x==2 && y==0)
        printf("2 cows\n");
    else if(x==3 && y==0)
        printf("3 cows\n");
    else if(y==1 && x==1)
        printf("1 bull,1 cow\n");
    else if(y==1 && x==2)
        printf("1 bull,2 cows\n");
    else if(y==3 && x==0)
    {
        printf("YOU WIN\n");
        printf("number: %d\n",nom);
        a=11;
    }
    else
        printf("No bulls,No cows\n");
    a++;
    x=0;
    y=0;
    w=0;
}
if(a!=12)
  {
    printf("You lost\n");
    printf("Try again\n");
    printf("Thank you\n");
  }
else
  {
    printf("Thank you\n");
    printf("Play again\n");
  }
    return 0;
}
