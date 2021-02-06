# Įrėmintas pasisveikinimas

```shell
********************
*                  *
* Sveikas, Pasauli *
*                  *
********************
```

Programa skirta pasisveikinimo, apvilkto į rėmelį, išvedimui į konsolę.

## Veikimo principas

Paleidus programą, komandinėje eilutėje vartotojo yra prašoma suvesti:

* Vardą: *Iveskite savo varda*
 
 (sutikus pakeisti ilgi " Ar norite pakeisti remelio dydi (y/n) y"
* Nauja ilgi: *iveskite nauja ilgi (jeigu nenoryte iveskite '0')*


Suvedus šiuos duomenis programa konsolėje atspausdina pasisveikinimą, įvilktą į rėmelį, sudarytą iš žvagždučių `*`:

```shell
Iveskite savo varda VadimasXD
**********************
*                    *
* Sveikas, VadimasXD *
*                    *
**********************
```

Jei vartotojas įveda moterišką vardą, pvz *Jurga*, tai pasisveikinimas *Sveikas* yra automatiškai pakeičiamas žodžiu *Sveika*:

```shell
Iveskite savo varda Jurga!

************************
*                      *
*    Sveika, Jurga!    *
*                      *
************************
```

Jei vartotojas įveda per mažą ploti:

```shell
Ar norite pakeisti remelio dydi (y/n)
y
iveskite nauja ilgi (jeigu nenoryte iveskite '0') 
2
ilgis per mazas arba ivestis netinkama 
iveskite nauja ilgi (jeigu nenoryte iveskite '0')
_
```

Norint isvalyti istrinti executable
```shell
    make clean arba rm main :)
```


## Programos diegimas ir paleidimas

* Atsisiųskite programos versiją iš [Releases](https://github.com/VadimasKo/OP-1uzd/releases) aplanko ir ją išsiarchyvuokite,
* Komandinėje eilutėje įvykdykite sekančius veiksmus:

```shell
cd nuoroda_į_programos_aplanką
make compile-run arba g++ 'main.cpp' -o 'main'  && './main'
make run arba ./main
```

### Changelog

* [v1.0](https://github.com/VadimasKo/OP-1uzd/releases/tag/v1.0) Leidžia vartotojui įvesti rėmelio dydį.
* [v0.2](https://github.com/VadimasKo/OP-1uzd/releases/tag/v0.2) Pakeičia žodį *Sveikas* į *Sveika*, atsižvelgiant į vartotojo lytį.
* [v0.1](https://github.com/VadimasKo/OP-1uzd/releases/tag/v0.1) Atspausdina pasisveikinimą su rėmeliu.
