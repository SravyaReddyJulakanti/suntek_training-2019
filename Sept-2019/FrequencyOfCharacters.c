#include<stdio.h>

#include<conio.h>

void main()

{

    char input[50];

    char result[50];

    int i,j,rl,count;

    scanf("%s",&input);

    rl=0;

    for(i=0;input[i]!='\0';i++)

    {

        for(j=0;j<=rl;j++)

        {

            if(input[i]==result[j])

                break;

        }

        if(j==rl+1)

        {

            result[rl]=input[i];

            rl++;

        }

    }

    result[rl]='\0';


    for(i=0;result[i]!='\0';i++)

    {

        count=0;

        for(j=0;j<input[j]!='\0';j++)

        {

            if(result[i]==input[j])

                count++;

        }

        printf("\n %c = %d",result[i],count);

    }


}
