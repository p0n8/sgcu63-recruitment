#include <cstdio>
#include <cstring>

using namespace std;

class Number
{
    private :
        char defaultPlatfromNumber[10][5][6]; // defaultPlatfromNumber[i][j][k] will be default pattern of number i at position row j col k

    public :
        Number() // initial default pattern of number
        {
            strncpy(defaultPlatfromNumber[0][0],"00000 ",6);
            strncpy(defaultPlatfromNumber[0][1],"0   0 ",6);
            strncpy(defaultPlatfromNumber[0][2],"0   0 ",6);
            strncpy(defaultPlatfromNumber[0][3],"0   0 ",6);
            strncpy(defaultPlatfromNumber[0][4],"00000 ",6);

            strncpy(defaultPlatfromNumber[1][0],"    1 ",6);
            strncpy(defaultPlatfromNumber[1][1],"    1 ",6);
            strncpy(defaultPlatfromNumber[1][2],"    1 ",6);
            strncpy(defaultPlatfromNumber[1][3],"    1 ",6);
            strncpy(defaultPlatfromNumber[1][4],"    1 ",6);

            strncpy(defaultPlatfromNumber[2][0],"22222 ",6);
            strncpy(defaultPlatfromNumber[2][1],"    2 ",6);
            strncpy(defaultPlatfromNumber[2][2],"22222 ",6);
            strncpy(defaultPlatfromNumber[2][3],"2     ",6);
            strncpy(defaultPlatfromNumber[2][4],"22222 ",6);

            strncpy(defaultPlatfromNumber[3][0],"33333 ",6);
            strncpy(defaultPlatfromNumber[3][1],"    3 ",6);
            strncpy(defaultPlatfromNumber[3][2],"33333 ",6);
            strncpy(defaultPlatfromNumber[3][3],"    3 ",6);
            strncpy(defaultPlatfromNumber[3][4],"33333 ",6);

            strncpy(defaultPlatfromNumber[4][0],"4   4 ",6);
            strncpy(defaultPlatfromNumber[4][1],"4   4 ",6);
            strncpy(defaultPlatfromNumber[4][2],"44444 ",6);
            strncpy(defaultPlatfromNumber[4][3],"    4 ",6);
            strncpy(defaultPlatfromNumber[4][4],"    4 ",6);

            strncpy(defaultPlatfromNumber[5][0],"55555 ",6);
            strncpy(defaultPlatfromNumber[5][1],"5     ",6);
            strncpy(defaultPlatfromNumber[5][2],"55555 ",6);
            strncpy(defaultPlatfromNumber[5][3],"    5 ",6);
            strncpy(defaultPlatfromNumber[5][4],"55555 ",6);

            strncpy(defaultPlatfromNumber[6][0],"66666 ",6);
            strncpy(defaultPlatfromNumber[6][1],"6     ",6);
            strncpy(defaultPlatfromNumber[6][2],"66666 ",6);
            strncpy(defaultPlatfromNumber[6][3],"6   6 ",6);
            strncpy(defaultPlatfromNumber[6][4],"66666 ",6);

            strncpy(defaultPlatfromNumber[7][0],"77777 ",6);
            strncpy(defaultPlatfromNumber[7][1],"    7 ",6);
            strncpy(defaultPlatfromNumber[7][2],"    7 ",6);
            strncpy(defaultPlatfromNumber[7][3],"    7 ",6);
            strncpy(defaultPlatfromNumber[7][4],"    7 ",6);

            strncpy(defaultPlatfromNumber[8][0],"88888 ",6);
            strncpy(defaultPlatfromNumber[8][1],"8   8 ",6);
            strncpy(defaultPlatfromNumber[8][2],"88888 ",6);
            strncpy(defaultPlatfromNumber[8][3],"8   8 ",6);
            strncpy(defaultPlatfromNumber[8][4],"88888 ",6);

            strncpy(defaultPlatfromNumber[9][0],"99999 ",6);
            strncpy(defaultPlatfromNumber[9][1],"9   9 ",6);
            strncpy(defaultPlatfromNumber[9][2],"99999 ",6);
            strncpy(defaultPlatfromNumber[9][3],"    9 ",6);
            strncpy(defaultPlatfromNumber[9][4],"99999 ",6);
        }
        char getDefaultPlatfromNumberAt(int num,int i,int j) // this function will return char at position row i col j of number num
        {
            return defaultPlatfromNumber[num][i][j];
        }

};

int main()
{
    Number *number=new Number();
    char N[1000000];
    int M1,M2;

    scanf(" %s %d %d",N,&M1,&M2);

    int len=strlen(N); // find length of input N

    for(int i=0;i<5;i++) // loop i target position on row i
    {
        for(int j=0;j<M1;j++) // loop j repeat print row i and newline with M1 times
        {
            for(int a=0;a<len;a++)// loop a is used to be a pointer to point first to last number
                for(int k=0;k<6;k++) // loop k target position on column k
                    for(int l=0;l<M2;l++) // loop l repeat print col k with M2 times
                        printf("%c",(*number).getDefaultPlatfromNumberAt(N[a]-'0',i,k));
            printf("\n");
        }
    }
    return 0;
}

