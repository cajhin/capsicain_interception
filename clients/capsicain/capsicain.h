void makeKeyMacro(unsigned short scancode, InterceptionKeyStroke * keyMacro, int & keyMacroLength);
void breakKeyMacro(unsigned short scancode, InterceptionKeyStroke * keyMacro, int & keyMacroLength);
void makeBreakKeyMacro(unsigned short scancode, InterceptionKeyStroke * keyMacro, int & keyMacroLength);

void createMacroKeyCombo(int a, int b, int c, int d, InterceptionKeyStroke *keyMacro, int &keyMacroLength);
void createMacroKeyComboRemoveShift(int a, int b, int c, int d, InterceptionKeyStroke *keyMacro, int &keyMacroLength);
void createMacroAltNumpad(unsigned short a, unsigned short b, unsigned short c, unsigned short d, InterceptionKeyStroke *keyMacro, int &keyMacroLength);
void processCapsTapped(unsigned short scancode, InterceptionKeyStroke  keyMacro[100], int &keyMacroLength);

void playMacro(InterceptionKeyStroke  keyMacro[], int keyMacroLength, const InterceptionContext &context, const InterceptionDevice &device);

void scancode2stroke(unsigned short scancode,  InterceptionKeyStroke &istroke);
void normalizeKeyStroke(InterceptionKeyStroke &keystroke);
void printStatus();
void printHelp();
void getHardwareId(const InterceptionContext &context, const InterceptionDevice &device);
void reset(InterceptionKeyStroke  keyMacro[], int keyMacroLength, InterceptionContext context, InterceptionDevice device);
void sendStroke(InterceptionContext context, InterceptionDevice device, InterceptionKeyStroke &stroke);

#define BITMASK_LSHIFT 0x01
#define BITMASK_RSHIFT 0x10
#define BITMASK_LCONTROL 0x02
#define BITMASK_RCONTROL 0x20
#define BITMASK_LALT 0x04
#define BITMASK_RALT 0x40
#define BITMASK_LWIN 0x08
#define BITMASK_RWIN 0x80

#define IS_SHIFT_DOWN (modiState & 0x01 || modiState & 0x10)
#define IS_LSHIFT_DOWN (modiState & 0x01)
#define IS_RSHIFT_DOWN (modiState & 0x10)
#define IS_LCONTROL_DOWN (modiState & 0x02)
#define IS_LALT_DOWN (modiState & 0x04)

