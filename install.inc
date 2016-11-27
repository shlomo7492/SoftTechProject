<div style="top:50pt;
        left:50pt;background:#88a;
        width:550pt;padding:5pt;
        border: 1pt #333;">

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
            $_POST['step'] = 0;
        }
    }
    if ($_POST["step"]== null)
    {
        echo 'null';
    }

?>
</div>
