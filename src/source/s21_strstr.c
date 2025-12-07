#include "../s21_string.h"
// Находит первое вхождение всей строки needle (без '\0') в строке haystack.
char *s21_strstr(const char *haystack, const char *needle) {
  char *match = s21_NULL;
  if (haystack[0] != '\0' && needle[0] != '\0') {
    unsigned point_match = 0U, sign_match = 0U;
    for (unsigned sign = 0U; haystack[sign] != '\0' && match == s21_NULL;
         ++sign) {
      if ((haystack[sign]) == needle[sign_match]) {
        point_match = sign;
        while (haystack[sign] == needle[sign_match] && haystack[sign] != '\0' &&
               needle[sign_match] != '\0') {
          sign_match++;
          sign++;
        }
        if (needle[sign_match] == '\0') match = (char *)&haystack[point_match];
        sign_match = 0;
        continue;
      }
    }
  } else if (needle[0] == '\0')
    match = (char *)haystack;
  return match;
}
