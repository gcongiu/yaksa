/*
 * Copyright (C) by Argonne National Laboratory
 *     See COPYRIGHT in top-level directory
 */

#ifndef YAKSURI_SEQ_H_INCLUDED
#define YAKSURI_SEQ_H_INCLUDED

/* This is a API header for the seq device and should not include any
 * internal headers, except for yaksa_config.h, in order to get the
 * configure checks. */

/* dummy typedefs, as we do not have anything to store */
typedef int yaksuri_seq_type_s;
typedef int yaksuri_seq_request_s;

struct yaksi_type_s;
struct yaksi_request_s;

int yaksuri_seq_init_hook(void);
int yaksuri_seq_finalize_hook(void);
int yaksuri_seq_type_create_hook(struct yaksi_type_s *type);
int yaksuri_seq_type_free_hook(struct yaksi_type_s *type);
int yaksuri_seq_request_create_hook(struct yaksi_request_s *request);
int yaksuri_seq_request_free_hook(struct yaksi_request_s *request);
int yaksuri_seq_request_test(struct yaksi_request_s *request);
int yaksuri_seq_request_wait(struct yaksi_request_s *request);

#endif /* YAKSURI_SEQ_H_INCLUDED */
