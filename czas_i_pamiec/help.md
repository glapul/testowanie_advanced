Czas i pamięć
=============

1. Czas i pamięć mierzymy w ten sposób:
		/usr/bin/time -v ./program [<input] [>output]

2. Aby zdjąć domyślny limit na stos, użyj
		ulimit -s unlimited

3. Aby ustawić limit na pamięć, użyj
		ulimit -v [LICZBA_KB]
	 Uwaga, ten limit obowiązuje dla całego terminala i nie da się go zwiększyć. Jeśli chcesz się go pozbyć, wyłącz ten terminal i włącz następny.
