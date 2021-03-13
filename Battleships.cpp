#include<iostream>
#include<string.h>
#include<winbgim.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<mmsystem.h>
#include<chrono>

using namespace std;

#define FUNDAL LIGHTGRAY

int corect = 1, sus4 = 120, jv, numar21 = 0, numar22 = 0, numar3 = 0, numar4 = 0, sus3 = 320, gatalov4 = 0, gatalov21 = 0, gatalov3 = 0, gatalov22 = 0, gatalovu21 = 0, gatalovu22 = 0, gatalovu3 = 0, gatalovu4 = 0, sus21 = 570, sus22 = 470, k2, l2, m, p, o;
int t, u, v, w, matrice[11][11], b, f, d = 0, c3, x, y, h, g, xa, xb, xc, xd, ii, jj, aa, bb, ia, ib, aaa, bbb, v1[3], aux1, aux2, aux3, iii, jjj, a3, b3, xe, xf, m2 = 0, m3 = 0, m4 = 0, ip, q, r, s, matrice1[11][11];
int jp, numar = 0, iv = 1;
bool adevarat[2], posibilitate[16], posibilitate1[16], adevarat1[2], posibilitate2[16], adevarat2[2];

int stanga = 50, sus = 150, stanga1 = 600, sus1 = 150, width = 500, height = 500, latura = 50, TablaJucator[11][11], l, c, l1, c1, i, j, lovituriUser[11], lovituriCPU[11];
int k = 5, nr4, Strategy[12][12], hitsCPU = 7, tabloui[5], tablouj[5], nrLovituri = 0, a = 1, nrIntrare = 1, hitsUser = 7, nrLovituri4, nrLovituri3, nrLovituri2;
int nrLovituri1, lovituri, t1, z1, linia2, coloana2, k1, lovitura[100][2], timp = 800;
bool gata = false, ok4 = false, ok41 = false, ok42 = false, ok3 = false, ok31 = false, ok32 = false, ok2 = false, ok21 = false, ok22 = false, ok1 = false, ok11 = false, ok12 = false;
bool destroyed4 = false, found4 = false, found3 = false, found2 = false, found1 = false, destroyed3 = false, destroyed2 = false, destroyed1 = false;
char minut[256] = "1", secunda[256] = "00";

int sus0 = 200, stanga0 = 345, x0, y0, lungime = 840, latime = 120, pozitie, xac, yac, rc = 10;
bool gata0 = false, gata1 = false, gata2 = false, gata3 = false, gata4 = false, gata5 = false, gata6 = false, gata7 = false;

char* a1 = strdup("BUN VENIT!"), * b1 = strdup("VAPOARE"), * c21 = strdup("START"), * d1 = strdup("SETARI"), * e1 = strdup("INSTRUCTIUNI"), * f1 = strdup("IESIRE");
char* g1 = strdup("ALEGETI NIVELUL DE DIFICULTATE"), * h1 = strdup("USOR"), * i1 = strdup("MEDIU"), * j1 = strdup("GREU"), * k21 = strdup("INAPOI");
char* m1 = strdup("SCHIMBATI LIMBA");
char* n1 = strdup("ALEGETI LIMBA DORITA"), * o1 = strdup("ROMANA"), * p1 = strdup("ENGLEZA"), * q1 = strdup("GERMANA"), * r1 = strdup("ITALIANA");

char* a12 = strdup("BUN VENIT!"), * b12 = strdup("VAPOARE"), * c12 = strdup("START"), * d12 = strdup("SETARI"), * e12 = strdup("INSTRUCTIUNI"), * f12 = strdup("IESIRE");
char* g12 = strdup("ALEGETI NIVELUL DE DIFICULTATE"), * h12 = strdup("USOR"), * i12 = strdup("MEDIU"), * j12 = strdup("GREU"), * k12 = strdup("INAPOI");
char* m12 = strdup("SCHIMBATI LIMBA");
char* n12 = strdup("ALEGETI LIMBA DORITA"), * o12 = strdup("ROMANA"), * p12 = strdup("ENGLEZA"), * q12 = strdup("GERMANA"), * r12 = strdup("ITALIANA");

char* a11 = strdup("WELCOME!"), * b11 = strdup("SHIPS"), * c11 = strdup("START"), * d11 = strdup("SETTINGS"), * e11 = strdup("INSTRUCTIONS"), * f11 = strdup("QUIT");
char* g11 = strdup("CHOOSE THE DIFFICULTY LEVEL"), * h11 = strdup("EASY"), * i11 = strdup("MEDIUM"), * j11 = strdup("HARD"), * k11 = strdup("BACK");
char* m11 = strdup("CHANGE LANGUAGE");
char* n11 = strdup("CHOOSE LANGUAGE"), * o11 = strdup("ROMANIAN"), * p11 = strdup("ENGLISH"), * q11 = strdup("GERMAN"), * r11 = strdup("ITALIAN");

char* a111 = strdup("WILLKOMMEN!"), * b111 = strdup("SCHIFF"), * c111 = strdup("BEGINN"), * d111 = strdup("EINSTELLUNGEN"), * e111 = strdup("ANLEITUNG"), * f111 = strdup("OUTPUT");
char* g111 = strdup("WAHLEN SIE DEN SCHWIERIGKEITSGRAD"), * h111 = strdup("EINFACH"), * i111 = strdup("MITTEL"), * j111 = strdup("SCHWER"), * k111 = strdup("ZURUCK");
char* l111 = strdup("ANDERN SIE DEN NAMEN"), * m111 = strdup("ANDERN SIE DEN SPRACHE");
char* n111 = strdup("WAHLEN SIE SPRACHE"), * o111 = strdup("ROMANIAN"), * p111 = strdup("ENGLISCH"), * q111 = strdup("DEUTSCH"), * r111 = strdup("ITALIAN");

char* a1111 = strdup("BENVENUTO!"), * b1111 = strdup("NAVI"), * c1111 = strdup("AVVIO"), * d1111 = strdup("IMPOSTAZIONI"), * e1111 = strdup("ISTRUZIONI"), * f1111 = strdup("USCITA");
char* g1111 = strdup("SCEGLI IL LIVELLO DI DIFFICOLTA"), * h1111 = strdup("FACILE"), * i1111 = strdup("AMBIENTE"), * j1111 = strdup("DIFFICILE"), * k1111 = strdup("INDIETRO");
char* m1111 = strdup("CAMBIA LA LINGUA");
char* n1111 = strdup("SCEGLI LA LINGUA"), * o1111 = strdup("RUMENO"), * p1111 = strdup("INGLESE"), * q1111 = strdup("TEDESCO"), * r1111 = strdup("ITALIANO");

char instr1[] = "Jocul consta in amplasarea de catre fiecare jucator, in marea in care se desfasoara lupta,a unor";
char instr2[] = "forte militare, nave fixe,a caror pozitie este secreta pentru adversar. Apoi, cu acelasi numar de";
char instr3[] = "focuri, alternativ, jucatorii incearca sa depisteze si sa scoata din lupta fortele adverse.";
char instr4[] = "Jucatorul ale carui nave de razboi au fost scufundate mai repede pierde lupta.";
char instr5[] = "Vapoarele fiecarui jucator sunt in numar de patru, diferite ca volum, importanta si valoare:";
char instr6[] = "un vapor de 4 unitati(patratele), un vapor de 3 unitati si doua vapoare de cate doua unitati.";
char instr7[] = "Acestea nu sunt altceva decat siruri de patratele consecutive, marcate ca atare pe campul de lupta.";
char instr8[] = "Valoarea in lovituri a celor 4 nave este urmatoarea:";
char instr9[] = "-vaporu1 de 4 patratele echivaleaza cu 3 lovituri;";
char instr10[] = "-vaporu1 de 3 patratele echivaleaza cu 2 lovituri;";
char instr11[] = "-vaporu1 de 2 patratele echivaleaza cu 1 lovitura.";
char instr12[] = "Pentrul modul usor, atunci cand jucatorul nimereste o barca a calculatorului, patratica se va";
char instr13[] = "colora in culoarea corespunzatoare barcii lovite. Pentru modul mediu,atunci cand jucatorul";
char instr14[] = "nimereste o barca a calculatorului,patratica se va colora in culoarea gri,indiferent de barca";
char instr15[] = "lovita,iar pentru modul greu, atunci cand jucatorul nimereste o barca a calculatorului, se va";
char instr16[] = "afisa in coloana din dreapta careului de atac numarul setului de lovituri astfel: primele 4";
char instr17[] = "patratele reprezinta barca de 4 unitati, urmatoarele 3reprezinta barca de 3 unitati,iar";
char instr18[] = "urmatoarele 4 marcheza cele 2 barci de cate 2 unitati.";

char instr111[] = "Jocul consta in amplasarea de catre fiecare jucator, in marea in care se desfasoara lupta,a unor";
char instr211[] = "forte militare, nave fixe,a caror pozitie este secreta pentru adversar. Apoi, cu acelasi numar de";
char instr311[] = "focuri, alternativ, jucatorii incearca sa depisteze si sa scoata din lupta fortele adverse.";
char instr411[] = "Jucatorul ale carui nave de razboi au fost scufundate mai repede pierde lupta.";
char instr511[] = "Vapoarele fiecarui jucator sunt in numar de patru, diferite ca volum, importanta si valoare:";
char instr611[] = "un vapor de 4 unitati(patratele), un vapor de 3 unitati si doua vapoare de cate doua unitati.";
char instr711[] = "Acestea nu sunt altceva decat siruri de patratele consecutive, marcate ca atare pe campul de lupta.";
char instr811[] = "Valoarea in lovituri a celor 4 nave este urmatoarea:";
char instr911[] = "-vaporu1 de 4 patratele echivaleaza cu 3 lovituri;";
char instr101[] = "-vaporu1 de 3 patratele echivaleaza cu 2 lovituri;";
char instr112[] = "-vaporu1 de 2 patratele echivaleaza cu 1 lovitura.";
char instr121[] = "Pentrul modul usor, atunci cand jucatorul nimereste o barca a calculatorului, patratica se va";
char instr131[] = "colora in culoarea corespunzatoare barcii lovite. Pentru modul mediu,atunci cand jucatorul";
char instr141[] = "nimereste o barca a calculatorului,patratica se va colora in culoarea gri,indiferent de barca";
char instr151[] = "lovita,iar pentru modul greu, atunci cand jucatorul nimereste o barca a calculatorului, se va";
char instr161[] = "afisa in coloana din dreapta careului de atac numarul setului de lovituri astfel: primele 4";
char instr171[] = "patratele reprezinta barca de 4 unitati, urmatoarele 3reprezinta barca de 3 unitati,iar";
char instr181[] = "urmatoarele 4 marcheza cele 2 barci de cate 2 unitati.";

char instr19[] = "The game consists in the placement by each player, in the sea where the fight takes place, of some";
char instr20[] = "military forces, fixed ships, whose position is secret for the opponent, then with the same number of";
char instr21[] = "shots, alternatively, players try to detect and get out of the opposing forces.";
char instr22[] = "The player whose ships of war were submerged sooner loses the battle.";
char instr23[] = "Each player's ships are four, different in volume, importance, and value:";
char instr24[] = "a ship of 4 units (squares), a ship of 3 units and two ships of two units.";
char instr25[] = "These are nothing but strings of consecutive squares marked as such on the battlefield.";
char instr26[] = "The hit value of the four ships is the following:";
char instr27[] = "- 4-square ship equals 3 hits;";
char instr28[] = "- 3-square ship equals 2 hits;";
char instr29[] = "- 2-square ship equals 1 hit.";
char instr30[] = "For the easy way, when the player strokes a computer boat, the square will be";
char instr31[] = "color in the color of the hit boat. For average mode, when the player";
char instr32[] = "squeezes a computer boat, the square will be colored in gray, regardless of the boat";
char instr33[] = "hit, and for the hard way, when the player strokes a computer boat, it will";
char instr34[] = "display in the column to the right of the attacker number of the hit set as: the first 4";
char instr35[] = "the square represents the boat of 4 units, the next 3 represent the boat of 3 units, and";
char instr36[] = "The next 4 marks the 2 boats of 2 units.";

char instr37[] = "Das Spiel besteht aus der Platzierung eines jeden Spielers im Meer, wo der Kampf stattfindet, aus einigen";
char instr38[] = "Streitkräfte, feste Schiffe, deren Position für den Gegner geheim ist, dann mit der gleichen Anzahl von";
char instr39[] = "Schüsse, alternativ versuchen die Spieler, die gegnerischen Kräfte zu erkennen und sie zu verlassen.";
char instr40[] = "Der Spieler, dessen Kriegsschiffe früher versenkt wurden, verliert die Schlacht.";
char instr41[] = "Die Schiffe jedes Spielers sind vier und unterscheiden sich in Volumen, Wichtigkeit und Wert:";
char instr42[] = "ein Schiff mit 4 Einheiten (Quadraten), ein Schiff mit 3 Einheiten und zwei Schiffe mit zwei Einheiten.";
char instr43[] = "Dies sind nichts anderes als Reihen von aufeinanderfolgenden Feldern, die auf dem Schlachtfeld als solche markiert sind.";
char instr44[] = "Der Trefferwert der vier Schiffe ist folgender:";
char instr45[] = "- 4-Takt-Schiff entspricht 3 Schlägen;";
char instr46[] = "- 3-Quadrat-Schiff entspricht 2 Schlägen;";
char instr47[] = "- 2-Quadrat-1-Schiff entspricht 1 Treffer.";
char instr48[] = "Wenn der Spieler ein Computerboot streichelt, ist das Feld der einfachste Weg";
char instr49[] = "Farbe in der Farbe des getroffenen Bootes. Für den Durchschnittsmodus, wenn der Spieler";
char instr50[] = "quetscht ein Computerboot, das Quadrat wird unabhängig vom Boot grau eingefärbt";
char instr51[] = "hit, und für den harten Weg, wenn der Spieler ein Computerboot stößt, wird es";
char instr52[] = "wird in der Spalte rechts von der Angreifernummer des Treffers angezeigt als: die ersten 4";
char instr53[] = "das Quadrat repräsentiert das Boot mit 4 Einheiten, die nächsten 3 repräsentieren das Boot mit 3 Einheiten und";
char instr54[] = "Die nächsten 4 markieren die 2 Boote von 2 Einheiten.";

char instr55[] = "Il gioco consiste nel piazzamento di ciascun giocatore, nel mare in cui si svolge il combattimento, di alcuni";
char instr56[] = "forze militari, navi fisse, la cui posizione è segreta per l'avversario, quindi con lo stesso numero di";
char instr57[] = "colpi, in alternativa, i giocatori cercano di rilevare e uscire dalle forze avversarie.";
char instr58[] = "Il giocatore le cui navi da guerra sono state sommerse prima perde la battaglia.";
char instr59[] = "Le navi di ogni giocatore sono quattro, diverse per volume, importanza e valore:";
char instr60[] = "una nave di 4 unità (quadrati), una nave di 3 unità e due navi di due unità.";
char instr61[] = "Questi non sono altro che stringhe di quadrati consecutivi contrassegnati come tali sul campo di battaglia.";
char instr62[] = "Il valore di colpo delle quattro navi è il seguente:";
char instr63[] = "- La nave a 4 tempi è uguale a 3 colpi;";
char instr64[] = "- La nave 3-square-ship equivale a 2 tratti;";
char instr65[] = "- 2-square-1 ship equivale a 1 colpo.";
char instr66[] = "Per il modo semplice, quando il giocatore accarezza una barca del computer, il quadrato sarà";
char instr67[] = "colore nel colore della barca colpita. Per la modalità media, quando il giocatore";
char instr68[] = "stringe una barca del computer, il quadrato sarà colorato in grigio, indipendentemente dalla barca";
char instr69[] = "colpisci, e per il modo più duro, quando il giocatore accarezza una barca del computer, lo farà";
char instr70[] = "visualizza nella colonna a destra del numero dell'attaccante del set di risultati come: il primo 4";
char instr71[] = "il quadrato rappresenta la barca di 4 unità, i successivi 3 rappresentano la barca di 3 unità, e";
char instr72[] = "Il prossimo 4 segna le 2 barche di 2 unità.";


void douaClickuri(int& linia, int& coloana, int& linia1, int& coloana1)
{
    int x, y, x1, y1;
    getmouseclick(WM_LBUTTONDOWN, x, y);
    while (!(x >= stanga && x <= stanga + width && y >= sus && y <= sus + height))
    {
        getmouseclick(WM_LBUTTONDOWN, x, y);
    }
    linia = (y - sus) / latura + 1;
    coloana = (x - stanga) / latura + 1;
    getmouseclick(WM_LBUTTONDOWN, x1, y1);
    while (!(x1 >= stanga && x1 <= stanga + width && y1 >= sus && y1 <= sus + height))
    {
        getmouseclick(WM_LBUTTONDOWN, x1, y1);
    }
    linia1 = (y1 - sus) / latura + 1;
    coloana1 = (x1 - stanga) / latura + 1;
}

int diferentaClick(int linia, int coloana, int linia1, int coloana1)
{
    if (linia1 == linia)
        return 1 + abs(coloana - coloana1);
    else if (coloana1 == coloana)
        return 1 + abs(linia - linia1);
    else if (abs(linia - linia1) == abs(coloana - coloana1))
        return 1 + abs(linia - linia1);
    else
        return -1;
}

void desen()
{
    int i, j;
    int stlit = 30, suslit = 170;
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 30);
    outtextxy(stlit, suslit, (char*)"1");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"2");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"3");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"4");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"5");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"6");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"7");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"8");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"9");
    suslit = suslit + 50;
    stlit = stlit - 10;
    outtextxy(stlit, suslit, (char*)"10");

    stlit = 70; suslit = 130;
    outtextxy(stlit, suslit, (char*)"A");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"B");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"C");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"D");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"E");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"F");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"G");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"H");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"I");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"J");

    stlit = 580; suslit = 170;
    outtextxy(stlit, suslit, (char*)"1");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"2");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"3");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"4");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"5");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"6");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"7");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"8");
    suslit = suslit + 50;
    outtextxy(stlit, suslit, (char*)"9");
    suslit = suslit + 50;
    stlit = stlit - 10;
    outtextxy(stlit, suslit, (char*)"10");

    stlit = 620; suslit = 130;
    outtextxy(stlit, suslit, (char*)"A");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"B");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"C");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"D");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"E");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"F");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"G");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"H");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"I");
    stlit = stlit + 50;
    outtextxy(stlit, suslit, (char*)"J");

    setlinestyle(SOLID_LINE, USERBIT_LINE, THICK_WIDTH);
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
            rectangle(stanga + latura * (i - 1), sus + latura * (j - 1), stanga + latura * i, sus + latura * j);
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
            rectangle(stanga1 + latura * (i - 1), sus1 + latura * (j - 1), stanga1 + latura * i, sus1 + latura * j);
}

void vapor4(int x1, int y1, int x2, int y2, bool& ok4)
{
    ok4 = true;
    ok41 = true;
    ok42 = true;
    int c1, c2, a1, b1, a2, b2, i, j;
    if (x1 == x2)
    {
        for (i = min(y1, y2); i <= max(y1, y2) && ok4; i++)
            if (TablaJucator[i][x1] == 0)
                TablaJucator[i][x1] = 4;
            else
            {
                ok4 = false;
                for (j = 1; j <= i - 1; j++)
                    TablaJucator[j][x1] = 0;
            }
        if (ok4 == true)
        {
            a1 = stanga + latura * (x1 - 1);
            b1 = sus + latura * (min(y1, y2) - 1);
            a2 = a1 + latura;
            b2 = sus + latura * (i - 1);
            setfillstyle(SOLID_FILL, YELLOW);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if (y1 == y2)
    {
        for (i = min(x1, x2); i <= max(x1, x2) && ok4; i++)
            if (TablaJucator[y1][i] == 0)
                TablaJucator[y1][i] = 4;
            else
            {
                ok4 = false;
                for (j = min(x1, x2); j <= i - 1; j++)
                    TablaJucator[y1][j] = 0;
            }
        if (ok4 == true)
        {
            a1 = stanga + latura * (min(x1, x2) - 1);
            b1 = sus + latura * (y1 - 1);
            a2 = a1 + (max(x1, x2) - min(x1, x2) + 1) * latura;
            b2 = b1 + latura;
            setfillstyle(SOLID_FILL, YELLOW);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if ((x1 < x2 && y1 < y2) || (x2 < x1 && y2 < y1))
    {
        for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2) && ok4; i++, j++)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 4;
            else {
                ok4 = false;
                if (TablaJucator[j][i + 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok41 = false;
                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i - 1] != 0)
                    ok42 = false;
                if (ok41 == false && ok42 == false)
                    ok4 = false;
            }
            if (ok4 == false)
                for (c1 = min(x1, x2), c2 = min(y1, y2); c1 <= i - 1; c1++, c2++)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok4 == true)
            for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2); i++, j++)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, YELLOW);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
    else
    {
        for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok4; i++, j--)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 4;
            else {
                ok4 = false;
                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i + 1] != 0)
                    ok41 = false;
                if (TablaJucator[j][i - 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok42 = false;
                if (ok41 == false && ok42 == false)
                    ok4 = false;
            }
            if (ok4 == false)
                for (c1 = min(x1, x2), c2 = max(y1, y2); c1 <= i - 1; c1++, c2--)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok4 == true)
            for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok4; i++, j--)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, YELLOW);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
}

void vapor21(int x1, int y1, int x2, int y2, bool& ok2)
{
    ok2 = true;
    ok21 = true;
    ok22 = true;
    int c1, c2, a1, b1, a2, b2, i, j;
    if (x1 == x2)
    {
        for (i = min(y1, y2); i <= max(y1, y2) && ok2; i++)
            if (TablaJucator[i][x1] == 0)
                TablaJucator[i][x1] = 2;
            else
            {
                ok2 = false;
                for (j = 1; j <= i - 1; j++)
                    TablaJucator[j][x1] = 0;
            }
        if (ok2 == true)
        {
            a1 = stanga + latura * (x1 - 1);
            b1 = sus + latura * (min(y1, y2) - 1);
            a2 = a1 + latura;
            b2 = sus + latura * (i - 1);
            setfillstyle(SOLID_FILL, BLUE);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if (y1 == y2)
    {
        for (i = min(x1, x2); i <= max(x1, x2) && ok2; i++)
            if (TablaJucator[y1][i] == 0)
                TablaJucator[y1][i] = 2;
            else
            {
                ok2 = false;
                for (j = min(x1, x2); j <= i - 1; j++)
                    TablaJucator[y1][j] = 0;
            }
        if (ok2 == true)
        {
            a1 = stanga + latura * (min(x1, x2) - 1);
            b1 = sus + latura * (y1 - 1);
            a2 = a1 + (max(x1, x2) - min(x1, x2) + 1) * latura;
            b2 = b1 + latura;
            setfillstyle(SOLID_FILL, BLUE);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if ((x1 < x2 && y1 < y2) || (x2 < x1 && y2 < y1))
    {
        for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2) && ok2; i++, j++)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 2;
            else {
                ok2 = false;
                if (TablaJucator[j][i + 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok21 = false;
                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i - 1] != 0)
                    ok22 = false;
                if (ok21 == false && ok22 == false)
                    ok2 = false;
            }
            if (ok2 == false)
                for (c1 = min(x1, x2), c2 = min(y1, y2); c1 <= i - 1; c1++, c2++)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok2 == true)
            for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2); i++, j++)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, BLUE);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
    else
    {
        for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok2; i++, j--)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 2;
            else {
                ok2 = false;

                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i + 1] != 0)
                    ok21 = false;

                if (TablaJucator[j][i - 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok22 = false;
                if (ok21 == false && ok22 == false)
                    ok2 = false;
            }
            if (ok2 == false)
                for (c1 = min(x1, x2), c2 = max(y1, y2); c1 <= i - 1; c1++, c2--)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok2 == true)
            for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok2; i++, j--)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, BLUE);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
}

void vapor22(int x1, int y1, int x2, int y2, bool& ok1)
{
    ok1 = true;
    ok11 = true;
    ok12 = true;
    int c1, c2, a1, b1, a2, b2, i, j;
    if (x1 == x2)
    {
        for (i = min(y1, y2); i <= max(y1, y2) && ok1; i++)
            if (TablaJucator[i][x1] == 0)
                TablaJucator[i][x1] = 1;
            else
            {
                ok1 = false;
                for (j = 1; j <= i - 1; j++)
                    TablaJucator[j][x1] = 0;
            }
        if (ok1 == true)
        {
            a1 = stanga + latura * (x1 - 1);
            b1 = sus + latura * (min(y1, y2) - 1);
            a2 = a1 + latura;
            b2 = sus + latura * (i - 1);
            setfillstyle(SOLID_FILL, BLUE);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if (y1 == y2)
    {
        for (i = min(x1, x2); i <= max(x1, x2) && ok1; i++)
            if (TablaJucator[y1][i] == 0)
                TablaJucator[y1][i] = 1;
            else
            {
                ok1 = false;
                for (j = min(x1, x2); j <= i - 1; j++)
                    TablaJucator[y1][j] = 0;
            }
        if (ok1 == true)
        {
            a1 = stanga + latura * (min(x1, x2) - 1);
            b1 = sus + latura * (y1 - 1);
            a2 = a1 + (max(x1, x2) - min(x1, x2) + 1) * latura;
            b2 = b1 + latura;
            setfillstyle(SOLID_FILL, BLUE);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if ((x1 < x2 && y1 < y2) || (x2 < x1 && y2 < y1))
    {
        for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2) && ok1; i++, j++)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 1;

            else {
                ok1 = false;

                if (TablaJucator[j][i + 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok11 = false;

                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i - 1] != 0)
                    ok12 = false;

                if (ok11 == false && ok12 == false)
                    ok1 = false;
            }

            if (ok1 == false)
                for (c1 = min(x1, x2), c2 = min(y1, y2); c1 <= i - 1; c1++, c2++)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok1 == true)
            for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2); i++, j++)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, BLUE);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
    else
    {
        for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok1; i++, j--)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 1;
            else {
                ok1 = false;

                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i + 1] != 0)
                    ok11 = false;

                if (TablaJucator[j][i - 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok12 = false;
                if (ok11 == false && ok12 == false)
                    ok1 = false;
            }
            if (ok1 == false)
                for (c1 = min(x1, x2), c2 = max(y1, y2); c1 <= i - 1; c1++, c2--)
                    TablaJucator[c2][c1] = 0;

        }
        if (ok1 == true)
            for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok1; i++, j--)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, BLUE);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
}

void vapor3(int x1, int y1, int x2, int y2, bool& ok3)
{
    ok3 = true;
    ok31 = true;
    ok32 = true;
    int c1, c2, a1, b1, a2, b2, i, j;
    if (x1 == x2)
    {
        for (i = min(y1, y2); i <= max(y1, y2) && ok3; i++)
            if (TablaJucator[i][x1] == 0)
                TablaJucator[i][x1] = 3;
            else
            {
                ok3 = false;
                for (j = 1; j <= i - 1; j++)
                    TablaJucator[j][x1] = 0;
            }
        if (ok3 == true)
        {
            a1 = stanga + latura * (x1 - 1);
            b1 = sus + latura * (min(y1, y2) - 1);
            a2 = a1 + latura;
            b2 = sus + latura * (i - 1);
            setfillstyle(SOLID_FILL, MAGENTA);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if (y1 == y2)
    {
        for (i = min(x1, x2); i <= max(x1, x2) && ok3; i++)
            if (TablaJucator[y1][i] == 0)
                TablaJucator[y1][i] = 3;
            else
            {
                ok3 = false;
                for (j = min(x1, x2); j <= i - 1; j++)
                    TablaJucator[y1][j] = 0;
            }
        if (ok3 == true)
        {
            a1 = stanga + latura * (min(x1, x2) - 1);
            b1 = sus + latura * (y1 - 1);
            a2 = a1 + (max(x1, x2) - min(x1, x2) + 1) * latura;
            b2 = b1 + latura;
            setfillstyle(SOLID_FILL, MAGENTA);
            bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
        }
    }
    else if ((x1 < x2 && y1 < y2) || (x2 < x1 && y2 < y1))
    {
        for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2) && ok3; i++, j++)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 3;

            else {
                ok3 = false;

                if (TablaJucator[j][i + 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok31 = false;

                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i - 1] != 0)
                    ok32 = false;

                if (ok31 == false && ok32 == false)
                    ok3 = false;
            }

            if (ok3 == false)
                for (c1 = min(x1, x2), c2 = min(y1, y2); c1 <= i - 1; c1++, c2++)
                    TablaJucator[c2][c1] = 0;
        }
        if (ok3 == true)
            for (i = min(x1, x2), j = min(y1, y2); i <= max(x1, x2); i++, j++)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, MAGENTA);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
    else
    {
        for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok3; i++, j--)
        {
            if (TablaJucator[j][i] == 0)
                TablaJucator[j][i] = 3;
            else {
                ok3 = false;

                if (TablaJucator[j - 1][i] != 0 && TablaJucator[j][i + 1] != 0)
                    ok31 = false;

                if (TablaJucator[j][i - 1] != 0 && TablaJucator[j + 1][i] != 0)
                    ok32 = false;
                if (ok31 == false && ok32 == false)
                    ok3 = false;
            }
            if (ok3 == false)
                for (c1 = min(x1, x2), c2 = max(y1, y2); c1 <= i - 1; c1++, c2--)
                    TablaJucator[c2][c1] = 0;

        }
        if (ok3 == true)
            for (i = min(x1, x2), j = max(y1, y2); i <= max(x1, x2) && ok3; i++, j--)
            {
                a1 = stanga + latura * (i - 1);
                b1 = sus + latura * (j - 1);
                a2 = a1 + latura;
                b2 = b1 + latura;
                setfillstyle(SOLID_FILL, MAGENTA);
                bar(a1 + 1, b1 + 1, a2 + 0.1, b2 + 0.1);
            }
    }
}

void convertX(int i, int j)
{
    int a1, a2, b1, b2, a3, b3, a4, b4;

    a1 = stanga + latura * (j - 1);
    b1 = sus + latura * (i - 1);
    a2 = a1 + latura;
    b2 = b1 + latura;
    a3 = a1;
    b3 = b2;
    a4 = a2;
    b4 = b1;
    setcolor(LIGHTGRAY);
    line(a1, b1, a2, b2);
    line(a3, b3, a4, b4);
}

void imagine(int i, int j)
{
    int a1, a2, b1, b2;
    a1 = stanga + latura * (j - 1);
    b1 = sus + latura * (i - 1);
    a2 = a1 + latura;
    b2 = b1 + latura;
    readimagefile("fire.ico", a1, b1, a2 - 1, b2 - 1);
}

bool chenar()
{
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
        {
            if (j == 4 || j == 8 || i == 4 || i == 8)
                if (Strategy[i][j] == 4)
                    return false;

        }
    return true;
}

bool chenar1()
{
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
        {
            if (j == 2 || j == 6 || j == 10 || i == 2 || i == 6 || i == 10)
                if (Strategy[i][j] == 4)
                    return false;

        }
    return true;
}

void findBoat4()
{
    int r1, r2, contor;
    bool orizontala = false, ok = true;
    r1 = 1;
    r2 = 4 * (rand() % 2 + 1);
    if (r1 == 1)
    {
        for (i = r1; i <= 10 && lovituri != 0 && orizontala == false; i++)
        {
            if (Strategy[i][r2] != -4)
            {
                convertX(i, r2);
                if (TablaJucator[i][r2] == 0)
                    TablaJucator[i][r2] = k;
                else
                {
                    if (TablaJucator[i][r2] && TablaJucator[i][r2] != 0)
                    {
                        TablaJucator[i][r2] = -TablaJucator[i][r2];
                        imagine(i, r2);
                    }
                }
                Strategy[i][r2] = -4;
                lovituri--;
            }
            r1 = i + 1;
            if (i >= 10)
            {
                if (r2 == 4)
                {
                    ok = false;
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][8] == 4)
                        {
                            ok = true;
                            r2 = 8;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    if (ok == false)
                        orizontala = true;
                }

                else
                {
                    ok = false;
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][4] == 4)
                        {
                            ok = true;
                            r2 = 4;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    if (ok == false)
                        orizontala = true;
                }

            }
        }

        if (orizontala == true)
        {
            r2 = 1;
            r1 = 4;
            for (j = r2; j <= 10 && lovituri != 0; j++)
            {
                if (Strategy[r1][j] != -4)
                {
                    convertX(r1, j);
                    if (TablaJucator[r1][j] <= 4 && TablaJucator[r1][j] == 0)
                        TablaJucator[r1][j] = k;
                    else
                        if (TablaJucator[r1][j] != 0)
                        {
                            TablaJucator[r1][j] = -TablaJucator[r1][j];
                            imagine(r1, j);
                        }
                    Strategy[r1][j] = -4;
                    lovituri--;
                }
                r2 = j + 1;
                if (j >= 10 && chenar() == false)
                {
                    r1 = 8;
                    j = 0;
                }
            }
        }

    }

}

void destroyBoat4()
{
    int minim, maxim, r1, r2;
    if (nrLovituri == 1)
    {
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1]] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1]);
                Strategy[tabloui[1] - 1][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1]] = -TablaJucator[tabloui[1] - 1][tablouj[1]];
                    imagine(tabloui[1] - 1, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1]] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1]);
                Strategy[tabloui[1] + 1][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1]] = -TablaJucator[tabloui[1] + 1][tablouj[1]];
                    imagine(tabloui[1] + 1, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] + 1][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1] - 1);
                Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                    imagine(tabloui[1] + 1, tablouj[1] - 1);
                }

                else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1] + 1);
                Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                    imagine(tabloui[1] + 1, tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1]][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1], tablouj[1] + 1);
                Strategy[tabloui[1]][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1]][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1]][tablouj[1] + 1] = -TablaJucator[tabloui[1]][tablouj[1] + 1];
                    imagine(tabloui[1], tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1]][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1]][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1]][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1], tablouj[1] - 1);
                Strategy[tabloui[1]][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1]][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1]][tablouj[1] - 1] = -TablaJucator[tabloui[1]][tablouj[1] - 1];
                    imagine(tabloui[1], tablouj[1] - 1);
                }
                else if (TablaJucator[tabloui[1]][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1]][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1] + 1);
                Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                    imagine(tabloui[1] - 1, tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1] - 1);
                Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                    imagine(tabloui[1] - 1, tablouj[1] - 1);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && Strategy[tabloui[1] - 2][tablouj[1]] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1]);
                Strategy[tabloui[1] - 2][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1]] = -TablaJucator[tabloui[1] - 2][tablouj[1]];
                    imagine(tabloui[1] - 2, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] + 2 <= 10 && Strategy[tabloui[1] + 2][tablouj[1]] != -4)
            {
                convertX(tabloui[1] + 2, tablouj[1]);
                Strategy[tabloui[1] + 2][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] + 2][tablouj[1]] <= 4 && TablaJucator[tabloui[1] + 2][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] + 2][tablouj[1]] = -TablaJucator[tabloui[1] + 2][tablouj[1]];
                    imagine(tabloui[1] + 2, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] + 2][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] + 2][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && tablouj[1] + 2 <= 10 && Strategy[tabloui[1] - 2][tablouj[1] + 2] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1] + 2);
                Strategy[tabloui[1] - 2][tablouj[1] + 2] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] + 2] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] + 2];
                    imagine(tabloui[1] - 2, tablouj[1] + 2);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && tablouj[1] - 2 && Strategy[tabloui[1] - 2][tablouj[1] - 2] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1] - 2);
                Strategy[tabloui[1] - 2][tablouj[1] - 2] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] - 2] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] - 2];
                    imagine(tabloui[1] - 2, tablouj[1] - 2);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = k;
                lovituri--;
            }
        while (lovituri != 0)
        {
            do
            {
                r1 = rand() % 10 + 1;
                r2 = rand() % 10 + 1;
            } while (Strategy[r1][r2] == -4);
            convertX(r1, r2);
            Strategy[r1][r2] = -4;
            if (TablaJucator[r1][r2] <= 4 && TablaJucator[r1][r2] != 0)
                TablaJucator[r1][r2] = -TablaJucator[r1][r2];
            else if (TablaJucator[r1][r2] == 0)
                TablaJucator[r1][r2] = k;
            lovituri--;
        }

    }
    if (nrLovituri == 2)
    {
        if (abs(tablouj[1] - tablouj[2]) == 1 && tabloui[1] - tabloui[2] == 0)
        {
            minim = min(tablouj[1], tablouj[2]);
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[tabloui[1]][minim - 1] != -4)
                {
                    convertX(tabloui[1], minim - 1);
                    if (TablaJucator[tabloui[1]][minim - 1] <= 4 && TablaJucator[tabloui[1]][minim - 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim - 1] = -TablaJucator[tabloui[1]][minim - 1];
                        imagine(tabloui[1], minim - 1);
                    }
                    else if (TablaJucator[tabloui[1]][minim - 1] == 0)
                        TablaJucator[tabloui[1]][minim - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (minim - 2 >= 1 && Strategy[tabloui[1]][minim - 2] != -4)
                {
                    convertX(tabloui[1], minim - 2);
                    Strategy[tabloui[1]][minim - 2] = -4;
                    if (TablaJucator[tabloui[1]][minim - 2] <= 4 && TablaJucator[tabloui[1]][minim - 2] != 0)
                    {
                        TablaJucator[tabloui[1]][minim - 2] = -TablaJucator[tabloui[1]][minim - 2];
                        imagine(tabloui[1], minim - 2);
                    }
                    else if (TablaJucator[tabloui[1]][minim - 2] == 0)
                        TablaJucator[tabloui[1]][minim - 2] = k;
                    lovituri--;
                }

            maxim = max(tablouj[1], tablouj[2]);

            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[tabloui[1]][maxim + 1] != -4)
                {
                    convertX(tabloui[1], maxim + 1);
                    Strategy[tabloui[1]][maxim + 1] = -4;
                    if (TablaJucator[tabloui[1]][maxim + 1] <= 4 && TablaJucator[tabloui[1]][maxim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][maxim + 1] = -TablaJucator[tabloui[1]][maxim + 1];
                        imagine(tabloui[1], maxim + 1);
                    }
                    else if (TablaJucator[tabloui[1]][maxim + 1] == 0)
                        TablaJucator[tabloui[1]][maxim + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (maxim + 2 <= 10 && Strategy[tabloui[1]][maxim + 2] != -4)
                {
                    convertX(tabloui[1], maxim + 2);
                    Strategy[tabloui[1]][maxim + 2] = -4;
                    if (TablaJucator[tabloui[1]][maxim + 2] <= 4 && TablaJucator[tabloui[1]][maxim + 2] != 0)
                    {
                        TablaJucator[tabloui[1]][maxim + 2] = -TablaJucator[tabloui[1]][maxim + 2];
                        imagine(tabloui[1], maxim + 2);
                    }
                    else if (TablaJucator[tabloui[1]][maxim + 2] == 0)
                        TablaJucator[tabloui[1]][maxim + 2] = k;
                    lovituri--;
                }

        }
        if (abs(tablouj[1] - tablouj[2]) == 2 && tabloui[1] - tabloui[2] == 0)
        {
            minim = min(tablouj[1], tablouj[2]);
            if (lovituri != 0)
                if (minim + 1 <= 10 && Strategy[tabloui[1]][minim + 1] != -4)
                {
                    convertX(tabloui[1], minim + 1);
                    Strategy[minim + 1][tabloui[1]] = -4;
                    if (TablaJucator[tabloui[1]][minim + 1] <= 4 && TablaJucator[tabloui[1]][minim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim + 1] = -TablaJucator[tabloui[1]][minim + 1];
                        imagine(tabloui[1], minim + 1);
                    }

                    else if (TablaJucator[tabloui[1]][minim + 1] == 0)
                        TablaJucator[tabloui[1]][minim + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[tabloui[1]][minim - 1] != -4)
                {
                    convertX(tabloui[1], minim - 1);
                    Strategy[tabloui[1]][minim - 1] = -4;
                    if (TablaJucator[tabloui[1]][minim - 1] <= 4 && TablaJucator[tabloui[1]][minim - 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim - 1] = -TablaJucator[tabloui[1]][minim - 1];
                        imagine(tabloui[1], minim - 1);
                    }
                    else if (TablaJucator[tabloui[1]][minim - 1] == 0)
                        TablaJucator[tabloui[1]][minim - 1] = k;
                    lovituri--;
                }
            maxim = max(tablouj[1], tablouj[2]);
            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[tabloui[1]][maxim + 1] != -4)
                {
                    convertX(tabloui[1], maxim + 1);
                    Strategy[tabloui[1]][maxim + 1] = -4;
                    if (TablaJucator[tabloui[1]][maxim + 1] <= 4 && TablaJucator[tabloui[1]][maxim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][maxim + 1] = -TablaJucator[tabloui[1]][maxim + 1];
                        imagine(tabloui[1], maxim + 1);
                    }
                    else if (TablaJucator[tabloui[1]][maxim + 1] == 0)
                        TablaJucator[tabloui[1]][maxim + 1] = k;
                    lovituri--;
                }
        }
        if (abs(tablouj[1] - tablouj[2]) == 3 && tabloui[1] - tabloui[2] == 0)
        {
            if (lovituri != 0)
                if (Strategy[tabloui[1]][minim + 1] != -4)
                {
                    convertX(tabloui[1], minim + 1);
                    Strategy[tabloui[1]][minim + 1] = -4;
                    if (TablaJucator[tabloui[1]][minim + 1] <= 4 && TablaJucator[tabloui[1]][minim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim + 1] = -TablaJucator[tabloui[1]][minim + 1];
                        imagine(tabloui[1], minim + 1);
                    }
                    else if (TablaJucator[tabloui[1]][minim + 1] == 0)
                        TablaJucator[tabloui[1]][minim + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (Strategy[tabloui[1]][minim + 2] != -4)
                {
                    convertX(tabloui[1], minim + 2);
                    Strategy[tabloui[1]][minim + 2] = -4;
                    if (TablaJucator[tabloui[1]][minim + 2] <= 4 && TablaJucator[tabloui[1]][minim + 2] != 0)
                    {
                        TablaJucator[tabloui[1]][minim + 2] = -TablaJucator[tabloui[1]][minim + 2];
                        imagine(tabloui[1], minim + 2);
                    }
                    else if (TablaJucator[tabloui[1]][minim + 2] == 0)
                        TablaJucator[tabloui[1]][minim + 2] = k;
                    lovituri--;
                }
        }
        if (abs(tabloui[1] - tabloui[2]) == 1 && tablouj[1] - tablouj[2] == 0)
        {
            minim = min(tabloui[1], tabloui[2]);
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[minim - 1][tablouj[1]] != -4)
                {
                    convertX(minim - 1, tablouj[1]);
                    Strategy[minim - 1][tablouj[1]] = -4;
                    if (TablaJucator[minim - 1][tablouj[1]] <= 4 && TablaJucator[minim - 1][tablouj[1]] != 0)
                    {
                        TablaJucator[minim - 1][tablouj[1]] = -TablaJucator[minim - 1][tablouj[1]];
                        imagine(minim - 1, tablouj[1]);
                    }
                    else if (TablaJucator[minim - 1][tablouj[1]] == 0)
                        TablaJucator[minim - 1][tablouj[1]] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (minim - 2 >= 1 && Strategy[minim - 2][tablouj[1]] != -4)
                {
                    convertX(minim - 2, tablouj[1]);
                    Strategy[minim - 2][tablouj[1]] = -4;
                    if (TablaJucator[minim - 2][tablouj[1]] <= 4 && TablaJucator[minim - 2][tablouj[1]] != 0)
                    {
                        TablaJucator[minim - 2][tablouj[1]] = -TablaJucator[minim - 2][tablouj[1]];
                        imagine(minim - 2, tablouj[1]);
                    }
                    else if (TablaJucator[minim - 2][tablouj[1]] == 0)
                        TablaJucator[minim - 2][tablouj[1]] = k;
                    lovituri--;
                }


            maxim = max(tabloui[1], tabloui[2]);

            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[maxim + 1][tablouj[1]] != -4)
                {
                    convertX(maxim + 1, tablouj[1]);
                    Strategy[maxim + 1][tablouj[1]] = -4;
                    if (TablaJucator[maxim + 1][tablouj[1]] <= 4 && TablaJucator[maxim + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[maxim + 1][tablouj[1]] = -TablaJucator[maxim + 1][tablouj[1]];
                        imagine(maxim + 1, tablouj[1]);
                    }
                    else if (TablaJucator[maxim + 1][tablouj[1]] == 0)
                        TablaJucator[maxim + 1][tablouj[1]] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (maxim + 2 <= 10 && Strategy[maxim + 2][tablouj[1]] != -4)
                {
                    convertX(maxim + 2, tablouj[1]);
                    Strategy[maxim + 2][tablouj[1]] = -4;
                    if (TablaJucator[maxim + 2][tablouj[1]] <= 4 && TablaJucator[maxim + 2][tablouj[1]] != 0)
                    {
                        TablaJucator[maxim + 2][tablouj[1]] = -TablaJucator[maxim + 2][tablouj[1]];
                        imagine(maxim + 2, tablouj[1]);
                    }
                    else if (TablaJucator[maxim + 2][tablouj[1]] == 0)
                        TablaJucator[maxim + 2][tablouj[1]] = k;
                    lovituri--;
                }

        }
        if (abs(tabloui[1] - tabloui[2]) == 2 && tablouj[1] - tablouj[2] == 0)
        {
            minim = min(tabloui[1], tabloui[2]);

            if (lovituri != 0)
                if (minim + 1 <= 10 && Strategy[minim + 1][tablouj[1]] != -4)
                {
                    convertX(minim + 1, tablouj[1]);
                    Strategy[minim + 1][tablouj[1]] = -4;
                    if (TablaJucator[minim + 1][tablouj[1]] <= 4 && TablaJucator[minim + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[minim + 1][tablouj[1]] = -TablaJucator[minim + 1][tablouj[1]];
                        imagine(minim + 1, tablouj[1]);
                    }
                    else if (TablaJucator[minim + 1][tablouj[1]] == 0)
                        TablaJucator[minim + 1][tablouj[1]] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[minim - 1][tablouj[1]] != -4)
                {
                    convertX(minim - 1, tablouj[1]);
                    Strategy[minim - 1][tablouj[1]] = -4;
                    if (TablaJucator[minim - 1][tablouj[1]] <= 4 && TablaJucator[minim - 1][tablouj[1]] != 0)
                    {
                        TablaJucator[minim - 1][tablouj[1]] = -TablaJucator[minim - 1][tablouj[1]];
                        imagine(minim - 1, tablouj[1]);
                    }
                    else if (TablaJucator[minim - 1][tablouj[1]] == 0)
                        TablaJucator[minim - 1][tablouj[1]] = k;
                    lovituri--;
                }
            maxim = max(tabloui[1], tabloui[2]);
            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[maxim + 1][tablouj[1]] != -4)
                {
                    convertX(maxim + 1, tablouj[1]);
                    Strategy[maxim + 1][tablouj[1]] = -4;
                    if (TablaJucator[maxim + 1][tablouj[1]] <= 4 && TablaJucator[maxim + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[maxim + 1][tablouj[1]] = -TablaJucator[maxim + 1][tablouj[1]];
                        imagine(maxim + 1, tablouj[1]);
                    }
                    else if (TablaJucator[maxim + 1][tablouj[1]] == 0)
                        TablaJucator[maxim + 1][tablouj[1]] = k;
                    lovituri--;
                }
        }
        if (abs(tabloui[1] - tabloui[2]) == 3 && tablouj[1] - tablouj[2] == 0)
            minim = min(tabloui[1], tabloui[2]);
        {if (lovituri != 0)
            if (Strategy[minim + 1][tablouj[1]] != -4)
            {
                convertX(minim + 1, tablouj[1]);
                Strategy[minim + 1][tablouj[1]] = -4;
                if (TablaJucator[minim + 1][tablouj[1]] <= 4 && TablaJucator[minim + 1][tablouj[1]] != 0)
                {
                    TablaJucator[minim + 1][tablouj[1]] = -TablaJucator[minim + 1][tablouj[1]];
                    imagine(minim + 1, tablouj[1]);
                }
                else if (TablaJucator[minim + 1][tablouj[1]] == 0)
                    TablaJucator[minim + 1][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[minim + 2][tablouj[1]] != -4)
            {
                convertX(minim + 2, tablouj[1]);
                Strategy[minim + 2][tablouj[1]] = -4;
                if (TablaJucator[minim + 2][tablouj[1]] <= 4 && TablaJucator[minim + 2][tablouj[1]] != 0)
                {
                    TablaJucator[minim + 2][tablouj[1]] = -TablaJucator[minim + 2][tablouj[1]];
                    imagine(minim + 2, tablouj[1]);
                }
                else if (TablaJucator[minim + 2][tablouj[1]] == 0)
                    TablaJucator[minim + 2][tablouj[1]] = k;
                lovituri--;
            }
        }

        if (tabloui[2] - tabloui[1] == 1 && tablouj[2] - tablouj[1] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] - 1);
                    Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                        imagine(tabloui[1] - 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] - 2 >= 1 && tablouj[1] - 2 >= 1 && Strategy[tabloui[1] - 2][tablouj[1] - 2] != -4)
                {
                    convertX(tabloui[1] - 2, tablouj[1] - 2);
                    Strategy[tabloui[1] - 2][tablouj[1] - 2] = -4;
                    if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] - 2] != 0)
                    {
                        TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] - 2];
                        imagine(tabloui[1] - 2, tablouj[1] - 2);
                    }
                    else if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] == 0)
                        TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] + 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] + 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] + 1);
                    Strategy[tabloui[2] + 1][tablouj[2] + 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] + 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] + 1];
                        imagine(tabloui[2] + 1, tablouj[2] + 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 2 <= 10 && tablouj[2] + 2 <= 10 && Strategy[tabloui[2] + 2][tablouj[2] + 2] != -4)
                {
                    convertX(tabloui[2] + 2, tablouj[2] + 2);
                    Strategy[tabloui[2] + 2][tablouj[2] + 2] = -4;
                    if (TablaJucator[tabloui[2] + 2][tablouj[2] + 2] <= 4 && TablaJucator[tabloui[2] + 2][tablouj[2] + 2] != 0)
                    {
                        TablaJucator[tabloui[2] + 2][tablouj[2] + 2] = -TablaJucator[tabloui[2] + 2][tablouj[2] + 2];
                        imagine(tabloui[2] + 2, tablouj[2] + 2);
                    }
                    else if (TablaJucator[tabloui[2] + 2][tablouj[2] + 2] == 0)
                        TablaJucator[tabloui[2] + 2][tablouj[2] + 2] = k;
                    lovituri--;
                }

        }
        if (tabloui[2] - tabloui[1] == 2 && tablouj[2] - tablouj[1] == 2)
        {

            if (lovituri != 0)
                if (tabloui[1] + 1 <= 10 && tablouj[1] + 1 <= 10 && Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] + 1);
                    Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                        imagine(tabloui[1] + 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] - 1);
                    Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                        imagine(tabloui[1] - 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] + 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] + 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] + 1);
                    Strategy[tabloui[2] + 1][tablouj[2] + 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] + 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] + 1];
                        imagine(tabloui[2] + 1, tablouj[2] + 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 3 && tablouj[2] - tablouj[1] == 3)
        {

            if (lovituri != 0)
                if (tabloui[1] + 1 <= 10 && tablouj[1] + 1 <= 1 && Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] + 1);
                    Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                        imagine(tabloui[1] + 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] + 2 <= 10 && tablouj[1] + 2 <= 10 && Strategy[tabloui[1] + 2][tablouj[1] + 2] != -4)
                {
                    convertX(tabloui[1] + 2, tablouj[1] + 2);
                    Strategy[tabloui[1] + 2][tablouj[1] + 2] = -4;
                    if (TablaJucator[tabloui[1] + 2][tablouj[1] + 2] <= 4 && TablaJucator[tabloui[1] + 2][tablouj[1] + 2] != 0)
                    {
                        TablaJucator[tabloui[1] + 2][tablouj[1] + 2] = -TablaJucator[tabloui[1] + 2][tablouj[1] + 2];
                        imagine(tabloui[1] + 2, tablouj[1] + 2);
                    }
                    else if (TablaJucator[tabloui[1] + 2][tablouj[1] + 2] == 0)
                        TablaJucator[tabloui[1] + 2][tablouj[1] + 2] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 1 && tablouj[1] - tablouj[2] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] + 1 <= 10 && Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] + 1);
                    Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                        imagine(tabloui[1] - 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] - 2 >= 1 && tablouj[1] + 2 <= 10 && Strategy[tabloui[1] - 2][tablouj[1] + 2] != -4)
                {
                    convertX(tabloui[1] - 2, tablouj[1] + 2);
                    Strategy[tabloui[1] - 2][tablouj[1] + 2] = -4;
                    if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] + 2] != 0)
                    {
                        TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] + 2];
                        imagine(tabloui[1] - 2, tablouj[1] + 2);
                    }
                    else if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] == 0)
                        TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] - 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] - 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] - 1);
                    Strategy[tabloui[2] + 1][tablouj[2] - 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] - 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] - 1];
                        imagine(tabloui[2] + 1, tablouj[2] - 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 2 <= 10 && tablouj[2] - 2 >= 1 && Strategy[tabloui[2] + 2][tablouj[2] - 2] != -4)
                {
                    convertX(tabloui[2] + 2, tablouj[2] - 2);
                    if (TablaJucator[tabloui[2] + 2][tablouj[2] - 2] <= 4 && TablaJucator[tabloui[2] + 2][tablouj[2] - 2] != 0)
                    {
                        TablaJucator[tabloui[2] + 2][tablouj[2] - 2] = -TablaJucator[tabloui[2] + 2][tablouj[2] - 2];
                        imagine(tabloui[2] + 2, tablouj[2] - 2);
                    }
                    else if (TablaJucator[tabloui[2] + 2][tablouj[2] - 2] == 0)
                        TablaJucator[tabloui[2] + 2][tablouj[2] - 2] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 2 && tablouj[1] - tablouj[2] == 2)
        {
            if (lovituri != 0)
                if (tabloui[1] + 1 <= 10 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] - 1);
                    Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                        imagine(tabloui[1] + 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] + 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] + 1);
                    Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                        imagine(tabloui[1] - 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] - 1 >= 1 && Strategy[tabloui[2] + 1][tablouj[2] - 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] - 1);
                    Strategy[tabloui[2] + 1][tablouj[2] - 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] - 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] - 1];
                        imagine(tabloui[2] + 1, tablouj[2] - 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 3 && tablouj[1] - tablouj[2] == 3)
        {

            if (lovituri != 0)
                if (Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] - 1);
                    Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                        imagine(tabloui[1] + 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (Strategy[tabloui[1] + 2][tablouj[1] - 2] != -4)
                {
                    convertX(tabloui[1] + 2, tablouj[1] - 2);
                    Strategy[tabloui[1] + 2][tablouj[1] - 2] = -4;
                    if (TablaJucator[tabloui[1] + 2][tablouj[1] - 2] <= 4 && TablaJucator[tabloui[1] + 2][tablouj[1] - 2] != 0)
                        TablaJucator[tabloui[1] + 2][tablouj[1] - 2] = -TablaJucator[tabloui[1] + 2][tablouj[1] - 2];
                    else if (TablaJucator[tabloui[1] + 2][tablouj[1] - 2] == 0)
                        TablaJucator[tabloui[1] + 2][tablouj[1] - 2] = k;
                    lovituri--;
                }
        }
    }
    if (nrLovituri == 3)
    {
        if (tabloui[1] == tabloui[2] && tabloui[2] == tabloui[3] && abs(tablouj[2] - tablouj[1]) == 1 && abs(tablouj[3] - tablouj[2]) == 1)
        {
            if (lovituri != 0)
                if (tablouj[1] - 1 >= 1 && Strategy[tabloui[1]][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1], tablouj[1] - 1);
                    Strategy[tabloui[1]][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1]][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1]][tablouj[1] - 1] = -TablaJucator[tabloui[1]][tablouj[1] - 1];
                        imagine(tabloui[1], tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1]][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1]][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tablouj[3] + 1 <= 10 && Strategy[tabloui[1]][tablouj[3] + 1] != -4)
                {
                    convertX(tabloui[1], tablouj[3] + 1);
                    Strategy[tabloui[1]][tablouj[3] + 1] = -4;
                    if (TablaJucator[tabloui[1]][tablouj[3] + 1] <= 4 && TablaJucator[tabloui[1]][tablouj[3] + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][tablouj[3] + 1] = -TablaJucator[tabloui[1]][tablouj[3] + 1];
                        imagine(tabloui[1], tablouj[3] + 1);
                    }
                    else if (TablaJucator[tabloui[1]][tablouj[3] + 1] == 0)
                        TablaJucator[tabloui[1]][tablouj[3] + 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[1] == tabloui[2] && tabloui[2] == tabloui[3] && abs(tablouj[2] - tablouj[1]) == 1 && abs(tablouj[3] - tablouj[2]) == 2)
        {
            if (lovituri != 0)
                if (tablouj[3] - 1 >= 1 && Strategy[tabloui[1]][tablouj[3] - 1] != -4)
                {
                    convertX(tabloui[1], tablouj[3] - 1);
                    Strategy[tabloui[1]][tablouj[3] - 1] = -4;
                    if (TablaJucator[tabloui[1]][tablouj[3] - 1] <= 4 && TablaJucator[tabloui[1]][tablouj[3] - 1] != 0)
                    {
                        TablaJucator[tabloui[1]][tablouj[3] - 1] = -TablaJucator[tabloui[1]][tablouj[3] - 1];
                        imagine(tabloui[1], tablouj[3] - 1);
                    }
                    else if (TablaJucator[tabloui[1]][tablouj[3] - 1] == 0)
                        TablaJucator[tabloui[1]][tablouj[3] - 1] = k;
                    lovituri--;
                }
        }
        if (tablouj[1] == tablouj[2] && tablouj[2] == tablouj[3] && abs(tabloui[2] - tabloui[1]) == 1 && abs(tabloui[3] - tabloui[2]) == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1]] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1]);
                    Strategy[tabloui[1] - 1][tablouj[1]] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1]] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1]] = -TablaJucator[tabloui[1] - 1][tablouj[1]];
                        imagine(tabloui[1] - 1, tablouj[1]);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1]] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1]] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[3] + 1 <= 10 && Strategy[tabloui[3] + 1][tablouj[1]] != -4)
                {
                    convertX(tabloui[3] + 1, tablouj[1]);
                    Strategy[tabloui[3] + 1][tablouj[1]] = -4;
                    if (TablaJucator[tabloui[3] + 1][tablouj[1]] <= 4 && TablaJucator[tabloui[3] + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[tabloui[3] + 1][tablouj[1]] = -TablaJucator[tabloui[3] + 1][tablouj[1]];
                        imagine(tabloui[3] + 1, tablouj[1]);
                    }
                    else if (TablaJucator[tabloui[3] + 1][tablouj[1]] == 0)
                        TablaJucator[tabloui[3] + 1][tablouj[1]] = k;
                    lovituri--;
                }
        }
        if (tablouj[1] == tablouj[2] && tablouj[2] == tablouj[3] && abs(tabloui[2] - tabloui[1]) == 1 && abs(tabloui[3] - tabloui[2]) == 2)
        {
            if (lovituri != 0)
                if (tabloui[3] - 1 >= 1 && Strategy[tabloui[3] - 1][tablouj[1]] != -4)
                {
                    convertX(tabloui[3] - 1, tablouj[1]);
                    Strategy[tabloui[3] - 1][tablouj[1]] = -4;
                    if (TablaJucator[tabloui[3] - 1][tablouj[1]] <= 4 && TablaJucator[tabloui[3] - 1][tablouj[1]] != 0)
                    {
                        TablaJucator[tabloui[3] - 1][tablouj[1]] = -TablaJucator[tabloui[3] - 1][tablouj[1]];
                        imagine(tabloui[3] - 1, tablouj[1]);
                    }
                    else if (TablaJucator[tabloui[3] - 1][tablouj[1]] == 0)
                        TablaJucator[tabloui[3] - 1][tablouj[1]] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 1 && tabloui[3] - tabloui[2] == 1 && tablouj[2] - tablouj[1] == 1 && tablouj[3] - tablouj[2] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] - 1);
                    Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                        imagine(tabloui[1] - 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[3] + 1 <= 10 && tablouj[3] + 1 <= 10 && Strategy[tabloui[3] + 1][tablouj[3] + 1] != -4)
                {
                    convertX(tabloui[3] + 1, tablouj[3] + 1);
                    Strategy[tabloui[3] + 1][tablouj[3] + 1] = -4;
                    if (TablaJucator[tabloui[3] + 1][tablouj[3] + 1] <= 4 && TablaJucator[tabloui[3] + 1][tablouj[3] + 1] != 0)
                    {
                        TablaJucator[tabloui[3] + 1][tablouj[3] + 1] = -TablaJucator[tabloui[3] + 1][tablouj[3] + 1];
                        imagine(tabloui[3] + 1, tablouj[3] + 1);
                    }
                    else if (TablaJucator[tabloui[3] + 1][tablouj[3] + 1] == 0)
                        TablaJucator[tabloui[3] + 1][tablouj[3] + 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 1 && tabloui[3] - tabloui[2] == 2 && tablouj[2] - tablouj[1] == 1 && tablouj[3] - tablouj[2] == 2)
        {
            if (lovituri != 0)
                if (tabloui[3] - 1 >= 1 && tablouj[3] - 1 >= 1 && Strategy[tabloui[3] - 1][tablouj[3] - 1] != -4)
                {
                    convertX(tabloui[3] - 1, tablouj[3] - 1);
                    Strategy[tabloui[3] - 1][tablouj[3] - 1] = -4;
                    if (TablaJucator[tabloui[3] - 1][tablouj[3] - 1] <= 4)
                    {
                        TablaJucator[tabloui[3] - 1][tablouj[3] - 1] = -TablaJucator[tabloui[3] - 1][tablouj[3] - 1];
                        imagine(tabloui[3] - 1, tablouj[3] - 1);
                    }
                    else if (TablaJucator[tabloui[3] - 1][tablouj[3] - 1] == 0)
                        TablaJucator[tabloui[3] - 1][tablouj[3] - 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 1 && tabloui[3] - tabloui[2] == 1 && tablouj[1] - tablouj[2] == 1 && tablouj[2] - tablouj[3] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] + 1 <= 10 && Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] + 1);
                    Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                        imagine(tabloui[1] - 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[3] + 1 <= 10 && tablouj[3] - 1 >= 1 && Strategy[tabloui[3] + 1][tablouj[3] - 1] != -4)
                {
                    convertX(tabloui[3] + 1, tablouj[3] - 1);
                    Strategy[tabloui[3] + 1][tablouj[3] - 1] = -4;
                    if (TablaJucator[tabloui[3] + 1][tablouj[3] - 1] <= 4 && TablaJucator[tabloui[3] + 1][tablouj[3] - 1] != 0)
                    {
                        TablaJucator[tabloui[3] + 1][tablouj[3] - 1] = -TablaJucator[tabloui[3] + 1][tablouj[3] - 1];
                        imagine(tabloui[3] + 1, tablouj[3] - 1);
                    }
                    else if (TablaJucator[tabloui[3] + 1][tablouj[3] - 1] == 0)
                        TablaJucator[tabloui[3] + 1][tablouj[3] - 1] = k;
                    lovituri--;
                }
        }

        if (tabloui[2] - tabloui[1] == 1 && tabloui[3] - tabloui[2] == 2 && tablouj[1] - tablouj[2] == 1 && tablouj[2] - tablouj[3] == 2)
        {
            if (lovituri != 0)
                if (tabloui[3] - 1 >= 1 && tablouj[3] + 1 <= 10 && Strategy[tabloui[3] - 1][tablouj[3] + 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[3] + 1);
                    Strategy[tabloui[3] - 1][tablouj[3] + 1] = -4;
                    if (TablaJucator[tabloui[3] - 1][tablouj[3] + 1] <= 4 && TablaJucator[tabloui[3] - 1][tablouj[3] + 1] != 0)
                    {
                        TablaJucator[tabloui[3] - 1][tablouj[3] + 1] = -TablaJucator[tabloui[3] - 1][tablouj[3] + 1];
                        imagine(tabloui[1] - 1, tablouj[3] + 1);
                    }
                    else if (TablaJucator[tabloui[3] - 1][tablouj[3] + 1] == 0)
                        TablaJucator[tabloui[3] - 1][tablouj[3] + 1] = k;
                    lovituri--;
                }
        }

    }
}

void destroyBoat3()
{
    int minim, maxim, r1, r2;
    if (nrLovituri == 1)
    {
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1]] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1]);
                Strategy[tabloui[1] - 1][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1]] = -TablaJucator[tabloui[1] - 1][tablouj[1]];
                    imagine(tabloui[1] - 1, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1]] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1]);
                Strategy[tabloui[1] + 1][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1]] = -TablaJucator[tabloui[1] + 1][tablouj[1]];
                    imagine(tabloui[1] + 1, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] + 1][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1] - 1);
                Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                    imagine(tabloui[1] + 1, tablouj[1] - 1);
                }

                else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1] + 1, tablouj[1] + 1);
                Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                    imagine(tabloui[1] + 1, tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1]][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1], tablouj[1] + 1);
                Strategy[tabloui[1]][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1]][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1]][tablouj[1] + 1] = -TablaJucator[tabloui[1]][tablouj[1] + 1];
                    imagine(tabloui[1], tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1]][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1]][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1]][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1], tablouj[1] - 1);
                Strategy[tabloui[1]][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1]][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1]][tablouj[1] - 1] = -TablaJucator[tabloui[1]][tablouj[1] - 1];
                    imagine(tabloui[1], tablouj[1] - 1);
                }
                else if (TablaJucator[tabloui[1]][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1]][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1] + 1);
                Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                    imagine(tabloui[1] - 1, tablouj[1] + 1);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
            {
                convertX(tabloui[1] - 1, tablouj[1] - 1);
                Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                {
                    TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                    imagine(tabloui[1] - 1, tablouj[1] - 1);
                }
                else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                    TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && Strategy[tabloui[1] - 2][tablouj[1]] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1]);
                Strategy[tabloui[1] - 2][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1]] = -TablaJucator[tabloui[1] - 2][tablouj[1]];
                    imagine(tabloui[1] - 2, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] + 2 <= 10 && Strategy[tabloui[1] + 2][tablouj[1]] != -4)
            {
                convertX(tabloui[1] + 2, tablouj[1]);
                Strategy[tabloui[1] + 2][tablouj[1]] = -4;
                if (TablaJucator[tabloui[1] + 2][tablouj[1]] <= 4 && TablaJucator[tabloui[1] + 2][tablouj[1]] != 0)
                {
                    TablaJucator[tabloui[1] + 2][tablouj[1]] = -TablaJucator[tabloui[1] + 2][tablouj[1]];
                    imagine(tabloui[1] + 2, tablouj[1]);
                }
                else if (TablaJucator[tabloui[1] + 2][tablouj[1]] == 0)
                    TablaJucator[tabloui[1] + 2][tablouj[1]] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && tablouj[1] + 2 <= 10 && Strategy[tabloui[1] - 2][tablouj[1] + 2] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1] + 2);
                Strategy[tabloui[1] - 2][tablouj[1] + 2] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] + 2] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] + 2];
                    imagine(tabloui[1] - 2, tablouj[1] + 2);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1] + 2] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1] + 2] = k;
                lovituri--;
            }
        if (lovituri != 0)
            if (tabloui[1] - 2 >= 1 && tablouj[1] - 2 && Strategy[tabloui[1] - 2][tablouj[1] - 2] != -4)
            {
                convertX(tabloui[1] - 2, tablouj[1] - 2);
                Strategy[tabloui[1] - 2][tablouj[1] - 2] = -4;
                if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] <= 4 && TablaJucator[tabloui[1] - 2][tablouj[1] - 2] != 0)
                {
                    TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = -TablaJucator[tabloui[1] - 2][tablouj[1] - 2];
                    imagine(tabloui[1] - 2, tablouj[1] - 2);
                }
                else if (TablaJucator[tabloui[1] - 2][tablouj[1] - 2] == 0)
                    TablaJucator[tabloui[1] - 2][tablouj[1] - 2] = k;
                lovituri--;
            }
        while (lovituri != 0)
        {
            do
            {
                r1 = rand() % 10 + 1;
                r2 = rand() % 10 + 1;
            } while (Strategy[r1][r2] == -4);
            convertX(r1, r2);
            Strategy[r1][r2] = -4;
            if (TablaJucator[r1][r2] <= 4 && TablaJucator[r1][r2] != 0)
                TablaJucator[r1][r2] = -TablaJucator[r1][r2];
            else if (TablaJucator[r1][r2] == 0)
                TablaJucator[r1][r2] = k;
            lovituri--;
        }

    }
    if (nrLovituri == 2)
    {
        if (abs(tablouj[1] - tablouj[2]) == 1 && tabloui[1] - tabloui[2] == 0)
        {
            minim = min(tablouj[1], tablouj[2]);
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[tabloui[1]][minim - 1] != -4)
                {
                    convertX(tabloui[1], minim - 1);
                    if (TablaJucator[tabloui[1]][minim - 1] <= 4 && TablaJucator[tabloui[1]][minim - 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim - 1] = -TablaJucator[tabloui[1]][minim - 1];
                        imagine(tabloui[1], minim - 1);
                    }
                    else if (TablaJucator[tabloui[1]][minim - 1] == 0)
                        TablaJucator[tabloui[1]][minim - 1] = k;
                    lovituri--;
                }

            maxim = max(tablouj[1], tablouj[2]);

            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[tabloui[1]][maxim + 1] != -4)
                {
                    convertX(tabloui[1], maxim + 1);
                    Strategy[tabloui[1]][maxim + 1] = -4;
                    if (TablaJucator[tabloui[1]][maxim + 1] <= 4 && TablaJucator[tabloui[1]][maxim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][maxim + 1] = -TablaJucator[tabloui[1]][maxim + 1];
                        imagine(tabloui[1], maxim + 1);
                    }
                    else if (TablaJucator[tabloui[1]][maxim + 1] == 0)
                        TablaJucator[tabloui[1]][maxim + 1] = k;
                    lovituri--;
                }

        }
        if (abs(tablouj[1] - tablouj[2]) == 2 && tabloui[1] - tabloui[2] == 0)
        {
            minim = min(tablouj[1], tablouj[2]);
            if (lovituri != 0)
                if (minim + 1 <= 10 && Strategy[tabloui[1]][minim + 1] != -4)
                {
                    convertX(tabloui[1], minim + 1);
                    Strategy[tabloui[1]][minim + 1] = -4;
                    if (TablaJucator[tabloui[1]][minim + 1] <= 4 && TablaJucator[tabloui[1]][minim + 1] != 0)
                    {
                        TablaJucator[tabloui[1]][minim + 1] = -TablaJucator[tabloui[1]][minim + 1];
                        imagine(tabloui[1], minim + 1);
                    }
                    else if (TablaJucator[tabloui[1]][minim + 1] == 0)
                        TablaJucator[tabloui[1]][minim + 1] = k;
                    lovituri--;
                }
        }
        if (abs(tabloui[1] - tabloui[2]) == 1 && tablouj[1] - tablouj[2] == 0)
        {
            minim = min(tabloui[1], tabloui[2]);
            if (lovituri != 0)
                if (minim - 1 >= 1 && Strategy[minim - 1][tablouj[1]] != -4)
                {
                    convertX(minim - 1, tablouj[1]);
                    Strategy[minim - 1][tablouj[1]] = -4;
                    if (TablaJucator[minim - 1][tablouj[1]] <= 4 && TablaJucator[minim - 1][tablouj[1]] != 0)
                    {
                        TablaJucator[minim - 1][tablouj[1]] = -TablaJucator[minim - 1][tablouj[1]];
                        imagine(minim - 1, tablouj[1]);
                    }
                    else if (TablaJucator[minim - 1][tablouj[1]] == 0)
                        TablaJucator[minim - 1][tablouj[1]] = k;
                    lovituri--;
                }

            maxim = max(tabloui[1], tabloui[2]);

            if (lovituri != 0)
                if (maxim + 1 <= 10 && Strategy[maxim + 1][tablouj[1]] != -4)
                {
                    convertX(maxim + 1, tablouj[1]);
                    Strategy[maxim + 1][tablouj[1]] = -4;
                    if (TablaJucator[maxim + 1][tablouj[1]] <= 4 && TablaJucator[maxim + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[maxim + 1][tablouj[1]] = -TablaJucator[maxim + 1][tablouj[1]];
                        imagine(maxim + 1, tablouj[1]);
                    }
                    else if (TablaJucator[maxim + 1][tablouj[1]] == 0)
                        TablaJucator[maxim + 1][tablouj[1]] = k;
                    lovituri--;
                }

        }
        if (abs(tabloui[1] - tabloui[2]) == 2 && tablouj[1] - tablouj[2] == 0)
        {
            minim = min(tabloui[1], tabloui[2]);

            if (lovituri != 0)
                if (Strategy[minim + 1][tablouj[1]] != -4)
                {
                    convertX(minim + 1, tablouj[1]);
                    Strategy[minim + 1][tablouj[1]] = -4;
                    if (TablaJucator[minim + 1][tablouj[1]] <= 4 && TablaJucator[minim + 1][tablouj[1]] != 0)
                    {
                        TablaJucator[minim + 1][tablouj[1]] = -TablaJucator[minim + 1][tablouj[1]];
                        imagine(minim + 1, tablouj[1]);
                    }
                    else if (TablaJucator[minim + 1][tablouj[1]] == 0)
                        TablaJucator[minim + 1][tablouj[1]] = k;
                    lovituri--;
                }
        }

        if (tabloui[2] - tabloui[1] == 1 && tablouj[2] - tablouj[1] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] - 1);
                    Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                        imagine(tabloui[1] - 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] + 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] + 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] + 1);
                    Strategy[tabloui[2] + 1][tablouj[2] + 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] + 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] + 1];
                        imagine(tabloui[2] + 1, tablouj[2] + 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = k;
                    lovituri--;
                }

        }
        if (tabloui[2] - tabloui[1] == 2 && tablouj[2] - tablouj[1] == 2)
        {

            if (lovituri != 0)
                if (Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] + 1);
                    Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                        imagine(tabloui[1] + 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] - 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] - 1);
                    Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                        imagine(tabloui[1] - 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] + 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] + 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] + 1);
                    Strategy[tabloui[2] + 1][tablouj[2] + 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] + 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] + 1];
                        imagine(tabloui[2] + 1, tablouj[2] + 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] + 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] + 1] = k;
                    lovituri--;
                }
        }

        if (tabloui[2] - tabloui[1] == 1 && tablouj[1] - tablouj[2] == 1)
        {
            if (lovituri != 0)
                if (tabloui[1] - 1 >= 1 && tablouj[1] + 1 >= 1 && Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
                {
                    convertX(tabloui[1] - 1, tablouj[1] + 1);
                    Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
                    if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
                    {
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                        imagine(tabloui[1] - 1, tablouj[1] + 1);
                    }
                    else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                        TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
                    lovituri--;
                }
            if (lovituri != 0)
                if (tabloui[2] + 1 <= 10 && tablouj[2] - 1 <= 10 && Strategy[tabloui[2] + 1][tablouj[2] - 1] != -4)
                {
                    convertX(tabloui[2] + 1, tablouj[2] - 1);
                    Strategy[tabloui[2] + 1][tablouj[2] - 1] = -4;
                    if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] <= 4 && TablaJucator[tabloui[2] + 1][tablouj[2] - 1] != 0)
                    {
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = -TablaJucator[tabloui[2] + 1][tablouj[2] - 1];
                        imagine(tabloui[2] + 1, tablouj[2] - 1);
                    }
                    else if (TablaJucator[tabloui[2] + 1][tablouj[2] - 1] == 0)
                        TablaJucator[tabloui[2] + 1][tablouj[2] - 1] = k;
                    lovituri--;
                }
        }
        if (tabloui[2] - tabloui[1] == 2 && tablouj[1] - tablouj[2] == 2)
        {
            if (lovituri != 0)
                if (Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
                {
                    convertX(tabloui[1] + 1, tablouj[1] - 1);
                    Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
                    if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
                    {
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                        imagine(tabloui[1] + 1, tablouj[1] - 1);
                    }
                    else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                        TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
                    lovituri--;
                }
        }
    }
}

void destroyBoat2()
{
    int r1 = 0, r2 = 0;
    if (lovituri != 0)
        if (Strategy[tabloui[1] - 1][tablouj[1]] != -4)
        {
            convertX(tabloui[1] - 1, tablouj[1]);
            Strategy[tabloui[1] - 1][tablouj[1]] = -4;
            if (TablaJucator[tabloui[1] - 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1]] != 0)
            {
                TablaJucator[tabloui[1] - 1][tablouj[1]] = -TablaJucator[tabloui[1] - 1][tablouj[1]];
                imagine(tabloui[1] - 1, tablouj[1]);
            }
            else if (TablaJucator[tabloui[1] - 1][tablouj[1]] == 0)
                TablaJucator[tabloui[1] - 1][tablouj[1]] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1] + 1][tablouj[1]] != -4)
        {
            convertX(tabloui[1] + 1, tablouj[1]);
            Strategy[tabloui[1] + 1][tablouj[1]] = -4;
            if (TablaJucator[tabloui[1] + 1][tablouj[1]] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1]] != 0)
            {
                TablaJucator[tabloui[1] + 1][tablouj[1]] = -TablaJucator[tabloui[1] + 1][tablouj[1]];
                imagine(tabloui[1] + 1, tablouj[1]);
            }
            else if (TablaJucator[tabloui[1] + 1][tablouj[1]] == 0)
                TablaJucator[tabloui[1] + 1][tablouj[1]] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1] + 1][tablouj[1] - 1] != -4)
        {
            convertX(tabloui[1] + 1, tablouj[1] - 1);
            Strategy[tabloui[1] + 1][tablouj[1] - 1] = -4;
            if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] - 1] != 0)
            {
                TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] - 1];
                imagine(tabloui[1] + 1, tablouj[1] - 1);
            }

            else if (TablaJucator[tabloui[1] + 1][tablouj[1] - 1] == 0)
                TablaJucator[tabloui[1] + 1][tablouj[1] - 1] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1] + 1][tablouj[1] + 1] != -4)
        {
            convertX(tabloui[1] + 1, tablouj[1] + 1);
            Strategy[tabloui[1] + 1][tablouj[1] + 1] = -4;
            if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] + 1][tablouj[1] + 1] != 0)
            {
                TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] + 1][tablouj[1] + 1];
                imagine(tabloui[1] + 1, tablouj[1] + 1);
            }
            else if (TablaJucator[tabloui[1] + 1][tablouj[1] + 1] == 0)
                TablaJucator[tabloui[1] + 1][tablouj[1] + 1] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1]][tablouj[1] + 1] != -4)
        {
            convertX(tabloui[1], tablouj[1] + 1);
            Strategy[tabloui[1]][tablouj[1] + 1] = -4;
            if (TablaJucator[tabloui[1]][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] + 1] != 0)
            {
                TablaJucator[tabloui[1]][tablouj[1] + 1] = -TablaJucator[tabloui[1]][tablouj[1] + 1];
                imagine(tabloui[1], tablouj[1] + 1);
            }
            else if (TablaJucator[tabloui[1]][tablouj[1] + 1] == 0)
                TablaJucator[tabloui[1]][tablouj[1] + 1] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1]][tablouj[1] - 1] != -4)
        {
            convertX(tabloui[1], tablouj[1] - 1);
            Strategy[tabloui[1]][tablouj[1] - 1] = -4;
            if (TablaJucator[tabloui[1]][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1]][tablouj[1] - 1] != 0)
            {
                TablaJucator[tabloui[1]][tablouj[1] - 1] = -TablaJucator[tabloui[1]][tablouj[1] - 1];
                imagine(tabloui[1], tablouj[1] - 1);
            }
            else if (TablaJucator[tabloui[1]][tablouj[1] - 1] == 0)
                TablaJucator[tabloui[1]][tablouj[1] - 1] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1] - 1][tablouj[1] + 1] != -4)
        {
            convertX(tabloui[1] - 1, tablouj[1] + 1);
            Strategy[tabloui[1] - 1][tablouj[1] + 1] = -4;
            if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] + 1] != 0)
            {
                TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] + 1];
                imagine(tabloui[1] - 1, tablouj[1] + 1);
            }
            else if (TablaJucator[tabloui[1] - 1][tablouj[1] + 1] == 0)
                TablaJucator[tabloui[1] - 1][tablouj[1] + 1] = k;
            lovituri--;
        }
    if (lovituri != 0)
        if (Strategy[tabloui[1] - 1][tablouj[1] - 1] != -4)
        {
            convertX(tabloui[1] - 1, tablouj[1] - 1);
            Strategy[tabloui[1] - 1][tablouj[1] - 1] = -4;
            if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] <= 4 && TablaJucator[tabloui[1] - 1][tablouj[1] - 1] != 0)
            {
                TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = -TablaJucator[tabloui[1] - 1][tablouj[1] - 1];
                imagine(tabloui[1] - 1, tablouj[1] - 1);
            }
            else if (TablaJucator[tabloui[1] - 1][tablouj[1] - 1] == 0)
                TablaJucator[tabloui[1] - 1][tablouj[1] - 1] = k;
            lovituri--;
        }
}

void findboat23()
{
    int r1, r2, pozitii[3] = { 2,6,10 }, contor;
    bool orizontala = false, ok = false;
    r1 = 1;
    r2 = pozitii[rand() % 3];
    if (r1 == 1)
    {
        for (i = r1; i <= 10 && lovituri != 0 && orizontala == false; i++)
        {
            if (Strategy[i][r2] != -4)
            {
                convertX(i, r2);
                if (TablaJucator[i][r2] == 0)
                    TablaJucator[i][r2] = k;
                else
                {
                    if (TablaJucator[i][r2] <= 4 && TablaJucator[i][r2] != 0)
                    {
                        TablaJucator[i][r2] = -TablaJucator[i][r2];
                        imagine(i, r2);
                    }
                }

                Strategy[i][r2] = -4;
                lovituri--;
            }
            r1 = i + 1;
            if (i >= 10)
            {
                if (r2 == 2)
                {
                    ok = false;
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][6] == 4)
                        {
                            ok = true;
                            r2 = 6;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][10] == 4)
                        {
                            ok = true;
                            r2 = 10;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    if (ok == false)
                        orizontala = true;
                }

                else if (r2 == 6)
                {
                    ok = false;
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][10] == 4)
                        {
                            ok = true;
                            r2 = 10;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][2] == 4)
                        {
                            ok = true;
                            r2 = 2;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    if (ok == false)
                        orizontala = true;
                }
                else
                {
                    ok = false;
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][2] == 4)
                        {
                            ok = true;
                            r2 = 2;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    for (contor = 1; contor <= 10 && ok == false; contor++)
                        if (Strategy[contor][6] == 4)
                        {
                            ok = true;
                            r2 = 6;
                            i = contor - 1;
                            if (10 % hitsCPU == 0)
                                r1 = 1;
                        }
                    if (ok == false)
                        orizontala = true;
                }
            }

        }
    }

    if (orizontala == true)
    {
        r2 = 1;
        r1 = 2;
        for (j = r2; j <= 10 && lovituri != 0; j++)
        {
            if (Strategy[r1][j] != -4)
            {
                convertX(r1, j);
                if (TablaJucator[r1][j] == 0)
                    TablaJucator[r1][j] = k;
                else
                    if (TablaJucator[r1][j] <= 4 && TablaJucator[r1][j] != 0)
                    {
                        TablaJucator[r1][j] = -TablaJucator[r1][j];
                        imagine(r1, j);
                    }

                Strategy[r1][j] = -4;
                lovituri--;
            }
            r2 = j + 1;
            if (j >= 10 && chenar1() == false)
            {
                if (r1 == 2)
                    r1 = 6;
                else
                    r1 = 10;
                j = 0;
            }
        }
    }
}

void CPUEasy()
{
    int nrLovituri4 = 0, nrLovituri3 = 0, nrLovituri2 = 0, nrLovituri1 = 0, i, j;
    lovituri = hitsCPU;
    int r1, r2;
    while (lovituri != 0)
    {
        do
        {
            r1 = rand() % 10 + 1;
            r2 = rand() % 10 + 1;
        } while (Strategy[r1][r2] == -4);
        convertX(r1, r2);
        Strategy[r1][r2] = -4;
        if (TablaJucator[r1][r2] <= 4 && TablaJucator[r1][r2] != 0)
        {
            TablaJucator[r1][r2] = -TablaJucator[r1][r2];
            imagine(r1, r2);
        }
        else if (TablaJucator[r1][r2] == 0)
            TablaJucator[r1][r2] = k;
        lovituri--;
    }
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
        {
            if (TablaJucator[i][j] == -4)
                nrLovituri4++;

            if (TablaJucator[i][j] == -3)
                nrLovituri3++;

            if (TablaJucator[i][j] == -2)
                nrLovituri2++;

            if (TablaJucator[i][j] == -1)
                nrLovituri1++;
        }
    if (nrLovituri4 == 4 && destroyed4 == false)
    {
        hitsUser -= 3;
        destroyed4 = true;
    }
    if (nrLovituri3 == 3 && destroyed3 == false)
    {
        hitsUser -= 2;
        destroyed3 = true;
    }
    if (nrLovituri2 == 2 && destroyed2 == false)
    {
        hitsUser -= 1;
        destroyed2 = true;
    }
    if (nrLovituri1 == 2 && destroyed1 == false)
    {
        hitsUser -= 1;
        destroyed1 = true;
    }
    k++;
}

void CPUMedium()
{
    lovituri = hitsCPU;
    int nrLovituri4 = 0, nrLovituri3 = 0, nrLovituri2 = 0, nrLovituri1 = 0, i, j;
    int a = 1, r1, r2;
    if (destroyed4 == false)
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 10; j++)
                if (TablaJucator[i][j] == -4)
                {
                    found4 = true;
                    nrLovituri++;
                    tabloui[a] = i;
                    tablouj[a] = j;
                    a++;
                }

    if (found4 == false)
        findBoat4();


    if (nrLovituri == 4)
    {
        hitsUser -= 3;
        destroyed4 = true;
        for (i = 1; i <= 4; i++)
        {
            tabloui[i] = 0;
            tablouj[i] = 0;
        }
        nrLovituri = 0;
        a = 1;
    }
    if (found4 == true)
    {
        if (nrLovituri != 4 && destroyed4 == false)
        {
            destroyBoat4();
            nrLovituri = 0;
            a = 1;
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
        }
        if (found4 == false)
            if (chenar() == false)
                findBoat4();

        while (lovituri != 0)
        {
            do
            {
                r1 = rand() % 10 + 1;
                r2 = rand() % 10 + 1;
            } while (Strategy[r1][r2] == -4);
            convertX(r1, r2);
            Strategy[r1][r2] = -4;
            if (TablaJucator[r1][r2] <= 4 && TablaJucator[r1][r2] != 0)
            {
                TablaJucator[r1][r2] = -TablaJucator[r1][r2];
                imagine(r1, r2);
            }
            else if (TablaJucator[r1][r2] == 0)
                TablaJucator[r1][r2] = k;
            lovituri--;
        }
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 10; j++)
            {
                if (TablaJucator[i][j] == -4)
                    nrLovituri4++;

                if (TablaJucator[i][j] == -3)
                    nrLovituri3++;

                if (TablaJucator[i][j] == -2)
                    nrLovituri2++;

                if (TablaJucator[i][j] == -1)
                    nrLovituri1++;
            }
        if (nrLovituri4 == 4 && destroyed4 == false)
        {
            hitsUser -= 3;
            destroyed4 = true;
            found4 = true;
        }
        if (nrLovituri3 == 3 && destroyed3 == false)
        {
            hitsUser -= 2;
            destroyed3 = true;
        }
        if (nrLovituri2 == 2 && destroyed2 == false)
        {
            hitsUser -= 1;
            destroyed2 = true;
        }
        if (nrLovituri1 == 2 && destroyed1 == false)
        {
            hitsUser -= 1;
            destroyed1 = true;
        }
        k++;
    }
}

void CPUHard()
{
    lovituri = hitsCPU;
    int nrLovituri4 = 0, nrLovituri3 = 0, nrLovituri2 = 0, nrLovituri1 = 0, i, j;
    int a = 1, r1, r2;
    if (destroyed4 == false)
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 10; j++)
                if (TablaJucator[i][j] == -4)
                {
                    found4 = true;
                    nrLovituri++;
                    tabloui[a] = i;
                    tablouj[a] = j;
                    a++;
                }

    if (found4 == false)
        findBoat4();


    if (nrLovituri == 4)
    {
        hitsUser -= 3;
        destroyed4 = true;
        for (i = 1; i <= 4; i++)
        {
            tabloui[i] = 0;
            tablouj[i] = 0;
        }
        nrLovituri = 0;
        a = 1;
    }
    if (found4 == true)
        if (nrLovituri != 4 && destroyed4 == false)
        {
            destroyBoat4();
            nrLovituri = 0;
            a = 1;
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
        }
    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
            if (TablaJucator[i][j] == -4)
                nrLovituri4++;
    if (nrLovituri4 == 4 && destroyed4 == false)
    {
        hitsUser -= 3;
        destroyed4 = true;
        found4 = true;
    }
    nrLovituri4 = 0;


    if (destroyed4 == true && destroyed3 == false)
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 10; j++)
                if (TablaJucator[i][j] == -3)
                {
                    found3 = true;
                    nrLovituri++;
                    tabloui[a] = i;
                    tablouj[a] = j;
                    a++;
                }

    if (nrLovituri == 3 && destroyed3 == false)
    {
        destroyed3 = true;
        hitsUser -= 2;
        for (i = 1; i <= 4; i++)
        {
            tabloui[i] = 0;
            tablouj[i] = 0;
        }
        nrLovituri = 0;
        a = 1;
    }

    if (found3 == true && destroyed3 == false)
    {
        destroyBoat3();
        for (i = 1; i <= 4; i++)
        {
            tabloui[i] = 0;
            tablouj[i] = 0;
        }
        nrLovituri = 0;
        a = 1;
    }

    if (nrLovituri3 == 3 && destroyed3 == false)
    {
        hitsUser -= 2;
        destroyed3 = true;
        found3 = true;
    }
    nrLovituri3 = 0;


    if (found3 == false)
        if (chenar() == false)
            findBoat4();


    if (found3 == false)
        if (chenar1() == false)
            findboat23();


    if (destroyed3 == true)
    {
        if (destroyed2 == false)
            for (i = 1; i <= 10; i++)
                for (j = 1; j <= 10; j++)
                    if (TablaJucator[i][j] == -2)
                    {
                        found2 = true;
                        nrLovituri++;
                        tabloui[a] = i;
                        tablouj[a] = j;
                        a++;
                    }
        if (nrLovituri == 2 && destroyed2 == false)
        {
            hitsUser -= 1;
            destroyed2 = true;
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
            nrLovituri = 0;
            a = 1;
        }
        if (found2 == true && destroyed2 == false)
        {
            destroyBoat2();
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
            nrLovituri = 0;
            a = 1;
        }
        for (i = 1; i <= 10; i++)
            for (j = 1; j <= 10; j++)
                if (TablaJucator[i][j] == -2)
                    nrLovituri2++;
        if (nrLovituri2 == 2 && destroyed2 == false)
        {
            destroyed2 = true;
            found2 = true;
            hitsUser -= 1;
        }
        nrLovituri2 = 0;

        if (destroyed1 == false)
            for (i = 1; i <= 10; i++)
                for (j = 1; j <= 10; j++)
                    if (TablaJucator[i][j] == -1)
                    {
                        found1 = true;
                        nrLovituri++;
                        tabloui[a] = i;
                        tablouj[a] = j;
                        a++;
                    }
        if (nrLovituri == 2 && destroyed1 == false)
        {
            hitsUser -= 1;
            destroyed1 = true;
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
            nrLovituri = 0;
            a = 1;
        }

        if (found1 == true && destroyed1 == false)
        {
            destroyBoat2();
            for (i = 1; i <= 4; i++)
            {
                tabloui[i] = 0;
                tablouj[i] = 0;
            }
            nrLovituri = 0;
            a = 1;
        }

        if (chenar() == false)
            findBoat4();
        if (chenar1() == false)
            findboat23();



    }
    while (lovituri != 0)
    {
        do
        {
            r1 = rand() % 10 + 1;
            r2 = rand() % 10 + 1;
        } while (Strategy[r1][r2] == -4);
        convertX(r1, r2);
        if (TablaJucator[r1][r2] <= 4 && TablaJucator[r1][r2] != 0)
        {
            TablaJucator[r1][r2] = -TablaJucator[r1][r2];
            imagine(r1, r2);
        }
        else if (TablaJucator[r1][r2] == 0)
            TablaJucator[r1][r2] = k;
        lovituri--;
    }

    for (i = 1; i <= 10; i++)
        for (j = 1; j <= 10; j++)
        {
            if (TablaJucator[i][j] == -4)
                nrLovituri4++;

            if (TablaJucator[i][j] == -3)
                nrLovituri3++;

            if (TablaJucator[i][j] == -2)
                nrLovituri2++;

            if (TablaJucator[i][j] == -1)
                nrLovituri1++;
        }
    if (nrLovituri4 == 4 && destroyed4 == false)
    {
        hitsUser -= 3;
        destroyed4 = true;
        found4 = true;
    }
    if (nrLovituri3 == 3 && destroyed3 == false)
    {
        hitsUser -= 2;
        destroyed3 = true;
        found3 = true;
    }
    if (nrLovituri2 == 2 && destroyed2 == false)
    {
        hitsUser -= 1;
        destroyed2 = true;
        found2 = true;
    }
    if (nrLovituri1 == 2 && destroyed1 == false)
    {
        hitsUser -= 1;
        destroyed1 = true;
        found1 = true;
    }
    k++;
}

void cronometru()
{
    while (!(ismouseclick(WM_LBUTTONDOWN)))
    {
        int mc = atoi(minut), sc = atoi(secunda);
        char text[6]; strcpy(text, minut); strcat(text, ":"); if (sc < 10)strcat(text, "0");  strcat(text, secunda);
        setbkcolor(CYAN); setcolor(WHITE); settextstyle(4, 4, 4); outtextxy(200, 75, text);
        if (timp == 0)
        {
            if (sc == 0)
                if (mc == 0)
                {
                    gata = 1;
                    return;
                }
                else
                {
                    mc--;
                    sc = 59;
                }
            else sc--;
            timp = 800;
        }

        itoa(mc, minut, 10);
        itoa(sc, secunda, 10);
        while (!(ismouseclick(WM_LBUTTONDOWN)) && timp != 0)
        {
            delay(10); timp -= 10;
        }

    }
}

void vapor2User()
{
    int i1, j1;
    //primul vapor de 2 patratele
    k2 = rand() % 10 + 1;
    l2 = rand() % 10 + 1;
    if (k2 == 10 && l2 != 1 && l2 != 10)
    {
        do
        {
            m = rand() % 2 + (k2 - 1);
            p = rand() % 3 + (l2 - 1);
        } while (!(m != k || p != l2));
    }
    if (k2 == 12 && l2 != 1 && l2 != 10)
    {
        do
        {
            m = rand() % 2 + k2;
            p = rand() % 3 + (l2 - 1);
        } while (!(m != k || p != l));
    }
    if (k2 == 1 && l2 == 1)
    {
        do
        {
            m = rand() % 2 + k2;
            p = rand() % 2 + l2;
        } while (!(m != k2 && p != l2));
    }
    if (k2 == 10 && l2 == 10)
    {
        do
        {
            m = rand() % 2 + (k2 - 1);
            p = rand() % 2 + (l2 - 1);
        } while (!(m != k2 && p != l2));
    }
    if (l2 == 10 && k2 != 1 && k2 != 10)
    {
        do
        {
            m = rand() % 3 + (k2 - 1);
            p = rand() % 2 + (l2 - 1);
        } while (!(m != k2 && p != l2));
    }
    if (l2 == 1 && k2 != 1 && k2 != 10)
    {
        do
        {
            m = rand() % 3 + (k2 - 1);
            p = rand() % 2 + l2;
        } while (!(m != k2 && p != l2));
    }
    if (k2 == 1 && l2 == 10)
    {
        do
        {
            m = rand() % 2 + k2;
            p = rand() % 2 + (l2 - 1);
        } while (!(m != k2 && p != l2));
    }
    if (k2 == 10 && l2 == 1)
    {
        do
        {
            m = rand() % 2 + (k2 - 1);
            p = rand() % 2 + l2;
        } while (!(m != k2 && p != l2));
    }
    if (k2 != 1 && k2 != 10 && l2 != 1 && l2 != 10)
    {
        do
        {
            m = rand() % 3 + (k2 - 1);
            p = rand() % 3 + (l2 - 1);
        } while (!(m != k2 && p != l2));
    }
    //al doilea vapor de 2 patratele
    do
    {
        o = rand() % 10 + 1;
        q = rand() % 10 + 1;
    } while (!((o != k2 || q != l2) && (o != m || q != p)));
    if (o == 10 && q != 1 && q != 10)
    {
        do
        {
            r = rand() % 2 + (o - 1);
            s = rand() % 3 + (q - 1);
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    if (o == 1 && q != 1 && q != 10)
    {
        do
        {
            r = rand() % 2 + o;
            s = rand() % 3 + (q - 1);
        } while (!((r != k2 || q != l) && (s != m || q != p) && (r != o || s != q)));
    }
    if (o == 1 && q == 1)
    {
        do
        {
            r = rand() % 2 + o;
            s = rand() % 2 + q;
        } while (!((r != k2 || q != l2) && (s != m || q != p) && (r != o || s != q)));
    }
    if (o == 10 && q == 10)
    {
        do
        {
            r = rand() % 2 + (o - 1);
            s = rand() % 2 + (q - 1);
        } while (!((r != k2 || q != l2) && (s != m || q != p) && (r != o || s != q)));
    }
    if (q == 10 && o != 1 && o != 10)
    {
        do
        {
            r = rand() % 3 + (o - 1);
            s = rand() % 2 + (q - 1);
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    if (q == 1 && o != 1 && o != 10)
    {
        do
        {
            r = rand() % 3 + (o - 1);
            s = rand() % 2 + q;
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    if (o == 1 && q == 10)
    {
        do
        {
            r = rand() % 2 + o;
            s = rand() % 2 + (q - 1);
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    if (o == 10 && q == 1)
    {
        do
        {
            r = rand() % 2 + (o - 1);
            s = rand() % 2 + q;
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    if (o != 1 && o != 10 && q != 1 && q != 10)
    {
        do
        {
            r = rand() % 3 + (o - 1);
            s = rand() % 3 + (q - 1);
        } while (!((r != k2 || s != l2) && (r != m || s != p) && (r != o || s != q)));
    }
    for (i1 = 1; i1 <= 10; i1++)
    {
        for (j1 = 1; j1 <= 10; j1++)
        {
            if ((i1 == k2 && j1 == l2) || (i1 == m && j1 == p))
            {
                matrice[i1][j1] = 21;
            }
            if ((i1 == o && j1 == q) || (i1 == r && j1 == s))
            {
                matrice[i1][j1] = 22;
            }
        }
    }
    for (ip = 1; ip <= 10; ip++)
    {
        for (jp = 1; jp <= 10; jp++)
        {
            if (matrice[ip][jp] == 21 || matrice[ip][jp] == 22)
            {
                m2++;
            }
        }
    }
}

void vapor3User()
{
    int i1, j1;
    do
    {
        t = rand() % 10 + 1;
        u = rand() % 10 + 1;
    } while (!((t != k2 || u != l2) && (t != m || u != p) && (t != o || u != q) && (t != r || u != s)));
    if (t == 10 && u != 1 && u != 10)
    {
        do
        {
            v = rand() % 2 + (t - 1);
            w = rand() % 3 + (u - 1);
        } while (!((v != k2 || w != l) && (w != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t == 1 && u != 1 && u != 10)
    {
        do
        {
            v = rand() % 2 + t;
            w = rand() % 3 + (u - 1);
        } while (!((v != k || w != l) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t == 1 && u == 1)
    {
        do
        {
            v = rand() % 2 + t;
            w = rand() % 2 + u;
        } while (!((v != k || w != l) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t == 10 && u == 10)
    {
        do
        {
            v = rand() % 2 + (t - 1);
            w = rand() % 2 + (u - 1);
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (u == 10 && t != 1 && t != 10)
    {
        do
        {
            v = rand() % 3 + (t - 1);
            w = rand() % 2 + (u - 1);
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (u == 1 && t != 1 && t != 10)
    {
        do
        {
            v = rand() % 3 + (t - 1);
            w = rand() % 2 + u;
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t == 1 && u == 10)
    {
        do
        {
            v = rand() % 2 + t;
            w = rand() % 2 + (u - 1);
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t == 10 && u == 1)
    {
        do
        {
            v = rand() % 2 + (t - 1);
            w = rand() % 2 + u;
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    if (t != 1 && t != 10 && u != 1 && u != 10)
    {
        do
        {
            v = rand() % 3 + (t - 1);
            w = rand() % 3 + (u - 1);
        } while (!((v != k2 || w != l2) && (v != m || w != p) && (v != o || w != q) && (v != r || w != s) && (v != t || w != u)));
    }
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if ((i == t && j == u) || (i == v && j == w))
            {
                matrice[i][j] = 3;
            }
        }
    }
    for (f = 1; f <= 16; f++)
    {
        posibilitate[f] = false;
    }

    if (t != v && u != w && t < v && u < w)
    {
        if ((t - 1) != 0 && (u - 1) != 0 && matrice[t - 1][u - 1] == 0)
        {
            posibilitate[1] = true;
        }
        if ((v + 1) != 11 && (w + 1) != 11 && matrice[v + 1][w + 1] == 0)
        {
            posibilitate[2] = true;
        }
    }
    else
    {
        if (t != v && u != w && t > v && u > w)
        {
            if ((t + 1) != 11 && (u + 1) != 11 && matrice[t + 1][u + 1] == 0)
            {
                posibilitate[3] = true;
            }
            if ((v - 1) != 0 && (w - 1) != 0 && matrice[v - 1][w - 1] == 0)
            {
                posibilitate[4] = true;
            }
        }
        else
        {
            if (t != v && u != w && t<v && u>w)
            {
                if ((v + 1) != 11 && (w - 1) != 0 && matrice[v + 1][w - 1] == 0)
                {
                    posibilitate[5] = true;
                }
                if ((t - 1) != 0 && (u + 1) != 11 && matrice[t - 1][u + 1] == 0)
                {
                    posibilitate[6] = true;
                }
            }
            else
            {
                if (t > v && t != v && u != w && u < w)
                {
                    if ((v - 1) != 0 && (w + 1) != 11 && matrice[v - 1][w + 1] == 0)
                    {
                        posibilitate[7] = true;
                    }
                    if ((t + 1) != 11 && (u - 1) != 0 && matrice[t + 1][u - 1] == 0)
                    {
                        posibilitate[8] = true;
                    }
                }
                else
                {
                    if (t != v && u == w && t < v)
                    {
                        if ((v + 1) != 11 && matrice[v + 1][u] == 0)
                        {
                            posibilitate[9] = true;
                        }
                        if ((t - 1) != 0 && matrice[t - 1][u] == 0)
                        {
                            posibilitate[10] = true;
                        }
                    }
                    else
                    {
                        if (t != v && u == w && t > v)
                        {
                            if ((t + 1) != 11 && matrice[t + 1][u] == 0)
                            {
                                posibilitate[11] = true;
                            }
                            if ((v - 1) != 0 && matrice[v - 1][u] == 0)
                            {
                                posibilitate[12] = true;
                            }
                        }
                        else
                        {
                            if (t == v && u != w && u < w)
                            {
                                if ((u - 1) != 0 && matrice[t][u - 1] == 0)
                                {
                                    posibilitate[13] = true;
                                }
                                if ((w + 1) != 11 && matrice[t][w + 1] == 0)
                                {
                                    posibilitate[14] = true;
                                }
                            }
                            else
                            {
                                if (t == v && u != w && u > w)
                                {
                                    if ((u + 1) != 11 && matrice[t][u + 1] == 0)
                                    {
                                        posibilitate[15] = true;
                                    }
                                    if ((w - 1) != 0 && matrice[t][w - 1] == 0)
                                    {
                                        posibilitate[16] = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    for (c3 = 1; c3 <= 16; c3++)
    {
        if (posibilitate[c3] == true)
        {
            d++;
        }
    }
    adevarat[1] = 0;
    adevarat[1] = 0;
    i = 1;
    if (d != 0)
    {
        while (adevarat[1] == 0)
        {
            if (posibilitate[i] == true)
            {
                adevarat[1] = i;
            }
            i++;
        }
        j = i;
        while (j <= 16 && adevarat[2] == 0)
        {
            if (posibilitate[j] == true)
            {
                adevarat[2] = j;
            }
            j++;
        }
        if (adevarat[2] == 0)
        {
            j = 0;
        }
    }
    if (adevarat[1] != 0 && adevarat[2] != 0)
    {
        a = rand() % 2 + 1;
        if (a == 1)
        {
            b = i - 1;
        }
        if (a == 2)
        {
            b = j - 1;
        }
        if (b == 1)
        {
            matrice[t - 1][u - 1] = 3;
            xa = t - 1;
            xb = u - 1;
        }
        if (b == 2)
        {
            matrice[v + 1][w + 1] = 3;
            xa = v + 1;
            xb = w + 1;
        }
        if (b == 3)
        {
            matrice[t + 1][u + 1] = 3;
            xa = t + 1;
            xb = u + 1;
        }
        if (b == 4)
        {
            matrice[v - 1][w - 1] = 3;
            xa = v - 1;
            xb = w - 1;
        }
        if (b == 5)
        {
            matrice[v + 1][w - 1] = 3;
            xa = v + 1;
            xb = w - 1;
        }
        if (b == 6)
        {
            matrice[t - 1][u + 1] = 3;
            xa = t - 1;
            xb = u + 1;
        }
        if (b == 7)
        {
            matrice[v - 1][w + 1] = 3;
            xa = v - 1;
            xb = w + 1;
        }
        if (b == 8)
        {
            matrice[t + 1][u - 1] = 3;
            xa = t + 1;
            xb = u - 1;
        }
        if (b == 9)
        {
            matrice[v + 1][u] = 3;
            xa = v + 1;
            xb = u;
        }
        if (b == 10)
        {
            matrice[t - 1][u] = 3;
            xa = t - 1;
            xb = u;
        }
        if (b == 11)
        {
            matrice[t + 1][u] = 3;
            xa = t + 1;
            xb = u;
        }
        if (b == 12)
        {
            matrice[v - 1][u] = 3;
            xa = v - 1;
            xb = u;
        }
        if (b == 13)
        {
            matrice[t][u - 1] = 3;
            xa = t;
            xb = u - 1;
        }
        if (b == 14)
        {
            matrice[t][w + 1] = 3;
            xa = t;
            xb = w + 1;
        }
        if (b == 15)
        {
            matrice[t][u + 1] = 3;
            xa = t;
            xb = u + 1;
        }
        if (b == 16)
        {
            matrice[t][w - 1] = 3;
            xa = t;
            xb = w - 1;
        }
    }
    if (adevarat[1] != 0 && adevarat[2] == 0)
    {
        b = i - 1;
        if (b == 1)
        {
            matrice[t - 1][u - 1] = 3;
            xa = t - 1;
            xb = u - 1;
        }
        if (b == 2)
        {
            matrice[v + 1][w + 1] = 3;
            xa = v + 1;
            xb = w + 1;
        }
        if (b == 3)
        {
            matrice[t + 1][u + 1] = 3;
            xa = t + 1;
            xb = u + 1;
        }
        if (b == 4)
        {
            matrice[v - 1][w - 1] = 3;
            xa = v - 1;
            xb = w - 1;
        }
        if (b == 5)
        {
            matrice[v + 1][w - 1] = 3;
            xa = v + 1;
            xb = w - 1;
        }
        if (b == 6)
        {
            matrice[t - 1][u + 1] = 3;
            xa = t - 1;
            xb = u + 1;
        }
        if (b == 7)
        {
            matrice[v - 1][w + 1] = 3;
            xa = v - 1;
            xb = w + 1;
        }
        if (b == 8)
        {
            matrice[t + 1][u - 1] = 3;
            xa = t + 1;
            xb = u - 1;
        }
        if (b == 9)
        {
            matrice[v + 1][u] = 3;
            xa = v + 1;
            xb = u;
        }
        if (b == 10)
        {
            matrice[t - 1][u] = 3;
            xa = t - 1;
            xb = u;
        }
        if (b == 11)
        {
            matrice[t + 1][u] = 3;
            xa = t + 1;
            xb = u;
        }
        if (b == 12)
        {
            matrice[v - 1][u] = 3;
            xa = v - 1;
            xb = u;
        }
        if (b == 13)
        {
            matrice[t][u - 1] = 3;
            xa = t;
            xb = u - 1;
        }
        if (b == 14)
        {
            matrice[t][w + 1] = 3;
            xa = t;
            xb = w + 1;
        }
        if (b == 15)
        {
            matrice[t][u + 1] = 3;
            xa = t;
            xb = u + 1;
        }
        if (b == 16)
        {
            matrice[t][w - 1] = 3;
            xa = t;
            xb = w - 1;
        }
    }
    for (i1 = 1; i1 <= 10; i1++)
    {
        for (j1 = 1; j1 <= 10; j1++)
        {
            if (matrice[i1][j1] == 3)
            {
                m3++;
            }
        }
    }
}

void vapor4User()
{
    int i1, j1;
    do
    {
        x = rand() % 10 + 1;
        y = rand() % 10 + 1;
    } while (!((x != k2 || y != l2) && (x != m || y != p) && (x != o || y != q) && (x != r || y != s) && (x != t || y != u) && (x != v || y != w) && (x != xa || x != xb)));
    if (x == 10 && y != 1 && y != 10)
    {
        do
        {
            h = rand() % 2 + (x - 1);
            g = rand() % 3 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (x == 1 && y != 1 && y != 10)
    {
        do
        {
            h = rand() % 2 + x;
            g = rand() % 3 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (x == 1 && y == 1)
    {
        do
        {
            h = rand() % 2 + x;
            g = rand() % 2 + y;
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (x == 10 && y == 10)
    {
        do
        {
            h = rand() % 2 + (x - 1);
            g = rand() % 2 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (y == 10 && x != 1 && x != 10)
    {
        do
        {
            h = rand() % 3 + (x - 1);
            g = rand() % 2 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (y == 1 && x != 1 && x != 10)
    {
        do
        {
            h = rand() % 3 + (x - 1);
            g = rand() % 2 + y;
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (x == 1 && y == 10)
    {
        do
        {
            h = rand() % 2 + x;
            g = rand() % 2 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }

    if (x == 10 && y == 1)
    {
        do
        {
            h = rand() % 2 + (x - 1);
            g = rand() % 2 + y;
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }
    if (x != 1 && x != 10 && y != 1 && y != 10)
    {
        do
        {
            h = rand() % 3 + (x - 1);
            g = rand() % 3 + (y - 1);
        } while (!((h != k2 || g != l2) && (h != m || g != p) && (h != o || g != q) && (h != r || g != s) && (h != t || g != u) && (h != v || g != w) && (h != x || g != y) && (h != xa || g != xb)));
    }

    for (f = 1; f <= 16; f++)
    {
        posibilitate1[f] = false;
    }

    if (x != h && y != g && x < h && y < g)
    {
        if ((x - 1) != 0 && (y - 1) != 0 && matrice[x - 1][y - 1] == 0)
        {
            posibilitate1[1] = true;
        }
        if ((h + 1) != 11 && (g + 1) != 11 && matrice[h + 1][g + 1] == 0)
        {
            posibilitate1[2] = true;
        }
    }
    else
    {
        if (x != h && y != g && x > h && y > g)
        {
            if ((x + 1) != 11 && (y + 1) != 11 && matrice[x + 1][y + 1] == 0)
            {
                posibilitate1[3] = true;
            }
            if ((h - 1) != 0 && (g - 1) != 0 && matrice[h - 1][g - 1] == 0)
            {
                posibilitate1[4] = true;
            }
        }
        else
        {
            if (x != h && y != g && x<h && y>g)
            {
                if ((h + 1) != 11 && (g - 1) != 0 && matrice[h + 1][h - 1] == 0)
                {
                    posibilitate[5] = true;
                }
                if ((x - 1) != 0 && (y + 1) != 11 && matrice[x - 1][y + 1] == 0)
                {
                    posibilitate1[6] = true;
                }
            }
            else
            {
                if (x > h && x != h && y != g && y < g)
                {
                    if ((h - 1) != 0 && (g + 1) != 11 && matrice[h - 1][g + 1] == 0)
                    {
                        posibilitate1[7] = true;
                    }
                    if ((x + 1) != 11 && (y - 1) != 0 && matrice[x + 1][y - 1] == 0)
                    {
                        posibilitate1[8] = true;
                    }
                }
                else
                {
                    if (x != h && y == g && x < h)
                    {
                        if ((h + 1) != 11 && matrice[h + 1][y] == 0)
                        {
                            posibilitate1[9] = true;
                        }
                        if ((x - 1) != 0 && matrice[x - 1][y] == 0)
                        {
                            posibilitate1[10] = true;
                        }
                    }
                    else
                    {
                        if (x != h && y == g && x > h)
                        {
                            if ((x + 1) != 11 && matrice[x + 1][y] == 0)
                            {
                                posibilitate1[11] = true;
                            }
                            if ((h - 1) != 0 && matrice[h - 1][y] == 0)
                            {
                                posibilitate1[12] = true;
                            }
                        }
                        else
                        {
                            if (x == h && y != g && y < g)
                            {
                                if ((y - 1) != 0 && matrice[x][y - 1] == 0)
                                {
                                    posibilitate1[13] = true;
                                }
                                if ((g + 1) != 11 && matrice[x][g + 1] == 0)
                                {
                                    posibilitate1[14] = true;
                                }
                            }
                            else
                            {
                                if (x == h && y != g && y > g)
                                {
                                    if ((y + 1) != 11 && matrice[x][y + 1] == 0)
                                    {
                                        posibilitate1[15] = true;
                                    }
                                    if ((g - 1) != 0 && matrice[x][g - 1] == 0)
                                    {
                                        posibilitate1[16] = true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    d = 0;
    for (c3 = 1; c3 <= 16; c3++)
    {
        if (posibilitate1[c3] == true)
        {
            d++;
        }
    }
    adevarat1[1] = 0;
    adevarat1[1] = 0;
    ii = 1;
    if (d != 0)
    {
        while (adevarat1[1] == 0)
        {
            if (posibilitate1[ii] == true)
            {
                adevarat1[1] = ii;
            }
            ii++;
        }
        jj = ii;
        while (jj <= 16 && adevarat1[2] == 0)
        {
            if (posibilitate1[jj] == true)
            {
                adevarat[2] = jj;
            }
            jj++;
        }
        if (adevarat1[2] == 0)
        {
            jj = 0;
        }
    }
    if (adevarat1[1] != 0 && adevarat1[2] != 0)
    {
        aa = rand() % 2 + 1;
        if (aa == 1)
        {
            bb = ii - 1;
        }
        if (aa == 2)
        {
            bb = jj - 1;
        }
        if (bb == 1)
        {
            matrice[x - 1][y - 1] = 4;
            xc = x - 1;
            xd = y - 1;
        }
        if (bb == 2)
        {
            matrice[h + 1][g + 1] = 4;
            xc = h + 1;
            xd = g + 1;
        }
        if (bb == 3)
        {
            matrice[x + 1][y + 1] = 4;
            xc = x + 1;
            xd = y + 1;
        }
        if (bb == 4)
        {
            matrice[h - 1][g - 1] = 4;
            xc = h - 1;
            xd = g - 1;
        }
        if (bb == 5)
        {
            matrice[h + 1][g - 1] = 4;
            xc = h + 1;
            xd = g - 1;
        }
        if (bb == 6)
        {
            matrice[x - 1][y + 1] = 4;
            xc = x - 1;
            xd = y + 1;
        }
        if (bb == 7)
        {
            matrice[h - 1][g + 1] = 4;
            xc = h - 1;
            xd = g + 1;
        }
        if (bb == 8)
        {
            matrice[x + 1][y - 1] = 4;
            xc = x + 1;
            xd = y - 1;
        }
        if (bb == 9)
        {
            matrice[h + 1][y] = 4;
            xc = h + 1;
            xd = y;
        }
        if (bb == 10)
        {
            matrice[x - 1][y] = 4;
            xc = x - 1;
            xd = y;
        }
        if (bb == 11)
        {
            matrice[x + 1][y] = 4;
            xc = x + 1;
            xd = y;
        }
        if (bb == 12)
        {
            matrice[h - 1][y] = 4;
            xc = h - 1;
            xd = y;
        }
        if (bb == 13)
        {
            matrice[x][y - 1] = 4;
            xc = x;
            xd = y - 1;
        }
        if (bb == 14)
        {
            matrice[x][g + 1] = 4;
            xc = x;
            xd = g + 1;
        }
        if (bb == 15)
        {
            matrice[x][y + 1] = 4;
            xc = x;
            xd = y + 1;
        }
        if (bb == 16)
        {
            matrice[x][g - 1] = 4;
            xc = x;
            xd = g - 1;
        }
    }
    if (adevarat1[1] != 0 && adevarat1[2] == 0)
    {
        bb = ii - 1;
        if (bb == 1)
        {
            matrice[x - 1][y - 1] = 4;
            xc = x - 1;
            xd = y - 1;
        }
        if (bb == 2)
        {
            matrice[h + 1][g + 1] = 4;
            xc = h + 1;
            xd = g + 1;
        }
        if (bb == 3)
        {
            matrice[x + 1][y + 1] = 4;
            xc = x + 1;
            xd = y + 1;
        }
        if (bb == 4)
        {
            matrice[h - 1][g - 1] = 4;
            xc = h - 1;
            xd = g - 1;
        }
        if (bb == 5)
        {
            matrice[h + 1][g - 1] = 4;
            xc = h + 1;
            xd = g - 1;
        }
        if (bb == 6)
        {
            matrice[x - 1][y + 1] = 4;
            xc = x - 1;
            xd = y + 1;
        }
        if (bb == 7)
        {
            matrice[h - 1][g + 1] = 4;
            xc = h - 1;
            xd = g + 1;
        }
        if (bb == 8)
        {
            matrice[x + 1][y - 1] = 4;
            xc = x + 1;
            xd = y - 1;
        }
        if (bb == 9)
        {
            matrice[h + 1][y] = 4;
            xc = h + 1;
            xd = y;
        }
        if (bb == 10)
        {
            matrice[x - 1][y] = 4;
            xc = x - 1;
            xd = y;
        }
        if (bb == 11)
        {
            matrice[x + 1][y] = 4;
            xc = x + 1;
            xd = y;
        }
        if (bb == 12)
        {
            matrice[h - 1][y] = 4;
            xc = h - 1;
            xd = y;
        }
        if (bb == 13)
        {
            matrice[x][y - 1] = 4;
            xc = x;
            xd = y - 1;
        }
        if (bb == 14)
        {
            matrice[x][g + 1] = 4;
            xc = x;
            xd = g + 1;
        }
        if (bb == 15)
        {
            matrice[x][y + 1] = 4;
            xc = x;
            xd = y + 1;
        }
        if (bb == 16)
        {
            matrice[x][g - 1] = 4;
            xc = x;
            xd = g - 1;
        }
    }

    for (f = 1; f <= 16; f++)
    {
        posibilitate2[f] = false;
    }
    if (x == h && x == xc)
    {
        v1[1] = y;
        v1[2] = g;
        v1[3] = xd;
        for (ia = 1; ia <= 2; ia++)
        {
            for (ib = ia + 1; ib <= 3; ib++)
            {
                if (v1[ia] > v1[ib])
                {
                    aux2 = v1[ia];
                    v1[ia] = v1[ib];
                    v1[ib] = aux2;
                }
            }
        }
        aaa = v1[1];
        bbb = v1[3];

        if ((aaa - 1) != 0 && matrice[x][aaa - 1] == 0)
        {
            posibilitate2[1] = true;
        }
        if ((bbb + 1) != 11 && matrice[x][bbb + 1] == 0)
        {
            posibilitate2[2] = true;
        }
    }

    if (y == g && y == xd)
    {
        v1[1] = x;
        v1[2] = h;
        v1[3] = xc;
        for (ia = 1; ia <= 2; ia++)
        {
            for (ib = ia + 1; ib <= 3; ib++)
            {
                if (v1[ia] > v1[ib])
                {
                    aux2 = v1[ia];
                    v1[ia] = v1[ib];
                    v1[ib] = aux2;
                }
            }
        }
        aaa = v1[1];
        bbb = v1[3];


        if ((aaa - 1) != 0 && matrice[aaa - 1][y] == 0)
        {
            posibilitate2[3] = true;
        }
        if ((bbb + 1) != 11 && matrice[bbb + 1][y] == 0)
        {
            posibilitate2[4] = true;
        }
    }
    if (x != h && x != xc)
    {
        v1[1] = x;
        v1[2] = h;
        v1[3] = xc;
        for (ia = 1; ia <= 2; ia++)
        {
            for (ib = ia + 1; ib <= 3; ib++)
            {
                if (v1[ia] > v1[ib])
                {
                    aux3 = v1[ia];
                    v1[ia] = v1[ib];
                    v1[ib] = aux3;
                }
            }
        }
        if (v1[1] == x && y > g)
        {
            if ((x - 1) != 0 && (y + 1) != 11 && matrice[x - 1][y + 1] == 0)
            {
                posibilitate2[5] = true;
            }
        }
        if (v1[1] == h && g > xd)
        {
            if ((h - 1) != 0 && (g + 1) != 11 && matrice[h - 1][g + 1] == 0)
            {
                posibilitate2[6] = true;
            }
        }
        if (v1[1] == xc && xd > y)
        {
            if ((xc - 1) != 0 && (xd + 1) != 11 && matrice[xc - 1][xd + 1] == 0)
            {
                posibilitate2[7] = true;
            }
        }
        if (v1[1] == x && y < g)
        {
            if ((x - 1) != 0 && (y - 1) != 0 && matrice[x - 1][y - 1] == 0)
            {
                posibilitate2[8] = true;
            }
        }
        if (v1[1] == h && g < xd)
        {
            if ((h - 1) != 0 && (g - 1) != 0 && matrice[h - 1][g - 1] == 0)
            {
                posibilitate2[9] = true;
            }
        }
        if (v1[1] == xc && xd < y)
        {
            if ((xc - 1) != 0 && (xd - 1) != 0 && matrice[xc - 1][xd - 1] == 0)
            {
                posibilitate2[10] = true;
            }
        }
        if (v1[3] == x && y < g)
        {
            if ((x + 1) != 11 && (y - 1) != 0 && matrice[x + 1][y - 1] == 0)
            {
                posibilitate2[11] = true;
            }
        }
        if (v1[3] == h && g < xd)
        {
            if ((h + 1) != 11 && (g - 1) != 0 && matrice[h + 1][g - 1] == 0)
            {
                posibilitate2[12] = true;
            }
        }
        if (v1[3] == xc && xd < y)
        {
            if ((xc + 1) != 11 && (xd - 1) != 0 && matrice[xc + 1][xd - 1] == 0)
            {
                posibilitate2[13] = true;
            }
        }
        if (v1[3] == x && y > g)
        {
            if ((x + 1) != 11 && (y + 1) != 11 && matrice[x + 1][y + 1] == 0)
            {
                posibilitate2[14] = true;
            }
        }
        if (v1[3] == h && g > xd)
        {
            if ((h + 1) != 11 && (g + 1) != 11 && matrice[h + 1][g + 1] == 0)
            {
                posibilitate2[15] = true;
            }
        }
        if (v1[3] == xc && xd > y)
        {
            if ((xc + 1) != 11 && (xd + 1) != 11 && matrice[xc + 1][xd + 1] == 0)
            {
                posibilitate2[16] = true;
            }
        }
    }
    d = 0;
    for (c3 = 1; c3 <= 16; c3++)
    {
        if (posibilitate2[c3] == true)
        {
            d++;
        }
    }
    adevarat2[1] = 0;
    adevarat2[1] = 0;
    iii = 1;
    if (d != 0)
    {
        while (adevarat2[1] == 0)
        {
            if (posibilitate2[iii] == true)
            {
                adevarat2[1] = iii;
            }
            iii++;
        }
        jjj = iii;
        while (jjj <= 16 && adevarat2[2] == 0)
        {
            if (posibilitate2[jjj] == true)
            {
                adevarat[2] = jjj;
            }
            jjj++;
        }
        if (adevarat2[2] == 0)
        {
            jjj = 0;
        }
    }
    if (adevarat2[1] != 0 && adevarat2[2] != 0)
    {
        a3 = rand() % 2 + 1;
        if (a3 == 1)
        {
            b3 = iii - 1;
        }
        if (a3 == 2)
        {
            b3 = jjj - 1;
        }

        if (b3 == 1)
        {
            matrice[x][aaa - 1] = 4;
            xe = x;
            xf = aaa - 1;
        }
        if (b3 == 2)
        {
            matrice[x][bbb + 1] = 4;
            xe = x;
            xf = bbb + 1;
        }
        if (b3 == 3)
        {
            matrice[aaa - 1][y] = 4;
            xe = aaa - 1;
            xf = y;
        }
        if (b3 == 4)
        {
            matrice[bbb + 1][y] = 4;
            xe = bbb + 1;
            xf = y;
        }
        if (b3 == 5)
        {
            matrice[x - 1][y + 1] = 4;
            xe = x - 1;
            xf = y + 1;
        }
        if (b3 == 6)
        {
            matrice[h - 1][g + 1] = 4;
            xe = h - 1;
            xf = g + 1;
        }
        if (b3 == 7)
        {
            matrice[xc - 1][xd + 1] = 4;
            xe = xc - 1;
            xf = xd + 1;
        }
        if (b3 == 8)
        {
            matrice[x - 1][y - 1] = 4;
            xe = x - 1;
            xf = y - 1;
        }
        if (b3 == 9)
        {
            matrice[h - 1][g - 1] = 4;
            xe = h - 1;
            xf = g - 1;
        }
        if (b3 == 10)
        {
            matrice[xc - 1][xd - 1] = 4;
            xe = xc - 1;
            xf = xd - 1;
        }
        if (b3 == 11)
        {
            matrice[x + 1][y - 1] = 4;
            xe = x + 1;
            xf = y - 1;
        }
        if (b3 == 12)
        {
            matrice[h + 1][g - 1] = 4;
            xe = h + 1;
            xf = g - 1;
        }
        if (b3 == 13)
        {
            matrice[xc + 1][xd - 1] = 4;
            xe = xc + 1;
            xf = xd - 1;
        }
        if (b3 == 14)
        {
            matrice[x + 1][y + 1] = 4;
            xe = x + 1;
            xf = y + 1;
        }
        if (b3 == 15)
        {
            matrice[h + 1][g + 1] = 4;
            xe = h + 1;
            xf = g + 1;
        }
        if (b3 == 16)
        {
            matrice[xc + 1][xd + 1] = 4;
            xe = xc + 1;
            xf = xd + 1;
        }
    }
    if (adevarat2[1] != 0 && adevarat2[2] == 0)
    {
        b3 = iii - 1;
        if (b3 == 1)
        {
            matrice[x][aaa - 1] = 4;
            xe = x;
            xf = aaa - 1;
        }
        if (b3 == 2)
        {
            matrice[x][bbb + 1] = 4;
            xe = x;
            xf = bbb + 1;
        }
        if (b3 == 3)
        {
            matrice[aaa - 1][y] = 4;
            xe = aaa - 1;
            xf = y;
        }
        if (b3 == 4)
        {
            matrice[bbb + 1][y] = 4;
            xe = bbb + 1;
            xf = y;
        }
        if (b3 == 5)
        {
            matrice[x - 1][y + 1] = 4;
            xe = x - 1;
            xf = y + 1;
        }
        if (b3 == 6)
        {
            matrice[h - 1][g + 1] = 4;
            xe = h - 1;
            xf = g + 1;
        }
        if (b3 == 7)
        {
            matrice[xc - 1][xd + 1] = 4;
            xe = xc - 1;
            xf = xd + 1;
        }
        if (b3 == 8)
        {
            matrice[x - 1][y - 1] = 4;
            xe = x - 1;
            xf = y - 1;
        }
        if (b3 == 9)
        {
            matrice[h - 1][g - 1] = 4;
            xe = h - 1;
            xf = g - 1;
        }
        if (b3 == 10)
        {
            matrice[xc - 1][xd - 1] = 4;
            xe = xc - 1;
            xf = xd - 1;
        }
        if (b3 == 11)
        {
            matrice[x + 1][y - 1] = 4;
            xe = x + 1;
            xf = y - 1;
        }
        if (b3 == 12)
        {
            matrice[h + 1][g - 1] = 4;
            xe = h + 1;
            xf = g - 1;
        }
        if (b3 == 13)
        {
            matrice[xc + 1][xd - 1] = 4;
            xe = xc + 1;
            xf = xd - 1;
        }
        if (b3 == 14)
        {
            matrice[x + 1][y + 1] = 4;
            xe = x + 1;
            xf = y + 1;
        }
        if (b3 == 15)
        {
            matrice[h + 1][g + 1] = 4;
            xe = h + 1;
            xf = g + 1;
        }
        if (b3 == 16)
        {
            matrice[xc + 1][xd + 1] = 4;
            xe = xc + 1;
            xf = xd + 1;
        }
    }

    for (i1 = 1; i1 <= 10; i1++)
    {
        for (j1 = 1; j1 <= 10; j1++)
        {
            if ((i1 == x && j1 == y) || (i1 == h && j1 == g) || (i1 == xe && j1 == xf) || (i1 == xc && j1 == xd))
            {
                matrice[i1][j1] = 4;
            }
        }
    }
    for (ip = 1; ip <= 10; ip++)
    {
        for (jp = 1; jp <= 10; jp++)
        {
            if (matrice[ip][jp] == 4)
            {
                m4++;
            }
        }
    }
}

void variante()
{
    cout << i - 1 << " " << j - 1 << " " << b << endl;
    cout << ii - 1 << " " << jj - 1 << " " << bb << endl;
    cout << iii - 1 << " " << jjj - 1 << " " << b3 << endl;
    cout << v1[1] << " " << v1[2] << " " << v1[3] << endl;
    for (c = 1; c <= 16; c++)
    {
        if (posibilitate[c] == true)
        {
            cout << c << " ";
        }
    }
    cout << endl;
    for (c = 1; c <= 16; c++)
    {
        if (posibilitate1[c] == true)
        {
            cout << c << " ";
        }
    }
    cout << endl;
    for (c = 1; c <= 16; c++)
    {
        if (posibilitate2[c] == true)
        {
            cout << c << " ";
        }
    }
    cout << endl;
    cout << m2 << "," << m3 << "," << m4 << "." << endl;
}


void matricecalculator()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << matrice[i][j] << " ";
            if (j == 10 && i != 10)
                cout << endl;
        }
    }
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            if (matrice[i][j] == 21) {
                matrice1[i][j] = 21;
            }
            if (matrice[i][j] == 22) {
                matrice1[i][j] = 22;
            }
            if (matrice[i][j] == 3) {
                matrice1[i][j] = 3;
            }
            if (matrice[i][j] == 4) {
                matrice1[i][j] = 4;
            }
        }
    }
    cout << endl;
}

void timpexpirat()
{
    setbkcolor(CYAN); clearviewport();
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    setcolor(MAGENTA);
    outtextxy(515, 250, (char*)"AI PIERDUT!");
    outtextxy(505, 350, (char*)"TIMPUL A EXPIRAT!");
    PlaySound(TEXT("sad_sound.wav"), NULL, SND_SYNC);
}

void jucatorEasy()
{
    int nothit = 0;
    numar = numar + 1;
    int i1 = 1, j1 = 1;
    for (k1 = 1; k1 <= hitsUser; k1++)
    {
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        getmouseclick(WM_LBUTTONDOWN, t1, z1);
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        if (matrice1[linia2][coloana2] < 0) {
            corect = 0;
        }
        while (!(t1 >= stanga1 && t1 <= stanga1 + width && z1 >= sus1 && z1 <= sus1 + height && corect == 1))
        {
            getmouseclick(WM_LBUTTONDOWN, t1, z1);
            linia2 = (z1 - sus1) / latura + 1;
            coloana2 = (t1 - stanga1) / latura + 1;
            if (matrice1[linia2][coloana2] < 0) {
                corect = 0;
            }
        }
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        matrice1[linia2][coloana2] = -1;
        lovitura[i1][j1] = linia2;
        lovitura[i1][j1 + 1] = coloana2;
        i1++;
        setbkcolor(CYAN);
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 12);
        setcolor(WHITE);
        if (numar == 1) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"1");
        }
        if (numar == 2) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"2");
        }
        if (numar == 3) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"3");
        }
        if (numar == 4) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"4");
        }
        if (numar == 5) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"5");
        }
        if (numar == 6) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"6");
        }
        if (numar == 7) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"7");
        }
        if (numar == 8) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"8");
        }
        if (numar == 9) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"9");
        }
        if (numar == 10) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 5, 150 + (linia2 - 1) * latura + 5, (char*)"10");
        }
        if (numar == 11) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"11");
        }
        if (numar == 12) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"12");
        }
        if (numar == 13) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"13");
        }
        if (numar == 14) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"14");
        }
        if (numar == 15) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"15");
        }
        if (numar == 16) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"16");
        }
        if (numar == 17) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"17");
        }
        if (numar == 18) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"18");
        }
        if (numar == 19) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"19");
        }
        if (numar == 20) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"20");
        }
        if (numar == 21) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"21");
        }
        if (numar == 22) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"22");
        }
        if (numar == 23) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"23");
        }
        if (numar == 24) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"24");
        }
        if (numar == 25) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"25");
        }
        if (numar == 26) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"26");
        }
        if (numar == 27) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"27");
        }
        if (numar == 28) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"28");
        }
        if (numar == 29) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"29");
        }
        if (numar == 30) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"30");
        }
        cout << linia2 << " " << coloana2 << endl;
    }
    for (i1 = 1; i1 <= hitsUser; i1++)
    {
        for (j1 = 1; j1 <= 1; j1++)
        {
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 21 || matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 22)
            {
                setfillstyle(SOLID_FILL, BLUE);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 3)
            {
                setfillstyle(SOLID_FILL, MAGENTA);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 4)
            {
                setfillstyle(SOLID_FILL, YELLOW);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }

        }
    }
    for (i1 = 1; i1 <= hitsUser; i1++)
    {
        for (j1 = 1; j1 <= 1; j1++)
        {
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 21 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 22 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 3 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 4) {
                nothit = 0;
            }
            else { nothit = 1; }
        }
    }
    if (nothit == 0) { PlaySound(TEXT("splash_sound.wav"), NULL, SND_SYNC); }
}

void jucatorMedium()
{
    int nothit = 0;
    int i1 = 1, j1 = 1;
    numar = numar + 1;
    for (k1 = 1; k1 <= hitsUser; k1++)
    {
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        getmouseclick(WM_LBUTTONDOWN, t1, z1);
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        if (matrice1[linia2][coloana2] < 0) {
            corect = 0;
        }
        while (!(t1 >= stanga1 && t1 <= stanga1 + width && z1 >= sus1 && z1 <= sus1 + height && corect == 1))
        {
            getmouseclick(WM_LBUTTONDOWN, t1, z1);
            linia2 = (z1 - sus1) / latura + 1;
            coloana2 = (t1 - stanga1) / latura + 1;
            if (matrice1[linia2][coloana2] < 0) {
                corect = 0;
            }
        }
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        matrice1[linia2][coloana2] = -1;
        lovitura[i1][j1] = linia2;
        lovitura[i1][j1 + 1] = coloana2;
        i1++;
        setbkcolor(CYAN);
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 12);
        setcolor(WHITE);
        if (numar == 1) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"1");
        }
        if (numar == 2) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"2");
        }
        if (numar == 3) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"3");
        }
        if (numar == 4) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"4");
        }
        if (numar == 5) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"5");
        }
        if (numar == 6) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"6");
        }
        if (numar == 7) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"7");
        }
        if (numar == 8) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"8");
        }
        if (numar == 9) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"9");
        }
        if (numar == 10) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"10");
        }
        if (numar == 11) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"11");
        }
        if (numar == 12) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"12");
        }
        if (numar == 13) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"13");
        }
        if (numar == 14) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"14");
        }
        if (numar == 15) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"15");
        }
        if (numar == 16) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"16");
        }
        if (numar == 17) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"17");
        }
        if (numar == 18) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"18");
        }
        if (numar == 19) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"19");
        }
        if (numar == 20) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"20");
        }
        if (numar == 21) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"21");
        }
        if (numar == 22) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"22");
        }
        if (numar == 23) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"23");
        }
        if (numar == 24) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"24");
        }
        if (numar == 25) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"25");
        }
        if (numar == 26) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"26");
        }
        if (numar == 27) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"27");
        }
        if (numar == 28) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"28");
        }
        if (numar == 29) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"29");
        }
        if (numar == 30) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"30");
        }
        cout << linia2 << " " << coloana2 << endl;
    }
    for (i1 = 1; i1 <= hitsUser; i1++)
    {
        for (j1 = 1; j1 <= 1; j1++)
        {
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 2)
            {
                setfillstyle(SOLID_FILL, LIGHTGRAY);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 3)
            {
                setfillstyle(SOLID_FILL, LIGHTGRAY);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] == 4)
            {
                setfillstyle(SOLID_FILL, LIGHTGRAY);
                PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                bar(600 + (lovitura[i1][j1 + 1] - 1) * latura + 1, 150 + (lovitura[i1][j1] - 1) * latura + 1, 600 + (lovitura[i1][j1 + 1] - 1) * latura + latura + 0.1, 150 + (lovitura[i1][j1] - 1) * latura + latura + 0.1);
            }

        }
    }
    for (i1 = 1; i1 <= hitsUser; i1++)
    {
        for (j1 = 1; j1 <= 1; j1++)
        {
            if (matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 21 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 22 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 3 && matrice[lovitura[i1][j1]][lovitura[i1][j1 + 1]] != 4) {
                nothit = 0;
            }
            else { nothit = 1; }
        }
    }
    if (nothit == 0) { PlaySound(TEXT("splash_sound.wav"), NULL, SND_SYNC); }
}

void coloana()
{
    int stangacoloana = 1150, suscoloana = 100;
    setlinestyle(SOLID_LINE, USERBIT_LINE, THICK_WIDTH);
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= 11; j++) {
            setcolor(WHITE);
            rectangle(stangacoloana + latura * (i - 1), suscoloana + latura * (j - 1), stangacoloana + latura * i, suscoloana + latura * j);
        }
    }
    setcolor(RED);
    line(1150, 300, 1200, 300);
    line(1150, 450, 1200, 450);
    line(1150, 550, 1200, 550);
}

void jucatorHard()
{
    int nothit = 0;
    int i6 = 1, j6 = 1;
    numar = numar + 1;
    int stanga3 = 1170;
    for (k1 = 1; k1 <= hitsUser; k1++)
    {
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        getmouseclick(WM_LBUTTONDOWN, t1, z1);
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        if (matrice1[linia2][coloana2] < 0) {
            corect = 0;
        }
        while (!(t1 >= stanga1 && t1 <= stanga1 + width && z1 >= sus1 && z1 <= sus1 + height && corect == 1))
        {
            getmouseclick(WM_LBUTTONDOWN, t1, z1);
            linia2 = (z1 - sus1) / latura + 1;
            coloana2 = (t1 - stanga1) / latura + 1;
            if (matrice1[linia2][coloana2] < 0) {
                corect = 0;
            }
        }
        linia2 = (z1 - sus1) / latura + 1;
        coloana2 = (t1 - stanga1) / latura + 1;
        matrice1[linia2][coloana2] = -1;
        lovitura[i6][j6] = linia2;
        lovitura[i6][j6 + 1] = coloana2;
        i6++;
        setbkcolor(CYAN);
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 12);
        setcolor(WHITE);
        if (numar == 1) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"1");
        }
        if (numar == 2) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"2");
        }
        if (numar == 3) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"3");
        }
        if (numar == 4) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"4");
        }
        if (numar == 5) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"5");
        }
        if (numar == 6) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"6");
        }
        if (numar == 7) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"7");
        }
        if (numar == 8) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"8");
        }
        if (numar == 9) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"9");
        }
        if (numar == 10) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"10");
        }
        if (numar == 11) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"11");
        }
        if (numar == 12) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"12");
        }
        if (numar == 13) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"13");
        }
        if (numar == 14) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"14");
        }
        if (numar == 15) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"15");
        }
        if (numar == 16) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"16");
        }
        if (numar == 17) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"17");
        }
        if (numar == 18) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"18");
        }
        if (numar == 19) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"19");
        }
        if (numar == 20) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"20");
        }
        if (numar == 21) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"21");
        }
        if (numar == 22) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"22");
        }
        if (numar == 23) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"23");
        }
        if (numar == 24) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"24");
        }
        if (numar == 25) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"25");
        }
        if (numar == 26) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"26");
        }
        if (numar == 27) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"27");
        }
        if (numar == 28) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"28");
        }
        if (numar == 29) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"29");
        }
        if (numar == 30) {
            outtextxy(600 + (coloana2 - 1) * latura + latura / 2 - 3, 150 + (linia2 - 1) * latura + 5, (char*)"30");
        }
        cout << linia2 << " " << coloana2 << endl;
    }
    for (i6 = 1; i6 <= hitsUser; i6++)
    {
        for (j6 = 1; j6 <= 1; j6++)
        {
            if (matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] == 21)
            {
                if (numar == 1) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"1");
                }
                if (numar == 2) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"2");
                }
                if (numar == 3) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"3");
                }
                if (numar == 4) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"4");
                }
                if (numar == 5) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"5");
                }
                if (numar == 6) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"6");
                }
                if (numar == 7) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"7");
                }
                if (numar == 8) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"8");
                }
                if (numar == 9) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"9");
                }
                if (numar == 10) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"10");
                }
                if (numar == 11) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"11");
                }
                if (numar == 12) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"12");
                }
                if (numar == 13) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"13");
                }
                if (numar == 14) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"14");
                }
                if (numar == 15) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"15");
                }
                if (numar == 16) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"16");
                }
                if (numar == 17) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"17");
                }
                if (numar == 18) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"18");
                }
                if (numar == 19) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"19");
                }
                if (numar == 20) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"20");
                }
                if (numar == 21) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"21");
                }
                if (numar == 22) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"22");
                }
                if (numar == 23) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"23");
                }
                if (numar == 24) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"24");
                }
                if (numar == 25) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"25");
                }
                if (numar == 26) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"26");
                }
                if (numar == 27) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"27");
                }
                if (numar == 28) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"28");
                }
                if (numar == 29) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"29");
                }
                if (numar == 30) {
                    if (numar21 > 0) { sus21 = sus21 + 50; }
                    numar21++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus21, (char*)"30");
                }
            }
            if (matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] == 22)
            {
                if (numar == 1) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 2) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 3) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 4) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 5) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 6) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 7) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 8) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 9) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 10) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 11) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 12) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 13) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 14) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 15) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 16) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 17) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 18) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 19) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 20) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 21) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 22) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 23) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 24) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 25) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 26) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 27) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 28) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 29) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
                if (numar == 30) {
                    if (numar22 > 0) { sus22 = sus22 + 50; }
                    numar22++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus22, (char*)"1");
                }
            }
            if (matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] == 3)
            {
                if (numar == 1) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"1");
                }
                if (numar == 2) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"2");
                }
                if (numar == 3) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"3");
                }
                if (numar == 4) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"4");
                }
                if (numar == 5) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"5");
                }
                if (numar == 6) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"6");
                }
                if (numar == 7) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"7");
                }
                if (numar == 8) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"8");
                }
                if (numar == 9) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"9");
                }
                if (numar == 10) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"10");
                }
                if (numar == 11) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"11");
                }
                if (numar == 12) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"12");
                }
                if (numar == 13) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"13");
                }
                if (numar == 14) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"14");
                }
                if (numar == 15) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"15");
                }
                if (numar == 16) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"16");
                }
                if (numar == 17) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"17");
                }
                if (numar == 18) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"18");
                }
                if (numar == 19) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"19");
                }
                if (numar == 20) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"20");
                }
                if (numar == 21) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"21");
                }
                if (numar == 22) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"22");
                }
                if (numar == 23) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"23");
                }
                if (numar == 24) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"24");
                }
                if (numar == 25) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"25");
                }
                if (numar == 26) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"26");
                }
                if (numar == 27) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"27");
                }
                if (numar == 28) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"28");
                }
                if (numar == 29) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"29");
                }
                if (numar == 30) {
                    if (numar3 > 0) { sus3 = sus3 + 50; }
                    numar3++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus3, (char*)"30");
                }
            }
            if (matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] == 4)
            {
                if (numar == 1) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"1");
                }
                if (numar == 2) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"2");
                }
                if (numar == 3) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"3");
                }
                if (numar == 4) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"4");
                }
                if (numar == 5) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"5");
                }
                if (numar == 6) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"6");
                }
                if (numar == 7) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"7");
                }
                if (numar == 8) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"8");
                }
                if (numar == 9) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"9");
                }
                if (numar == 10) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"10");
                }
                if (numar == 11) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"11");
                }
                if (numar == 12) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"12");
                }
                if (numar == 13) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"13");
                }
                if (numar == 14) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"14");
                }
                if (numar == 15) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"15");
                }
                if (numar == 16) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"16");
                }
                if (numar == 17) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"17");
                }
                if (numar == 18) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"18");
                }
                if (numar == 19) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"19");
                }
                if (numar == 20) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"20");
                }
                if (numar == 21) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"21");
                }
                if (numar == 22) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"22");
                }
                if (numar == 23) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"23");
                }
                if (numar == 24) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"24");
                }
                if (numar == 25) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"25");
                }
                if (numar == 26) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"26");
                }
                if (numar == 27) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"27");
                }
                if (numar == 28) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"28");
                }
                if (numar == 29) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"29");
                }
                if (numar == 30) {
                    if (numar4 > 0) { sus4 = sus4 + 50; }
                    numar4++;
                    PlaySound(TEXT("bomb_sound.wav"), NULL, SND_SYNC);
                    outtextxy(stanga3, sus4, (char*)"30");
                }
            }
        }
    }
    for (i6 = 1; i6 <= hitsUser; i6++)
    {
        for (j6 = 1; j6 <= 1; j6++)
        {
            if (matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] != 21 && matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] != 22 && matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] != 3 && matrice[lovitura[i6][j6]][lovitura[i6][j6 + 1]] != 4) {
                nothit = 0;
            }
            else { nothit = 1; }

        }
    }
    if (nothit == 0) { PlaySound(TEXT("splash_sound.wav"), NULL, SND_SYNC); }
}

void ramas()
{
    if (numar4 == 4 && gatalov4 == 0) {
        hitsCPU = hitsCPU - 3;
        gatalov4 = 1;
    }
    if (numar3 == 3 && gatalov3 == 0) {
        hitsCPU = hitsCPU - 2;
        gatalov3 = 1;
    }
    if (numar22 == 2 && gatalov22 == 0) {
        hitsCPU = hitsCPU - 1;
        gatalov22 = 1;
    }
    if (numar21 == 2 && gatalov21 == 0) {
        hitsCPU = hitsCPU - 1;
        gatalov21 = 1;
    }
}

void castigatorplayer()
{
    setbkcolor(CYAN); clearviewport();
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    setcolor(WHITE);
    outtextxy(520, 250, (char*)"FELICITARI!");
    outtextxy(515, 350, (char*)"AI CASTIGAT!");
    PlaySound(TEXT("tada_sound.wav"), NULL, SND_SYNC);
}

void castigatorcpu()
{
    setbkcolor(CYAN); clearviewport();
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    setcolor(MAGENTA);
    outtextxy(515, 250, (char*)"AI PIERDUT!");
    PlaySound(TEXT("sad_sound.wav"), NULL, SND_SYNC);
}

void easy()
{
    for (i = 0; i <= 11; i++)
        for (j = 0; j <= 11; j++)
        {
            if (j == 2 || j == 4 || j == 8 || j == 4 || j == 10 || i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
                Strategy[i][j] = 4;
            if (i == 0 || i == 11 || j == 0 || j == 11)
                Strategy[i][j] = -4;
        }
    srand((unsigned int)time(NULL));
    //initwindow(1530,800);
    setbkcolor(CYAN); clearviewport();
    desen();
    do
    {
        douaClickuri(l, c, l1, c1);
        if (diferentaClick(l, c, l1, c1) == 4)
        {
            if (ok4 == false)
                vapor4(c, l, c1, l1, ok4);
        }
        else if (diferentaClick(l, c, l1, c1) == 3)
        {
            if (ok3 == false)
                vapor3(c, l, c1, l1, ok3);
        }
        else if (diferentaClick(l, c, l1, c1) == 2)
        {
            if (ok1 == false && ok2 == false)
                vapor21(c, l, c1, l1, ok2);
            else
                if (ok1 == false)
                    vapor22(c, l, c1, l1, ok1);

        }
    } while (!(ok4 && ok3 && ok2 && ok1));
    do
    {
        m2 = 0; m3 = 0; m4 = 0;
        vapor2User();
        vapor3User();
        vapor4User();
    } while (m2 != 4 || m3 != 3 || m4 != 4);
    matricecalculator();
    variante();
    do
    {
        strcpy(minut, "1");
        strcpy(secunda, "59");
        CPUEasy();
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        if (hitsUser == 0) {
            castigatorcpu();
        }
        jucatorEasy();
        ramas();
    } while (hitsCPU != 0 && hitsUser != 0);

    if (hitsCPU == 0) {
        castigatorplayer();
    }
    if (getch() == 72)
        closegraph();
}

void mediu()
{
    for (i = 0; i <= 11; i++)
        for (j = 0; j <= 11; j++)
        {
            if (j == 2 || j == 4 || j == 8 || j == 4 || j == 10 || i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
                Strategy[i][j] = 4;
            if (i == 0 || i == 11 || j == 0 || j == 11)
                Strategy[i][j] = -4;
        }
    srand((unsigned int)time(NULL));
    //initwindow(1530,800);
    setbkcolor(CYAN); clearviewport();
    desen();
    do
    {
        douaClickuri(l, c, l1, c1);
        if (diferentaClick(l, c, l1, c1) == 4)
        {
            if (ok4 == false)
                vapor4(c, l, c1, l1, ok4);
        }
        else if (diferentaClick(l, c, l1, c1) == 3)
        {
            if (ok3 == false)
                vapor3(c, l, c1, l1, ok3);
        }
        else if (diferentaClick(l, c, l1, c1) == 2)
        {
            if (ok1 == false && ok2 == false)
                vapor21(c, l, c1, l1, ok2);
            else
                if (ok1 == false)
                    vapor22(c, l, c1, l1, ok1);

        }
    } while (!(ok4 && ok3 && ok2 && ok1));
    do
    {
        m2 = 0; m3 = 0; m4 = 0;
        vapor2User();
        vapor3User();
        vapor4User();
    } while (m2 != 4 || m3 != 3 || m4 != 4);
    matricecalculator();
    variante();
    do
    {
        strcpy(minut, "1");
        strcpy(secunda, "59");
        CPUMedium();
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        if (hitsUser == 0) {
            castigatorcpu();
        }
        jucatorMedium();
        ramas();
    } while (hitsCPU != 0 && hitsUser != 0);
    if (hitsCPU == 0) {
        castigatorplayer();
    }
    if (getch() == 72)
        closegraph();
}

void hard()
{
    for (i = 0; i <= 11; i++)
        for (j = 0; j <= 11; j++)
        {
            if (j == 2 || j == 4 || j == 8 || j == 4 || j == 10 || i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
                Strategy[i][j] = 4;
            if (i == 0 || i == 11 || j == 0 || j == 11)
                Strategy[i][j] = -4;
        }
    srand((unsigned int)time(NULL));
    //initwindow(1530,800);
    setbkcolor(CYAN); clearviewport();
    desen();
    coloana();
    do
    {
        douaClickuri(l, c, l1, c1);
        if (diferentaClick(l, c, l1, c1) == 4)
        {
            if (ok4 == false)
                vapor4(c, l, c1, l1, ok4);
        }
        else if (diferentaClick(l, c, l1, c1) == 3)
        {
            if (ok3 == false)
                vapor3(c, l, c1, l1, ok3);
        }
        else if (diferentaClick(l, c, l1, c1) == 2)
        {
            if (ok1 == false && ok2 == false)
                vapor21(c, l, c1, l1, ok2);
            else
                if (ok1 == false)
                    vapor22(c, l, c1, l1, ok1);

        }
    } while (!(ok4 && ok3 && ok2 && ok1));
    do {
        m2 = 0; m3 = 0; m4 = 0;
        vapor2User();
        vapor3User();
        vapor4User();
    } while (m2 != 4 || m3 != 3 || m4 != 4);
    matricecalculator();
    variante();
    do
    {
        strcpy(minut, "1");
        strcpy(secunda, "59");
        CPUHard();
        cronometru();
        if (strcmp(minut, "0") == 0 && strcmp(secunda, "0") == 0)
            timpexpirat();
        if (hitsUser == 0) {
            castigatorcpu();
        }
        jucatorHard();
        ramas();
    } while (hitsCPU != 0 && hitsUser != 0);

    if (hitsCPU == 0) {
        castigatorplayer();
    }
    if (getch() == 72)
        closegraph();
}

void interfata()
{
    setbkcolor(FUNDAL); clearviewport();
    setcolor(GREEN); settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    pozitie = stanga0 + (lungime - strlen(a1) * 35) / 2;
    outtextxy(pozitie, 50, a1);
    pozitie = stanga0 + (lungime - strlen(b1) * 35) / 2;
    outtextxy(pozitie, 125, b1);
    setlinestyle(SOLID_LINE, USERBIT_LINE, THICK_WIDTH);
    yac = 200;
    setcolor(BLUE);
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= 4; j++) {
            while (yac <= sus0 + latime * j) {
                for (xac = 350; xac <= 1190; xac = xac + 20) {
                    circle(xac, yac, rc);
                }
                yac = yac + 20;
            }
        }
    }
    setcolor(CYAN);
    pozitie = stanga0 + (lungime - strlen(c21) * 35) / 2;
    outtextxy(pozitie, 235, c21);
    pozitie = stanga0 + (lungime - strlen(d1) * 35) / 2;
    outtextxy(pozitie, 355, d1);
    pozitie = stanga0 + (lungime - strlen(e1) * 35) / 2;
    outtextxy(pozitie, 475, e1);
    pozitie = stanga0 + (lungime - strlen(f1) * 35) / 2;
    outtextxy(pozitie, 595, f1);
}

void start()
{
    setbkcolor(FUNDAL); clearviewport();
    setcolor(GREEN); settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    pozitie = (1530 - strlen(g1) * 35) / 2;
    outtextxy(pozitie, 100, g1);
    yac = 200;
    setcolor(BLUE);
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= 4; j++) {
            while (yac <= sus0 + latime * j) {
                for (xac = 350; xac <= 1190; xac = xac + 20) {
                    circle(xac, yac, rc);
                }
                yac = yac + 20;
            }
        }
    }
    setcolor(CYAN);
    pozitie = stanga0 + (lungime - strlen(h1) * 35) / 2;
    outtextxy(pozitie, 235, h1);
    pozitie = stanga0 + (lungime - strlen(i1) * 35) / 2;
    outtextxy(pozitie, 355, i1);
    pozitie = stanga0 + (lungime - strlen(j1) * 35) / 2;
    outtextxy(pozitie, 475, j1);
    pozitie = stanga0 + (lungime - strlen(k21) * 35) / 2;
    outtextxy(pozitie, 595, k21);
}

void setari()
{
    setbkcolor(FUNDAL); clearviewport();
    setcolor(GREEN); settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    pozitie = stanga0 + (lungime - strlen(d1) * 35) / 2;
    outtextxy(pozitie, 100, d1);
    yac = 320;
    setcolor(BLUE);
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= 2; j++) {
            while (yac <= sus0 + 120 + latime * j) {
                for (xac = 350; xac <= 1190; xac = xac + 20) {
                    circle(xac, yac, rc);
                }
                yac = yac + 20;
            }
        }
    }
    setcolor(CYAN);
    pozitie = stanga0 + (lungime - strlen(m1) * 35) / 2;
    outtextxy(pozitie, 355, m1);
    pozitie = stanga0 + (lungime - strlen(k21) * 35) / 2;
    outtextxy(pozitie, 475, k21);
}

void instructiuni()
{
    setbkcolor(FUNDAL); clearviewport();
    setcolor(GREEN); settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    pozitie = stanga0 + (lungime - strlen(e1) * 35) / 2;
    outtextxy(pozitie, 50, e1);
    yac = 200;
    setcolor(BLUE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 30);
    outtextxy(70, 150, (char*)instr1);
    outtextxy(50, 180, (char*)instr2);
    outtextxy(50, 210, (char*)instr3);
    outtextxy(50, 240, (char*)instr4);
    outtextxy(70, 270, (char*)instr5);
    outtextxy(50, 300, (char*)instr6);
    outtextxy(50, 330, (char*)instr7);
    outtextxy(70, 360, (char*)instr8);
    outtextxy(90, 390, (char*)instr9);
    outtextxy(90, 420, (char*)instr10);
    outtextxy(90, 450, (char*)instr11);
    outtextxy(70, 480, (char*)instr12);
    outtextxy(50, 510, (char*)instr13);
    outtextxy(50, 540, (char*)instr14);
    outtextxy(50, 570, (char*)instr15);
    outtextxy(50, 600, (char*)instr16);
    outtextxy(50, 630, (char*)instr17);
    outtextxy(50, 660, (char*)instr18);
    pozitie = stanga0 + (lungime - strlen(k21) * 35) / 2;
    setcolor(CYAN);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    outtextxy(pozitie, 685, k21);
}

void schimbatilimba()
{
    setbkcolor(FUNDAL); clearviewport();
    setcolor(GREEN); settextstyle(DEFAULT_FONT, HORIZ_DIR, 50);
    pozitie = stanga0 + (lungime - strlen(n1) * 35) / 2;
    outtextxy(pozitie, 100, n1);
    yac = 200;
    setcolor(BLUE);
    for (i = 1; i <= 1; i++) {
        for (j = 1; j <= 5; j++) {
            while (yac <= sus0 + latime * j) {
                for (xac = 350; xac <= 1190; xac = xac + 20) {
                    circle(xac, yac, rc);
                }
                yac = yac + 20;
            }
        }
    }
    setcolor(CYAN);
    pozitie = stanga0 + (lungime - strlen(o1) * 35) / 2;
    outtextxy(pozitie, 235, o1);
    pozitie = stanga0 + (lungime - strlen(p1) * 35) / 2;
    outtextxy(pozitie, 355, p1);
    pozitie = stanga0 + (lungime - strlen(q1) * 35) / 2;
    outtextxy(pozitie, 475, q1);
    pozitie = stanga0 + (lungime - strlen(r1) * 35) / 2;
    outtextxy(pozitie, 595, r1);
    pozitie = stanga0 + (lungime - strlen(k21) * 35) / 2;
    outtextxy(pozitie, 715, k21);
}

void deschidere_instructiuni()
{
    do {
        getmouseclick(WM_LBUTTONDOWN, x0, y0);
        while (!(x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 450 && y0 <= sus0 + 450 + latime)) {
            getmouseclick(WM_LBUTTONDOWN, x0, y0);
        }
        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 450 && y0 <= sus0 + 450 + latime) {
            interfata();
            gata4 = true;
        }
    } while (!(gata4 == true));
}

void deschidere_schimbatilimba()
{
    do {
        getmouseclick(WM_LBUTTONDOWN, x0, y0);
        while (!(x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + 5 * latime)) {
            getmouseclick(WM_LBUTTONDOWN, x0, y0);
        }
        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + latime)
        {
            strcpy(a1, a12);
            strcpy(b1, b12);
            strcpy(c21, c12);
            strcpy(d1, d12);
            strcpy(e1, e12);
            strcpy(f1, f12);
            strcpy(g1, g12);
            strcpy(h1, h12);
            strcpy(i1, i12);
            strcpy(j1, j12);
            strcpy(k21, k12);
            strcpy(m1, m12);
            strcpy(n1, n12);
            strcpy(o1, o12);
            strcpy(p1, p12);
            strcpy(q1, q12);
            strcpy(r1, r12);
            strcpy(instr1, instr111);
            strcpy(instr2, instr211);
            strcpy(instr3, instr311);
            strcpy(instr4, instr411);
            strcpy(instr5, instr511);
            strcpy(instr6, instr611);
            strcpy(instr7, instr711);
            strcpy(instr8, instr811);
            strcpy(instr9, instr911);
            strcpy(instr10, instr101);
            strcpy(instr11, instr112);
            strcpy(instr12, instr121);
            strcpy(instr13, instr131);
            strcpy(instr14, instr141);
            strcpy(instr15, instr151);
            strcpy(instr16, instr161);
            strcpy(instr17, instr171);
            strcpy(instr18, instr181);
            schimbatilimba();
        }
        else {
            if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + latime && y0 <= sus0 + 2 * latime)
            {
                strcpy(a1, a11);
                strcpy(b1, b11);
                strcpy(c21, c11);
                strcpy(d1, d11);
                strcpy(e1, e11);
                strcpy(f1, f11);
                strcpy(g1, g11);
                strcpy(h1, h11);
                strcpy(i1, i11);
                strcpy(j1, j11);
                strcpy(k21, k11);
                strcpy(m1, m11);
                strcpy(n1, n11);
                strcpy(o1, o11);
                strcpy(p1, p11);
                strcpy(q1, q11);
                strcpy(r1, r11);
                strcpy(instr1, instr19);
                strcpy(instr2, instr20);
                strcpy(instr3, instr21);
                strcpy(instr4, instr22);
                strcpy(instr5, instr23);
                strcpy(instr6, instr24);
                strcpy(instr7, instr25);
                strcpy(instr8, instr26);
                strcpy(instr9, instr27);
                strcpy(instr10, instr28);
                strcpy(instr11, instr29);
                strcpy(instr12, instr30);
                strcpy(instr13, instr31);
                strcpy(instr14, instr32);
                strcpy(instr15, instr33);
                strcpy(instr16, instr34);
                strcpy(instr17, instr35);
                strcpy(instr18, instr36);
                schimbatilimba();
            }
            else {
                if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 2 * latime && y0 <= sus0 + 3 * latime)
                {
                    strcpy(a1, a111);
                    strcpy(b1, b111);
                    strcpy(c21, c111);
                    strcpy(d1, d111);
                    strcpy(e1, e111);
                    strcpy(f1, f111);
                    strcpy(g1, g111);
                    strcpy(h1, h111);
                    strcpy(i1, i111);
                    strcpy(j1, j111);
                    strcpy(k21, k111);
                    strcpy(m1, m111);
                    strcpy(n1, n111);
                    strcpy(o1, o111);
                    strcpy(p1, p111);
                    strcpy(q1, q111);
                    strcpy(r1, r111);
                    strcpy(instr1, instr37);
                    strcpy(instr2, instr38);
                    strcpy(instr3, instr39);
                    strcpy(instr4, instr40);
                    strcpy(instr5, instr41);
                    strcpy(instr6, instr42);
                    strcpy(instr7, instr43);
                    strcpy(instr8, instr44);
                    strcpy(instr9, instr45);
                    strcpy(instr10, instr46);
                    strcpy(instr11, instr47);
                    strcpy(instr12, instr48);
                    strcpy(instr13, instr49);
                    strcpy(instr14, instr50);
                    strcpy(instr15, instr51);
                    strcpy(instr16, instr52);
                    strcpy(instr17, instr53);
                    strcpy(instr18, instr54);
                    schimbatilimba();
                }
                else {
                    if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 3 * latime && y0 <= sus0 + 4 * latime)
                    {
                        strcpy(a1, a1111);
                        strcpy(b1, b1111);
                        strcpy(c21, c1111);
                        strcpy(d1, d1111);
                        strcpy(e1, e1111);
                        strcpy(f1, f1111);
                        strcpy(g1, g1111);
                        strcpy(h1, h1111);
                        strcpy(i1, i1111);
                        strcpy(j1, j1111);
                        strcpy(k21, k1111);
                        strcpy(m1, m1111);
                        strcpy(n1, n1111);
                        strcpy(o1, o1111);
                        strcpy(p1, p1111);
                        strcpy(q1, q1111);
                        strcpy(r1, r1111);
                        strcpy(instr1, instr55);
                        strcpy(instr2, instr56);
                        strcpy(instr3, instr57);
                        strcpy(instr4, instr58);
                        strcpy(instr5, instr59);
                        strcpy(instr6, instr60);
                        strcpy(instr7, instr61);
                        strcpy(instr8, instr62);
                        strcpy(instr9, instr63);
                        strcpy(instr10, instr64);
                        strcpy(instr11, instr65);
                        strcpy(instr12, instr66);
                        strcpy(instr13, instr67);
                        strcpy(instr14, instr68);
                        strcpy(instr15, instr69);
                        strcpy(instr16, instr70);
                        strcpy(instr17, instr71);
                        strcpy(instr18, instr72);
                        schimbatilimba();
                    }
                    else {
                        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 4 * latime && y0 <= sus0 + 5 * latime)
                        {
                            setari();
                            gata3 = true;
                        }
                    }
                }
            }
        }
    } while (!(gata3 == true));
}


void deschidere_setari()
{
    do {
        getmouseclick(WM_LBUTTONDOWN, x0, y0);
        while (!(x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + 4 * latime)) {
            getmouseclick(WM_LBUTTONDOWN, x0, y0);
        }
        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + latime && y0 <= sus0 + 2 * latime)
        {
            schimbatilimba();
            do {
                deschidere_schimbatilimba();
            } while (!(gata3 == true));
            gata3 = false;
        }
        else {
            if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 2 * latime && y0 <= sus0 + 3 * latime)
            {
                interfata();
                gata2 = true;
            }
        }
    } while (!(gata2 == true));
}

void deschidere_start()
{
    do {
        getmouseclick(WM_LBUTTONDOWN, x0, y0);
        while (!(x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + 4 * latime)) {
            getmouseclick(WM_LBUTTONDOWN, x0, y0);
        }
        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + latime)
        {
            easy();
        }
        else {
            if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + latime && y0 <= sus0 + 2 * latime)
            {
                mediu();
            }
            else {
                if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 2 * latime && y0 <= sus0 + 3 * latime)
                {
                    hard();
                }
                else {
                    if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 3 * latime && y0 <= sus0 + 4 * latime)
                    {
                        interfata();
                        gata1 = true;
                    }
                }
            }
        }
    } while (!(gata1 == true));
}

void deschidere()
{
    do {
        getmouseclick(WM_LBUTTONDOWN, x0, y0);
        while (!(x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + 4 * latime)) {
            getmouseclick(WM_LBUTTONDOWN, x0, y0);
        }
        if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 && y0 <= sus0 + latime)
        {
            start();
            do {
                deschidere_start();
            } while (!(gata1 == true));
        }
        else {
            if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + latime && y0 <= sus0 + 2 * latime)
            {
                setari();
                do {
                    deschidere_setari();
                } while (!(gata2 == true));
            }
            else {
                if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 2 * latime && y0 <= sus0 + 3 * latime)
                {
                    instructiuni();
                    do {
                        deschidere_instructiuni();
                    } while (!(gata4 == true));
                }
                else {
                    if (x0 >= stanga0 && x0 <= stanga0 + lungime && y0 >= sus0 + 3 * latime && y0 <= sus0 + 4 * latime)
                    {
                        closegraph();
                        gata0 = true;
                    }
                }
            }
        }
    } while (!(gata0 == true));
}

int main()
{
    initwindow(1530, 850);
    interfata();
    do {
        deschidere();
    } while (!(gata0 == true));
    closegraph();
    getch();
    return 0;
}
