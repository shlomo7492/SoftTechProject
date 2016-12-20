<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Article :: Edit</title>
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
        if ($_POST["edit"]==true) {
            include 'actions/article_edit.inc';
                $_POST=array();


        }elseif($_POST['edit_config']==true){

            include 'actions/article_edit_config.inc';
            $_POST=array();

            echo '<script type="text/javascript">window.location = "?article/view/'.$article_id.'"</script>';
        }
        else{
            echo '<script type="text/javascript">window.location = "?article/view/'.$article_id.'"</script>';
        }


    ?>
</main>
</body>

</html>