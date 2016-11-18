echo '<h1> Installing your blog</h1>';
echo '<h3>Please provide your Data Base information</h3>';


echo '
<form action="index.php" method="post">
    DataBase name: <input type="text" name="dbname"><br>
    User name: <input type="text" name="user"><br>
    Password: <input type="password" name="password"><br>
    <input type="submit" value="Setup my DataBase">
</form>
';
$_SESSION[INSTALL_PROCESS] = true;