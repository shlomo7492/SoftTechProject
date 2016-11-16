<?php
/**
 * Created by PhpStorm.
 * User: mitko
 * Date: 14.11.16
 * Time: 13:19
 */?>
<html>
<head>
    <title>MyBlog::</title>
</head>
<body>
<h1>Welcome to our new blog platform!</h1>
<h3>Here are some $_GET variables printed:</h3>

<?php
echo "Parameter passed -> " . $_GET['id'].$_SERVER["QUERY_STRING"];
?>
Here is something...Ok Start Editing so I will hav some changes to commit...
</br>
<?php
echo $_SERVER['PHP_SELF'];
echo "<br>";
echo $_SERVER['SERVER_NAME'];
echo "<br>";
echo $_SERVER['HTTP_HOST'];
echo "<br>";
echo $_SERVER['HTTP_REFERER'];
echo "<br>";
echo $_SERVER['HTTP_USER_AGENT'];
echo "<br>";
echo $_SERVER['SCRIPT_NAME'];
?>

</body>
</html>

