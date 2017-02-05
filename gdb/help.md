GDB
===

Jak skompilować?
----------------

	g++ -ggdb3 [reszta jak zwykle, lepiej bez O2, bo optymalizacje zmieniają kod]


Jak uruchomić?
--------------

	gdb ./program

Krótka ściąga z komendami
-------------------------

* (r)un [<input] [>output] - uruchamia program
* (b)reak [nr linii / nazwa funkcji] [warunek logiczny] - ustawia breakpoint. Przykłady:
		break 13 if n > 1000
		break main
		break mojafunkcja if arg1 == true
* (c)ontinue - wznawia wywołanie programu po breakpoincie
* (n)ext - wykonuje następną linię jeśli program jest zatrzymany
* (s)tep - "wchodzi" do środka funkcji.
* (u)p / (d)own - porusza się po stosie wywołań funkcji
* (bt) jak backtrace - wyświetla stos wywołań funkcji
* (p)rint - wypisuje zmienną lub wynik wyrażenia, np
		print n
		print licz(12)
* call [funkcja] - wywołuje funkcję. Możemy dzięki temu napisać sobie w kodzie funkcję która wypisuje nam stan, i potem w GDB ją wywoływać.
* display [cos] - jak print, ale będzie sie wywolywać po każdej komendzie. 
* (l)ist - wypisz kod otaczający obecnie debugowaną linię
* info locals - wypisz zmienne lokalne dla obecnej funkcji, z wartościami


