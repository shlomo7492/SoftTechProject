<form action="?profile/edit" method="post">
    <input type="hidden" name="edit" value="true">

    <input type="submit" value="Edit" class="edit">
</form>
<?php if ($_SESSION['userID']!=1) { ?>
<form action="?profile/delete" method="post">
    <input type="hidden" name="delete"  value="true">

    <input type="submit" value="Delete" class="delete">
</form>
<?php } ?>