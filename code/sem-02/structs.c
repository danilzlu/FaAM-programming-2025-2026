#include <stdio.h>
#include <stdlib.h>

/*
  объявление структуры Vector с двумя полями:
  float x, float y - координаты вектора в декартовой системе отсчёта
*/
struct Vector {
  float x;
  float y;
};

// печатает вектор в привычном математическом формате: (x, y)
void print_vector(struct Vector v) {
  printf("(%f, %f)", v.x, v.y);
}

// вычисляет и возвращает сумму векторов
struct Vector add(struct Vector v, struct Vector w) { // struct Vector v, struct Vector w - векторы, которые требуется сложить
  struct Vector result = {v.x + w.x, v.y + w.y};
  return result;
}


int main() {
  struct Vector v = {2.0, 3.0}; // объявление и инициализация экземпляра структуры
  struct Vector w = {6.4, 8.2}; // объявление и инициализация экземпляра структуры
  
  print_vector(v);              // печатаем вектор v
  printf("\n");                 // перевод каретки на новую строку
  print_vector(w);              // печатаем вектор w
  
  struct Vector u = add(v, w);  // объявление и инициализация экземпляра структуры (u = v + w)
  printf("\n");                 // перевод каретки на новую строку
  print_vector(u);              // печатаем вектор u
}