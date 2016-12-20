<h2> Edit Article: </h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?article/edit/<?php echo $article_id;?>" method="post">
        <div>
            <br><br>
            <label for="titleID">Title</label>
            <input type="text" name="title" id="titleID" size="50" value="<?php echo $_POST['title']; ?>"><br><br>
            <label for="contentID">Content:</label><textarea  name="content" id="contentID"><?php echo $_POST['content']; ?>
            </textarea><br><br>
        </div>
        <div>
            <input type="hidden" name="edit_config" value="true"><br>
            <input type="reset" value="Reset" class="reset">
            <input type="submit" value="Edit" class="edit">
        </div>
    </form>
</div>