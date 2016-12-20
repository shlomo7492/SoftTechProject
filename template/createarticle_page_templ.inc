<!DOCTYPE html>
<html>
<head>
    <title>My Site title:: Article :: Create</title>
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
    if($_SESSION["logged"]==true){
        if ($_POST["create"]==true) {
            //updates the DB after submitting article create form
            include 'actions/article_config.inc';
            //gets the article_id of the last submitted by the user article
            include 'actions/article_get_last_id.inc';
            $_POST = array();
            //goes to the article/view/id page...
            echo '<script type="text/javascript">window.location = "?article/view/'.$article_id.'"</script>';
        } else{
            include 'actions/article_create.inc';
        }
    }
    ?>
</main>
</body>

</html>