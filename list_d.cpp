#include <iostream>

// NODE CLASS DEFINITION --------------------------------------------------------------------
class node{
    private:
        int value;
        node *next;
    
    public:
        node(int value);
        node();
        ~node();
        node *get_next() const;
        void set_next(node *new_next);
        int get_value() const;
        void set_value(int new_value);
};

node::node(int v){
    value = v;
    next = nullptr;
}

node::node(){
    value = 0;
    next = nullptr;
}

node::~node(){

}

node *node::get_next() const{
    return next;
}

void node::set_next(node *new_next){
    next = new_next;
}

int node::get_value() const{
    return value;
}

void node::set_value(int new_value){
    value = new_value;
}


// LINKED LIST CLASS DEFINITION -----------------------------------------------------------------
class list_d
{

private:
    node *head;
    node *tail;
    int size;

public:
    list_d();
    ~list_d();
    int get_size();
    int get_value(int position);
    void add(int value);
    void print();
    int remove_v(int value);
    int add_at_end(int value);
    int search(int value);
    int search_ord(int value);
};

list_d::list_d(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}   

list_d::~list_d(){
    node *aux = head;
    while(aux != nullptr){
        head = head->get_next();
        delete(aux);
        aux = head;
    }
}

int list_d::get_size(){
    return size;
}

int list_d::get_value(int position){
    if(position > size || position < 0){
        std::cout << "Invalid index\n";
        return -1;
    }
    node *aux;
    int count = 0;
    aux = head;
    while(aux != nullptr){
        if(count == position){
            return aux->get_value();
        }
        aux = aux->get_next();
        count++;
    }
}

void list_d::add(int value){
    node *aux;
    aux = head;
    head = new node(value);
    head->set_next(aux);
    if(size == 0){
        tail = head;
    }
    size++;
}

int list_d::add_at_end(int value){
    node *aux = tail;
    if(aux == nullptr){
        add(value);
        return 0;
    }

    node *new_node = new node(value);
    aux->set_next(new_node);
    tail = new_node;
    return ++size;
}

void list_d::print(){
    node *aux;
    aux = head;
    int count = 0;
    // std::cout << "[ ";
    while(aux != nullptr){
        if(count < size - 1){
            std::cout << aux->get_value() << " ";
        }
        else{
            std::cout << aux->get_value() << std::endl;
        }

        aux = aux->get_next();
        count++;
    }
    // std::cout << " ]" << std::endl;
}

// linear search: works for any kind of list: unordered or ordered, whatever!
int list_d::search(int value){
    int count = 0;
    node *aux = head;
    while(aux != nullptr){
        if(aux->get_value() == value){
            return count;
        }
        aux = aux->get_next();
        count++;
    }

    return -1;
}

// search in an ordered list (ONLY WORKS IF LIST IS ORDERED!!!!!!)
int list_d::search_ord(int value){
    int count = 0;
    node *aux = head;
    while(aux != nullptr){
        if(aux->get_value() > value || tail->get_value() < value){
            // current element is greater than the value being searched, which in a ordered list means
            // that this value doesn't exist
            // also, if the last value of the ordered list is lesser than the value being search,
            // it also means that the value is not present on the ordered list
            return -1;
        }
        else if(aux->get_value() == value){
            return count;
        }

        aux = aux->get_next();
        count++;
    }

    return -1;
}

int list_d::remove_v(int value){
    node *aux = head;
    node *earlier;
    int count = 0;
    while(aux != nullptr){
        if(aux->get_value() == value){
            if(count == 0){
                head = aux->get_next();
                delete aux;
                if(size == 1){
                    // the element removed was the first and only element of the list
                    tail = head;
                }
                size--;
                return count;
            }
            else{
                earlier->set_next(aux->get_next());
                if(count == size - 1){
                    // if the el. to be removed is the last el. of the list
                    tail = earlier;
                }
                delete aux;
                size--;
                return count;
            }
        }
        earlier = aux;
        aux = aux->get_next();
        count++;
    }

    std::cout << "Element not found on list.\n";
    return -1;
}

int main(){
    list_d *l = new list_d;
    
    int p_qtt = 0;
    std::cin >> p_qtt;
    int id;
    for(int i = 0; i < p_qtt; i++){
        std::cin >> id;
        l->add(id);
    }
    // l->print();
    l->print();
    std::cout << "element found at " << l->search(5) << std::endl;

    std::cout << "element found at (ordered search) " << l->search_ord(10) << std::endl;


    delete l;
    return 0;
}