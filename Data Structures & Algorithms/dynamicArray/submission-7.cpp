class DynamicArray {
public:

    DynamicArray(int capacity) {
        m_capacity = capacity;
        m_arr = new int[m_capacity];
        size = 0;
    }

    int get(int i) {
        return m_arr[i];
    }

    void set(int i, int n) {
        m_arr[i] = n;
    }

    void pushback(int n) {
        if(size >= m_capacity)
            resize();
        m_arr[size] = n;
        ++size;
    }

    int popback() {
        int item = m_arr[size-1];
        --size;
        return item;
    }

    void resize() {
        int * temp = m_arr;
        m_capacity = m_capacity*2;
        m_arr = new int[m_capacity];
        for(int i =0 ; i < size; ++i) {
            m_arr[i] = temp[i];
        }
        delete [] temp;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return m_capacity;
    }

private:
    int* m_arr;
    int m_capacity;
    int size;

};
