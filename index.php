<link rel="stylesheet" type="text/css" href="css/styles.css">
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
    include 'config.inc';
    if (($dbname == "" || $username =="" || $password=="") ||($_POST["step"] != null)) {
        include 'install.inc';
    }
    else
    {
        echo '<p>Here comes our new design...</p>';
    }
?>




