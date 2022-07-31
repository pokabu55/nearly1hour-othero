// ゲームの定数定義
#define BOARD_WIDTH (8)
#define BOARD_HEIGHT (8)

// 各マスの状態
int board[BOARD_HEIGHT][BOARD_WIDTH];

// ターンの種類
enum {
    TURN_BLACK, // 黒
    TURN_WHITE, // 白
    TURN_NONE,  // なし
    TURN_MAX    // ターンの最大数
};

// 石のアスキーアート
const char* diskAA[TURN_MAX]=
{
    "●",    // black
    "○",    // white
    "□"     // none
};

// ベクトル構造体
typedef struct
{
    // 座標
    int x, y;
}VEC2;

VEC2 cursorPosition;

// 関数
void init();
void drawScreen();
VEC2 inputPosition();