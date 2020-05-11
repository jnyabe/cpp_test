#include "proxy_image.h"

int main(int argc, const char* argv[])
{
	Image* image1 = new ProxyImage("HiRes_10MB_Photo1");
	Image* image2 = new ProxyImage("HiRes_10MB_Photo2");
	Image* image3 = new ProxyImage("HiRes_10MB_Photo3");

	image1->DisplayImage();
	image2->DisplayImage();
	image2->DisplayImage();
	
	return 0;
}
