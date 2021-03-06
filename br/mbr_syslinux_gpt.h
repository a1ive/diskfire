static unsigned char syslinux_gpt_mbr[] = {
  0x33, 0xc0, 0xfa, 0x8e, 0xd8, 0x8e, 0xd0, 0xbc, 0x00, 0x7c, 0x89, 0xe6,
  0x06, 0x57, 0x8e, 0xc0, 0xfb, 0xfc, 0xbf, 0x00, 0x06, 0xb9, 0x00, 0x01,
  0xf3, 0xa5, 0xea, 0x1f, 0x06, 0x00, 0x00, 0x52, 0x89, 0xe5, 0x83, 0xec,
  0x1c, 0x6a, 0x1e, 0xc7, 0x46, 0xfa, 0x00, 0x02, 0x52, 0xb4, 0x41, 0xbb,
  0xaa, 0x55, 0x31, 0xc9, 0x30, 0xf6, 0xf9, 0xcd, 0x13, 0x5a, 0xb4, 0x08,
  0x72, 0x17, 0x81, 0xfb, 0x55, 0xaa, 0x75, 0x11, 0xd1, 0xe9, 0x73, 0x0d,
  0x66, 0xc7, 0x06, 0x59, 0x07, 0xb4, 0x42, 0xeb, 0x13, 0xb4, 0x48, 0x89,
  0xe6, 0xcd, 0x13, 0x83, 0xe1, 0x3f, 0x51, 0x0f, 0xb6, 0xc6, 0x40, 0xf7,
  0xe1, 0x52, 0x50, 0x66, 0x31, 0xc0, 0x66, 0x99, 0x40, 0xe8, 0xdc, 0x00,
  0x8b, 0x4e, 0x56, 0x8b, 0x46, 0x5a, 0x50, 0x51, 0xf7, 0xe1, 0xf7, 0x76,
  0xfa, 0x91, 0x41, 0x66, 0x8b, 0x46, 0x4e, 0x66, 0x8b, 0x56, 0x52, 0x53,
  0xe8, 0xc4, 0x00, 0xe2, 0xfb, 0x31, 0xf6, 0x5f, 0x59, 0x58, 0x66, 0x8b,
  0x15, 0x66, 0x0b, 0x55, 0x04, 0x66, 0x0b, 0x55, 0x08, 0x66, 0x0b, 0x55,
  0x0c, 0x74, 0x0c, 0xf6, 0x45, 0x30, 0x04, 0x74, 0x06, 0x21, 0xf6, 0x75,
  0x19, 0x89, 0xfe, 0x01, 0xc7, 0xe2, 0xdf, 0x21, 0xf6, 0x75, 0x2e, 0xe8,
  0xe1, 0x00, 0x4d, 0x69, 0x73, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x4f, 0x53,
  0x0d, 0x0a, 0xe8, 0xd2, 0x00, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x70, 0x6c,
  0x65, 0x20, 0x61, 0x63, 0x74, 0x69, 0x76, 0x65, 0x20, 0x70, 0x61, 0x72,
  0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x0d, 0x0a, 0x91, 0xbf, 0xbe,
  0x07, 0x57, 0x66, 0x31, 0xc0, 0xb0, 0x80, 0x66, 0xab, 0xb0, 0xed, 0x66,
  0xab, 0x66, 0x8b, 0x44, 0x20, 0x66, 0x8b, 0x54, 0x24, 0xe8, 0x40, 0x00,
  0x66, 0x8b, 0x44, 0x28, 0x66, 0x8b, 0x54, 0x2c, 0x66, 0x2b, 0x44, 0x20,
  0x66, 0x1b, 0x54, 0x24, 0xe8, 0x70, 0x00, 0xe8, 0x2a, 0x00, 0x66, 0x0f,
  0xb7, 0xc1, 0x66, 0xab, 0xf3, 0xa4, 0x5e, 0x66, 0x8b, 0x44, 0x34, 0x66,
  0x8b, 0x54, 0x38, 0xe8, 0x22, 0x00, 0x81, 0x3e, 0xfe, 0x7d, 0x55, 0xaa,
  0x75, 0x85, 0x89, 0xec, 0x5a, 0x5f, 0x07, 0x66, 0xb8, 0x21, 0x47, 0x50,
  0x54, 0xfa, 0xff, 0xe4, 0x66, 0x21, 0xd2, 0x74, 0x04, 0x66, 0x83, 0xc8,
  0xff, 0x66, 0xab, 0xc3, 0xbb, 0x00, 0x7c, 0x66, 0x60, 0x66, 0x52, 0x66,
  0x50, 0x06, 0x53, 0x6a, 0x01, 0x6a, 0x10, 0x89, 0xe6, 0x66, 0xf7, 0x76,
  0xdc, 0xc0, 0xe4, 0x06, 0x88, 0xe1, 0x88, 0xc5, 0x92, 0xf6, 0x76, 0xe0,
  0x88, 0xc6, 0x08, 0xe1, 0x41, 0xb8, 0x01, 0x02, 0x8a, 0x56, 0x00, 0xcd,
  0x13, 0x8d, 0x64, 0x10, 0x66, 0x61, 0x72, 0x0c, 0x02, 0x7e, 0xfb, 0x66,
  0x83, 0xc0, 0x01, 0x66, 0x83, 0xd2, 0x00, 0xc3, 0xe8, 0x0c, 0x00, 0x44,
  0x69, 0x73, 0x6b, 0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x0d, 0x0a, 0x5e,
  0xac, 0xb4, 0x0e, 0x8a, 0x3e, 0x62, 0x04, 0xb3, 0x07, 0xcd, 0x10, 0x3c,
  0x0a, 0x75, 0xf1, 0xcd, 0x18, 0xf4, 0xeb, 0xfd, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
