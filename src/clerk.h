
#if !defined(CLERK_MODULE_NAME)
#define CLERK_MODULE_NAME       "unknown"
#endif

enum {
        CLERK_LEVEL_OFF         = 0,
        CLERK_LEVEL_FATAL       = 100,
        CLERK_LEVEL_ERROR       = 200,
        CLERK_LEVEL_WARNING     = 300,
        CLERK_LEVEL_INFO        = 400,
        CLERK_LEVEL_DEBUG       = 500,
        CLERK_LEVEL_TRACE       = 600
#define CLERK_LEVEL_OFF         CLERK_LEVEL_OFF
#define CLERK_LEVEL_FATAL       CLERK_LEVEL_FATAL
#define CLERK_LEVEL_ERROR       CLERK_LEVEL_ERROR
#define CLERK_LEVEL_WARNING     CLERK_LEVEL_WARNING
#define CLERK_LEVEL_INFO        CLERK_LEVEL_INFO
#define CLERK_LEVEL_DEBUG       CLERK_LEVEL_DEBUG
#define CLERK_LEVEL_TRACE       CLERK_LEVEL_TRACE
};

struct clerk_init_options {

};

struct clerk;

struct clerk * clerk_create (struct clerk_init_options *options);
void clerk_destroy (struct clerk *clerk);

#define clerk_fatalf(a...)      clerk_printf(CLERK_LEVEL_FATAL,   CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)
#define clerk_errorf(a...)      clerk_printf(CLERK_LEVEL_ERROR,   CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)
#define clerk_warningf(a...)    clerk_printf(CLERK_LEVEL_WARNING, CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)
#define clerk_infof(a...)       clerk_printf(CLERK_LEVEL_INFO,    CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)
#define clerk_debugf(a...)      clerk_printf(CLERK_LEVEL_DEBUG,   CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)
#define clerk_tracef(a...)      clerk_printf(CLERK_LEVEL_TRACE,   CLERK_MODULE_NAME, __FUNCTION__, __LINE__, a)

int clerk_printf (unsigned int level, const char *module, const char *function, unsigned int line, const char *format, ...)   __attribute__((format(printf, 5, 6)));
