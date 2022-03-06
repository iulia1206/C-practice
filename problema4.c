#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//functia strrev calculeaza inversul sirului s
void strrev(char s[])
{
    int i, nr;
    char t[9];
    nr = -1;
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        nr++;
        t[nr] = s[i];
    }
    nr++;
    t[nr] = NULL;
    strcpy(s, t);
}
//dec_to_bin face trecerea numarului n in binar sub forma unui sir de caractere s
void dec_to_bin(int n, char* s)
{
    int nr, u, diferenta, i;
    nr = -1;
    while (n != 0)   //impart numarul la 2 pana cand imi va da catul 0 si pastrez resturile in s, convertite in caractere
    {
        u = n % 2;
        n = n / 2;
        nr++;
        s[nr] = '0' + u; //transform resturile de tip int in tip char
    }
    diferenta = 7 - nr;
    if (nr < 7)       //daca scrierea in binar va avea sub 8 cifre atunci se va completa cu 0
        for (i = 0; i < diferenta; i++)
        {
            nr++;
            s[nr] = '0';
        }
    nr++;
    s[nr] = NULL;
    strrev(s);   //ca sa imi dea numarul in scriere binara trebuie sa fac inversul sirului s
}
//bin_to_dec returneaza un numar in baza 10 trecut din baza 2, numar scris sub forma unui sir de caractere s
int bin_to_dec(char* s)
{
    int n, i, putere, j;
    n = 0;
    for (i = 0; i < strlen(s); i++)
    {
        putere = 1;
        for (j = 1; j < strlen(s) - i; j++)
            putere = 2 * putere;
        n = n + (s[i] - '0') * putere; //transform elementele de tip char in int si inmultesc cu puterea calculata anterior
    }
    return n;
}
//functia A_tr calculeaza transpusa matricei a in b
void A_tr(int a[][8], int b[][8])
{
    int i, j;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            b[i][j] = a[j][i];
}
// functia inmultire_matrice calculeaza produsul a 2 matrice a si b intr-o matrice c
void inmultire_matrice(int a[][8], int b[][8], int c[][8])
{
    int i, j, k;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
            c[i][j] = 0;
    for (i = 0; i < 8; i++)
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            if (c[i][j] > 1)                        //pastram matricea in forma booleana
                c[i][j] = 1;
        }
}
//functia sum_X_0 returneaza scorul notat cu s dintr-o matrice m care va fi impartita in 4 blocuri
int sum_X_0(int m[][8])
{
    int s, i, j, ok;
    s = 0;
    for (i = 0; i < 4; i++)    //verificam cate linii au elementele egale cu 1 in blocul din stanga-sus
    {
        ok = 1; //presupunem ca linia are toate elementele egale cu 1
        for (j = 0; j < 4; j++)
        {
            if (m[i][j] == 0)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    for (j = 0; j < 4; j++)  //verificam cate coloane au elementele egale cu 1 in blocul din stanga-sus
    {
        ok = 1;        //presupunem ca coloana are toate elementele egale cu 1
        for (i = 0; i < 4; i++)
        {
            if (m[i][j] != 1)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    //verificam daca diagonala principala din blocul din stanga-sus toate elementele egale cu 1
    ok = 1;             //presupunem ca diagonala principala are toate elementele egale cu 1
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i == j)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    //verificam daca diagonala secundara din blocul din stanga-sus are toate elementele egale cu 1
    ok = 1;            //presupunem ca diagonala secundara are toate elementele egale cu 1
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i + j == 3)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    for (i = 0; i < 4; i++)    //verificam cate linii au elementele egale cu 1 in blocul din dreapta-sus
    {
        ok = 1;            //presupunem ca linia are toate elementele egale cu 1
        for (j = 4; j < 8; j++)
        {
            if (m[i][j] == 0)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    for (j = 4; j < 8; j++)  //verificam cate coloane au elementele egale cu 1 in blocul din dreapta-sus
    {
        ok = 1;            //presupunem ca coloana are toate elementele egale cu 1
        for (i = 0; i < 4; i++)
        {
            if (m[i][j] != 1)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    //verificam daca diagonala principala din blocul din dreapta-sus toate elementele egale cu 1
    ok = 1;            //presupunem ca diagonala principala are toate elementele egale cu 1
    for (i = 0; i < 4; i++)
        for (j = 4; j < 8; j++)
            if (i + 4 == j)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    //verificam daca diagonala secundara din blocul din dreapta-sus are toate elementele egale cu 1
    ok = 1;               //presupunem ca diagonala secundara are toate elementele egale cu 1
    for (i = 0; i < 4; i++)
        for (j = 4; j < 8; j++)
            if (i + j == 7)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    for (i = 4; i < 8; i++)    //verificam cate linii au elementele egale cu 1 in blocul din stanga-jos
    {
        ok = 1;         //presupunem ca linia are toate elementele egale cu 1
        for (j = 0; j < 4; j++)
        {
            if (m[i][j] == 0)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    for (j = 0; j < 4; j++)  //verificam cate coloane au elementele egale cu 1 in blocul din stanga-jos
    {
        ok = 1;          //presupunem ca coloana are toate elementele egale cu 1
        for (i = 4; i < 8; i++)
        {
            if (m[i][j] != 1)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    //verificam daca diagonala principala din blocul din stanga-jos toate elementele egale cu 1
    ok = 1;               //presupunem ca diagonala principala are toate elementele egale cu 1
    for (i = 4; i < 8; i++)
        for (j = 0; j < 4; j++)
            if (i == j + 4)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    //verificam daca diagonala secundara din blocul din stanga-jos are toate elementele egale cu 1
    ok = 1;                //presupunem ca diagonala secundara are toate elementele egale cu 1
    for (i = 4; i < 8; i++)
        for (j = 0; j < 4; j++)
            if (i + j == 7)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    for (i = 4; i < 8; i++)    //verificam cate linii au elementele egale cu 1 in blocul din dreapta-jos
    {
        ok = 1;           //presupunem ca linia are toate elementele egale cu 1
        for (j = 4; j < 8; j++)
        {
            if (m[i][j] == 0)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    for (j = 4; j < 8; j++)  //verificam cate coloane au elementele egale cu 1 in blocul din dreapta-jos
    {
        ok = 1;         //presupunem ca coloana are toate elementele egale cu 1
        for (i = 4; i < 8; i++)
        {
            if (m[i][j] != 1)
                ok = 0;
        }
        if (ok == 1)
            s++;
    }
    //verificam daca diagonala principala din blocul din dreapta-jos toate elementele egale cu 1
    ok = 1;              //presupunem ca diagonala principala are toate elementele egale cu 1
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            if (i == j)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    //verificam daca diagonala secundara din blocul din dreapta-jos are toate elementele egale cu 1
    ok = 1;               //presupunem ca diagonala secundara are toate elementele egale cu 1
    for (i = 4; i < 8; i++)
        for (j = 4; j < 8; j++)
            if (i + j == 11)
                if (m[i][j] != 1)
                    ok = 0;
    if (ok == 1)
        s++;
    return s;
}
int main()
{
    int a[8][8], b[8][8], c[8][8], n, i, j, x[10], d[8][8], y[10], scor1, scor2, scor3, max1;
    char s[10][10];
    for (i = 0; i < 8; i++)
        scanf("%d", &x[i]);
    for (i = 0; i < 8; i++)
    {
        dec_to_bin(x[i], s[i]);
        for (j = 0; j < 8; j++)
            a[i][j] = s[i][j] - '0';       //vom crea matricea a
    }
    inmultire_matrice(a, a, b);   //calculam a la patrat
    A_tr(a, c);                  //calculam transpusa lui a
    inmultire_matrice(a, c, d);   //calculam produsul dintre a si transpusa lui a
    scor1 = sum_X_0(a);
    scor2 = sum_X_0(d);
    scor3 = sum_X_0(b);
    max1 = 0;
    if (max1 <= scor3)        //calculam maximul dintre scoruri
        max1 = scor3;
    if (max1 <= scor2)
        max1 = scor2;
    if (max1 <= scor1)
        max1 = scor1;
    if (max1 == scor3)
    {
        for (i = 0; i < 8; i++)         //facem trecerea din binar in zecimal a liniilor matricii cu scor maxim
        {
            for (j = 0; j < 8; j++)
                s[i][j] = b[i][j] + '0';
            y[i] = bin_to_dec(s[i]);
        }
    }
    if (max1 == scor2)
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
                s[i][j] = d[i][j] + '0';
            y[i] = bin_to_dec(s[i]);
        }
    }
    if (max1 == scor1)
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
                s[i][j] = a[i][j] + '0';
            y[i] = bin_to_dec(s[i]);
        }
    }
    for (i = 0; i < 8; i++)
        printf("%d\n", y[i]);
    return 0;
}