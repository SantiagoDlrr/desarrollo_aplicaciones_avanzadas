#include <gtest/gtest.h>
#include <stack>
#include <unordered_map>
#include <queue>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

TEST(StackTest, BasicOperations) {

  stack<int> s;

  // Vec de elementos, agregar a stack y debe coincidir el tamaño del vector
  vector<int> v = {1, 2, 3, 4, 5};
  for(int x : v){
    s.push(x);
  }
  EXPECT_EQ(s.size(), v.size());

  // El último en entrar de ese vector debe ser el primero en salir
  for(int i = v.size() - 1; i >= 0; i--){
    EXPECT_EQ(s.top(), v[i]);
    s.pop();
  }

  // Verificar que el stack quedó vacío
  EXPECT_TRUE(s.empty());

}


TEST(QueueTest, BasicOperations) {

  queue<int> q;

  // Vec de elementos, agregar a la fila y debe coincidir el tamaño del vector
  vector<int> v = {1, 2, 3, 4, 5};
  for(int x : v){
    q.push(x);
  }
  EXPECT_EQ(q.size(), v.size());

  // Expect que el orden de salida sea el orden del vector 
  for(int x : v){
    EXPECT_EQ(q.front(), x);
    q.pop();
  }

  // Verificar que la fila quedó vacía
  EXPECT_TRUE(q.empty());

}


TEST(UnorderedMap, BasicOperations) {

  unordered_map<int, string> um;
  um[1] = "Benjamin";
  um[2] = "Santiago";
  um[3] = "Emiliano";

  // Crear un UM y verificar que la llave dada sea el valor
  EXPECT_EQ(um.at(1), "Benjamin");
  EXPECT_EQ(um.at(2), "Santiago");
  EXPECT_EQ(um.at(3), "Emiliano");

  // Verificar que el valor dado sea la llave
  for(auto& p : um){
    if(p.second == "Santiago"){
      EXPECT_EQ(p.first, 2);
    }
  }

  // Verificar out of range si se intenta acceder a un elemento que no existe
  EXPECT_THROW(um.at(77), out_of_range);

}