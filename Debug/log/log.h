#ifndef _LOG_H_
#define _LOG_H_

#define MAX_LEN 1024

#define ERROR_FLAG    (0x1 << 0)
#define INFO_FLAG     (0x1 << 1)
#define WARNNING_FLAG (0x1 << 2)
#define DEBUG_FLAG    (0x1 << 3)


#define PRINT_DEBUG(tag, args...)    print_log(DEBUG_FLAG, tag" : " args)
#define PRINT_INFO(tag, args...)     print_log(INFO_FLAG, tag" : " args)
#define PRINT_WARNNING(tag, args...) print_log(WARNNING_FLAG, tag" : " args)
#define PRINT_ERROR(tag, args...)    print_log(ERROR_FLAG, tag" : " args)

void print_log(unsigned int flag, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
void setLogFlag(unsigned int flag);
unsigned int getLogFlag();
#endif