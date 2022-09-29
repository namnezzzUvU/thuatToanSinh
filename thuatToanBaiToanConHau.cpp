/*
trên bàn cờ n*n,có n quân hậu, đặt, 
mỗi hàng 1 quân hậu sao cho chúng k ăn nhau, 
liệt kê các cách đặt quân.
*/


/* hướng giải:
nếu mỗi hàng đặt 1 quân hậu, 
ta chỉ cần dùng mảng 1 chiều liệt kê
với x[i]=j, với i là hàng, j là cột.
do mỗi hàng 1 quân nên ta chỉ cần lo 
về hàng dọc và chéo ( hậu ăn ngang, dọc, chéo)

+> về hàng chéo, nhìn hình sau:
        /               \
       /(chéo xuôi)      \   (chéo ngược)                    
      /                   \
        1 2 3 4 5    (i)          
      1  
      2   
      3  
      4   
      5  
      (j)
ta thấy, chéo xuôi có tọa độ x=i+j luôn bằng nhau
chéo ngược có ng=i-j luôn bằng nhau
=>   2<=x<=2n        1-n<=ng<=n-1
xét mảng ngược và xuôi, quy GTNN=1
=>   nguoc[i-j+n] và xuôi[i+j-1]
*/
