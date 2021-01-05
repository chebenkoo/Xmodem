/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct Node{

	int data;
	struct Node * next;
	struct Node * prev;

}Node;

typedef Node *list;

#define ADRESS		10



struct Node *head = NULL;
struct Node *current = NULL;

void print_list(Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

void insert(int data ){


	struct Node * link = (struct Node*)malloc(sizeof(struct Node ));
	link->data = data;
	link->next = head;
	head = link;


}

void palindrome(char *string)
{

	int l = 0;
	int size = strlen(string) -1;
	while (size > 0) {
		if (string[l++] != string[size--]) {
			printf("not pa = %s", string);
			return;
		}
	}
    printf("%s is palindrome", string);
}

int main(void) {

//	char *ptr;
//	ptr = (char*)malloc(20*sizeof(char));

//	char string[] = "daad";
//		palindrome(string);

	uint8_t var = 40;
	uint8_t var_2 = 41;
	var = var - var_2;

	char b[333];
	printf("size = %d", sizeof(b));


//	char arr[] = "Aello World";
//	char *ptr = arr;
//	++*ptr;
//	printf("ddffd = %c", *ptr);
////	int size = strlen(string);
//	printf("the size of string is = %d and = %s", size, string);
//

	   // Then, var1 is increased to 6.
//	   printf("%d\n", var1++);

	   // var2 is increased to 6
	   // Then, it is displayed.
//	   printf("%d\n", ++var2);
//    int n, rev = 0, remainder;
//    printf("Enter an integer: ");
//    scanf("%d", &n);
//    while (n != 0) {
//        remainder = n % 10;
//        rev = rev * 10 + remainder;
//        n /= 10;
//    }
//    printf("Reversed number = %d", rev);
//

//	int remainder = 4333;
//    remainder = remainder % 10;
//    printf("Reversed number = %d", remainder);
//    //
//	   printf("size is =%d", size);
	    return 0;
}
