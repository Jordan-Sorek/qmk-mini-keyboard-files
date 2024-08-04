MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
BOOTLOADER = caterina
BOOTMAGIC_ENABLE = no
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
COMBO_ENABLE = yes