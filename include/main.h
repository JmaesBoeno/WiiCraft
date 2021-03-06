#ifndef main_H
#define main_H

/* NAMING & PATHS */
#define WIICRAFT_VERSION        "0800" //Need to change from a define to a dynamic var that loads the version from VERSION.txt if found  

/* Storage Devices */
#define FAT_DEVICE_NONE         0
#define FAT_DEVICE_SD           1
#define FAT_DEVICE_USB          2

/* RGBA Colours */
#define BLACK   0x000000FF
#define MAROON  0x800000FF
#define GREEN   0x008000FF
#define OLIVE   0x808000FF
#define NAVY    0x000080FF
#define PURPLE  0x800080FF
#define TEAL    0x008080FF
#define GRAY    0x808080FF
#define SILVER  0xC0C0C0FF
#define RED     0xFF0000FF
#define LIME    0x00FF00FF
#define YELLOW  0xFFFF00FF
#define BLUE    0x0000FFFF
#define FUCHSIA 0xFF00FFFF
#define AQUA    0x00FFFFFF
#define WHITE   0xFFFFFFFF

/* SKY */
#define SKY_COLOUR 0x68B0D8FF //Why British you say? Cus a fine gentleman does whatever he wants.

/* WIILIGHT */
#define HW_GPIO             0xCD0000C0;
#define DISC_SLOT_LED       0x20


/* MISC */
#define STACK_SIZE 1024*64  // 64KB
#define MSPERTICK  520   

#endif
