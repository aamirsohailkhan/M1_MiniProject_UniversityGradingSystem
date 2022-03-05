#unity.h
#include "functions.h"
void setup()
{

}

void teardown()
{

}


void test (Void){
    TEST_ASSERT_INT_WITHIN (82.5,83)
}
int main (Void)
{
    UNITY_BEGIN();
    RUN_TEST(test);

    return UNITY_END();
}
