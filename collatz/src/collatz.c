#include <stdio.h>
#include <stdlib.h>

int colatz(int x) {

 int steps=1;

 while(x!=1) {
  steps++;

  if(x%2==00)
     x=x/2;
  else
     x=3*x+1;
 };

 return steps;
}

int main(int argc,char* argv[])
{
  int maxcolatz=0;
  int from=100;
  int to=100000000;

    if(argc==2){

       FILE *fp = fopen(argv[1], "r");
       if(fp == NULL) {
          perror("Unable to open file!");
          exit(1);
       }

       char chunk[128];

       while(fgets(chunk, sizeof(chunk), fp) != NULL) {

             char *token = strtok(&chunk, " ");
             from = atoi(token);
             while( token != NULL ) {
                token = strtok(NULL, " ");
                to = atoi(token);
             }
       }

        fclose(fp);

        int i;
        for(i=from; i<=to; i++) {
            printf("%d\n", i);
            if (colatz(i)>maxcolatz)
                maxcolatz=colatz(i);
        }
        printf("MAX COLATZ LENGTH: %d", maxcolatz);

        FILE *fpout = fopen(argv[2], "w");
        if (fpout == NULL)
      {      
      printf("Error opening the file %s", argv[2]);
			return -1;
      }
      fprintf(fpout, "%d\n", maxcolatz);

      fclose(fpout);
     }
return 0;
}

