Problema 1 - Anagrame

Am inceput prin a crea o functie, 'is_anagram', ce verifica daca 2 cuvinte sunt anagrame.
In problema se specifica faptul ca perechile de anagrame au un anumit grad,astfel am conceput o functia 'compute_grade' ce calculeaza gradul respectiv.
Mai departe, am ordonat descrescator in 'int main()' perechile de anagrame iar apoi, in cazul in care erau mai multe perechi de anagrame cu acelasi grad, le-am ordonat descrescator lexicografic, dupa primul cuvant.

Problema 2 - Sah

Programul incepe cu functia 'atac_reciproc' care afiseaza numarul perechilor de nebuni care se ataca reciproc.
Urmatoarele 2 functii 'atac_reciproc2' si 'atac_reciproc3' sunt asemanatoare: 'atac_reciproc2' este identica cu 'atac_reciproc', dar in loc sa afiseze numarul perechilor de nebuni care se ataca, aceasta il pastreaza intr-o variabila si de asemenea pastreaza si matricea pozitiilor nebunilor.
'atac_reciproc3' nu mai initializeaza matricea pozitiilor nebunilor de pe tabla de sah cu 0(ne va folosi in functia 'posibilitate').
Functia 'gasire' foloseste acelasi principiu ca in functiile anterioare si o folosim in cazul in care exista doar o pereche de nebuni care se ataca. Functia respectiva va gasi coordonatele acelor 2 nebuni si le va transmite prin 2 vectori.
Inca o ultima functie folosita in rezolvarea problemei este 'posibilitate', functie ce va verifica daca exista vreo modalitate de a muta un nebun astfel incat sa nu se mai atace.
In 'int main()' am apelat functiile 'atac_reciproc' si 'posibilitate' pentru a ajunge la output-ul dorit.

Problema 3 - Rubik’s Cube

Pentru a ne fi usor de urmarit si de rezolvat cerintele, am decis sa transform cele 6 matrici de caractere in matrici de intregi in functia 'transformare_int', desemnandu-i fiecarei culori cate un numar.
Deoarece la sfarsit trebuie sa afisam matricele de caractere, am implementat si functia 'transformare_char' care trece numerele intregi inapoi in culori separate de '.'.
Mai departe am alcatuit functiile 'ac_ceasornic' si 'sens_trigonometric' care realizeaza rotatia unei fete ale cubului in sensul acelor de ceasornic, respectiv rotatia in sens trigonometric a unei fete ale cubului.
Urmatoarele 12 functii 'F', 'F'', 'B', 'B'', 'U', 'U'', 'D', 'D'', 'R', 'R'', 'L', 'L'' realizeaza mutarile fata, spate, sus, jos, stanga, dreapta in sensul acelor de ceasornic si in sens trigonometric.
In 'int main()' am citit toate cele necesare si am verificat care functie trebuie apelata.

Problema 4 - X si 0

In acest program vom transforma numerele primite de la tastatura in baza 2 prin functia 'dec_to_bin', formandu-se o matrice pentru care vom calcula produsul transpusei ei(vom calcula transpusa folosind functia 'A_tr') cu ea insasi(pentru produsul celor 2 vom folosi functia 'inmultire_matrice') si patratul ei folosind tot functia 'inmultire_matrice'.
Mai departe vom calcula scorul pentru matricea A, (A X trA) si A^2 in functia 'sum_X_0' si vom afisa in 'int main()' numerele ce corespund matricei binare(folosind functia 'bin_to_dec') ale carei scor a fost cel mai mare.
In cazul  in care sunt 2 astfel de matrici, o vom afisa pe prima dintre ele. 