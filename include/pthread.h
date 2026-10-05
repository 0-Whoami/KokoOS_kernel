#ifndef PTHREAD_H
#define PTHREAD_H

typedef struct pthread_t pthread_t;
typedef struct pthread_attr_t pthread_attr_t;

/**
 * @brief Creates a new thread.
 *
 * @param[out]    thread         Stores the ID of the newly created thread.
 * @param[in,opt] attr           Thread creation attributes, or NULL for defaults.
 * @param[in]     start_routine  Entry point function for the thread.
 * @param[in,opt] arg            Single argument passed to `start_routine`.
 *
 * @return 0 on success, or a positive errno value on failure.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 */
int pthread_create(pthread_t *restrict thread, const pthread_attr_t *restrict attr, void *(*start_routine)(void *), void *restrict arg);

/**
 * @brief Terminates the calling thread.
 *
 * @details Performs thread cleanup (running cancellation cleanup handlers 
 *          and thread-specific data destructors), releases thread resources, 
 *          and saves `retval` for any thread calling `pthread_join()`.
 *          This function does not return to the caller.
 *
 * @param[in,opt] retval  Exit status value made available to `pthread_join()`.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 */
_Noreturn void pthread_exit(void *retval);

#endif // PTHREAD_H