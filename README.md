# Second-task

### v1.0
### Programos veikimas
Visa programa padalinta į 6 skirtingus projektus, kuriuose skiriasi naudojamų sąrašų tipai (vector/deque/list), bei naudojamos studentų dalinimo strategijos. <br>
1. Programos pradžioje vartotojas gali pasirinkti, ar nori vykdyti programą, ar baigti darbą. <br>
   * Jeigu vartotojas pasirenka programos darbą baigti, programa išsijungia.
   * Jeigu vartotojas pasirenka programą vykdyti, programa tęsiasi
2. Jeigu vartotojas nori generuoti failą, jis turi spausti "1", jeigu ne -"0" <br>
   * Pasirinkęs failą generuoti, vartotojas turės įvesti failo pavadinimą (be .txt pabaigos), kiek studentų ir kiek pažymių nori sugeneruoti. Vartotojas turės galimybę pasirinkti pagal ką rūšiuoti rezultatus (pagal vardą arba pagal pavardę) bei pagal ką skaičiuoti galutinius rezultatus (pagal vidurkį arba medianą). Vartotojui daugiau nieko daryti nebereikės. Po programos pauzės vartotojas bus grąžintas į žingsnį 1.<br>
   * Jeigu vartotojas pasirenka naujo failo negeneruoti, programos veikimą žiūrėti 3-6 žingsniuose <br>
3. Jeigu vartotojas nori duomenis rašyti ranka, jam reikia spausti "1", jeigu skaityti iš failo - "0". <br>
   * Pasirinkus skaityti iš failo, vartotojas turės įrašyti failo pavadinimą (be ".txt" pabaigos). <br>
4. Vartotojui bus duotas pasirinkimas ar galutinį studentį sąrašą rūšiuos pagal vardą (paspaudus "1"), ar pavardę (paspaudus "0"). <br>
5. Tuomet vartotojas turės pasirinkti ar galutinį rezultatą programa turi skaičiuoti pagal vidurkį (paspaudus "1"), ar medianą (paspaudus "0"). <br>
6. Jeigu vartotojas žingsnyje 1 pasirinko duomenis įvesti pats:
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
|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR NUSKAITYMAS   |   0.0050705  s  |   0.0542667 s  |    1.1054702 s  |  5.8535487 s  |  48.2533813  s |
|VECTOR RŪŠIAVIMAS    |    0.0005734 s  |  0.0027843  s  |  0.0645698 s  | 0.4230344 s  |   4.6411322 s |
|DEQUE NUSKAITYMAS    |    0.0067343  s  |  0.0757928  s  |   0.6830037  s  |  5.5572856 s  |  47.6993885  s |
|DEQUE RŪŠIAVIMAS     |   0.0003509  s  |   0.0033527 s  |   0.0564063 s  |  0.5610498 s  |   8.2776468 s |
|LIST NUSKAITYMAS     |    0.0046577   s  |  0.065901  s  |  0.5489129  s  |  6.9026929 s  |   52.041484  s |
|LIST RŪŠIAVIMAS      |   0.0001747  s  |   0.0024723 s  |  0.0455286 s  | 0.5807186 s  |  5.0140171  s |

### Programos testavimas 2 Strategija
|                     |       1000      |      10000     |     100000    |   1000000   |   10000000  |
| ------------------- | --------------- | -------------- | ------------- | ----------- | ----------- |
|VECTOR NUSKAITYMAS   |   0.004704  s   |  0.0451099  s  |   0.6529759 s  |  6.8203377 s  |  61.1772038  s |
|VECTOR RŪŠIAVIMAS    |  0.0002079  s   |   0.0017861 s  |  0.0403011 s  | 0.4540384 s  |  3.437869  s |
|DEQUE NUSKAITYMAS    |  0.008084  s   |   0.0565  s  |  0.5918791  s  | 6.7688053  s  |  53.8086819  s |
|DEQUE RŪŠIAVIMAS     |  0.0004801  s   |   0.0033341 s  |  0.048982 s  | 0.6963034 s  |   4.9461535 s |
|LIST NUSKAITYMAS     |   0.0047636  s   |  0.0619921  s  |   0.6905565 s  | 6.5649261  s  |   42.6511148 s |
|LIST RŪŠIAVIMAS      |  0.0001576  s   |  0.0045202  s  | 0.0487407  s  | 0.5845098 s  |   6.6370795 s |

Testavimo išvados:
1. Nors 1 testavimo strategija (nauji sąrašai užpildomi ir originalus ištrinamas tik darbui baigus) dirba greičiau, šis būdas "valgo" labai daug atminties, todėl ant mažai RAM turinčių kompiuterių programa gali neveikti.
2. Iš visų trijų testuotų sąrašų tipų List buvo greičiausias.

Programos naudojimo instrukcijos:
1. Įsitikinkite, kad savo įrenginy turite MinGW. Jeigu jo nėra, parsisiųskite.
2. Parsisiųskite failus iš v1.0 git repozitorijos.
3. Naudojantis Command Prompt nueikite į direktoriją, kurioje saugomi visi failai
4. Parašykite komandą - make
5. Programą paleiskite įvedę komandą - ./run
