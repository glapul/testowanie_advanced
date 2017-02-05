Gprof - instrukcja użycia
=========================

1. Skompiluj program z flagą -pg oraz -g
		g++ example.cpp -o example -pg -g
2. Uruchom program na odpowiednim teście
		python example_input_gen.py [DUŻA_LICZBA] | ./example > out
3. Wygeneruj raport przy pomocy komendy
		gprof example gmon.out > analysis.txt
4. Otwórz plik analysis.txt i spróbuj się z niego czegoś dowiedzieć :)

Problemy
--------
Gprof jest dość "głupi", i często kłamie.  Polecam przeczytać:
http://yosefk.com/blog/how-profilers-lie-the-cases-of-gprof-and-kcachegrind.html
Poza tym, kiepsko sobie radzi z bibliotekami współdzielonymi (dlatego my_strlen, a nie ten z libc)
