# Second-task

### v1.1
### Programos veikimas

1. Programos pradžioje vartotojas gali pasirinkti, ar nori vykdyti programą, ar baigti darbą. <br>
   * Jeigu vartotojas pasirenka programos darbą baigti, programa išsijungia.
   * Jeigu vartotojas pasirenka programą vykdyti, programa tęsiasi
2. Vartotojas pasirenka kokio tipo sąrašą naudoti: vector/list/deque
3. Vartotojas pasirenka, kurią strategiją naudoti: pirmoji-greitesnė, antroji-užima mažiau vietos
4. Jeigu vartotojas nori generuoti failą, jis turi spausti "1", jeigu ne -"0" <br>
   * Pasirinkęs failą generuoti, vartotojas turės įvesti failo pavadinimą (be .txt pabaigos), kiek studentų ir kiek pažymių nori sugeneruoti. Vartotojas turės galimybę pasirinkti pagal ką rūšiuoti rezultatus (pagal vardą arba pagal pavardę) bei pagal ką skaičiuoti galutinius rezultatus (pagal vidurkį arba medianą). Vartotojui daugiau nieko daryti nebereikės. Po programos pauzės vartotojas bus grąžintas į žingsnį 1.<br>
   * Jeigu vartotojas pasirenka naujo failo negeneruoti, programos veikimą žiūrėti 3-6 žingsniuose <br>
5. Jeigu vartotojas nori duomenis rašyti ranka, jam reikia spausti "1", jeigu skaityti iš failo - "0". <br>
   * Pasirinkus skaityti iš failo, vartotojas turės įrašyti failo pavadinimą (be ".txt" pabaigos). <br>
6. Vartotojui bus duotas pasirinkimas ar galutinį studentį sąrašą rūšiuos pagal vardą (paspaudus "1"), ar pavardę (paspaudus "0"). <br>
7. Tuomet vartotojas turės pasirinkti ar galutinį rezultatą programa turi skaičiuoti pagal vidurkį (paspaudus "1"), ar medianą (paspaudus "0"). <br>
8. Jeigu vartotojas žingsnyje 1 pasirinko duomenis įvesti pats:
  * Studentų kiekis nėra fiksuotas, todėl, jeigu vartotojas nori pridėti naują studentą, jam reikia paspausti "1", jeigu pildyti baigė - "0". <br>
  * Pasirinkus "1" reikės įvesti naujo studento vardą ir pavardę. <br>
  * Vartotojas gali pasirinkti ar namų darbų pažymius įves pats (paspaudus "0"), ar programa turi generuoti automatiškai (paspaudus "1"). <br>
    - Pasirinkus "1" vartotojas turės įvesti kiek pažymių nori sugeneruoti. <br>
    - Pasirinkus "0" vartotojas gali vesti tiek pažymių, kiek reikia, 10-balėje sistemoje. Baigęs pildyti studento pažymių duomenis, vartotojas konsolėje parašo "0". <br>
  * Vartotojas gali pasirinkti, ar egzamino vertinimą įves pats (paspaudus "0"), ar programa turi generuoti automatiškai (paspaudus "1"). <br>
    - Pasirinkus "1" egzamino pažymys sugerejuomas automatiškai ir programa tęsia darbą. <br>
    - 2 Pasirinkus "0" vartotojas gali įvesti egzamino įvertinimą 10-balėje sistemoje. <br>
  * Vartotojas galės pildyti studentų sąrašą, tol kol paspaus "0" prie "jei baigėte pildyti studentų sąrašą" pasirinkimo. <br>
  * Rezultatai atspausdinami konsolėje lentelės pavidalu. <br>

Programa bus vykdoma tol kol, žingsnyje 1 vartotojas pasirinks darbą baigti.
### Programos testavimas 1 Strategija
|                     |     100000    |   1000000   |
| ------------------- | ------------- | ----------- |
|  STRUCT |   1.4179352  s  |  14.29873   s  |
| CLASS   |   1.8216217  s  |  15.4101992 s  |


### Programos testavimas visos programos veikimo laikas naudojant vektorius
|                     |       1000      |      10000     |     100000    |   1000000   |
| ------------------- | --------------- | -------------- | ------------- | ----------- |
|  O1 |    0.015031 s   |   0.135996 s  |   1.341997 s  |  13.696159 s  |
| O2  |  0.017014  s   |   0.083013 s  | 1.305035  s  | 13.301999 s  |
|  O3 |  0.016047  s   |   0.128994  s  |  1.176997  s  |  14.405094 s  | 

###v1.2
Pridėta:
1. Konstruktorius
2. Copy konstruktorius
3. Destruktorius
4. Copy assignement operatorius

Programos naudojimo instrukcijos:
1. Įsitikinkite, kad savo įrenginy turite MinGW. Jeigu jo nėra, parsisiųskite.
2. Parsisiųskite failus iš v1.0 git repozitorijos.
3. Naudojantis Command Prompt nueikite į direktoriją, kurioje saugomi visi failai
4. Parašykite komandą - mingw32-make
5. Programą paleiskite įvedę komandą - run
6. Jeigu norite "išvalyti" programą, parašykite komandą - mingw32-make clean
