# CSDN 扫雷文章 · 工作记录 (2026-07-31)

## 产出
- `article-source.md` (44 KB, 全文 12 H2 小节, 80 个代码围栏, 无绝对路径 / 无 TODO)
- `publish-metadata.json` (title 与 H1 严格相等, 5 标签, 摘要 ~200 字)
- `images/`：1 封面 + 4 正文 SVG → 经 sharp 0.35.3 栅格化为 1280×720 PNG
- `bundle/`：经 csdn-auto-flow 打包器产出, `validate_csdn_bundle.py` 校验
  - `valid: true / blockers: 0 / warnings: 0`
  - `articleCharacters: 12133 / h2Sections: 11 / codeFences: 80 / bodyImages: 4`

## 流程图
1. 读源（`article-source.md` + `publish-metadata.json`）
2. 画 5 张 ardot 暗色 SVG 配图 → sharp 栅格化 PNG
3. `run_pkg.py` 打包 → `validate_csdn_bundle.py` 校验
4. 写 `recent.json` 去重记录

## 设计令牌
画布 #0A0A0B / 卡 #141417 / 面 #1A1B1E；文本 #FFF/#A1A1AA/#71717A；
边框 rgba(255,255,255,.08)；强调 #5E6AD2，成功 #10B981，警告 #F5A623，
信息 #22D3EE，紫 #A78BFA，坏 #EF4444；圆角 6–14px。
