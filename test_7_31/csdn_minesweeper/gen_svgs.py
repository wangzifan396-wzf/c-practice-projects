#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""Generate 5 SVG diagrams for the CSDN minesweeper article, then rasterize via sharp."""
import os

OUT = "D:/VS2026_Files/test_7_31/csdn_minesweeper/images"
os.makedirs(OUT, exist_ok=True)

# ---- palette (ardot Linear dark) ----
BG   = "#0A0A0B"
SURF = "#1A1B1E"
TXT  = "#FFFFFF"
SUB  = "#A1A1AA"
MUT  = "#71717A"
BORD = "rgba(255,255,255,0.08)"
ACC = "#5E6AD2"
OK  = "#10B981"
WARN= "#F5A623"
INFO= "#22D3EE"
PUR = "#A78BFA"
BAD = "#EF4444"
RAD = 10

def svg_open(w, h):
    return (f'<svg xmlns="http://www.w3.org/2000/svg" width="{w}" height="{h}" '
            f'viewBox="0 0 {w} {h}" font-family="ui-monospace,SFMono-Regular,Menlo,Consolas,monospace">'
            f'<rect width="{w}" height="{h}" fill="{BG}"/>')

def cell_rect(x, y, s, fill=SURF, rad=RAD, stroke=BORD, sw=1):
    return (f'<rect x="{x}" y="{y}" width="{s}" height="{s}" rx="{rad}" fill="{fill}" '
            f'stroke="{stroke}" stroke-width="{sw}"/>')

def txt(x, y, s, fill=TXT, size=16, anchor="middle", weight="normal"):
    return (f'<text x="{x}" y="{y}" fill="{fill}" font-size="{size}" '
            f'text-anchor="{anchor}" font-weight="{weight}">{s}</text>')

# ============================================================
# 1) COVER
# ============================================================
def build_cover():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    for gx in range(0, W, 40):
        parts.append(f'<line x1="{gx}" y1="0" x2="{gx}" y2="{H}" stroke="rgba(255,255,255,0.022)" stroke-width="1"/>')
    for gy in range(0, H, 40):
        parts.append(f'<line x1="0" y1="{gy}" x2="{W}" y2="{gy}" stroke=" oranges(255,255,255,0.022)" stroke-width="1"/>'.replace(' oranges', 'rgba'))
    parts.append(f'<circle cx="1040" cy="150" r="220" fill="{ACC}" opacity="0.10"/>')
    parts.append(f'<circle cx="220" cy="600" r="200" fill="{PUR}" opacity="0.08"/>')
    parts.append(f'<text x="640" y="250" fill="{TXT}" font-size="64" text-anchor="middle" font-weight="700">C 语言扫雷</text>')
    parts.append(f'<text x="640" y="300" fill="{SUB}" font-size="26" text-anchor="middle">双棋盘模型 · 哨兵边框 · 3×3 数雷 · 递归展开</text>')
    N = 9; s = 34; gap = 6
    total = N*s + (N-1)*gap
    ex = (W - total)//2
    ey = 380
    M = [
        [0,0,1,0,0,0,0,1,0],
        [0,1,1,1,0,0,1,1,0],
        [1,1,0,1,1,0,1,0,0],
        [0,1,1,1,1,1,1,0,0],
        [0,0,1,1,1,1,1,1,0],
        [0,0,0,1,1,1,1,1,0],
        [0,0,0,0,1,1,1,1,0],
        [0,0,0,0,0,1,1,1,0],
        [0,0,0,0,0,0,1,1,0],
    ]
    M = [row[:9] for row in M[:9]]
    for r in range(N):
        for c in range(N):
            x = ex + c*(s+gap)
            y = ey + r*(s+gap)
            parts.append(cell_rect(x, y, s))
            if M[r][c] == 1:
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{BAD}" font-size="20" text-anchor="middle" font-weight="700">&#10022;</text>')
            else:
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{MUT}" font-size="16" text-anchor="middle">&#183;</text>')
    parts.append(f'<text x="640" y="700" fill="{MUT}" font-size="15" text-anchor="middle" font-style="italic">示意图：9×9 雷区（&#10022; = 雷，&#183; = 安全）</text>')
    parts.append('</svg>')
    return "\n".join(parts)

# ============================================================
# 2) FIG1 双棋盘
# ============================================================
def build_fig1():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    N = 9; s = 46; gap = 8
    MAP = [
        [1,0,0,0,0,0,0,0,0],
        [0,1,1,0,0,0,0,0,0],
        [0,0,0,1,1,0,0,0,0],
        [0,0,0,0,1,1,1,0,0],
        [0,0,0,0,0,1,1,1,0],
        [0,0,0,0,0,0,1,1,0],
        [0,0,0,0,0,0,0,1,0],
        [0,0,0,0,0,0,0,0,0],
        [0,0,0,0,0,0,0,0,0],
    ]
    lx0 = 120; ly0 = 165
    for r in range(N):
        for c in range(N):
            x = lx0 + c*(s+gap); y = ly0 + r*(s+gap)
            parts.append(cell_rect(x, y, s))
            if MAP[r][c] == 1:
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{ACC}" font-size="18" text-anchor="middle" font-weight="700">1</text>')
            else:
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{MUT}" font-size="16" text-anchor="middle">0</text>')
    parts.append(f'<text x="{lx0}" y="{ly0 + N*(s+gap)+24}" fill="{SUB}" font-size="15">mine[][]：初始化时写好的「标准答案」</text>')
    SHOW = [
        ['*','*','*','*','*','*','*','*','*'],
        ['*','3','2','*','*','*','*','*','*'],
        ['*','*','*','3','2','*','*','*','*'],
        ['*','*','*','*','2','2','1','*','*'],
        ['*','*','*','*','*','2','2','1','*'],
        ['*','*','*','*','*','*','1','1','*'],
        ['*','*','*','*','*','*','*','1','*'],
        ['*','*','*','*','*','*','*','*','*'],
        ['*','*','*','*','*','*','*','*','*'],
    ]
    rx0 = 720; ry0 = 165
    for r in range(N):
        for c in range(N):
            x = rx0 + c*(s+gap); y = ry0 + r*(s+gap)
            parts.append(cell_rect(x, y, s))
            v = SHOW[r][c]
            col = TXT if v == '*' else OK if v.isdigit() else TXT
            if v != '*' and not v.isdigit():
                col = TXT
            parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{col}" font-size="17" text-anchor="middle" font-weight="700">{v}</text>')
    parts.append(f'<text x="{rx0}" y="{ry0 + N*(s+gap)+24}" fill="{SUB}" font-size="15">show[][]：玩家看到的界面（* = 未揭开，数字 = 周围雷数）</text>')
    parts.append(f'<line x1="{lx0+N*(s+gap)+40}" y1="360" x2="{rx0-60}" y2="360" stroke="{BORD}" stroke-width="1.5"/>')
    parts.append(f'<defs><marker id="arrow" markerWidth="10" markerHeight="10" refX="8" refY="3" orient="auto"><path d="M0,0 L8,3 L0,6 Z" fill="{ACC}"/></marker></defs>')
    parts.append(f'<line x1="{lx0+N*(s+gap)+30}" y1="360" x2="{rx0-60}" y2="360" stroke="{ACC}" stroke-width="1.5" marker-end="url(#arrow)"/>')
    parts.append(f'<text x="{(lx0+N*(s+gap)+rx0-60)/2}" y="345" fill="{SUB}" font-size="14" text-anchor="middle">同一份坐标 (r,c)</text>')
    parts.append('</svg>')
    return "\n".join(parts)

# ============================================================
# 3) FIG2 哨兵边框 (clean 11x11)
# ============================================================
def build_fig2():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    parts.append(f'<text x="640" y="70" fill="{TXT}" font-size="26" text-anchor="middle" font-weight="700">哨兵边框：用 11×11 装下 9×9</text>')
    N = 11; s = 24; gap = 3
    ex = 493; ey = 210
    for r in range(N):
        for c in range(N):
            x = ex + c*(s+gap); y = ey + r*(s+gap)
            parts.append(cell_rect(x, y, s))
            if 1 <= r <= 9 and 1 <= c <= 9:
                parts.append(f'<rect x="{x}" y="{y}" width="{s}" height="{s}" rx="6" fill="{ACC}" opacity="0.22"/>')
    ix = ex + 1*(s+gap); iy = ey + 1*(s+gap); iw = 9*(s+gap); ih = 9*(s+gap)
    parts.append(f'<rect x="{ix}" y="{iy}" width="{iw}" height="{ih}" fill="none" stroke="{WARN}" stroke-width="1.5" stroke-dasharray="5 4" opacity="0.85"/>')
    parts.append(f'<text x="{ix-4}" y="{iy-10}" fill="{WARN}" font-size="14" text-anchor="end">ROW 1..9</text>')
    parts.append(f'<text x="{ix+iw+4}" y="{iy-10}" fill="{WARN}" font-size="14" text-anchor="start">COL 1..9</text>')
    parts.append(f'<text x="640" y="{ey + N*(s+gap)+30}" fill="{SUB}" font-size="16" text-anchor="middle">11×11 哨兵边框：内圈 9×9 才是「棋盘」，外圈是占位边界</text>')
    parts.append('</svg>')
    return "\n".join(parts)

# ============================================================
# 4) FIG3 3x3 邻域
# ============================================================
def build_fig3():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    parts.append(f'<text x="640" y="80" fill="{TXT}" font-size="26" text-anchor="middle" font-weight="700">数一数周围 8 颗雷：3×3 邻域扫描</text>')
    s = 70; gap = 10
    ex = 640 - (3*s+2*gap)//2; ey = 170
    for r in range(3):
        for c in range(3):
            x = ex + c*(s+gap); y = ey + r*(s+gap)
            parts.append(cell_rect(x, y, s))
            if r == 1 and c == 1:
                parts.append(f'<rect x="{x}" y="{y}" width="{s}" height="{s}" rx="10" fill="{ACC}" opacity="0.3"/>')
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+8}" fill="{TXT}" font-size="26" text-anchor="middle" font-weight="700">(x,y)</text>')
            else:
                parts.append(f'<text x="{x+s/2}" y="{y+s/2+8}" fill="{SUB}" font-size="22" text-anchor="middle">&#183;</text>')
    for (r,c,lbl) in [(0,0,'A'),(0,2,'B'),(2,0,'C'),(2,2,'D')]:
        x = ex + c*(s+gap); y = ey + r*(s+gap)
        parts.append(f'<text x="{x+s/2}" y="{y+s/2+30}" fill="{INFO}" font-size="13" text-anchor="middle">(x{r},y{c})</text>')
    parts.append(f'<line x1="640" y1="240" x2="640" y2="300" stroke="{BORD}" stroke-width="1"/>')
    parts.append(f'<text x="640" y="330" fill="{SUB}" font-size="18" text-anchor="middle" font-family="monospace">for dx in -1..1:</text>')
    parts.append(f'<text x="640" y="360" fill="{SUB}" font-size="18" text-anchor="middle" font-family="monospace">  for dy in -1..1:</text>')
    parts.append(f'<text x="640" y="390" fill="{SUB}" font-size="18" text-anchor="middle" font-family="monospace">    if !(dx==0 &amp;&amp; dy==0): count += mine[x+dx][y+dy]</text>')
    parts.append(f'<text x="640" y="430" fill="{MUT}" font-size="15" text-anchor="middle" font-style="italic">三层循环遍历 9 格，跳过中心 (dx==0 &amp;&amp; dy==0) 即得到 8 个邻居</text>')
    parts.append('</svg>')
    return "\n".join(parts)

# ============================================================
# 5) FIG4 递归水波
# ============================================================
def build_fig4():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    parts.append(f'<text x="640" y="70" fill="{TXT}" font-size="24" text-anchor="middle" font-weight="700">连锁展开：从一颗空格开始的递归水波</text>')
    N = 9; s = 44; gap = 6
    ex = 640 - (N*s+(N-1)*gap)//2; ey = 150
    for r in range(N):
        for c in range(N):
            x = ex + c*(s+gap); y = ey + r*(s+gap)
            d = abs(r-4)+abs(c-4)
            parts.append(cell_rect(x, y, s))
            if d <= 3:
                ap = 0.30 - 0.07*d
                if d == 0:
                    ap = 0.4
                parts.append(f'<rect x="{x}" y="{y}" width="{s}" height="{s}" rx="8" fill="{ACC}" opacity="{ap:.2f}"/>')
    for (r,c,lbl) in [(4,4,'Expand(x,y)'), (3,4,'x-1'), (5,4,'x+1'), (4,3,'y-1'), (4,5,'y+1')]:
        x = ex + c*(s+gap); y = ey + r*(s+gap)
        parts.append(f'<text x="{x+s/2}" y="{y+s/2+6}" fill="{TXT}" font-size="14" text-anchor="middle" font-weight="700">{lbl}</text>')
    parts.append(f'<text x="640" y="{ey+N*(s+gap)+40}" fill="{SUB}" font-size="16" text-anchor="middle">递归出口：遇到数字即停（不再外扩）；遇到空格则继续向 8 邻居扩散</text>')
    parts.append(f'<text x="640" y="{ey+N*(s+gap)+66}" fill="{MUT}" font-size="14" text-anchor="middle" font-style="italic">蓝色越深 = 离中心越近（扩散层级）</text>')
    parts.append('</svg>')
    return "\n".join(parts)

# ============================================================
# 6) FIG5 游戏主循环流程图
# ============================================================
def build_fig5():
    W, H = 1280, 720
    parts = [svg_open(W, H)]
    parts.append(f'<text x="640" y="58" fill="{TXT}" font-size="26" text-anchor="middle" font-weight="700">游戏主循环：每一步怎么走</text>')
    nodes = [
        "开始：显示菜单与棋盘",
        "读取玩家坐标  ReadCoord()",
        "坐标合法？否则提示并重新输入",
        "该格已揭开？是则跳过本次",
        "是雷？是则结算失败并结束",
        "数周围 8 格的雷数  GetMineCount()",
        "雷数为 0  →  递归展开  Expand()",
        "否则只显示数字",
        "全部安全格揭开？是则胜利",
    ]
    x = 430; w = 420; h = 44; top = 100; step = 62
    ys = [top + i*step for i in range(len(nodes))]
    for i, (label, y) in enumerate(zip(nodes, ys)):
        fill = ACC if i in (1, 5, 6) else SURF
        parts.append(cell_rect(x, y, w, fill, 8))
        parts.append(f'<text x="{x+w/2}" y="{y+h/2+6}" fill="{TXT}" font-size="17" text-anchor="middle">{label}</text>')
    for i in range(len(nodes)-1):
        y1 = ys[i] + h; y2 = ys[i+1]
        parts.append(f'<line x1="640" y1="{y1}" x2="640" y2="{y2-4}" stroke="{BORD}" stroke-width="1.5"/>')
        parts.append(f'<path d="M634,{y2-12} L640,{y2-4} L646,{y2-12} Z" fill="{SUB}"/>')
    parts.append(f'<text x="640" y="{ys[-1]+h+34}" fill="{SUB}" font-size="15" text-anchor="middle">从 ReadCoord 拿到坐标后：先判合法 → 再判是否已揭开 → 再判是否踩雷 → 最后数雷并决定展开或显示数字。</text>')
    parts.append('</svg>')
    return "\n".join(parts)

svgs = {"cover": build_cover, "fig1": build_fig1, "fig2": build_fig2, "fig3": build_fig3, "fig4": build_fig4, "fig5": build_fig5}
for name, fn in svgs.items():
    svg = fn()
    with open(f"{OUT}/{name}.svg", "w", encoding="utf-8") as f:
        f.write(svg)
    print(f"wrote {name}.svg ({len(svg)} bytes)")
print("SVGs generated.")
