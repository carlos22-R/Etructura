/*
 * File:   newcunittest3.c
 * Author: carlos
 *
 * Created on 2 sep. 2021, 02:07:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>
#include "../headerfuncion.h"

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testOrdenI() {
    int vector[]={1,2,3,4};
    size_t tamano=lenght(vector);
   
        CU_ASSERT(OrdenI(vector, tamano));
        CU_ASSERT(vector[0]<vector[1]);
    
}

void testOrdenD() {
    double vector[2]={1.2,3.2};
    size_t tamano=lenght(vector);
   
        CU_ASSERT(OrdenD(vector, tamano));
        CU_ASSERT(vector[0]<vector[1]);
    
}

void testOrdenC() {
    char vector[]={'a','b'};
    size_t tamano=lenght(vector);
    int result = OrdenC(vector, tamano);
    
        CU_ASSERT(result);
        CU_ASSERT(vector[0]<vector[1]);
    
}

void testOrdenF() {
    float vector[]={1.2,4.2};
    size_t tamano=lenght(vector);
    int result = OrdenF(vector, tamano);
    
        CU_ASSERT(result);
        CU_ASSERT(vector[0]<vector[1]);
    
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest3", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testOrdenI", testOrdenI)) ||
            (NULL == CU_add_test(pSuite, "testOrdenD", testOrdenD)) ||
            (NULL == CU_add_test(pSuite, "testOrdenC", testOrdenC)) ||
            (NULL == CU_add_test(pSuite, "testOrdenF", testOrdenF))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
