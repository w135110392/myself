#include<stdio.h>
#include<Windows.h>
#include<iostream>
using namespace std;
struct student{
	char name[12];
	struct student *next;

};
int main(void){
	struct student s1 = { "li", NULL };
	struct student s2= { "Wang", NULL };
	struct student s3 = { "Huang", NULL };
	struct student s4 = { "Zhao", NULL };

	s1.next = &s2;
	s2.next = &s3;
	s3.next = &s4;
	struct student *p;
	p = &s1;

	while (1){
		if (p->next!=NULL){
			printf("%s\n", p->name);
			p = p->next;
			}
		else{
			printf("%s\n",p->next);
			break;
			}

		}
	int x;
	scanf_s("%d",&x,sizeof(x));

	system("pause");

	return 0;
}