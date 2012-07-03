# include <stdio.h>
# include <stdlib.h>

int main()
{
    FILE        *infile;
    FILE        *outfile;
    int         count;
    char        s[80];

        infile = fopen("./123", "r");
        outfile = fopen("./cp123","a");
        if (infile == NULL)     {
                perror("fopen");
                exit(1);
        }

        while (1)       {
                count = fread(s, 1, 80, infile);
                fwrite(s, 1, count, outfile);
                if (count < 80) {
                        break;
		fclose(outfile);
                }
        }

    return 0;
}
