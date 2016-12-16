
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
include 'actions/config.inc';

if (($dbname == "" || $username =="" || $password=="") ||($_POST["step"] != null)) {
    include 'template/install_templ.inc';
}
else
{
    include 'actions/url_split.inc';
    //echo '<p>Here comes our new design...</p>';
}
?>



