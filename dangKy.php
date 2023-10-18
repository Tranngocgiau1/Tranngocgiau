<html>
    <head>
        <title>
            Đăng ký khách hàng
        </title>
    </head>

    <body>
        <?php
        require 'site.php';
        load_top();
        session_destroy();
        load_header();
        load_menu();
        ?>
        <?php
            if(isset($_POST['đn'])){
                $tendangnhap = $_POST['tdn'];
                $matkhau = $_POST['mk'];
                $nhaplaimatkhau = $_POST['nlmk'];
                $hoten = $_POST['hoten'];
                $ngaysinh = $_POST['ns'];
                $gioitinh =$_POST['gt'];
                $diachiemail = $_POST['dcemail'];
                $thunhap = $_POST['tn'];

                //1.kết nối
                $conn = mysqli_connect("localhost","root","","datatest") or die("khong ket noi duoc!");
                //2.3
                //4.
                $strcom = "insert into tbthongtin(tendangnhap, matkhau, hoten, ngaysinh, gioitinh, diachiemail, thunhap) values('".$tendangnhap."','".$matkhau."','".$hoten."','".$ngaysinh."','".$gioitinh."','".$diachiemail."','".$thunhap."')";
                $strcom2 = "select* from tbthongtin where tendangnhap ='".$tendangnhap."'";
                
                if($checktdn = mysqli_query($conn, $strcom2))
               {
                    if($row = mysqli_fetch_array($checktdn)) {
                        echo "<script>
                        alert('Ten dang nhap ton tai');
                        window.history.back();
                        </script>";
               }
                 else{
                    if($matkhau===$nhaplaimatkhau)
                 {
                     if($kq = mysqli_query($conn, $strcom))
                     {
                         echo "<script>alert('Dang ki thanh cong');
                                      window.history.back();
                     </script>";
                     }else
                    {
                        echo "<script>alert('Dang ki khong thanh cong');
                                      window.history.back();
                     </script>";
                     }
                 }
                 else
                 {
                    echo "<script>
                        alert('Mat khau khong khop');
                        window.history.back();
                        </script>";  
                 }
                 }
                  
                 myspli_close($conn);
            }
        }
                
        ?>
        <table align="center" style="border-style: solid;">
            <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
                <tr>
                    <td colspan="3" align="center"><b>Đăng Ký Khách Hàng</b></td>
                </tr>
                <tr>
                    <td colspan="3" align="left" style="background-color: gray; color: white" >Thông tin đăng nhập</td>
                </tr>
                <tr><td>Tên đăng nhập</td><td><input type="text" name="tdn" style="background-color: aqua;">
                    </td></tr>
                <tr>
                    <td>Mật khẩu</td><td><input type="password" name="nlmk" style="background-color: aqua;">
                    </td><td style="color: red;">(*)</td></tr>
                <tr>
                    <td>Nhập lại mật khẩu</td><td><input type="password" name="mk" style="background-color: aqua;"></td>
                    <td style="color: red;">(*)</td>
                </tr>
                <tr>
                    <td colspan="3" align="left" style="background-color: gray; color: white">Thông tin khách hàng</td>
                </tr>
                <tr>
                    <td>Họ tên khách hàng</td><td><input type="text" name="hoten" style="background-color: aqua;"></td>
                </tr>
                <tr>
                    <td>Ngày sinh</td><td ><input type="date" name="ns" style="background-color: aqua;"></td><td style="color: red;">(*)</td>
                </tr>
                <tr>
                    <td>Giới tính</td>
                    <td><input type="radio" name="gt">Nam<input type="radio" name="gt">Nữ</tr>
                <tr>
                    <td>Địa chỉ email</td><td><input type="text" name="dcemail" style="background-color: aqua;"></td>
                    <td style="color: red;">(*)</td></tr>
                <tr>
                    <td>Thu nhập</td><td><input type="number" name="tn" style="background-color: aqua;"></td></tr>
                <tr>
                    <td colspan="3" align="center"><input type="submit" name="đn" value="Đăng Ký" style="background-color: aqua;"></td></tr>
            </form>
        </table>
        <?php load_footer();?>
    </body>
</html>