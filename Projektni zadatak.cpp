#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<fstream>
using namespace std;

using std::cout; using std::ofstream;
using std::endl; using std::string;

int main()
{
    int countr, r, r1, count, i, n, x, y;
    float score;
    char choice;
    string playername;
    int getch();
mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM KVIZ\n");
    printf("\n\t\t_______________________________");
    printf("\n\t\t\t   DOBRODOSLI ");
    printf("\n\t\t\t       U ");
    printf("\n\t\t\t     KVIZ ");
    printf("\n\t\t > Pritisni S da zapocnes igru");
    printf("\n\t\t > Pritisni I za odigrane igre");
    printf("\n\t\t > Pritisni Q da izades             ");
    printf("\n\t\t_______________________________\n\n");
    choice = toupper(getch());
    if (choice == 'Q')
        exit(1);
    else if (choice == 'I')
    {
        system("cls");
        x = 0;

        int exit = 0;

        while (exit == 0) {

            string line;
            ifstream myfile("kviz.txt");
            cout << "Prethodno odigrane igre su:" << endl;
            if (myfile.is_open())
            {
                y = 1;
                while (getline(myfile, line))
                {
                    cout << line << '\n';
                    y++;
                    if (y % 2 != 0)
                        cout << "-------------" << endl;
                }
                myfile.close();
            }

            else cout << "Unable to open file";

            printf("\n\t\t > Pritisni X da se vratis na pocetak");
            choice = toupper(getch());

            if (choice == 'X')
                exit = 1;
        }
        goto mainhome;
        system("cls");
    }
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tUnesite svoje ime:");
        getline(cin, playername);

        system("cls");
        cout << "\n ------------------  Dobrodosli " << playername << " u C++ Program Kviz --------------------------" << endl;
        printf("\n\n Evo nekih pravila prije igre:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> Postoje 2 runde u ovoj igri:ZAGRIJAVANJE i PRAVI KVIZ");
        printf("\n >> U zagrijavanju bit ce postavljena 3 pitanja da testiraju tvoje");
        printf("\n    znanje. Mozete igrati PRAVI KVIZ ako odgovorite na najmanje 2 pitanja iz ZAGRIJAVANJA");
        printf("\n    tocno, inace nemozete nastaviti dalje do PRAVOG KVIZA.");
        printf("\n >> Vasa igra krece sa KVIZOM. U ovoj rundi ce vas se pitati");
        printf("\n    10 pitanja. Za svaki tocni odgovor dobit ce te 10 bodova");
        printf("\n    Ovako mozete osvojiti maksimalno 100 bodova.");
        printf("\n >> Dobit ce te 4 opcije i morate pritisnuti A, B ,C ili D za");
        printf("\n    tocan odgovor.");
        printf("\n >> Pitat cemo vas konstantno dok se ne dobije tocan odgovor.");
        printf("\n >> Necete dobiti minus bodove za krive odgovore!");
        printf("\n\n\t!!!!!!!!!!!!! SVE NAJBOLJE !!!!!!!!!!!!!");
        printf("\n\n\n Pritisnite Y  da zapocnete igru!\n");
        printf("\n Pritisnite bilo koju drugu tipku za povratak na pocetni ekran!");
        if (toupper(getch()) == 'Y')
        {
            goto home;
        }
        else
        {
            goto mainhome;
            system("cls");
        }

    home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++)
        {
            system("cls");
            r1 = i;


            switch (r1)
            {
            case 1:
                printf("\n\nKoje od sljedecih je Palindrom?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nTOCNO!!!"); count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je C.23232");
                    getch();
                    break;
                }

            case 2:
                printf("\n\n\nKoji je broj u binarnom sustavu?");
                printf("\n\nA.253\t\tB.2000\n\nC.011002\t\tD.10101010");
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nTOCNO!!!"); count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nKRIVO!!! Tocan odgovor je D.10101010");
                    getch();
                    break;
                }

            case 3:
                printf("\n\n\nTko je od ovih osnovao APPLE?");
                printf("\n\nA.Steve Jobs\t\tB.Jack Dorsey\n\nC.Niklaus Wirth\t\tD.Ada Lovelace");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nTOCNO!!!"); count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nKRIVO!!! Tocan odgovor je A.Steve Jobs");
                    getch();
                    break;
                }
            }
        }
        if (count >= 2)
        {
            goto test;
        }
        else
        {
            system("cls");
            printf("\n\nOprostite nemate dovoljno znanja za ovaj kviz pokusajte ponovo kasnije.");
            getch();
            goto mainhome;
        }
    test:
        system("cls");
        cout << "\n\n\t** Svaka cast " << playername << " mozete igrati kviz **" << endl;
        printf("\n\n\n\n\t!Pritisnite bilo koju tipku da pocnete!");
        if (toupper(getch()) == 'p')
        {
            goto game;
        }
    game:
        countr = 0;
        for (i = 1; i <= 10; i++)
        {
            system("cls");
            r = i;

            switch (r)
            {
            case 1:
                printf("\n\nKoje od navedenih nije izazni uredaj?");
                printf("\n\nA.Monitor\t\tB.Projektor\n\nC.Skener\t\tD.Zvucnik");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break; getch();
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je C.Skener"); getch();
                    goto score;
                    break;
                }

            case 2:
                printf("\n\n\nSvako racunalo se sastoji iz dva osnovna dijela");
                printf("\n\nA.Hardware i Software\t\tB.Monitor i sistemska jedinica\n\nC.Software i Windows operativni sistem\t\tD.Kutije i monitora");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je A.Hardware i Software"); getch();
                    goto score;
                    break;
                }

            case 3:
                printf("\n\n\nSto od navedenog je operativni sustav? ");
                printf("\n\nA.Notepad+\t\tB.PowerPoint 2000\n\nC.Windows XP\t\tD.Netscape Navigator");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je C.Windows XP"); getch();
                    goto score;
                    break;
                }

            case 4:
                printf("\n\n\nKada je nastalo prvo racunalo?");
                printf("\n\nA.1833\t\tB.1940\n\nC.1845\t\tD.1831");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je A.1833"); getch();
                    goto score;
                    break;
                }

            case 5:
                printf("\n\n\nAko tri macke ubiju tri stakora u tri minute, koliko je potrebno da sto macaka ubije sto stakora?");
                printf("\n\nA.100 minuta\t\tB.3 minute\n\nC.50 minuta\t\tD.1 sat");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch(); break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je B.3 minute");getch();
                    goto score;
                    break;
                }
            case 6:
                printf("\n\n\nKoliko je puta moguce savinuti papir?");
                printf("\n\nA.6\t\tB.7\n\nC.10\t\tD.9");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je B.7");
                    getch(); 
                    goto score;
                    break;
                }

            case 7:
                printf("\n\n\nAI je naziv za:");
                printf("\n\nA.Automatska Indikcija\t\tB.Kinesku Bozicu\n\nC.Umjetna Inteligencija\t\tD.Proizvodnju procesora");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je C.Umjetna Inteligencija"); getch();
                    goto score;
                    break;
                }

            case 8:
                printf("\n\n\nKoji od navedenih nije programski jezik?");
                printf("\n\nA.C++\t\tB.Python\n\nC.Java\t\tD.Linux");
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch(); break;
                }
                else
                {
                    printf("\n\nTOCNO!!! Tocan odgovor je D. Linux"); getch();
                    goto score;
                    break;
                }

            case 9:
                printf("\n\n\nGama zrake se jos nazivaju:");
                printf("\n\nA.Nevidljivi Snajperi\t\tB.Nevidljive Zrake\n\nC.Laseri\t\tD.Svijetlosne Zrake");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch();
                    break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je A.Nevidljivi Snajperi"); getch();
                    goto score;
                    break;
                }

            case 10:
                printf("\n\n\nKoji je glavni grad Gruzije?");
                printf("\n\nA.Pripyat\t\tB.Tbilisi\n\nC.Batumi\t\tD.Sevastopol");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nTOCNO!!!"); countr++; getch(); break;
                }
                else
                {
                    printf("\n\nNETOCNO!!! Tocan odgovor je B. Tbilisi"); getch(); break; goto score;
                }

            }
        }
    score:
        system("cls");
        score = (float)countr * 10;

        string filename("kviz.txt");
        ofstream file_out;

        file_out.open(filename, ios::app);
        file_out << playername << endl;
        file_out << score << endl;

        if (score > 0.00 && score < 100)
        {

            printf("\n\n\t\t*** SVAKA CAST ****");
            printf("\n\t Osvojili ste %.f bodova", score); goto go;

        }

        else if (score == 100)
        {
            printf("\n\n\n \t\t*** SVAKA CAST ***");
            printf("\n\t\t Osvojili ste %.f bodova", score);
            printf("\t\t CESTITAM!!");
        }
        else
        {
            printf("\n\n\t** ZAO MI JE ALI NISTE NISTA OSVOJILI **");
            printf("\n\t\t Hvala sto ste sudjelovali");
            printf("\n\t\t PROBAJTE PONOVO"); goto go;
        }

    go:
        puts("\n\n Pritisnite Y ako zelite ponovo igrati");
        puts(" Pritisnite bilo koju dugu tipku za povratak na pocetni meni");
        if (toupper(getch()) == 'Y')
            goto home;
        else
        {
            goto mainhome;
        }
    }
}
