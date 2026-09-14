class DynamicArray {
public:

    DynamicArray(int capacity) {
        arr = new int[capacity];
        size = 0;
        m_capacity = capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size >= m_capacity){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        size--;
        return arr[size];
    }

    void resize() {
        m_capacity *= 2;
        int* newArr = new int[m_capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    int getSize() {

        return size;
    }

    int getCapacity() {
        return m_capacity;
    }

private: 
        int* arr;
        int size = 0;
        int m_capacity = 0;
};
