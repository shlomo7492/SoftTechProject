<h1 style="left:50px;
            margin-left:20px;
            margin-top:50px;
            position:relative;
            font:bold 2em arial;
            color:#644;">
    Seting up your new Blog site
</h1>
<?php
//installing in few steps
    if ($dbname == "" || $username =="" || $password=="") {

       if ($_POST["step"]==1) {
           include 'actions/config_update.inc';
        }
        else{
            include 'actions/get_db_info.inc';

        }
    }
    else {
        if ($_POST["step"]== 2) {
            include 'actions/setupDB.inc';
        }

        if ($_POST["step"]== 3) {
            include 'actions/admin_data.inc';
        }

        if ($_POST["step"]== 4) {
            include 'actions/admin_config.inc';
            //$_POST['step'] = 0;
        }
    }

?>

