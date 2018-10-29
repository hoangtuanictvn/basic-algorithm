#ifndef _LOG_H_
#define _LOG_H_
#include<stdio.h>
#include <errno.h>
#define clean_errno() (errno == 0 ? "None" : strerror(errno))
#define loge(logs, ...) fprintf(stderr, "[ERROR - line:%d] in FILE[%s] at FUNC[%s]:" logs "\n", __LINE__, __FILE__, __func__, clean_errno(), ##__VA_ARGS__)
#define logw(logs, ...) fprintf(stderr, "[WARN - line:%d] in FILE[%s] at FUNC[%s]:" logs "\n",__LINE__, __FILE__, __func__, clean_errno(), ##__VA_ARGS__)
#define logi(logs, ...) fprintf(stderr, "[INFO - line:%d] in FILE[%s] at FUNC[%s]:" logs "\n", __LINE__, __FILE__, __func__, clean_errno(), ##__VA_ARGS__)
#endif
