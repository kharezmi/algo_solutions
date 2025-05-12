#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include "queue_struct.h"


int main(void) {

  FILE * file = fopen("courses.txt", "r");

  course_t course;

  stack_t courses_S;
  initializeS( & courses_S);

  queue_t courses_Q;
  initializeQ( & courses_Q);

  while (fscanf(file, "%d %d", & course.courseCode, & course.credit) == 2) {

    push( & courses_S, course);

    int c = fgetc(file);
    if (c == '\n') {
      insert( & courses_Q, courses_S);

      while (!isEmptyS( & courses_S)) {
        SType removed = pop( & courses_S);

      }

    }
  }

  for (int i = 0; i < courses_Q.counter; i++) {
    for (int j = courses_Q.data[i].top; j >= 0; j--)

      printf("%d %d --> ", courses_Q.data[i].data[j].courseCode, courses_Q.data[i].data[j].credit);

    printf("End\n");
  }

}