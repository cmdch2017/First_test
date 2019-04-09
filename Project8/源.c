#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ 
	char arr1[] = "you should press the key word:love or you computer will be close soon";
	char arr2[] = "#####################################################################";
	int left = 0;
	int right = strlen(arr1) - 1;
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	printf("Õ¨µ¯½«Òª±¬Õ¨warning");
	printf("%s\n", arr2);
	while (left <= right)
	{
		Sleep(300);
		system("cls");
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
again:
	scanf("%s", input);
	if (strcmp(input, "you") == 0)
	{
		system("shutdown -a");
	}
	else{ 
		goto again;
	}
	
	system("pause");
	return 0;
}