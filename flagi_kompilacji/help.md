Przydatne triki apropo kompilacji
=================================

* Jeśli mamy błąd kompilacji, użyć lepszego kompilatora. Najlepiej clanga (clang++), albo nowego g++ (g++-5 / g++-6). Wyświetlają bardziej zrozumiałe komunikaty błędów.
* Flaga -Wall włącza sensowny zestaw ostrzeżeń, warto z nich korzystać. Bonus: ostrzeżenia w clangu są jeszcze lepsze.
* Flaga -fsanitize=address dba (podczas działania programu) o to, byśmy nie grzebali po nie zaalokowanej pamięci. 
	Uruchom buffer_overrun.cpp z i bez tej flagi.
* Flaga -D_GLIBCXX_DEBUG dodaje mnóstwo assertów do STLa skutecznie chroniąc nas przed zrobieniem czegoś głupiego. 
	Uruchom vector.cpp z i bez tej flagi.



