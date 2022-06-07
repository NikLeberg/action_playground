extern "C" {
    #include "buggy_api/buggy_api.h" 
}
extern "C" {
    #include "fuzzing.h" 
}


#define MAKE(t) static_cast<t *>(calloc(sizeof(t), 1))

struct GFUZZ_BUNDLE {
public:
    void *active;
    void *inactive;
    GFUZZ_BUNDLE(void *_active, void *_inactive): active(_active), inactive(_inactive) {}
};

#define BUNDLE(a,b) new GFUZZ_BUNDLE((void *)a, (void *)b)

int main() {
    globalContext *var_0;
    {
        // reset state
        buggy_api_setState(0);
    }
    globalContext *var_1;
    {
        buggy_api_setState2(666);
    }
    globalContext *var_2;
    {
        buggy_api_setState(123);
    }
    globalContext *var_3;
    {
        buggy_api_setState2(321);
    }
    globalContext *var_4;
    {
        buggy_api_run();
    }
    {
        // pass
    }
}
extern "C" {
    #include "buggy_api/buggy_api.h" 
}
extern "C" {
    #include "fuzzing.h" 
}


#define MAKE(t) static_cast<t *>(calloc(sizeof(t), 1))

struct GFUZZ_BUNDLE {
public:
    void *active;
    void *inactive;
    GFUZZ_BUNDLE(void *_active, void *_inactive): active(_active), inactive(_inactive) {}
};

#define BUNDLE(a,b) new GFUZZ_BUNDLE((void *)a, (void *)b)

int main() {
    globalContext *var_0;
    {
        // reset state
        buggy_api_setState(0);
    }
    globalContext *var_1;
    {
        buggy_api_setState2(666);
    }
    globalContext *var_2;
    {
        buggy_api_setState(123);
    }
    globalContext *var_3;
    {
        buggy_api_setState2(321);
    }
    globalContext *var_4;
    {
        buggy_api_run();
    }
    {
        // pass
    }
}
