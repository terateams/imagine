#ifndef IMAGINE_STB_SHIM_H
#define IMAGINE_STB_SHIM_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

unsigned char *imagine_stbi_load(const char *filename, int *x, int *y, int *channels_in_file, int desired_channels);
void imagine_stbi_image_free(void *retval_from_stbi_load);
int imagine_stbi_write_png(const char *filename, int w, int h, int comp, const void *data, int stride_in_bytes);

#ifdef __cplusplus
}
#endif

#endif
