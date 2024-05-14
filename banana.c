#ifndef BANANA_H
#define BANANA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_banana(char message[])
{
    if (message == NULL)
    {
        static char default_message[] = "そんなバナナ";
        message = &(default_message[0]);
    }
    
    
    char *banana_aa[] = {
                        "　 　.┌┐",
                        "　　／ /",
                        ".／　/ i",
                        "|　( ﾟДﾟ)＜",
                        "|（ﾉi　|）",
                        "|　 i　i",
                        "＼_ヽ＿,ゝ",
                        "　 U\" U\"",
                        };
    char *p = calloc(strlen(banana_aa[3]) +strlen(message) +1,sizeof(char));
    strcpy(p,banana_aa[3]);
    strcat(p,message);
    banana_aa[3] = &(p[0]);
    for (int i = 0; i < sizeof(banana_aa)/sizeof(banana_aa[0]); i++)
    {
        printf("%s\n",banana_aa[i]);
    }
    free(p);
}
#endif