#ifndef _VIMWAY_H
#define _VIMWAY_H
#include <wayland-server.h>
#include <wlr/backend.h>
#include <wlr/types/wlr_compositor.h>

struct vw_server {
	struct wl_display *wl_display;
	struct wl_event_loop *wl_event_loop;

	struct wlr_backend *backend;
	struct wlr_compositor *compositor;

	struct wl_listener new_output;

	struct wl_list outputs;
};

struct vw_output {
	struct wlr_output *wlr_output;
	struct vw_server *server;
	struct timespec last_frame;

	struct wl_listener destroy;
	struct wl_listener frame;

	struct wl_list link;
};

void output_destroy_notify(struct wl_listener *listener, void *data);

void output_frame_notify(struct wl_listener *listener, void *data); 

void new_output_notify(struct wl_listener *listener, void *data);

#endif
