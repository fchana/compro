# Dust Sensor
## Abstract
&emsp;โปรเจคเครื่องวัดฝุ่น ทำหน้าที่วัดฝุ่นในหน่อย 1 microgram/cubic meter โดยหลักการทำงานคือ sensor จะทำหน้าที่ยิง Infrared เพื่อวัดความหนาแน่นของฝุ่นแล้วส่งข้อมูลไปยัง Arduino board เป็นหน่อยของแรงดันไฟฟ้า 0-1024 โดยที่จะต้องนำไปเข้าสูตรคำนวณเพื่อให้ออกมาเป็นค่าที่ถูกต้อง

## รายชื่อผู้จัดทำ
   - 62070037 นายเฉลิมวุฒิ ชั้นเจริญ
   - 62070042 นายชนาธิป อมรชีวศิลปกุล
   - 62070108 นายบริบูรณ์ ศรีเอนกราธา
   - 62070120 นายปิยปาณ สุขมากอนันต์
   
|<img src="https://scontent.fbkk12-3.fna.fbcdn.net/v/t1.0-9/93913288_2101258343351701_1598829665022115840_o.jpg?_nc_cat=102&_nc_sid=e3f864&_nc_eui2=AeHfSuqdyg_kRaK20sGHMTSEyrlLBmLc6yDKuUsGYtzrIIsAfQFRLTkpyNdvIOjR2zkP7nTZGKcewzl2jDMcI0Cm&_nc_oc=AQnom1hQjeknGhH_ZCP4XcvWBt7_TlCMkkLfpt_sDTio3jSyX1R_Z1PV01vwzXNIHAI&_nc_ht=scontent.fbkk12-3.fna&oh=ef9ec4a7c2a034ebe48882e59708944b&oe=5EDC431F" width="120px" height="120px">|<img src="https://scontent.fbkk8-2.fna.fbcdn.net/v/t1.0-9/72843523_1215239785345622_1726860380963078144_n.jpg?_nc_cat=107&_nc_sid=174925&_nc_eui2=AeFgLkNtBgakqd26mI2dxbWVy2KdXw2ygUfLYp1fDbKBR9tFdVkLzKmsCIuL8kChQsnWUWMlNqaVTE2rIM8SrxSp&_nc_oc=AQkseVlIPAHMYuThyXWvy8UJhpSFDkv1VwqAza7zEZRJ0LsOBfrrpMR3RiGgBY9lRGg&_nc_ht=scontent.fbkk8-2.fna&oh=0bb1c62e3e520975f7ffd5f2c5d53ee2&oe=5ED95BDD" width="120px" height="120px">|<img src="https://scontent.fbkk12-4.fna.fbcdn.net/v/t1.0-9/37549536_1038777826297990_1612749808647274496_n.jpg?_nc_cat=110&_nc_sid=174925&_nc_eui2=AeEM3_u_Lj5YVtn6ockbN38KT9e87lVx9VNP17zuVXH1U_lFu0sk6QYQxvQ3qQ1LxTG6le3fFPbyLMx6OjXRHNbP&_nc_oc=AQmjTqnTui6kaHL4mFI2nbkh37TibQY76CNbTUujUpIIMNKsX89uWIiVl11uzlRfXV4&_nc_ht=scontent.fbkk12-4.fna&oh=c489eb9da6c7bcf45e88e3f8f1717099&oe=5EDC00F7" width="120px" height="120px">|<img src="https://scontent.fbkk8-2.fna.fbcdn.net/v/t1.0-9/38752158_753445171665212_4286835153382146048_n.jpg?_nc_cat=107&_nc_sid=09cbfe&_nc_eui2=AeGFBLIqvti-LQEAdPIzWR_PegqYiTeimS96CpiJN6KZL9akAObQaeYZ0IxLkAb55U_ciJiiUOlPSAmBq9QtSyRl&_nc_oc=AQlxuQejvpsnuAv1Rhozy20S4__48XaewtV31OomoyNlmYSUxxH5zCu3-cUHv7R6xbk&_nc_ht=scontent.fbkk8-2.fna&oh=cdefe2a62fe6c5202901ecf1725290d2&oe=5EDABC92" width="120px" height="120px">|
|:---:|:---:|:---:|:---:|
|นายเฉลิมวุฒิ<br>ชั้นเจริญ|นายชนาธิป<br>อมรชีวศิลปกุล|นายบริบูรณ์<br>ศรีเอนกราธา|นายปิยปาณ<br>สุขมากอนันต์|
|62070037|62070042|62070108|62070120|


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
- Time.h
- TridentTD_Linenotify.h
- LiquidCystal.h
## Poster

## อาจารย์ประจำวิชา

<table>
<thead>
<tr>
<th align="center"><img src="https://www.it.kmitl.ac.th/wp-content/uploads/2017/12/Panwit.jpg" alt="" style="max-width:15%;"></a></th>
<th align="center"><img src="https://www.it.kmitl.ac.th/wp-content/uploads/2018/03/Kitsuchart.jpg" alt="" style="max-width:15%;"></a></th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"> Asst Profressor Kitsuchart Pasupa<br>ผศ. ดร. กิติ์สุชาต พสุภา</td>
<td align="center"> Asst Profressor Panwit Tuwanut<br>ผศ. ดร. ปานวิทย์ ธุวะนุติ</td>
</tr>
</tbody>
</table>
![Dust](https://media.giphy.com/media/d2Z7keyUwp4rzuG4/giphy.gif)
