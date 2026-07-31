const sharp = require('sharp');
const svg = `<svg xmlns="http://www.w3.org/2000/svg" width="400" height="200" viewBox="0 0 400 200">
  <rect width="400" height="200" fill="#0A0A0B"/>
  <text x="20" y="60" fill="#FFFFFF" font-size="32" font-family="sans-serif">扫雷 双棋盘</text>
  <text x="20" y="120" fill="#A78BFA" font-size="28" font-family="serif">Minesweeper 测试</text>
  <text x="20" y="170" fill="#22D3EE" font-size="24">123 数字</text>
</svg>`;
sharp(Buffer.from(svg)).png().toFile('D:\\VS2026_Files\\test_7_31\\csdn_minesweeper\\_cjk_test.png', (err) => {
  if (err) { console.error('ERR', err); process.exit(1); }
  console.log('OK wrote _cjk_test.png');
});
