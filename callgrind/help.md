Callgrind - instrukcja użycia
=========================

0. Skompiluj z -g
1. Wygeneruj test
		python example_input_gen.py [DUŻA_LICZBA] > test
2. Wygeneruj raport przy pomocy komendy
		valgrind --tool=callgrind ./example < test
3. Odpal kcachegrind w tym samym katalogu. I popatrz się w call graphy.
	 Jeśli kcachegrind nie jest dostępny na Twojej maszynie, możesz zamiast tego użyć ms_print

Problemy
--------
Callgrind jest mądrzejszy od gprofa, ale wciąż, zdarza mu się kłamać. Warto umieć korzystać z obu narzędzi.
