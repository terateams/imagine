#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_PNG
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

#include "stb_shim.h"

unsigned char *imagine_stbi_load(const char *filename, int *x, int *y, int *channels_in_file, int desired_channels) {
    return stbi_load(filename, x, y, channels_in_file, desired_channels);
}

void imagine_stbi_image_free(void *retval_from_stbi_load) {
    stbi_image_free(retval_from_stbi_load);
}

int imagine_stbi_write_png(const char *filename, int w, int h, int comp, const void *data, int stride_in_bytes) {
    return stbi_write_png(filename, w, h, comp, data, stride_in_bytes);
}
