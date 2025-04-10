# Реализация алгоритма BFS (поиска в ширину)

## Описание

Эта программа на C++ реализует алгоритм поиска в ширину (BFS) для обхода и анализа графов. Программа вычисляет кратчайшие расстояния от заданной стартовой вершины до всех остальных вершин в невзвешенном неориентированном графе.

## Возможности

- Чтение структуры графа из файла
- Реализация классического алгоритма BFS
- Вычисление кратчайших путей в невзвешенных графах
- Поддержка неориентированных графов
- Вывод расстояний от стартовой вершины до всех остальных

## Требования

- Компилятор C++ (g++, clang++ и др.)
- Стандартная библиотека C++

## Использование

### Компиляция

g++ bfs.cpp -o bfs

### Запуск программы

./bfs

### Формат входного файла (`graph.txt`)

Программа ожидает файл `graph.txt` следующего формата:

<количество_вершин> <количество_ребер>
<вершина1> <вершина2>  # ребро 1
<вершина3> <вершина4>  # ребро 2
...
<стартовая_вершина>

Пример:
5 6
0 1
0 2
1 3
2 3
2 4
3 4
0

### Вывод программы

Программа выводит расстояние от стартовой вершины до каждой вершины графа (по одной на строке), где -1 означает недостижимую вершину.

## Детали реализации

### Основные функции

- `bfs()`: Основная реализация алгоритма BFS
- `main()`: Обработка ввода/вывода и вывод результатов

### Характеристики алгоритма

- Временная сложность: O(V + E), где V - вершины, E - ребра
- Пространственная сложность: O(V)
- Использует представление графа в виде списка смежности

## Пример работы

Для приведенного примера ввода программа выведет:

0  # расстояние до вершины 0
1  # расстояние до вершины 1
1  # расстояние до вершины 2
2  # расстояние до вершины 3
2  # расстояние до вершины 4


## Ограничения

- Работает только с неориентированными графами
- Нет проверки корректности входного файла
- Фиксированное имя входного файла (`graph.txt`)
- Не поддерживает взвешенные графы

## Возможные улучшения

1. Добавить поддержку ориентированных графов
2. Реализовать проверку корректности входных данных
3. Добавить возможность указания имени входного файла через аргументы командной строки
4. Визуализировать граф и результаты обхода
