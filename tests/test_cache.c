#include <assert.h>

#include "components/cache/cache.h"
#include "components/memory/memory.h"

int main(){
    Cache cache = {0};
    CacheAddress decoded;
    assert(cache_init(&cache, 32));

    assert(cache_address_decode(&cache, 100, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 0);
    assert(decoded.word_offset == 0);

    assert(cache_address_decode(&cache, 102, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 0);
    assert(decoded.word_offset == 2);

    assert(cache_address_decode(&cache, 228, &decoded));
    assert(decoded.set_index == 25);
    assert(decoded.tag == 1);
    assert(decoded.word_offset == 0);

    assert(!cache_address_decode(&cache, MEMORY_SIZE, &decoded));

    return 0;
}