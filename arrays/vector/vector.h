/*Nhan Nguyen
  July 13th 2023
  DSA
*/
#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>

/*vec_t - Vector type 
  
  Dynamically adjusting array.
*/
typedef struct vector *vec_t;

/*initialize_vector - Creates vector

  Allocates the memory required for @vector.
*/
vec_t initialize_vector();

/*size - Checks number of elements in vector.
  @vector: Vector to have its size returned.

  Return: -1 if @vector is NULL. Otherwise size is returned.
*/
int size(vec_t vector);

/*capacity - Checks the capacity of the vector.
  @vector: Vector to have its capacity returned.

  Return: -1 if @vector is NULL. Otherwise capcity is returned.
*/
int capacity(vec_t vector);

/*is_empty - Checks if vector is empty.
  @vector: Vector to check if empty.

  Return: false if @vector is NULL or empty. Otherwise true.
*/
bool is_empty(vec_t vector);

/*at - Returns item at given index in vector.
  @index: Index of array of item desired.
  @vector: Vector to be accessed.

  Return: NULL if @index is out of bounds or @vector is not valid.
  Otherwise a void pointer to the data in @vector.
*/
void *at(int index, vec_t vector);

/*push - Pushes item into vector.
  @data: Data to be pushed into vector.
  @vector: Vector to have data pushed into.

  Return: -1 if @data or @vector is NULL or error occurs during blowup.
  Otherwise return 0 if successful.
*/
int push(void *data, vec_t vector);

/*insert - Inserts item at a specific index.
  @data: Data to be inserted into vector.
  @index: Index to place data in vector.
  @vector: Vector to have data inserted into.

  Return: -1 if @data or @vecetor is NULL and/or @index is invalid.
  Otherwise return 0 if successful.
*/
int insert(void *data, int index, vec_t vector);

/*prepend - Inserts item at front of vector.
  @data: Data to be prepended to vector.
  @vector: Vector to have data prepended into.

  Return: -1 if @data or @vector NULL. Otherwise 0 if successful.
*/
int prepend(void *data, vec_t vector);

#endif VECTOR_H