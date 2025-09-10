/*
  Эта программа вычисляет оценку за курс "Программирование" по формулам, указанным в учебном плане.
  Issues: 1. Не реализовано блокирование оценок
          2. Не реализовано округление оценко за ДЗ до двух знаков после запятой
*/

#include <stdio.h>
#include <math.h>

// Считает оценку за ДЗ
float hw_mark(int nSolvedTasks, int nTasks) { // nSolvedTasks - число решённых задач; nTasks - общее число задач
  float percentage = (float) nSolvedTasks / nTasks;
  float mark = 0.0;

  // то, какая формула применяется, зависит от процента решённых задач
  if (percentage <= 0.6) {
    mark = percentage * percentage / 9;
  } else if (percentage <= 0.8) {
    mark = 20 * (percentage - 0.6) + 4;
  } else {
    mark = 100 / sqrt(5) * sqrt(percentage - 0.8) + 8;
  }
  
  return mark;
}

// округляет float по правилам указанным в учебном плане
int hse_round(float mark) {
  int result = 0;
  if (mark < 4.0) {
    result = (int) mark;
  } else {
    result = round(mark);
  }
}

// вычисляет итоговую оценку
int result_mark(float hwMark, int lab1mark, int lab2mark, int examMark) {
  float mark = 0.15 * hwMark + 0.3 * lab1mark + 0.3 * lab2mark + 0.25 * examMark;
  return hse_round(mark);
}

int main()
{
    int nHwSolved, nHw, lab1, lab2, examMark;
    scanf("%d %d %d %d %d", &nHwSolved, &nHw, &lab1, &lab2, &examMark);

    float hwMark = hw_mark(nHwSolved, nHw);
    int resultMark = result_mark(hwMark, lab1, lab2, examMark);
    
    printf("Your mark is: %d", resultMark);
}