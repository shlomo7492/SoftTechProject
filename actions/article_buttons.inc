<form action="?article/edit/<?php echo $article_id; ?>" method="post">
    <input type="hidden" name="title" id="title" value='<?php echo $title; ?>'>
    <input type="hidden" name="author" id="author" value='<?php echo $author; ?>'>
    <input type="hidden" name="content" id="content" value='<?php echo $content; ?>'>
    <input type="hidden" name="edit" value="true">

    <input type="submit" value="Edit" class="edit">
</form>
<form action="?article/delete/<?php echo $article_id; ?>" method="post">
    <input type="hidden" name="title" id="title" value='<?php echo $title; ?>'>
    <input type="hidden" name="author" id="author" value='<?php echo $author; ?>'>
    <input type="hidden" name="content" id="content" value='<?php echo $content; ?>'>
    <input type="hidden" name="delete" " value="true">

    <input type="submit" value="Delete" class="delete">
</form>