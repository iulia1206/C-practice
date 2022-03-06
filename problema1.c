#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//functia is_anagram verifica daca s1 si s2 sunt o pereche de anagrame
int is_anagram(char* s1, char* s2)
{
    int frecventa1[150], i, frecventa2[150];
    for (i = 97; i <= 122; i++)
        frecventa1[i] = 0;
    for (i = 97; i <= 122; i++)
        frecventa2[i] = 0;          //initializam ambii vectori de frecventa cu 0
    if (strlen(s1) != strlen(s2)) //verificam daca au acelasi numar de caractere si in caz contrar returnam 0
        return 0;
    for (i = 0; i < strlen(s1); i++)
    {
        frecventa1[s1[i]]++;    //vedem de cate ori regasim o litera in primul cuvant
        frecventa2[s2[i]]++;   //vedem de cate ori regasim o litera in al 2 lea cuvant
    }
    for (i = 97; i <= 122; i++)
        if (frecventa1[i] != frecventa2[i])    //verificam daca numarul aparitiilor literelor din primul cuvant este egal cu numarul aparitiilor din al 2 lea cuvant
            return 0;
    return 1;
}
//functia compute_grade calculeaza gradul celor 2 siruri s1 si s2
double compute_grade(char* s1, char* s2)
{
    double nr;
    int i, n;
    if (is_anagram(s1, s2) == 0) //daca cuvantul nu este anagrama ii dam gradul -1
        return -1;
    n = strlen(s1);
    nr = 0;   //numarul caracterelor distincte de pe aceeasi pozitie din cele 2 cuvinte
    for (i = 0; i < n; i++)
        if (s1[i] != s2[i])
            nr++;
    return nr / n;    //returnam gradul
}
int main()
{

    char a[1000][50], aux[50], b[1000][50];
    int i, j, n;
    scanf("%d", &n); //citim n perechi
    for (i = 0; i < n; i++)
    {
        scanf("%s", &a[i]); //citim intr-o matrice 'a' primele cuvinte din pereche
        scanf("%s", &b[i]); //citim intr-o matrice 'b' urmatoarele cuvinte din pereche
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (compute_grade(a[i], b[i]) < compute_grade(a[j], b[j]))
            {
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);     //interschimbam perechile de cuvinte astfel incat sa fie ordonate descrescator dupa grad
                strcpy(aux, b[i]);
                strcpy(b[i], b[j]);
                strcpy(b[j], aux);
            }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (compute_grade(a[i], b[i]) == compute_grade(a[j], b[j])) //verificam daca gradul celor 2 perechi este acelasi
            {
                if (strcmp(a[i], a[j]) < 0)
                {
                    strcpy(aux, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], aux);     //interschimbam perechile de cuvinte astfel incat sa fie ordonate descrescator lexicografic dupa primul cuvant
                    strcpy(aux, b[i]);
                    strcpy(b[i], b[j]);
                    strcpy(b[j], aux);
                }
            }
    for (i = 0; i < n; i++)
    {
        printf("%s ", a[i]); //afisam matricea 'a' a primele cuvinte din pereche
        printf("%s\n", b[i]); //afisam matricea 'b' a urmatoarelor cuvinte din pereche
    }
    return 0;
}
