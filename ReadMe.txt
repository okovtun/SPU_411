https://github.com/okovtun/SPU_411.git
https://www.youtube.com/playlist?list=PLeqyOOqxeiIP4usBDeWs6DqgAEn7Yj2aG

TOREAD:
!!! https://learn.microsoft.com/en-us/cpp/build/reference/zc-nrvo?view=msvc-170 !!!
https://legacy.cplusplus.com/doc/tutorial/classes2/

TODO:
1. Создать ветку 'FractionSeparation', и в этой ветке вынести класс 'Fraction'
   в отдельные файлы;
2. Собрать и проветрить статическую библиотеку 'Fraction';
---------------------------------------------------------------
3. От 'master' создать ветку 'MatrixDelegation', и в этой ветке применить
   инициализацию в заголовке и делегирование к Матрице;
4. От ветки 'MatrixDelegation' создать ветку 'MatrixSeparation', 
   в этой ветке собрать и проветрить MatrixLIB;
5.				The rule of 3

TODO:
По желанию пишем класс Matrix. Кому тяжело идет динамическая память, повторяем то, чем занималисб на занятии, читаем конспект и статьи выше.


DONE:
1. 
	Fraction A = 2.75;
	cout << A << endl;

DONE:
0. Выучить теорию !!!!!!!
1. В Solution 'IntroductionToOOP' добавить проект 'Fraction',
   и в нем реализовать класс 'Fraction', описывающий простую дробь.
   В классе должны быть реализованы все необходимые методы и операторы:
	- Арифметические операторы;
	- Инкремент/Декремент;
	- Составные присваивания: +=, -=, *=, /=;
	- Операторы сравнения;
2. Проверочный код должен заработать:
	Fraction A;
	cout << "Введите простую дробь: "; cin >> A;
	cout << A << endl;
3. Реализовать класс 'String', описывающий строку.
	Проверочный код:
	String str1 = "Hello";
	String str2 = "World";
	String str3 = str1 + str2;
	cout << str3 << endl;
4.	str1 += str2;
5. 
	String str;
	cout << "Введите строку: "; cin >> str;
	cout << str << endl;

DONE:
0. Выучить теорию !!!!!!!
1. Написать метод ??? distance(???), который возвращает расстояние до указанной точки;		DONE
2. Написать функцию ??? distance(???), которая возвращает расстояние между двумя точками;