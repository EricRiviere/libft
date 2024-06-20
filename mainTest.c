#include <stdio.h>
#include <ctype.h>  // Librería estándar de C
#include <string.h> // Libreria strings
#include "libft.h"  // Librería propia
#include <stdlib.h>
void test_ft_isalpha()
{
    int test_cases[] = {'A', 'z', '1', '!', 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_isalpha:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_isalpha(test_cases[i]);
        int expected = isalpha(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_isdigit()
{
    int test_cases[] = {'0', '9', 'a', '!', 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_isdigit:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_isdigit(test_cases[i]);
        int expected = isdigit(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_isalnum()
{
    int test_cases[] = {'A', 'z', '0', '9', '!', 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_isalnum:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_isalnum(test_cases[i]);
        int expected = isalnum(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_isascii()
{
    int test_cases[] = {'A', 'z', 138, 148, 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_isascii:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_isascii(test_cases[i]);
        int expected = isascii(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_isprint()
{
    int test_cases[] = {32, 'z', 153, '!', 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_isprint:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_isprint(test_cases[i]);
        int expected = isprint(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_toupper()
{
    int test_cases[] = {'A', 'z', '1', 'r', 163};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_toupper:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_toupper(test_cases[i]);
        int expected = toupper(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_tolower()
{
    int test_cases[] = {'A', 'z', 'G', '!', 0};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_tolower:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_tolower(test_cases[i]);
        int expected = tolower(test_cases[i]);
        printf("Input: %c | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_strlen()
{
    char *test_cases[4] = {"hola", "mundo", "hello", "world"};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strlen:\n");
    printf("----------------------------------------------------------\n");
    while (i < 4)
    {
        size_t result = ft_strlen(test_cases[i]);
        size_t expected = strlen(test_cases[i]);
        printf("Input: %s | Expected: %zu, Got: %zu | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_strlcpy()
{
    char test_dest[4][10] = {"hola", "mundo", "hello", "world"};
    char test_dest_orig[4][10] = {"hola", "mundo", "hello", "world"};
    char *test_srcs[4] = {"adios", "cruel", "bye", "cry"};
    size_t	test_size[4] = {2, 5, 3, 4};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strlcpy:\n");
    printf("----------------------------------------------------------\n");
    while (i < 4)
    {
        size_t result = ft_strlcpy(test_dest[i], test_srcs[i], test_size[i]);
        size_t expected = strlcpy(test_dest_orig[i], test_srcs[i], test_size[i]);
        printf("Input: dest = \"%s\", src = \"%s\", size = %zu | Expected: %lu, Got: %lu | %s\n",
               test_dest_orig[i], test_srcs[i], test_size[i], expected, result,
               (result == expected && strcmp(test_dest[i], test_dest_orig[i]) == 0) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_strlcat()
{
    char dest_ft[4][20] = {"hola", "mundo", "hello", "world"};
    char dest_orig[4][20] = {"hola", "mundo", "hello", "world"};
    char *srcs[4] = {"adios", "cruel", "bye", "cry"};
    size_t sizes[4] = {10, 15, 8, 10};
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strlcat:\n");
    printf("----------------------------------------------------------\n");
    while (i < 4)
    {
        size_t result = ft_strlcat(dest_ft[i], srcs[i], sizes[i]);
        size_t expected = strlcat(dest_orig[i], srcs[i], sizes[i]);
        printf("Input: dst = \"%s\", src = \"%s\", size = %zu | Expected: %lu, Got: %lu | %s\n",
               dest_orig[i], srcs[i], sizes[i], expected, result,
               (result == expected && strcmp(dest_ft[i], dest_orig[i]) == 0) ? "PASS" : "FAIL");
        i++;
    }
}

void test_ft_strchr()
{
    char *test_cases[] = {"hello world", "find me!", "another example", ""};
    char chars[] = {'o', '!', 'x', '\0'};
    unsigned long i, j;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strchr:\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        for (j = 0; j < sizeof(chars); j++)
        {
            char *result = ft_strchr(test_cases[i], chars[j]);
            char *expected = strchr(test_cases[i], chars[j]);
            printf("Input: \"%s\", '%c' | Expected: \"%s\", Got: \"%s\" | %s\n",
                   test_cases[i], chars[j], expected, result,
                   (result == expected) ? "PASS" : "FAIL");
        }
    }
}

void test_ft_strrchr()
{
    char *test_cases[] = {"hello world", "find me!", "another example", ""};
    char chars[] = {'o', '!', 'x', '\0'};
    unsigned long i, j;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strrchr:\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        for (j = 0; j < sizeof(chars); j++)
        {
            char *result = ft_strrchr(test_cases[i], chars[j]);
            char *expected = strrchr(test_cases[i], chars[j]);
            printf("Input: \"%s\", '%c' | Expected: \"%s\", Got: \"%s\" | %s\n",
                   test_cases[i], chars[j], expected, result,
                   (result == expected) ? "PASS" : "FAIL");
        }
    }
}

void test_ft_strncmp()
{
    char *str1[] = {"hello", "world", "apples", "banana", "cat"};
    char *str2[] = {"hello", "world", "apples", "apple", "cats"};
    int test_cases[] = {5, 3, 6, 4, 3};
    int n[] = {5, 3, 5, 4, 3};
    unsigned long i;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strncmp:\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        int result = ft_strncmp(str1[i], str2[i], n[i]);
        int expected = strncmp(str1[i], str2[i], n[i]);
        printf("Input: \"%s\" vs \"%s\", n = %d | Expected: %d, Got: %d | %s\n",
               str1[i], str2[i], n[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
    }
}

void test_ft_strnstr()
{
    char *haystack = "Hello world, welcome to the world of programming!";
    char *needles[] = {"world", "welcome", "foo", ""};
    size_t lens[] = {strlen(haystack), 10, strlen(haystack), strlen(haystack)};
    unsigned long i;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_strnstr:\n");
    printf("----------------------------------------------------------\n");
    for (i = 0; i < sizeof(needles) / sizeof(needles[0]); i++)
    {
        char *result = ft_strnstr(haystack, needles[i], lens[i]);
        char *expected = strnstr(haystack, needles[i], lens[i]);
        printf("Input: haystack=\"%s\", needle=\"%s\", len=%zu | Expected: \"%s\", Got: \"%s\" | %s\n",
               haystack, needles[i], lens[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
    }
}

void test_ft_atoi()
{
    char *test_cases[] = {
        "42",
        "   -42",
        "4193 with words",
        "words and 987",
        "-91283472332",
        "0",
        "+123",
        "2147483647",
        "-2147483648",
        "   +0",
        "++123",
        "--123",
        NULL
    };
    int i = 0;

    printf("----------------------------------------------------------\n");
    printf("Testing ft_atoi:\n");
    printf("----------------------------------------------------------\n");
    while (test_cases[i])
    {
        int result = ft_atoi(test_cases[i]);
        int expected = atoi(test_cases[i]);
        printf("Input: \"%s\" | Expected: %d, Got: %d | %s\n",
               test_cases[i], expected, result,
               (result == expected) ? "PASS" : "FAIL");
        i++;
    }
}

void print_array(const char *label, const void *array, size_t len) {
    printf("%s: ", label);
    for (size_t i = 0; i < len; i++) {
        printf("%02x ", ((unsigned char *)array)[i]);
    }
    printf("\n");
}

void test_ft_memset() {
    char ft_buffer[20];
    char orig_buffer[20];
    int test_values[] = {0, 'A', 255};
    size_t test_lengths[] = {0, 5, 10, 15, 20};
   
      printf("----------------------------------------------------------\n");
      printf("Testing ft_memset\n");
      printf("----------------------------------------------------------\n"); 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            memset(orig_buffer, 0, sizeof(orig_buffer));
            ft_memset(ft_buffer, 0, sizeof(ft_buffer));
            
            // Using memset and ft_memset
            memset(orig_buffer, test_values[i], test_lengths[j]);
            ft_memset(ft_buffer, test_values[i], test_lengths[j]);
            // Print the results
       	    printf("Testing ft_memset with value = %d, length = %zu\n", test_values[i], test_lengths[j]);
            print_array("Original", orig_buffer, sizeof(orig_buffer));
            print_array("ft_memset", ft_buffer, sizeof(ft_buffer));
            
            // Compare the results
            if (memcmp(ft_buffer, orig_buffer, sizeof(orig_buffer)) == 0) {
                printf("PASS\n");
            } else {
                printf("FAIL\n");
            }
            printf("\n");
        }
    }
}

void test_ft_memcpy() {
    char ft_dest[20];
    char orig_dest[20];
    const char *srcs[] = {"Hello, world!", "Testing memcpy", "Libft", "A longer string to test memcpy"};
    size_t lengths[] = {5, 13, 6, 20};

     printf("----------------------------------------------------------\n");
     printf("Testing ft_memcpy\n");
     printf("----------------------------------------------------------\n");    
    for (int i = 0; i < 4; i++) {
        memset(ft_dest, 0, sizeof(ft_dest));
        memset(orig_dest, 0, sizeof(orig_dest));
        
        // Using memcpy and ft_memcpy
        memcpy(orig_dest, srcs[i], lengths[i]);
        ft_memcpy(ft_dest, srcs[i], lengths[i]);
       
        // Print the results
        printf("Testing ft_memcpy with src = \"%s\", length = %zu\n", srcs[i], lengths[i]);
        print_array("Original", orig_dest, sizeof(orig_dest));
        print_array("ft_memcpy", ft_dest, sizeof(ft_dest));
        // Compare the results
        if (memcmp(ft_dest, orig_dest, sizeof(orig_dest)) == 0) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
        printf("\n");
    }
}

void test_ft_memchr()
{
    // Definir los casos de prueba
    char str1[] = "Hola mundo";
    char str2[] = "42 is the answer";
    char str3[] = "The quick brown fox";
    char *test_strs[] = {str1, str2, str3};
    char test_chars[] = {'m', '4', 'q'};
    size_t test_lens[] = {9, 5, 10};

     printf("----------------------------------------------------------\n");
    printf("Testing ft_memchr:\n");
     printf("----------------------------------------------------------\n");

    // Iterar sobre los casos de prueba
    for (int i = 0; i < 3; i++)
    {
        char *ft_result = ft_memchr(test_strs[i], test_chars[i], test_lens[i]);
        char *std_result = memchr(test_strs[i], test_chars[i], test_lens[i]);

        // Imprimir los resultados
        printf("Input: \"%s\", char: '%c', len: %zu\n", test_strs[i], test_chars[i], test_lens[i]);
        printf("Expected: %s, Got: %s | %s\n",
               std_result ? std_result : "NULL",
               ft_result ? ft_result : "NULL",
               (ft_result == std_result) ? "PASS" : "FAIL");
    }
}

void test_ft_memcmp()
{
    printf("----------------------------------------------------------\n");
    printf("Testing ft_memcmp:\n");
    printf("----------------------------------------------------------\n");

    // Test cases
    struct {
        char *s1;
        char *s2;
        size_t len;
    } tests[] = {
        {"Hola Mundo", "Hola mundo", 10},
        {"12345", "12345", 5},
        {"abcdef", "abcdeg", 6},
        {"", "", 1},
        {"\200", "\0", 1},
    };

    for (unsigned long i = 0; i < sizeof(tests) / sizeof(tests[0]); i++)
    {
        int ft_result = ft_memcmp(tests[i].s1, tests[i].s2, tests[i].len);
        int std_result = memcmp(tests[i].s1, tests[i].s2, tests[i].len);

        printf("Input: \"%s\", \"%s\", len: %zu\n", tests[i].s1, tests[i].s2, tests[i].len);
        printf("Expected: %d, Got: %d | %s\n",
               std_result, ft_result,
               (ft_result == std_result) ? "PASS" : "FAIL");
    }
}

void test_ft_strdup()
{
    const char *test_cases[] = {
        "Hello World!",
        "This is a test string.",
        "Another example",
        "",
        NULL  // Sentinel to mark end of test cases
    };

     printf("----------------------------------------------------------\n");    
    printf("Testing ft_strdup:\n");
     printf("----------------------------------------------------------\n");
    for (int i = 0; test_cases[i] != NULL; i++)
    {
        const char *input = test_cases[i];
        char *result = ft_strdup(input);
        
        if (result)
        {
            printf("Input: \"%s\" | Result: \"%s\" | %s\n",
                   input, result, (strcmp(input, result) == 0) ? "PASS" : "FAIL");
            free(result); // Free memory allocated by ft_strdup
        }
        else
        {
            printf("Input: \"%s\" | Result: NULL | FAIL (ft_strdup returned NULL)\n", input);
        }
    }
}

void test_ft_calloc()
{
    char *test_cases[] = {
        "Hello",        // Caso 1: String corto
        "Dynamic Mem",  // Caso 2: String mediano
        "Testing calloc", // Caso 3: String largo
        "",             // Caso 4: String vacío
        NULL            // Terminador del array
    };

    size_t sizes[] = {
        6,  // Tamaño para "Hello"
        12, // Tamaño para "Dynamic Mem"
        15, // Tamaño para "Testing calloc"
        1,  // Tamaño para ""
        10  // Tamaño para NULL
    };

    int i = 0;
    printf("----------------------------------------------------------\n");
    printf("Testing ft_calloc:\n");
    printf("----------------------------------------------------------\n");

    while (test_cases[i])
    {
        char *result = ft_calloc(1, sizes[i]);

        // Verificar el contenido de la memoria asignada
        if (result)
        {
            printf("Memory allocated: %s\n", result);
        }
        else
        {
            printf("Memory allocation failed\n");
            continue;
        }

        printf("Input: size = %zu | Expected: %s, Got: %s | %s\n",
               sizes[i], test_cases[i], result ? result : "NULL",
               (result && strcmp(result, test_cases[i]) == 0) ? "PASS" : "FAIL");

        free(result); // Liberar memoria asignada por ft_calloc
        i++;
    }
}

int main()
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_memset(); 
	test_ft_memcpy();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strdup(); 
	test_ft_calloc();
  return 0;
}
