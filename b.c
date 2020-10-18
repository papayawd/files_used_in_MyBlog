#include<stdio.h>


#include <string.h>



#define     MD5_LENGTH           16
#define     MAX                  40

char* buf;

void print()
{
    printf("hello world\n");
}

int encode(char* data)
{
    printf("encode\n");
    int len = strlen(data);
    int i = 0;
    for(;i < len>>1 ;i++)
    {
        char t;
        t = data[i];
        data[i] = data[len - i - 1];
        data[len - i - 1] = t;
    }
    return strncmp(data,"223456",6);
}

int main()
{
    print();
    printf("plz input a number (len = 6) ");
    char number[10];
    scanf("%10s",number);
    if (!encode(number))
    {
        printf("ok\n");
    }
    else
    {
        printf("no\n");
    }
    encode(number);
    return 0;
}