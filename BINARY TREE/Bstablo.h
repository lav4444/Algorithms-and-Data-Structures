#include <iostream>

using namespace std;

template <class T> class BStablo{
    private:
        struct Node {
            T item;
            shared_ptr<Node> lijevo, desno;
            Node(T &item) {
                this -> item = item;
                this -> lijevo = nullptr;
                this -> desno = nullptr;
            }
        };
        shared_ptr<Node> root;
        void insert(shared_ptr<Node> &node, const T &newItem) { // Ref?
            if (node) {
                if (node->item < newItem) {
                    insert(node->desno, newItem);
                } else if (node->item > newItem) {
                    insert(node->lijevo, newItem);
                } else {
                    cout << "Nejde!" << endl;
                }
            } else {
                node = make_shared<Node>(newItem);
            }
        }
        // bool remove(shared_ptr<Node>&, const T&); 
        // bool search(shared_ptr<Node>&, const T&);
        int recCountNodes(shared_ptr<Node>& cvor) {
            if (cvor) {
                return 1 + recCountNodes(cvor -> lijevo) + recCountNodes(cvor -> desno);
            }
            return 0;
        }
        int inorder2(shared_ptr<Node>& cvor) {
            int cnt = 0;
            if (cvor) {
                cnt = inorder2(cvor -> lijevo) + inorder2(cvor -> desno);
                cout << cvor -> item << " ";
            }
            return 0;

        }

    public:
        BStablo() {
            this -> root = nullptr;
        }
        bool isEmpty() const;
        void insert(const T& item) { insert (root, item); }
        bool remove(const T& item) { return remove(root, item); } 
        bool search(const T& item) { return search(root, item); }

        int countNodes() {     //1.zad
            return recCountNodes(root);
        }
        int inorder2() {
             int x = inorder2(root);
             cout << endl;
             return x;
        }
        
        
};