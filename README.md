# ft\_printf

ft\_printf es un proyecto de 42 que consiste en recrear la famosa función `printf` de la biblioteca estándar de C. El objetivo es entender el funcionamiento interno de esta función y mejorar las habilidades de manejo de argumentos variables y formateo de cadenas.

## Tabla de Contenidos

- [Instalación](#instalación)
- [Uso](#uso)
- [Especificaciones del Proyecto](#especificaciones-del-proyecto)
- [Tests](#tests)
- [Créditos](#créditos)

## Instalación

Clona este repositorio en tu directorio local:

```bash
$ git clone https://github.com/erico-ke/Printf.git
$ cd ft_printf
```

Compila la biblioteca con:

```bash
$ make
```

Esto generará un archivo `libftprintf.a`, que es la biblioteca compilada.

## Uso

Para usar `ft_printf` en tu proyecto, incluye el archivo de cabecera `ft_printf.h` y enlaza el archivo `libftprintf.a` al compilar tu programa. Por ejemplo:

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hola, mundo!\n");
    ft_printf("Entero: %d\n", 42);
    return 0;
}
```

Compila tu programa junto con la biblioteca:

```bash
$ gcc -Wall -Wextra -Werror -L. -lftprintf tu_programa.c -o tu_programa
```

## Especificaciones del Proyecto

ft\_printf debe manejar las siguientes conversiones:

- `%c` : Carácter
- `%s` : Cadena de caracteres
- `%p` : Puntero en formato hexadecimal
- `%d` : Entero con signo (base 10)
- `%i` : Entero con signo (base 10)
- `%u` : Entero sin signo (base 10)
- `%x` : Entero en hexadecimal (minúsculas)
- `%X` : Entero en hexadecimal (mayúsculas)
- `%%` : Signo de porcentaje

Debe cumplir con las siguientes restricciones:

- No se permite usar `printf` ni funciones relacionadas de la biblioteca estándar.
- La salida debe gestionarse exclusivamente con `write`.

### Normas de 42

Este proyecto debe cumplir con las siguientes normas:

- Seguir la norma de codificación de 42 (Norminette).
- El código debe compilar sin errores ni warnings con las flags: `-Wall -Wextra -Werror`.
- No se permite el uso de funciones externas, excepto las especificadas en el PDF del proyecto.
- Se debe gestionar correctamente la memoria, evitando fugas de memoria.

## Tests

Puedes usar herramientas externas para verificar la funcionalidad de tu implementación de `ft_printf`. Algunas recomendadas son:

- [Printf Tester](https://github.com/Tripouille/printfTester)
- [Printf Unit Test](https://github.com/Mazoise/42TESTERS-PRINTF)

Ejecuta estos tests para asegurarte de que tu implementación cumple con los requisitos.

## Créditos

Proyecto desarrollado por Elías Rico Kergaravat. Este es un proyecto obligatorio de 42 Málaga. Si tienes dudas o sugerencias, no dudes en contactarme.
