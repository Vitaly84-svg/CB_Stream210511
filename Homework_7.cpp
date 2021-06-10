#define CHECK_DOT(X,Z) (((X) >= 0) && ((X) < (Z)))
#define POINT_ITEM(a,r,c) (*((*((a) + (r))) + (c)))
#define SIZE_ARRAY(a) ((sizeof(a)) / (sizeof(a[0])))
