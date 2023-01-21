#include<iostream>
using namespace std;

void daylahuyvu()
{
    printf("Toi la huyvu");
}

struct Student
{
    string name;
    int age;
};
int main()
{
    Student s1;
    string name;
    int age;
    scanf("%s",&name);
    scanf("%d", &age);
    printf("Name: %s \n", name);
    printf("Age: %d", age);
    return 0;
}