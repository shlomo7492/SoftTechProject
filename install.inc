<h1 style="font:italic bold 0.875em arial;
        text-transform: uppercase;
        position:relative;
        top:30pt; left:80pt;">

    Seting up your new Blog site
</h1>
<div style="top:50pt;
        left:50pt;background:#ddf;
        width:550pt;padding:5pt;
        border: 1px solid #333; border-radius: 5pt;
        position:relative;">

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
</div>
