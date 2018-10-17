#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define ARRY_SIZE(A) (sizeof(A)/sizeof(A[0]))
char allowChar [] =
{
    '0','1','2','3','4','6','7','8','9','A','B','C','D','E','F'
};


char *keyList;



char getChar(){
    return allowChar[rand()%ARRY_SIZE(allowChar)];
}

bool inList(  char * keyListPtr , int currentListLength , int keySize ,char *tmpKey )
{
    char *keyPtr;

    int i;
    for(i  = 0 ; i < currentListLength; i ++ )
    {
        keyPtr = keyListPtr+ i*keySize;
        if( strcmp(keyPtr ,tmpKey ) == 0)
            return true;

    }
return false;
}
char *genKey(  int keyNumber,int Length){
    int i,j,totalBufferSize,keySize;
    char *keyListPtr,*tmpKey;

    keySize =  Length +1 ;
    totalBufferSize = keyNumber*keySize;
    tmpKey = (char *)malloc(keySize);
    keyListPtr = (char * ) malloc( totalBufferSize  );
    memset(keyListPtr , 0 , totalBufferSize);

    j = 0;
    while( j < keyNumber )
    {
        memset(tmpKey, 0 ,keySize);
        for( i = 0 ; i < Length ; i++ )
            *(tmpKey+i) = getChar();
        if( !inList(  keyListPtr , j , keySize ,tmpKey )  )
        {
            memcpy( keyListPtr + j*keySize , tmpKey , keySize);
            j++;
        }
    }
    free(tmpKey);
    printf("Gen Done!\n");
    return keyListPtr;
}


void display(  char * keyListPtr , int currentListLength , int keySize ){
    char *keyPtr;

    int i;

    for(i  = 0 ; i < currentListLength; i ++ )
    {
        keyPtr = keyListPtr + i*keySize;
        printf("key[%4d] : %s\n",i,keyPtr);

    }
return ;
}

int main()
{
    int keyNumber = 30;
    int keyLength = 6;
    char * keyList;


    keyList = genKey( keyNumber , keyLength );
    display(keyList ,keyNumber  , keyLength + 1  );

    free(keyList);

    return 0;
}


