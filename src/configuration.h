/********CONFIGURE THIS********/

//Number of secrets defined
#define NUM_SECRETS 2

void showEditTimeZone();

// current time zone offset
#define DEFAULT_TIME_ZONE -4
int tZone;

char otplabels[NUM_SECRETS][10] = {
	"Dropbox","Google"
};

unsigned char otpkeys[NUM_SECRETS][16] = {
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
};

int otpsizes[NUM_SECRETS] = { 16, 10 };

/******************************/
