#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 1functia atac_reciproc numara si afiseaza cate perechi de nebuni din cele nr_nebuni, avand coordonatele in matricea coord_nebuni, se ataca reciproc pe o tabla de dimensiunea dim_tabla
void atac_reciproc(int dim_tabla, int nr_nebuni, int coord_nebuni[][3])
{
    int i, j, pozitie[100][100], atac, s_nebuni, k, l;
    atac = 0;       //calculam cate perechi de nebuni se ataca reciproc
    for (i = 0; i < dim_tabla; i++)
        for (j = 0; j < dim_tabla; j++)
            pozitie[i][j] = 0;
    for (i = 0; i < nr_nebuni; i++)
    {
        pozitie[coord_nebuni[i][0]][coord_nebuni[i][1]] = 1;     //vom da valoarea 1 oriunde se afla un nebun pe tabla de sah
    }
    for (j = 1; j < dim_tabla; j++)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i <= j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            atac = atac + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;         //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, sub ea
        k = i;
        l = dim_tabla - 1;
        for (j = dim_tabla - 1; j >= i; j--)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            atac = atac + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o coloana sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala,sub ea
        k = i;
        l = 0;
        for (j = 0; j < dim_tabla - i; j++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            atac = atac + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (j = dim_tabla - 2; j >= 0; j--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i < dim_tabla - j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            atac = atac + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    printf("%d\n", atac);
}
// functia atac_reciproc2 este identica cu functia atac_reciproc, dar in loc sa afiseze cate perechi de nebuni se ataca reciproc, doar pastreaza numarul lor in variabila atac si pastreaza, de asemenea, pozitia tuturor nebunilor
void atac_reciproc2(int dim_tabla, int nr_nebuni, int coord_nebuni[][3], int* atac, int pozitie[][100])
{
    int i, j, s_nebuni, k, l;
    (*atac) = 0;       //calculam cate perechi de nebuni se ataca reciproc
    for (i = 0; i < dim_tabla; i++)
        for (j = 0; j < dim_tabla; j++)
            pozitie[i][j] = 0;
    for (i = 0; i < nr_nebuni; i++)
    {
        pozitie[coord_nebuni[i][0]][coord_nebuni[i][1]] = 1;     //vom da valoarea 1 oriunde se afla un nebun pe tabla de sah
    }
    for (j = 1; j < dim_tabla; j++)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i <= j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;         //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, sub ea
        k = i;
        l = dim_tabla - 1;
        for (j = dim_tabla - 1; j >= i; j--)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o coloana sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala,sub ea
        k = i;
        l = 0;
        for (j = 0; j < dim_tabla - i; j++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (j = dim_tabla - 2; j >= 0; j--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i < dim_tabla - j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
}
//functia atac_reciproc3 este identica cu functia atac_reciproc2, dar in aceasta nu mai initializeaza elementele vectorului pozitie cu 0
void atac_reciproc3(int dim_tabla, int nr_nebuni, int* atac, int pozitie[][100])
{
    int i, j, s_nebuni, k, l;
    (*atac) = 0;       //calculam cate perechi de nebuni se ataca reciproc
    for (j = 1; j < dim_tabla; j++)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i <= j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;         //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, sub ea
        k = i;
        l = dim_tabla - 1;
        for (j = dim_tabla - 1; j >= i; j--)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o coloana sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala,sub ea
        k = i;
        l = 0;
        for (j = 0; j < dim_tabla - i; j++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
    for (j = dim_tabla - 2; j >= 0; j--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i < dim_tabla - j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)
            (*atac) = (*atac) + s_nebuni * (s_nebuni - 1) / 2;     //pe caz general, daca pe o diagonala sunt mai multi nebuni, atunci numarul perechilor de nebuni care se vor ataca reciproc este n*(n-1)/2
    }
}
//functia gasire cauta in matricea pozitie si pastreaza in vectorii x si y coordonatele celor 2 nebuni care se ataca reciproc
void gasire(int pozitie[][100], int dim_tabla, int nr_nebuni, int coord_nebuni[][3], int x[], int y[])
{
    int i, j, atac, s_nebuni, k, l, ok;
    ok = 0; //nu am gasit inca coordonatele primului nebun care ataca
    for (j = 1; j < dim_tabla; j++)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i <= j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1) //daca gasim cei 2 nebuni care se ataca reciproc, mai reluam o data ciclul for pentru a le pastra coordonatele
        {
            k = 0;
            l = j;
            for (i = 0; i <= j; i++)
            {
                if (pozitie[k][l] == 1)
                    if (ok == 0)
                    {
                        ok = 1;
                        x[0] = k;
                        y[0] = l;
                    }
                    else
                    {
                        x[1] = k;
                        y[1] = l;
                    }
                //s_nebuni=s_nebuni+pozitie[k][l];
                k++;
                l--;
            }
            return;
        }
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;         //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea secundara, sub ea
        k = i;
        l = dim_tabla - 1;
        for (j = dim_tabla - 1; j >= i; j--)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l--;
        }
        if (s_nebuni > 1)    //daca gasim cei 2 nebuni care se ataca reciproc, mai reluam o data ciclul for pentru a le pastra coordonatele
        {
            k = i;
            l = dim_tabla - 1;
            for (j = dim_tabla - 1; j >= i; j--)
            {
                if (pozitie[k][l] == 1)
                    if (ok == 0)
                    {
                        ok = 1;
                        x[0] = k;
                        y[0] = l;
                    }
                    else
                    {
                        x[1] = k;
                        y[1] = l;
                    }
                //s_nebuni=s_nebuni+pozitie[k][l];
                k++;
                l--;
            }
            return;
        }
    }
    for (i = dim_tabla - 2; i >= 1; i--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala,sub ea
        k = i;
        l = 0;
        for (j = 0; j < dim_tabla - i; j++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)     //daca gasim cei 2 nebuni care se ataca reciproc, mai reluam o data ciclul for pentru a le pastra coordonatele
        {
            k = i;
            l = 0;
            for (j = 0; j < dim_tabla - i; j++)
            {
                if (pozitie[k][l] == 1)
                    if (ok == 0)
                    {
                        ok = 1;
                        x[0] = k;
                        y[0] = l;
                    }
                    else
                    {
                        x[1] = k;
                        y[1] = l;
                    }
                //s_nebuni=s_nebuni+pozitie[k][l];
                k++;
                l++;
            }
            return;
        }
    }
    for (j = dim_tabla - 2; j >= 0; j--)
    {
        s_nebuni = 0;    //in s_nebuni calculam cati nebuni sunt pe fiecare diagonala paralela cu cea principala, deasupra ei si inclusiv pe ea
        k = 0;
        l = j;
        for (i = 0; i < dim_tabla - j; i++)
        {
            s_nebuni = s_nebuni + pozitie[k][l];
            k++;
            l++;
        }
        if (s_nebuni > 1)      //daca gasim cei 2 nebuni care se ataca reciproc, mai reluam o data ciclul for pentru a le pastra coordonatele
        {
            k = 0;
            l = j;
            for (i = 0; i < dim_tabla - j; i++)
            {
                if (pozitie[k][l] == 1)
                    if (ok == 0)
                    {
                        x[0] = k;
                        y[0] = l;
                        ok = 1;
                    }
                    else
                    {
                        x[1] = k;
                        y[1] = l;
                    }
                //s_nebuni=s_nebuni+pozitie[k][l];
                k++;
                l++;
            }
            return;
        }
    }
}
//functia posibilitate verifica daca exista o modalitate de a muta un nebun astfel incat sa nu se atace cu alt nebun
void posibilitate(int dim_tabla, int nr_nebuni, int coord_nebuni[][3])
{
    int atac, pozitie[100][100], j, i, ok, x[2], y[2], p1, p2, k, l;
    ok = 0;     //presupunem ca nu exista nicio posibilitate de a muta nebunul astfel incat sa nu se atace cu alt nebun
    atac_reciproc2(dim_tabla, nr_nebuni, coord_nebuni, &atac, pozitie);
    if (atac != 1)   //verificam daca exista o singura pereche de nebuni care se ataca reciproc
        printf("NU\n");
    else
    {
        gasire(pozitie, dim_tabla, nr_nebuni, coord_nebuni, x, y);
        for (i = 0; i < dim_tabla; i++)
            for (j = 0; j < dim_tabla; j++)
                if (x[0] == i && y[0] == j)
                {
                    pozitie[i][j] = 0;  //ridicam nebunul pentru a gasi un loc mai convenabil
                    p1 = i;   //pastram pozitiile astfel incat sa nu il asezam in acelasi loc
                    p2 = j;
                    for (k = 0; k < dim_tabla; k++)
                        for (l = 0; l < dim_tabla; l++)
                            if (k != p1 && l != p2 && pozitie[k][l] != 1)
                            {
                                pozitie[k][l] = 1; //asezam nebunul pentru a verifica daca se ataca cu alt nebun
                                atac_reciproc3(dim_tabla, nr_nebuni, &atac, pozitie);
                                if (atac == 0)
                                {
                                    ok = 1;   //am gasit o pozitie convenabila pentru nebun in care nu se ataca cu un alt nebun
                                }
                                pozitie[k][l] = 0;
                            }
                    // Il punem la loc pentru a pastra starea initiala
                    pozitie[i][j] = 1;
                }
        //facem aceeasi vrificare si pentru coordonatele celui de al 2 lea nebun
        for (i = 0; i < dim_tabla; i++)
            for (j = 0; j < dim_tabla; j++)
                if (x[1] == i && y[1] == j)
                {
                    pozitie[i][j] = 0;
                    p1 = i;
                    p2 = j;
                    for (k = 0; k < dim_tabla; k++)
                        for (l = 0; l < dim_tabla; l++)
                            if (k != p1 && l != p2 && pozitie[k][l] != 1)
                            {
                                pozitie[k][l] = 1;
                                atac_reciproc3(dim_tabla, nr_nebuni, &atac, pozitie);
                                if (atac == 0)
                                {
                                    ok = 1;
                                }
                                pozitie[k][l] = 0;
                            }
                    // Il punem la loc pentru a pastra starea initiala
                    pozitie[i][j] = 1;
                }
        if (ok == 1)
            printf("DA\n");
        else
            printf("NU\n");
    }

}
int main()
{
    int M, N, coord[100][3], i, pozitie[100][100], atac, x[3], y[3];
    scanf("%d", &M);
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &coord[i][0]);
        scanf("%d", &coord[i][1]);
    }
    atac_reciproc(M, N, coord);
    posibilitate(M, N, coord);
    return 0;
}