#include <cstdio>
const int M = 1000;
//You can modify the value of M
//Design testcases to select the best M for your code. 

struct Node{
    Node *pred, *succ;
    int data[M];
    unsigned int _node_size;
    //you can add more member variables or functions here
};
struct UnrolledList{
    unsigned int _list_size;
    Node *header, *trailer;

    //You can add more member variables or functions here

    UnrolledList(){
        // you need to finish this function
    }
    void insert(int position, int value){
        // you need to finish this function
    }
    void remove(int position){
        // you need to finish this function
    }
    int query(int position){
        if(position >= _list_size) return -1;
        // you need to finish this function
        return 0;
    }   

    //You can add more member variables or functions here
};
enum OperationType{
    NOT_USED,
    INSERT,
    DELETE,
    QUERY
};
int main(){
    // you should not modify the main function
    int num_of_operation;
    scanf("%d",&num_of_operation);
    int type_of_operation, argument1, argument2;
    UnrolledList a_list;
    for(int operation_id = 0; operation_id < num_of_operation; operation_id ++){
        scanf("%d%d%d",&type_of_operation, &argument1, &argument2);
        if(type_of_operation == INSERT){
            a_list.insert(argument1,argument2);
        }else if(type_of_operation == DELETE){
            // argument2 is 0 and should be ignored
            a_list.remove(argument1);
        }else if(type_of_operation == QUERY){
            // argument2 is 0 and should be ignored
            printf("%d\n",a_list.query(argument1));
        }else{
            printf("Invalid Operation");
            return -1;
        }
    }
    return 0;
}