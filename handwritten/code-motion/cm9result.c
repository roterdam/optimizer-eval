// loop rotation
// same test as 8, but building the loop out of gotos.

void motion_result9(int *data) {
  int i = 0;
  int j = data[0];
  if (i >= data[2])
    return;
  j = j*21;
 loop:
  data[i] = j + i;
  i++;
  if (i < data[2])
    goto loop;
}

