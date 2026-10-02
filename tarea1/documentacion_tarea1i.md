# Documentación Tarea 1

## Archivos

- `main.cc`: implementación de las estructuras y ejemplos de sus operaciones.
- `test.cc`: 3 tests por cada estructura para verificar sus operaciones.

## Repo
https://github.com/SantiagoDlrr/desarrollo_aplicaciones_avanzadas

## Testing

Para el testing decidí aprender gtest, el framework de pruebas de Google. Permite hacer pruebas unitarias para verificar el comportamiento de funciones, clases, lógica, etc.

Me parece un buen reto para el proyecto aprender a hacer tests completos que permitan aislar partes del código y me ayuden a prevenir o detectar fallas de manera más sencilla.

## Uso de AI

Para esta tarea no utilicé AI. Todos los recursos para definiciones y ejemplos de código están listados en la sección de materiales.

## Materiales utilizados

**Estructuras de datos**
- https://www.youtube.com/watch?v=WEwD-ZuTc1w&t=129s
- https://www.youtube.com/watch?v=juqhvOyMoeI
- https://www.youtube.com/watch?v=r01r8mEs9I4

**Set up del environment y framework de testing (gtest)**
- https://medium.com/@divyendu.narayan/visual-studio-code-setup-in-mac-os-to-build-and-debug-c-cmake-projects-45a78b29e49
- https://chamikaramendis.medium.com/a-comprehensive-guide-to-setting-up-google-test-gtest-and-google-mock-gmock-for-unit-testing-in-fc033e3b532d
- https://google.github.io/googletest/primer.html

## Librerías

Decidí utilizar las implementaciones de stack, queue y unordered_map de la Standard Template Library (STL), ya que son versiones optimizadas para el uso eficiente de los datos. Considero que es un beneficio usar la librería en vez de una implementación propia, para invertir más tiempo en otras partes del compilador.

## Stack

### ¿Qué es?

Es una estructura de datos implementada como una lista de objetos. Es un "container adaptor" porque por debajo usa otro contenedor de objetos, que puede ser de diferentes tipos.

El último elemento en entrar es el primero en salir (LIFO). Es como una pila de platos: el plato de la cima es el primero en ser lavado.

### Métodos (STL)

| Método | Descripción |
|---|---|
| `.top()` | Devuelve el último elemento de la pila |
| `.push(arg)` | Agrega un elemento a la pila |
| `.pop()` | Elimina el último elemento de la pila |
| `.size()` | Devuelve el tamaño del stack |
| `.empty()` | Revisa si el stack está vacío |
| `.swap(other)` | Intercambia los datos entre dos stacks |
| `.emplace()` | Pasa los argumentos del objeto directamente al stack |

## Queue

### ¿Qué es?

Es una estructura de datos implementada como una fila de objetos.

El primer elemento en entrar es el primero en salir (FIFO). Es como una fila literal: el primero en llegar es el primero en salir.

### Métodos (STL)

| Método | Descripción |
|---|---|
| `.push(arg)` | Agrega un elemento al final de la fila (enqueue) |
| `.pop()` | Elimina el primer elemento de la fila (dequeue). No regresa el elemento |
| `.front()` | Devuelve el primer elemento |
| `.back()` | Devuelve el último elemento |
| `.empty()` | Revisa si la fila está vacía |
| `.swap(other)` | Intercambia los datos entre dos queues |
| `.emplace()` | Pasa los argumentos del objeto directamente a la fila |

## Hash (unordered_map)

### ¿Qué es?

Es un contenedor asociativo que guarda pares de llave-valor con llaves únicas. Usa hashing para tener lecturas rápidas.

### Métodos (STL)

| Método | Descripción |
|---|---|
| `.find(key)` | Busca una llave y regresa un iterador a ella |
| `.end()` | Iterador al final. Si `find` regresa esto, la llave no existe |
| `.insert()` | Agrega un par llave-valor |
| `.erase()` | Elimina un elemento |
| `.clear()` | Elimina todos los elementos |