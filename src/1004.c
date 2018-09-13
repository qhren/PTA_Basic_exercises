#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
struct Student
{
	char names[20];
	char number[20];
	int score;
};
int main()
{

	int n, i = 0, j;
	scanf("%d", &n);
	if (n <= 0) return 0;
	struct Student *student, *p, temp;
	student = (struct Student *)malloc(n*LEN);
	struct Student *maxStudent, *minStudent;
	minStudent = (struct Student *)malloc(LEN);
	minStudent->score = 101;
	maxStudent = (struct Student *)malloc(LEN);
	maxStudent->score = -1;
	p = student;

	for (i = 0; i < n; i++)
	{
		scanf("%s%s%d", (p + i)->names, (p + i)->number, &(p + i)->score);
	}
	p = student;
	for (i = 0; i < n; i++)
	{
		if ((p + i)->score > maxStudent->score) {
			maxStudent = (p + i);
		}
		if ((p + i)->score < minStudent->score) {
			minStudent = (p + i);
		}
	}
	printf("%s %s\n", maxStudent->names, maxStudent->number);
	printf("%s %s", minStudent->names, minStudent->number);

	free(student);

	return 0;
}
