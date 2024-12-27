/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "#141617",   /* after initialization */
    [INPUT] = "#a9b665",  /* during input */
    [FAILED] = "#ea6962", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 12;
/* grid width and height for right center alignment */
static const int logow = 3;
static const int logoh = 3;

static XRectangle rectangles[9] = {
    /* x    y       w       h */
    {0, 0, 3, 1},
    {0, 1, 1, 1},
    {2, 1, 1, 1},
    {0, 2, 3, 1},
};

/*Enable blur*/
/* #define BLUR */
/*Set blur radius*/
static const int blurRadius = 5;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize = 20;
