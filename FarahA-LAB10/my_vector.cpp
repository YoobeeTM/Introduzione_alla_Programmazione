#include <iostream>
#include <string>
#include <algorithm> // per std::min
#include "my_vector.h"

// 11. create_my_vector
my_vector create_my_vector(unsigned int capacity) {
    if (capacity == 0) {
        throw std::string("create_my_vector: capacity fornita non positiva");
    }
    my_vector v;
    v.size = 0;
    v.capacity = capacity;
    v.store = new double[capacity];
    return v;
}

// 12. print_my_vector_status
void print_my_vector_status(const my_vector &v) {
    std::cout << "**********************" << std::endl;
    std::cout << "my_vector size = " << v.size << std::endl;
    std::cout << "my_vector capacity = " << v.capacity << std::endl;
    std::cout << "my_vector store = { ";
    if (v.size == 0) {
        // empty
    } else {
        for (unsigned int i = 0; i < v.size; ++i) {
            std::cout << v.store[i];
            if (i + 1 < v.size) std::cout << ", ";
        }
    }
    std::cout << " }" << std::endl;
    std::cout << "**********************" << std::endl;
}

// 13. push_back_my_vector_element
void push_back_my_vector_element(my_vector &v, double x) {
    if (v.size == v.capacity) {
        throw std::string("push_back_my_vector_element: Impossibile inserire elemento in Array pieno");
    }
    // assume v is initialized consistently
    v.store[v.size] = x;
    v.size += 1;
}

// 14. pop_back_my_vector_element
double pop_back_my_vector_element(my_vector &v) {
    if (v.size == 0) {
        throw std::string("pop_back_my_vector_element: Impossibile estrarre elemento da Array vuoto");
    }
    double res = v.store[v.size - 1];
    v.size -= 1;
    return res;
}

// 15. set_my_vector_element
void set_my_vector_element(my_vector &v, double value, unsigned int index) {
    if (v.size == 0) {
        throw std::string("set_my_vector_element: Impossibile impostare un elemento di un My_Vector vuoto");
    }
    if (index >= v.size) {
        throw std::string("set_my_vector_element: Indice fornito non ammissibile");
    }
    v.store[index] = value;
}

// 16. get_my_vector_element
double get_my_vector_element(const my_vector &v, unsigned int index) {
    if (v.size == 0) {
        throw std::string("get_my_vector_element: Impossibile leggere un elemento da un My_Vector vuoto");
    }
    if (index >= v.size) {
        throw std::string("get_my_vector_element: Indice fornito non ammissibile");
    }
    return v.store[index];
}

// 17. resize_my_vector
void resize_my_vector(my_vector &v, unsigned int new_capacity) {
    if (new_capacity == 0) {
        throw std::string("resize_my_vector: new_capacity fornita non positiva");
    }
    // allocate new block
    double* new_store = new double[new_capacity];
    // copy existing elements (up to new_capacity)
    if (v.size > 0 && v.store != nullptr) {
        unsigned int to_copy = std::min(v.size, new_capacity);
        for (unsigned int i = 0; i < to_copy; ++i) {
            new_store[i] = v.store[i];
        }
        // adjust size if truncated
        v.size = to_copy;
    } else {
        // v.size == 0 -> nothing to copy
        v.size = 0;
    }
    // free old block if it existed
    if (v.capacity > 0 && v.store != nullptr) {
        delete[] v.store;
    }
    v.store = new_store;
    v.capacity = new_capacity;
}

// 18. safe_push_back_my_vector_element
void safe_push_back_my_vector_element(my_vector &v, double x) {
    try {
        push_back_my_vector_element(v, x);
    } catch (std::string &e) {
        // only two cases expected: capacity == 0 or full
        if (v.capacity == 0) {
            resize_my_vector(v, 1);
        } else {
            // raddoppia la capacità
            unsigned int new_cap = v.capacity * 2;
            // attenzione overflow teorico, ma per esercizio assumeremo cap ragionevoli
            resize_my_vector(v, new_cap);
        }
        // ora proviamo di nuovo (se qualcosa va male, rilanciamo l'eccezione)
        push_back_my_vector_element(v, x);
    }
}

// 19. destroy_my_vector
void destroy_my_vector(my_vector &v) {
    if (v.capacity > 0 && v.store != nullptr) {
        delete[] v.store;
        v.store = nullptr;
        v.size = 0;
        v.capacity = 0;
    }
    // se capacity == 0 non fa nulla
}

// 20. looks_consistent_my_vector
bool looks_consistent_my_vector(const my_vector &v) {
    if (v.store == nullptr) return false;
    if (v.capacity == 0) return false;
    // v.size è unsigned così non può essere negativa; controlliamo solo che non ecceda capacity
    if (v.size > v.capacity) return false;
    return true;
}

// 21. sort_my_vector (SelectionSort)
void sort_my_vector(my_vector &v) {
    // ordiniamo solo i primi v.size elementi
    for (unsigned int i = 0; i < v.size; ++i) {
        unsigned int min_idx = i;
        for (unsigned int j = i + 1; j < v.size; ++j) {
            if (v.store[j] < v.store[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            double tmp = v.store[i];
            v.store[i] = v.store[min_idx];
            v.store[min_idx] = tmp;
        }
    }
}