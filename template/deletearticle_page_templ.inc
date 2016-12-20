<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: News :: Delete</title>
    <style>
        <?php include 'css/styles.css'; ?>
    </style>
    <script>
        <?php include 'js/myscript.js'; ?>
    </script>
</head>
<body onresize="onResize()" onpageshow="onResize()" >
<header id="header">
    <?php
    include 'actions/header.inc';
    ?>
</header>
<main id="main">
    <?php
    if ($_POST["delete"]==true) {
        include 'actions/article_delete.inc';
        $_POST=array();
    }elseif($_POST['config']==true){
        include 'actions/article_delete_config.inc';
        $_POST=array();
    }


    ?>
</main>
</body>

</html>