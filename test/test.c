int printf(const char*, ...);
void* malloc(unsigned long);
void free(int*);
void* memcpy(void*, const void*, unsigned);


int main(void) {
   char str[] = "Hello World";
   printf("str: '%s'\n", str);
   return sizeof(str);
}


