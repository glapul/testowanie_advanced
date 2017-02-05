Pętla w bashu, czyli krótki skrót grupy podstawowej
===================================================

W tym katalogu znajduje się poprawne rozwiązanie brutalne do zadania podzielność, rozwiązanie wzorcowe oraz generator testów.

1. Używając omówionych wcześniej technik, znajdź błąd w rozwiązaniu wzorcowym. Dla przypomnienia, pętlę w bashu piszemy tak:
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

2. Przyjrzyj się kodowi generatora. Tak się używa nowej biblioteki do liczb losowych. Poza rozkładem jednostajnym na liczbach całkowitych z pewnego przedziału biblioteka standardowa zapewnia też kilka innych, np jednostajny rozkład na liczbach rzeczywistych, rozkłady niejednostajne etc.
