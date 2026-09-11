#include <iostream>
using namespace std;

class QueueDisplay {
    int queueSize;
    int* customerIDs;

public:
    QueueDisplay() {
        queueSize = 0;
        customerIDs = nullptr;
    }

    void setSize(int size) {
        queueSize = size;
        customerIDs = new int[queueSize];
        for (int i = 0; i < queueSize; i++)
            customerIDs[i] = 0;
    }

    void insert(int index, int id) {
        if (index >= 0 && index < queueSize)
            customerIDs[index] = id;
    }

    void display() {
        cout << "Queue Size: " << queueSize << endl;
        cout << "Customer IDs: ";
        for (int i = 0; i < queueSize; i++)
            cout << customerIDs[i] << " ";
        cout << endl;
    }

    friend void exchangeQueues(QueueDisplay& q1, QueueDisplay& q2);

    ~QueueDisplay() {
        delete[] customerIDs;
    }
};

void exchangeQueues(QueueDisplay& q1, QueueDisplay& q2) {
    int tempSize = q1.queueSize;
    int* tempArray = q1.customerIDs;

    q1.queueSize = q2.queueSize;
    q1.customerIDs = q2.customerIDs;

    q2.queueSize = tempSize;
    q2.customerIDs = tempArray;
}

int main() {
    int n;
    cout << "Enter number of queues: ";
    cin >> n;

    QueueDisplay* queues = new QueueDisplay[n];

    for (int i = 0; i < n; i++) {
        int size;
        cout << "Enter size for queue " << i + 1 << ": ";
        cin >> size;
        queues[i].setSize(size);

        for (int j = 0; j < size; j++) {
            queues[i].insert(j, (i + 1) * 100 + j);
        }
    }

    cout << "Before Exchange:" << endl;
    for (int i = 0; i < n; i++)
        queues[i].display();

    if (n > 1) {
        exchangeQueues(queues[0], queues[1]);
        cout << "After Exchanging Queue 1 and Queue 2:" << endl;
        for (int i = 0; i < n; i++)
            queues[i].display();
    }

    delete[] queues;
    return 0;
}