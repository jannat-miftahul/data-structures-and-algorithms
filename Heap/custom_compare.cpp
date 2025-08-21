#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    int marks;

    // constructor
    Student(string name, int id, int marks) {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student a, Student b) {
        if(a.marks > b.marks)
            return true;
        else if(a.marks < b.marks)
            return false;
        else return a.id > b.id; // return smallest id first
    }
};

int main() {
    priority_queue<Student,vector<Student>,cmp> pq;

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        string name;
        int id, marks;
        cin >> name >> id >> marks;
        Student obj(name, id, marks); // object
        pq.push(obj);
    }

    while(!pq.empty()) {
        cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}