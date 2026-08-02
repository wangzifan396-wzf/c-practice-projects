const sharp = require('sharp');
const base = 'D:/VS2026_Files/test_7_31/csdn_minesweeper/images/';
const names = ['cover', 'fig1', 'fig2', 'fig3', 'fig4', 'fig5'];
(async () => {
  for (const n of names) {
    await sharp(base + n + '.svg', { density: 192 })
      .resize(1280, 720)
      .png()
      .toFile(base + n + '.png');
    console.log('rasterized', n);
  }
  console.log('ALL DONE');
})();
