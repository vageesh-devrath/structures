#include<stdio.h>
#include<stdlib.h>
	struct s
	{
		char name[50];
		char div[2];
		long long int prn;
	};
int main()
{
	int n;
	printf("Enter the number of entries you want to make:\n");
	scanf("%d",&n);
	struct s a[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the name:");
		gets(a[i].name);
		printf("Enter the Division");
		gets(a[i].div);
		printf("Enter the PRN:");
		scanf("%llu",&a[i].prn);
	}
	printf("\n\nThanks for entering the details...\nDo you want to review your entries(1 for yes and 0 for no )?");
	int ch;
    scanf("%d",&ch);
    if(ch==0)
    {
	}
	else
	{
	  for(i=0;i<n;i++)
	{
		printf("Entry no.:%d\n",(i+1));
		printf("Name:");
		puts(a[i].name);
		printf("\nDivision:");
		puts(a[i].div);
		printf("\nPRN:%llu\n\n",a[i].prn);
	}	
	}
	return 0;
}

