#include <stdio.h>
int main()
{
	int students = 3;
	int subjects = 4;
	int marks[3][4];
	int i,j;
	for(i=0;i<students;i++){
		for(j=0;j<subjects;j++){
			printf("enter the marks of the students %d in subjects %d\n",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}
  for(i=0;i<students;i++){
		for(j=0;j<subjects;j++){
			//printf("the marks of the students %d in subjects %d is %d\n",i+1,j+1,marks[i][j]);
			printf("%d ", marks[i][j]);
			if(j==3)
			{
			printf("\n");
			}
		}
	}
	return 0;

}
