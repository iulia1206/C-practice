#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//functia transformare schimba toate culorile in numere(1-ros,2-gal,3-albs,4-vd,5-port,6-alb)si le pune in 6 matrici, corespunzatoare celor 6 fete ale cubului
void transformare_int(char culori[][10], char fata[][32], char spate[][32], char sus[][32], char jos[][32], char stanga[][32], char dreapta[][32], int fata_transformat[][3], int spate_transformat[][3], int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3])
{
    char t[6][32], * p;
    int i, j, nr;
    for (i = 0; i < 3; i++)
    {
        p = strtok(fata[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 1 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                fata_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                fata_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                fata_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                fata_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                fata_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                fata_transformat[i][j] = 6;
        }
        p = strtok(spate[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 2 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                spate_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                spate_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                spate_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                spate_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                spate_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                spate_transformat[i][j] = 6;
        }
        p = strtok(sus[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 3 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                sus_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                sus_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                sus_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                sus_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                sus_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                sus_transformat[i][j] = 6;
        }
        p = strtok(jos[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 4 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                jos_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                jos_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                jos_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                jos_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                jos_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                jos_transformat[i][j] = 6;
        }
        p = strtok(stanga[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 5 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                stanga_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                stanga_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                stanga_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                stanga_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                stanga_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                stanga_transformat[i][j] = 6;
        }
        p = strtok(dreapta[i], ".");
        nr = 0;
        while (p != NULL)  //trasformam prima fata in intregi
        {
            strcpy(t[nr], p); //vom pune culorile de pe fata 6 in t[nr]
            nr++;
            p = strtok(NULL, ".");
        }
        for (j = 0; j < nr; j++)  //completam matricea de intregi cu numerele asociate culorilor
        {
            if (strcmp(t[j], culori[0]) == 0)
                dreapta_transformat[i][j] = 1;
            if (strcmp(t[j], culori[1]) == 0)
                dreapta_transformat[i][j] = 2;
            if (strcmp(t[j], culori[2]) == 0)
                dreapta_transformat[i][j] = 3;
            if (strcmp(t[j], culori[3]) == 0)
                dreapta_transformat[i][j] = 4;
            if (strcmp(t[j], culori[4]) == 0)
                dreapta_transformat[i][j] = 5;
            if (strcmp(t[j], culori[5]) == 0)
                dreapta_transformat[i][j] = 6;
        }
    }
}
// transformare_char face schimbarea din nou in matrici de caractere
void transformare_char(char culori[][10], char fata[][32], char spate[][32], char sus[][32], char jos[][32], char stanga[][32], char dreapta[][32], int fata_transformat[][3], int spate_transformat[][3], int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        strcpy(fata[i], culori[fata_transformat[i][0] - 1]); //observam ca pozitia culorii corespunzatoare fetei frontale este egala cu numarul intreg -1
        strcat(fata[i], ".");                              //insereaza punctul intre culori
        strcat(fata[i], culori[fata_transformat[i][1] - 1]);
        strcat(fata[i], ".");
        strcat(fata[i], culori[fata_transformat[i][2] - 1]);
    }
    for (i = 0; i < 3; i++)
    {
        strcpy(spate[i], culori[spate_transformat[i][0] - 1]);//observam ca pozitia culorii corespunzatoare fetei din spate este egala cu numarul intreg -1
        strcat(spate[i], ".");                              //insereaza punctul intre culori
        strcat(spate[i], culori[spate_transformat[i][1] - 1]);
        strcat(spate[i], ".");
        strcat(spate[i], culori[spate_transformat[i][2] - 1]);
    }
    for (i = 0; i < 3; i++)
    {
        strcpy(sus[i], culori[sus_transformat[i][0] - 1]);//observam ca pozitia culorii corespunzatoare fetei de sus este egala cu numarul intreg -1
        strcat(sus[i], ".");                              //insereaza punctul intre culori
        strcat(sus[i], culori[sus_transformat[i][1] - 1]);
        strcat(sus[i], ".");
        strcat(sus[i], culori[sus_transformat[i][2] - 1]);
    }
    for (i = 0; i < 3; i++)
    {
        strcpy(jos[i], culori[jos_transformat[i][0] - 1]);//observam ca pozitia culorii corespunzatoare fetei de jos este egala cu numarul intreg -1
        strcat(jos[i], ".");                              //insereaza punctul intre culori
        strcat(jos[i], culori[jos_transformat[i][1] - 1]);
        strcat(jos[i], ".");
        strcat(jos[i], culori[jos_transformat[i][2] - 1]);
    }
    for (i = 0; i < 3; i++)
    {
        strcpy(stanga[i], culori[stanga_transformat[i][0] - 1]);//observam ca pozitia culorii corespunzatoare fetei din stanga este egala cu numarul intreg -1
        strcat(stanga[i], ".");                              //insereaza punctul intre culori
        strcat(stanga[i], culori[stanga_transformat[i][1] - 1]);
        strcat(stanga[i], ".");
        strcat(stanga[i], culori[stanga_transformat[i][2] - 1]);
    }
    for (i = 0; i < 3; i++)
    {
        strcpy(dreapta[i], culori[dreapta_transformat[i][0] - 1]); //observam ca pozitia culorii corespunzatoare fetei din dreapta este egala cu numarul intreg -1
        strcat(dreapta[i], ".");                              //insereaza punctul intre culori
        strcat(dreapta[i], culori[dreapta_transformat[i][1] - 1]);
        strcat(dreapta[i], ".");
        strcat(dreapta[i], culori[dreapta_transformat[i][2] - 1]);
    }
}
//functia ac_ceasornic face rotatia unei fete ale cubului in sensul acelor de ceasornic
void ac_ceasornic(int fata_cub[][3])
{
    int aux;

    aux = fata_cub[0][0];
    fata_cub[0][0] = fata_cub[2][0];
    fata_cub[2][0] = fata_cub[2][2];
    fata_cub[2][2] = fata_cub[0][2];
    fata_cub[0][2] = aux;
    aux = fata_cub[0][1];
    fata_cub[0][1] = fata_cub[1][0];
    fata_cub[1][0] = fata_cub[2][1];
    fata_cub[2][1] = fata_cub[1][2];
    fata_cub[1][2] = aux;
}
//functia sens_trigonometric face rotatia in sens trigonometric a unei fete ale cubului
void sens_trigonometric(int fata_cub[][3])
{
    int i, aux;
    aux = fata_cub[0][2];
    fata_cub[0][2] = fata_cub[2][2];
    fata_cub[2][2] = fata_cub[2][0];
    fata_cub[2][0] = fata_cub[0][0];
    fata_cub[0][0] = aux;
    aux = fata_cub[1][2];
    fata_cub[1][2] = fata_cub[2][1];
    fata_cub[2][1] = fata_cub[1][0];
    fata_cub[1][0] = fata_cub[0][1];
    fata_cub[0][1] = aux;
}
//functia F face mutarea - front (fata), rotatie in sensul acelor de ceasornic
void F(int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3], int fata_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[i][2];
    for (i = 0; i < 3; i++)
        stanga_transformat[i][2] = jos_transformat[0][i];
    for (i = 0; i < 3; i++)
        jos_transformat[0][i] = dreapta_transformat[2 - i][0];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2 - i][0] = sus_transformat[2][2 - i];
    for (i = 0; i < 3; i++)
        sus_transformat[2][i] = aux[i];
    ac_ceasornic(fata_transformat);
}
//functia F_prim face mutarea - front (fata), rotatie in sens trigonometric (invers acelor de ceasornic)
void F_prim(int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3], int fata_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[i][2];
    for (i = 0; i < 3; i++)
        stanga_transformat[i][2] = sus_transformat[2][2 - i];
    for (i = 0; i < 3; i++)
        sus_transformat[2][2 - i] = dreapta_transformat[2 - i][0];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2 - i][0] = jos_transformat[0][i];
    for (i = 0; i < 3; i++)
        jos_transformat[0][i] = aux[i];
    sens_trigonometric(fata_transformat);
}
//functia B face mutarea - back (spate), rotatie in sensul acelor de ceasornic
void B(int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[i][0];
    for (i = 0; i < 3; i++)
        stanga_transformat[i][0] = sus_transformat[0][2 - i];
    for (i = 0; i < 3; i++)
        sus_transformat[0][2 - i] = dreapta_transformat[2 - i][2];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2 - i][2] = jos_transformat[2][i];
    for (i = 0; i < 3; i++)
        jos_transformat[2][i] = aux[i];
    ac_ceasornic(spate_transformat);
}
//functia B_prim face mutarea - back (spate), rotatie in sens trigonometric (invers acelor de ceasornic)
void B_prim(int sus_transformat[][3], int jos_transformat[][3], int stanga_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[i][0];
    for (i = 0; i < 3; i++)
        stanga_transformat[i][0] = jos_transformat[2][i];
    for (i = 0; i < 3; i++)
        jos_transformat[2][i] = dreapta_transformat[2 - i][2];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2 - i][2] = sus_transformat[0][2 - i];
    for (i = 0; i < 3; i++)
        sus_transformat[0][2 - i] = aux[i];
    sens_trigonometric(spate_transformat);
}
//functia U face mutarea - up (sus), rotatie in sensul acelor de ceasornic
void U(int fata_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3], int stanga_transformat[][3], int sus_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[0][i];
    for (i = 0; i < 3; i++)
        stanga_transformat[0][i] = fata_transformat[0][i];
    for (i = 0; i < 3; i++)
        fata_transformat[0][i] = dreapta_transformat[0][i];
    for (i = 0; i < 3; i++)
        dreapta_transformat[0][i] = spate_transformat[0][i];
    for (i = 0; i < 3; i++)
        spate_transformat[0][i] = aux[i];
    ac_ceasornic(sus_transformat);
}
//functia U_prim face mutarea - up (sus), rotatie in sens trigonometric (invers acelor de ceasornic)
void U_prim(int fata_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3], int stanga_transformat[][3], int sus_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[0][i];
    for (i = 0; i < 3; i++)
        stanga_transformat[0][i] = spate_transformat[0][i];
    for (i = 0; i < 3; i++)
        spate_transformat[0][i] = dreapta_transformat[0][i];
    for (i = 0; i < 3; i++)
        dreapta_transformat[0][i] = fata_transformat[0][i];
    for (i = 0; i < 3; i++)
        fata_transformat[0][i] = aux[i];
    sens_trigonometric(sus_transformat);
}
//functia D face mutarea - down (jos), rotatie in sensul acelor de ceasornic
void D(int fata_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3], int stanga_transformat[][3], int jos_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[2][i];
    for (i = 0; i < 3; i++)
        stanga_transformat[2][i] = spate_transformat[2][i];
    for (i = 0; i < 3; i++)
        spate_transformat[2][i] = dreapta_transformat[2][i];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2][i] = fata_transformat[2][i];
    for (i = 0; i < 3; i++)
        fata_transformat[2][i] = aux[i];
    ac_ceasornic(jos_transformat);
}
//functia D_prim face mutarea - down (jos), rotatie in sens trigonometric (invers acelor de ceasornic)
void D_prim(int fata_transformat[][3], int dreapta_transformat[][3], int spate_transformat[][3], int stanga_transformat[][3], int jos_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = stanga_transformat[2][i];
    for (i = 0; i < 3; i++)
        stanga_transformat[2][i] = fata_transformat[2][i];
    for (i = 0; i < 3; i++)
        fata_transformat[2][i] = dreapta_transformat[2][i];
    for (i = 0; i < 3; i++)
        dreapta_transformat[2][i] = spate_transformat[2][i];
    for (i = 0; i < 3; i++)
        spate_transformat[2][i] = aux[i];
    sens_trigonometric(jos_transformat);
}
//functia R face mutarea - right (dreapta), rotatie in sensul acelor de ceasornic
void R(int sus_transformat[][3], int spate_transformat[][3], int jos_transformat[][3], int fata_transformat[][3], int dreapta_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = fata_transformat[i][2];
    for (i = 0; i < 3; i++)
        fata_transformat[i][2] = jos_transformat[i][2];
    for (i = 0; i < 3; i++)
        jos_transformat[i][2] = spate_transformat[2 - i][0];
    for (i = 0; i < 3; i++)
        spate_transformat[2 - i][0] = sus_transformat[i][2];
    for (i = 0; i < 3; i++)
        sus_transformat[i][2] = aux[i];
    ac_ceasornic(dreapta_transformat);
}
//functia R_prim face mutarea - right (dreapta), rotatie in sens trigonometric (invers acelor de ceasornic)
void R_prim(int sus_transformat[][3], int spate_transformat[][3], int jos_transformat[][3], int fata_transformat[][3], int dreapta_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = fata_transformat[i][2];
    for (i = 0; i < 3; i++)
        fata_transformat[i][2] = sus_transformat[i][2];
    for (i = 0; i < 3; i++)
        sus_transformat[i][2] = spate_transformat[2 - i][0];
    for (i = 0; i < 3; i++)
        spate_transformat[2 - i][0] = jos_transformat[i][2];
    for (i = 0; i < 3; i++)
        jos_transformat[i][2] = aux[i];
    sens_trigonometric(dreapta_transformat);
}
//functia L face mutarea - left (stanga), rotatie in sensul acelor de ceasornic
void L(int sus_transformat[][3], int spate_transformat[][3], int jos_transformat[][3], int fata_transformat[][3], int stanga_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = fata_transformat[i][0];
    for (i = 0; i < 3; i++)
        fata_transformat[i][0] = sus_transformat[i][0];
    for (i = 0; i < 3; i++)
        sus_transformat[i][0] = spate_transformat[2 - i][2];
    for (i = 0; i < 3; i++)
        spate_transformat[2 - i][2] = jos_transformat[i][0];
    for (i = 0; i < 3; i++)
        jos_transformat[i][0] = aux[i];
    ac_ceasornic(stanga_transformat);
}
//functia L_prim face mutarea - left (stanga), rotatie in sens trigonometric (invers acelor de ceasornic)
void L_prim(int sus_transformat[][3], int spate_transformat[][3], int jos_transformat[][3], int fata_transformat[][3], int stanga_transformat[][3])
{
    int aux[3], i, j;
    for (i = 0; i < 3; i++)
        aux[i] = fata_transformat[i][0];
    for (i = 0; i < 3; i++)
        fata_transformat[i][0] = jos_transformat[i][0];
    for (i = 0; i < 3; i++)
        jos_transformat[2 - i][0] = spate_transformat[2 - i][2];
    for (i = 0; i < 3; i++)
        spate_transformat[i][2] = sus_transformat[i][0];
    for (i = 0; i < 3; i++)
        sus_transformat[i][0] = aux[i];
    sens_trigonometric(stanga_transformat);
}
int main()
{
    char culori[6][10], fata[3][32], spate[3][32], sus[3][32], jos[3][32], stanga[3][32], dreapta[3][32], mutare[12][2];
    int i, m, fata_transformat[3][3], spate_transformat[3][3], sus_transformat[3][3], jos_transformat[3][3], stanga_transformat[3][3], dreapta_transformat[3][3], j;
    for (i = 0; i < 6; i++)
        scanf("%s", &culori[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &fata[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &spate[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &sus[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &jos[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &stanga[i]);
    for (i = 0; i < 3; i++)
        scanf("%s", &dreapta[i]);
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%s", &mutare[i]);
    transformare_int(culori, fata, spate, sus, jos, stanga, dreapta, fata_transformat, spate_transformat, sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat);
    for (i = 0; i < m; i++)
    {
        if (strcmp(mutare[i], "F") == 0)
            F(sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat, fata_transformat);
        if (strcmp(mutare[i], "F'") == 0)
            F_prim(sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat, fata_transformat);
        if (strcmp(mutare[i], "B") == 0)
            B(sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat, spate_transformat);
        if (strcmp(mutare[i], "B'") == 0)
            B_prim(sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat, spate_transformat);
        if (strcmp(mutare[i], "U") == 0)
            U(fata_transformat, dreapta_transformat, spate_transformat, stanga_transformat, sus_transformat);
        if (strcmp(mutare[i], "U'") == 0)
            U_prim(fata_transformat, dreapta_transformat, spate_transformat, stanga_transformat, sus_transformat);
        if (strcmp(mutare[i], "D") == 0)
            D(fata_transformat, dreapta_transformat, spate_transformat, stanga_transformat, jos_transformat);
        if (strcmp(mutare[i], "D'") == 0)
            D_prim(fata_transformat, dreapta_transformat, spate_transformat, stanga_transformat, jos_transformat);
        if (strcmp(mutare[i], "R") == 0)
            R(sus_transformat, spate_transformat, jos_transformat, fata_transformat, dreapta_transformat);
        if (strcmp(mutare[i], "R'") == 0)
            R_prim(sus_transformat, spate_transformat, jos_transformat, fata_transformat, dreapta_transformat);
        if (strcmp(mutare[i], "L") == 0)
            L(sus_transformat, spate_transformat, jos_transformat, fata_transformat, stanga_transformat);
        if (strcmp(mutare[i], "L'") == 0)
            L_prim(sus_transformat, spate_transformat, jos_transformat, fata_transformat, stanga_transformat);
    }
    transformare_char(culori, fata, spate, sus, jos, stanga, dreapta, fata_transformat, spate_transformat, sus_transformat, jos_transformat, stanga_transformat, dreapta_transformat);
    for (i = 0; i < 3; i++)
    {
        printf("%s", fata[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", spate[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", sus[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", jos[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", stanga[i]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s", dreapta[i]);
        printf("\n");
    }
    return 0;
}
