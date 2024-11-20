#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>


void welcome();
void inputStudent();
void printStudent();
void countStudent();
void findStudent();
void saveStudent();
void loadStudent();
void modifyStudent();
void deleteStudent();
void sortStudent();
//学生信息
typedef struct _Student {
	int stuNum;
	char name[20];
	int score;
}Student;

typedef struct _Node {
	Student student;
	struct _Node* next;
}Node;