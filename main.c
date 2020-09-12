#include <stdio.h>
#include <stdlib.h>
int length(char c[])
{int x = 0;
    while(c[x]!='\0')
    {x++;}
    return x;}
int main()
{
    char word[20];
    char sentence[100];
    printf("Enter the word: ");
    scanf("%[^\n]%*c", &word);
    printf("Enter the sentence: ");
    scanf("%[^\n]%*c", &sentence);
    int lengthword = length(word);
    int lengthsentence= length(sentence);
    int first = 0;
    sentence[lengthsentence] = ' ';
    for(int i=0; i<lengthsentence+1; i++)
    {
        if(sentence[i]==' ')
        {
            for(int j=first; j<i; j++)
            {
                int match = 0;
                for(int k=0; k<lengthword; k++)
                {
                    if(sentence[j]==word[k])
                    {
                        for(int l=first; l<i; l++)
                        {
                            printf("%c", sentence[l]);
                        }
                        printf("\n");
                        match =1;
                        break;
                    }
                }
                if(match==1){
                    break;
                }
            }
            first=i+1;
        }
    }
}
