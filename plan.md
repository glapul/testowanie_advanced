Warsztaty z testowania - grupa zaawansowana
===========================================

Generalna strategia testowania
------------------------------
* Brut + generator + pętla w bashu
* Dużo małych testów, bo szybciej się testują i mają większą szansę na zostanie przypadkiem szczególnym, ale nie "za małych"
* Trochę makstestów, wraz ze sprawdzeniem limitu pamięci
* Idealnie, generator powinien móc wylosować każdy test. Jeśli tak nie jest, to warto się 2 razy zastanowić, co tracimy przez tą szczególną postać testów
* Generator z łatwo zmienialnymi parametrami, żeby móc binarysearchować najmniejszy test, na którym nasz program źle działa.

Bash
----
* pętla w bashu.

Losowość
--------
* rand() potrzebuje seed'a
* srand(time(NULL)) - zmienia się co sekundę, czyli za rzadko
* srand(random_device()()) - lepiej
* random_device()() może się wyczerpać
* seedowanie numerem testu :)

Kompilatory
-----------

* *g++-5/g++-6* albo *clang++* - ładniejsze komunikaty błędów
    - przykład z max(int, long long)

* Wall - jakieś przykłady
* adress sanitizer - przykład z tablicą
* D_GLIBCXX_DEBUG  - przykład z vectorem
* O2 - do makstestów, zmniejsza czas i pamięć

GDB - Gnu DeBugger
------------------

* Znajdowanie segfaultów i innych błędów wykonania - przykład
* Jak skompilować? -g , bez -O2 (-ggdb3)
* backtrace (bt) / up / down / list / print
* Breakpointy (warunkowe) / next / show / continue / print

Czas i pamięć
-------------

* time/oitimetool - co znaczą te 3 czasy w time
* ulimit -v
* ulimit -s unlimited - stos
* Jak sprawdzić pamięć ?

Valgrind / Callgrind
--------

* do wycieków pamięci / rysowania call graphów
* np, kiedy robimy coś złego z wskaźnikami, iteratorami

Gprof
-----

* kiedy nasz program działa wolno, a myślimy że powinien działać szybko.
* ma sens tylko jeśli mamy kod podzielony na funkcje
* źle działa z funkcjami bibliotecznymi
