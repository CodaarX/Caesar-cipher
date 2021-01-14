#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    // verify if comand line argument was provided
    if (argc == 2)
    {
        // convert key(char) to int
        int key = 0;
        key = atoi(argv[1]);
    
        if (key >= 26)
        {
            key %= 26;
        }
    
        // check if argument presented is 2
        if (argc == 2)
        {
    
            // print the following as per the project requirement
            printf("Succes\n");
            printf("%i\n", key);
    
            // get word from user
            string word = get_string("plaintext: ");
            int wordL = strlen(word);
    
    
            // ensure word is a letter
            for (int i = 0; i < wordL; i++)
            {
                if ((word[i] >= 'a') && (word[i] <= 'z'))
                {
                    if (word[i] + key > 'z')
                    {
                        word[i] -= 26;
                    }
    
                    word[i] += key;
                }
    
                if ((word[i] >= 'A') && (word[i] <= 'Z'))
                {
                    if (word[i] + key > 'Z')
                    {
                        word[i] -= 26;
                    }
    
                    word[i] += key;
                }
            }
    
            printf("ciphertext: %s", word);
            printf("\n");
            return 0;
        }
        
        // check if key is non negative
        else if (key <= 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    
    // check if argument provided is not 2
    else if ((argc != 2))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
   
}