#pragma once

#define SMILE_NORMAL 0
#define SMILE_WOW    1
#define SMILE_LOST   2
#define SMILE_WINNER 3
#define SMILE_CLICKED 4

// Bitmap Drawing Functions
HRSRC FindBitmapResource(USHORT resourceId);
int GetBitmapByteLength(int a, int b);
BOOL LoadBitmaps();
BOOL LoadBitmapResources();
HGLOBAL TryLoadBitmapResource(USHORT resourceId);
void InitializeBitmapsIndexes();
void InitializeBitmapIndexes(PDWORD indexesArray, int numberOfBitmaps, DWORD firstBitmapIndex, DWORD bytesPerBitmap);
void InitializePen();
void ProcessBlockBitmaps();

void FreePenAndBlocks();
void FreePenAndBlocksAndSound();
void DrawBlock(BoardPoint point);
void DisplayAllBlocksInDC(HDC hDC);
void DisplayAllBlocks();
void DisplayNumber(HDC hDC, int xPosition, int numberToDisplay);
void DisplayLeftFlagsOnDC(HDC hDC);
void DisplayLeftFlags();
void DisplayTimerSecondsOnDC(HDC hDC);
void DisplayTimerSeconds();
void DisplaySmileOnDC(HDC hDC, DWORD smileId);
void DisplaySmile(DWORD smileId);
void SetROPWrapper(HDC hDC, BYTE white_or_copypen);
void DrawHUDRectangle(HDC hDC, RECT rect, int lines_width, char white_or_copypen);
void DrawHUDRectangles(HDC hDC);
void RedrawUIOnDC(HDC hDC);
void RedrawUI();
