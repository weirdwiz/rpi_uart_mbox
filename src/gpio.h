enum {
	MMIO_BASE = 0x3F000000,
	GPFSEL0 = ((volatile unsigned int*)(MMIO_BASE+0x00200000)),
	GPFSEL1 = ((volatile unsigned int*)(MMIO_BASE+0x00200004)),
	GPFSEL2 = ((volatile unsigned int*)(MMIO_BASE+0x00200008)),
	GPFSEL3 = ((volatile unsigned int*)(MMIO_BASE+0x0020000C)),
	GPFSEL4 = ((volatile unsigned int*)(MMIO_BASE+0x00200010)),
	GPFSEL5 = ((volatile unsigned int*)(MMIO_BASE+0x00200014)),
	GPSET0 = ((volatile unsigned int*)(MMIO_BASE+0x0020001C)),
	GPSET1 = ((volatile unsigned int*)(MMIO_BASE+0x00200020)),
	GPCLR0 = ((volatile unsigned int*)(MMIO_BASE+0x00200028)),
	GPLEV0 = ((volatile unsigned int*)(MMIO_BASE+0x00200034)),
	GPLEV1 = ((volatile unsigned int*)(MMIO_BASE+0x00200038)),
	GPEDS0 = ((volatile unsigned int*)(MMIO_BASE+0x00200040)),
	GPEDS1 = ((volatile unsigned int*)(MMIO_BASE+0x00200044)),
	GPHEN0 = ((volatile unsigned int*)(MMIO_BASE+0x00200064)),
	GPHEN1 = ((volatile unsigned int*)(MMIO_BASE+0x00200068)),
	GPPUD = ((volatile unsigned int*)(MMIO_BASE+0x00200094)),
	GPPUDCLK0 = ((volatile unsigned int*)(MMIO_BASE+0x00200098)),
	GPPUDCLK1 = ((volatile unsigned int*)(MMIO_BASE+0x0020009C)),
};