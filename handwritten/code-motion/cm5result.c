// irreducible loops

void motion_result5(int *data) {
  int i = 0;
  int j = data[0];
  if (data[1]) {
    j = 21*j;
    goto here;
  }
  j = data[3] + j;
  j = 21*j;
  do {
    i++;
  here:
    data[i] = j + i;
  } while (i < data[2]);
}

