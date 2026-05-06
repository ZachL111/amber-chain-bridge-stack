#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {74, 54, 18, 64};
    assert(domain_review_score(item) == 212);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
