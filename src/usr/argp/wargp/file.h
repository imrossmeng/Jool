#ifndef SRC_USR_ARGP_WARGP_FILE_H_
#define SRC_USR_ARGP_WARGP_FILE_H_

int handle_file_update(char *iname, int argc, char **argv, void *arg);
int handle_file_rm(char *iname, int argc, char **argv, void *arg);

void autocomplete_file_update(void *args);
void autocomplete_file_rm(void *args);

#endif /* SRC_USR_ARGP_WARGP_FILE_H_ */
