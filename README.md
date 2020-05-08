# Dust Sensor
### เครื่องวัดความหนาเเน่นของฝุ่น
&emsp;โปรเจคเครื่องวัดฝุ่น ทำหน้าที่วัดฝุ่นในหน่อย 1 microgram/cubic meter โดยหลักการทำงานคือ sensor จะทำหน้าที่ยิง Infrared เพื่อวัดความหนาแน่นของฝุ่นแล้วส่งข้อมูลไปยัง Arduino board เป็นหน่อยของแรงดันไฟฟ้า 0-1024 โดยที่จะต้องนำไปเข้าสูตรคำนวณเพื่อให้ออกมาเป็นค่าที่ถูกต้อง

## รายชื่อผู้จัดทำ
   - 62070037 นายเฉลิมวุฒิ ชั้นเจริญ
   - 62070042 นายชนาธิป อมรชีวศิลปกุล
   - 62070108 นายบริบูรณ์ ศรีเอนกราธา
   - 62070120 นายปิยปาณ สุขมาก


## อาจารย์ประจำวิชา
   - รศ.ดร.ปานวิทย์ ธุวะนุติ

## Required Components
<table>
<thead>
<tr>
<th align="center">220uF Capacitor</th>
<th align="center">Arduino NodeMcu V3 Wireless Module</th>
<th align="center">Resistors 150 Ω </th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a align="center"><img src="https://d10b75yp86lc36.cloudfront.net/Monotaro3/pi/full/mono16499062-151119-02.jpg" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center"><img src="https://fy.lnwfile.com/3udrwk.png" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center"><img src="https://images-na.ssl-images-amazon.com/images/I/61FPCPlr0mL._SY355_.jpg" width="200px" style="max-width:100%;"></a></td>
</tr>
</tbody>
</table>

<table>
<thead>
<tr>
<th align="center">dust sensor sharp gp2y1010au0f</th>
<th align="center">Jumper Wire</th>
<th align="center">LCD 16x2 i2c</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a align="center"><img src="https://o.lnwfile.com/wh6fx0.jpg" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center"><img src="https://asset.conrad.com/media10/isa/160267/c1/-/en/001970437PI01/image.jpg" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center"><img src="https://th.cytron.io/image/cache/catalog/products/DS-LCD-162A-I2C/DS-LCD-162A-I2C-6-1-2-800x800.jpg" width="200px" style="max-width:100%;"></a></td>
</tr>
</tbody>
</table>

<table>
<thead>
<tr>
<th align="center">potentiometer 10k Ω</th>
<th align="center">Power Supply หรือ Power bank</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a align="center"><img src="https://j.lnwfile.com/wgxwnq.jpg" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center"><img src="https://www.yoobao.co.th/wp-content/uploads/2017/09/p_1914026-1000x1000.jpg" width="200px" style="max-width:100%;"></a></td>
</tr>
</tbody>
</table>

## Library in Use

![Dust](https://media.giphy.com/media/d2Z7keyUwp4rzuG4/giphy.gif)
