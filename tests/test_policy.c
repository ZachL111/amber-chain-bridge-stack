#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {82, 75, 12, 8, 5};
    assert(score_signal(signal_case_1) == 208);
    assert(strcmp(classify_signal(signal_case_1), "accept") == 0);
    Signal signal_case_2 = {74, 71, 13, 18, 7};
    assert(score_signal(signal_case_2) == 156);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {92, 91, 27, 17, 5};
    assert(score_signal(signal_case_3) == 178);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
