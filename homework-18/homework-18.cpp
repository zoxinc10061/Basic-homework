#include<stdio.h> 

#include<string.h> 

main(void)

{

    char str[20]; 

    int i,num[256]={0}; 

   	printf("-------------------------------------------------\n");

	printf("              ��C�ӼƦr�X�{������               \n");

	printf("-------------------------------------------------\n");    

    printf("��J�@�ӳs���ơG");  

    scanf("%s",str);  

    for(i=0;i<strlen(str);i++) 

        num[(int)str[i]]++; 

    for(i=0;i<256;i++) 

        if(num[i]!=0)

            printf("�r��%c�X�{%d��\n",(char)i,num[i]);

}
