#ifndef ASTAL_WIREPLUMBER_H
#define ASTAL_WIREPLUMBER_H

#include <glib-object.h>

#include "audio.h"
#include "endpoint.h"

G_BEGIN_DECLS

#define ASTAL_WP_TYPE_WP (astal_wp_wp_get_type())

G_DECLARE_FINAL_TYPE(AstalWpWp, astal_wp_wp, ASTAL_WP, WP, GObject)

AstalWpWp* astal_wp_wp_get_default();
AstalWpWp* astal_wp_get_default_wp();

AstalWpAudio* astal_wp_wp_get_audio();
AstalWpEndpoint* astal_wp_wp_get_endpoint(AstalWpWp* self, guint id);
GList* astal_wp_wp_get_endpoints(AstalWpWp* self);
AstalWpEndpoint* astal_wp_wp_get_default_speaker(AstalWpWp* self);
AstalWpEndpoint* astal_wp_wp_get_default_microphone(AstalWpWp* self);

G_END_DECLS

#endif  // !ASTAL_WIREPLUMBER_H
