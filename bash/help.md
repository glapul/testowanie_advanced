Pętla w bashu, czyli krótki skrót grupy podstawowej
===================================================

W tym katalogu znajduje się poprawne rozwiązanie brutalne do zadania podzielność, rozwiązanie wzorcowe oraz generator testów.

1. Używając omówionych wcześniej technik, znajdź błąd w rozwiązaniu wzorcowym. Dla przypomnienia:
	* 'diff -q -b -B plik1 plik2' zwraca 0 jeśli pliki są takie same i coś innego w przeciwnym wypadku.
	* system("komenda") uruchamia komendę w powłoce i zwraca jej kod wyjścia.

2. Przyjrzyj się kodowi generatora. Tak się używa nowej biblioteki do liczb losowych. Poza rozkładem jednostajnym na liczbach całkowitych z pewnego przedziału biblioteka standardowa zapewnia też kilka innych, np jednostajny rozkład na liczbach rzeczywistych, rozkłady niejednostajne etc.

3. Jeśli jesteś masochistą, możesz ten kod napisać w bashu. Wyglądałby wtedy mniej więcej tak:
        for i in `seq 1 LICZBA_TESTOW`
        do
            echo $i # Żebyśmy mieli jakieś pojęcie o liczbie testów / prędkości wykonywania
            ./gen > test
            ./wzo < test > ans
            ./brut < test > bans
            if ! diff -q -b -B ans bans
            then
                break
            fi
        done
