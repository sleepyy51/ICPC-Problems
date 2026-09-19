# ICPC-Problems

Repositorio personal de soluciones de programación competitiva, escritas en C++, para competencias del 2025 y práctica de algoritmos.

## Overview del repositorio

Este repositorio reúne una colección de soluciones de problemas de concurso enfocadas en la práctica de programación competitiva. La estructura está organizada por competencia y por archivo de problema, lo que facilita revisar la resolución de cada ejercicio y reutilizar plantillas rápidas para nuevos retos.

El contenido principal vive en la carpeta `2025 Solutions`, donde se encuentran varias competencias distintas con soluciones prácticas, en C++. Además, el repositorio incluye plantillas base para acelerar la escritura de nuevos problemas y mantener un flujo de trabajo consistente.

## Diagrama de organización

```text
ICPC-Problems/
├── LICENSE
├── README.md
├── template.cpp
├── maiky.cpp
├── 2025 Solutions/
│   ├── BasicTemplate.cpp
│   ├── ICPC 2da fecha/
│   │   ├── A.cpp
│   │   ├── anexo.cpp
│   │   ├── i.cpp
│   │   ├── k.cpp
│   │   └── kiko.cpp
│   ├── ICPC 3ra fecha/
│   │   ├── A.cpp
│   │   ├── B.cpp
│   │   ├── G.cpp
│   │   ├── k.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   ├── ICPC Repechaje/
│   │   ├── A.cpp
│   │   ├── C.cpp
│   │   ├── J.cpp
│   │   ├── input.txt
│   │   └── output.txt
│   └── Winter Coding Cup/
│       ├── B.cpp
│       ├── e.cpp
│       ├── f.cpp
│       ├── h.cpp
│       ├── j.cpp
│       ├── k.cpp
│       ├── m.cpp
│       ├── template.cpp
│       ├── input.txt
│       └── output.txt
└── .cph/ metadata (archivos locales de CPH)
```

> La carpeta `.cph` contiene metadatos locales de ejecución y no forma parte del contenido conceptual del repositorio.

## Overview de soluciones y temas

Actualmente el repositorio contiene 19 soluciones de problemas de concurso dentro de `2025 Solutions`, distribuidas así:

- `ICPC 2da fecha`: 5 soluciones
- `ICPC 3ra fecha`: 4 soluciones
- `ICPC Repechaje`: 3 soluciones
- `Winter Coding Cup`: 7 soluciones

En conjunto, estas soluciones cubren un rango de prácticas típicas de programación competitiva, con enfoque en:

- arrays y vectores
- ordenamiento y búsqueda
- strings y parsing
- simulación de casos
- lógica greedy y conteos
- matemáticas elementales y aritmética
- estructuras simples de datos y optimización básica

Aunque no todas las soluciones son de un único tema, la mayor parte del repositorio muestra una práctica muy directa de resolución de problemas con C++ y enfoques clásicos de ICPC.

## Overview de las plantillas

El repositorio incluye varias plantillas para facilitar la implementación rápida de nuevos problemas:

- `template.cpp`: plantilla general para soluciones básicas en C++.
- `maiky.cpp`: versión alternativa con macros y estilo personal de práctica.
- `2025 Solutions/BasicTemplate.cpp`: plantilla base más completa con aliases, macros y utilidades frecuentes.
- `2025 Solutions/Winter Coding Cup/template.cpp`: plantilla específica usada durante este contest.

Estas plantillas son útiles para arrancar con un problema nuevo sin perder tiempo reescribiendo boilerplate.

## Cómo usar este repositorio

1. Navega por la competencia que te interese.
2. Abre la solución de un problema concreto.
3. Revisa la lógica y la estructura del código.
4. Si quieres empezar un nuevo ejercicio, usa una de las plantillas disponibles.
5. Compila con:

```bash
g++ archivo.cpp -O2 -std=c++17 -o salida && ./salida
```

## Objetivo del repositorio

Este proyecto funciona como un cuaderno de práctica para resolver problemas de programación competitiva, organizar soluciones por concurso y mantener un historial de algoritmos y enfoques reutilizables.
