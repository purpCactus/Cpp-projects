#define row 3
#define column 3

void Rotate(int random, int white[row][column], int orange[row][column], int yellow[row][column], int green[row][column], int blue[row][column], int red[row][column]);
void Print(int white[row][column], int orange[row][column], int yellow[row][column], int green[row][column], int blue[row][column], int red[row][column]);
void F(int white[row][column], int orange[row][column], int yellow[row][column], int red[row][column]);
void F_inverted(int white[row][column], int orange[row][column], int yellow[row][column], int red[row][column]);
void R(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column]);
void R_inverted(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column]);
void U(int orange[row][column], int green[row][column], int blue[row][column], int red[row][column]);
void U_inverted(int green[row][column], int red[row][column], int blue[row][column], int orange[row][column]);
void B(int orange[row][column], int yellow[row][column], int red[row][column], int white[row][column]);
void B_inverted(int orange[row][column], int yellow[row][column], int red[row][column], int white[row][column]);
void L(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column]);
void L_inverted(int green[row][column], int yellow[row][column], int blue[row][column], int white[row][column]);
void D(int green[row][column], int red[row][column], int blue[row][column], int orange[row][column]);
void D_inverted(int green[row][column], int red[row][column], int blue[row][column], int orange[row][column]);
