#include<stdio.h>
#include<string.h>
int main()
{   
    char a[100];
    printf("Enter the sting:");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'
        ||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {vow++;}
        else
    
    {
    con++;
    }
    }
    printf("The Vowels in the stringh is =%d",vow);
    printf("The consonant in the string is=%d",con);
  return 0; 
}