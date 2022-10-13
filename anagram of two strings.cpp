#include <stdio.h>
#define NO_OF_CHARS 256
 

bool areAnagram(char* str1, char* str2)
{
    int count1[NO_OF_CHARS] = { 0 };
    int count2[NO_OF_CHARS] = { 0 };
    int i;
 
   
    
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
 
    
    if (str1[i] || str2[i])
        return false;
 
    
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] != count2[i])
            return false;
 
    return true;
}
 

int main()
{
    char str1[] = "spare";
    char str2[] = "pears";
 
    
    if (areAnagram(str1, str2))
        printf("The two strings are anagram of each other");
    else
        printf("The two strings are not anagram of each "
               "other");
 
    return 0;
}
