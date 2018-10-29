#include "../include/eval.h"
#include "../include/log.h"
Object new_i(int primitive){
    Object object;
    object.type = OBJ_INT;
    object.value.i = primitive;
    return object;
}

int get_i(Object object){
    if(object.type == OBJ_INT){
        return object.value.i;
    }
    loge("Object type error: requre(int)");
    exit(0);
}