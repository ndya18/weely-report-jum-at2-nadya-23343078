#include <stdio.h>
// Created by Nadya_23343088

struct student {
    char name[50];
    int age;
};

void main() {
    struct student s1;

    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    
    display(s1); // passing struct as an argument

}

// membuat fungsi dengan struct sebagai parameter
void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d\n", s.age);
}
