<?php
    session_start();
/**
 * Created by PhpStorm.
 * User: mitko
 * Date: 14.11.16
 * Time: 13:19
 */?>
<?php
    //Installing the blog
    if ($_SESSION[INSTALL_PROCESS] == true) {
        $myfile = fopen("config.inc", "w") or die("Unable to open file!");

        $text = '$servername = "localhost"';
        fwrite($myfile, $txt);


        $text = '$username = "'.$_POST["user"].'";';
        fwrite($myfile, $txt);

        $text = '$password = "'.$_POST["password"].'";';
        fwrite($myfile, $txt);

        $text = '$dbname ="'.$_POST["dbname"].'";"';
        fwrite($myfile, $txt);

        fclose($myfile);
    }
    else { //Check if there is a valid DataBase without checking the DataBase itself.

        include 'config.inc';
        if ($dbname == "" || $username =="" || $password=="") {

            $_SESSION["installed"] = false;
            echo '<h2> Your blog Database needs to be configured!';
            include '/actions/get_db_info.inc';
        }
        else {
            include '/actions/setupDB.inc';
        }
    }
?>

<?php
    if ($site_location =='frontpage') {
        include '/template/front_main.tpl';
    }
    else{
        include '/template/front_main.tpl';
    }
 ?>


