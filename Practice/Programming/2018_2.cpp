#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
void fun1(char *s1, char *s2)
{
    char *tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
}

void fun2(char **s1, char **s2)
{
    char *tmp;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int main()
{
    char *str1 = "Hi", *str2 = "Bye";
    fun1(str1, str2);
    printf("%s %s ", str1, str2); // Hi Bye
    fun2(&str1, &str2);
    printf("%s %s ", str1, str2); // Bye Hi

    return 0;
}