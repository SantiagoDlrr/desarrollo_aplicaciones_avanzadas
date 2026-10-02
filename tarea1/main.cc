#include <iostream>
#include <string>

#include <stack>
#include <unordered_map>
#include <queue>

using namespace std;

// Clase para probar operaciones básicas
class Employee{
    public:

        string name;
        int days;

        Employee(string name, int days){
            this->name = name;
            this->days = days;
        }
};


void stack_operations(){

    stack<int> s;

    // Stack vacío
    if(s.empty()){
        cout << "El stack esta vacio" << endl;
    }

    // Hacer un stack de 10 números
    for(int i=0; i < 10 ; i++){
        s.push(i);
    }

    // Revisar con size el tamaño del stack
    cout << "Tamaño del stack: " << s.size() << endl;

    // Imprimir y borar el stack
    for(int i=0; i < 10 ; i++){
        cout << "Stack top: " << s.top() << endl;
        s.pop();
    }

    // Push 3 números más
    for(int i=10; i < 13 ; i++){
        s.push(i);
    }

    // Regresar el último elemento (12)
    cout << "Stack top después de agregar 3 elementos: " << s.top() << endl;



    stack<Employee> employee_stack;

    // Hacer un stack de empleados usando emplace
    employee_stack.emplace("Benjamin", 10);
    employee_stack.emplace("Emiliano", 20);
    employee_stack.emplace("Santiago", 30);

    // Imprimir el tiempo de cada empleado
    while(!employee_stack.empty()){
        cout << employee_stack.top().name << ": "
             << employee_stack.top().days << " dias" << endl;
        employee_stack.pop();
    }
}


void queue_operations(){

    queue<int> q;

    // Revisar que la fila esta vacía
    if(q.empty()){
        cout << "La fila esta vacia" << endl;
    }

    // Hacer una fila de 10 números .push
    for(int i=0; i < 10 ; i++){
        q.push(i);
    }

    // Revisar con size el tamaño de la fila
    cout << "Tamaño de la fila: " << q.size() << endl;

    // Push 3 números más
    for(int i=10; i < 13 ; i++){
        q.push(i);
    }

    // Primer y último elemento
    cout << "Primero: " << q.front() << endl;
    cout << "Ultimo: " << q.back() << endl;

    // Pop eliminar 5 elementos
    for(int i=0; i < 5 ; i++){
        q.pop();
    }
    cout << "Primero despues de pop: " << q.front() << endl;


    queue<Employee> employee_queue;

    // Hacer una fila de empleados usando emplace
    employee_queue.emplace("Benjamin", 10);
    employee_queue.emplace("Emiliano", 20);
    employee_queue.emplace("Santiago", 30);

    // Imprimir el tiempo de cada empleado
    while(!employee_queue.empty()){
        cout << employee_queue.front().name << ": "
             << employee_queue.front().days << " dias" << endl;
        employee_queue.pop();
    }
}


void unordered_map_operations(){

    unordered_map<int,string> um;

    // Insertar 3 employees
    um.insert({1, "Benjamin"});
    um.insert({2, "Emiliano"});
    um.insert({3, "Santiago"});

    // Buscar a x employee
    auto it = um.find(2);
    if(it != um.end()){
        cout << "Encontrado: " << it->first << ": " << it->second << endl;
    } else {
        cout << "No se encontro el employee" << endl;
    }

    // Borrar a Benjamin
    um.erase(1);

    // Imprimir el map
    for (auto i : um)
        cout << i.first << ": " << i.second
        << endl;

}


int main() {

    stack_operations();
    queue_operations();
    unordered_map_operations();

    return 0;
}