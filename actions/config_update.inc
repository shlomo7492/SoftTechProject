<h2> Updating your DataBase configurations.</h2>
<div class="formFrame">

    <?php
    //writing to config file
    echo "The configuration data is successfuly written into DataBase configuration file.";
    $myfile = fopen("action/config.inc", "w") or die("Unable to open file!");

    $text = '<?php $servername = "localhost";'."\n";
    fwrite($myfile, $text);


    $text = '$username = "'.$_POST["user"].'";'."\n";
    fwrite($myfile, $text);

    $text = '$password = "'.$_POST["password"].'";'."\n";
    fwrite($myfile, $text);

    $text = '$dbname ="'.$_POST["dbname"].'";'."\n".'?>';
    fwrite($myfile, $text);

    fclose($myfile);

    ?>
    <form action="index.php" method="POST">
        <input type="hidden" name="step" value="2">
        <input type="submit" value="Continue to step two &#9658;" class="submit">
    </form>
</div>