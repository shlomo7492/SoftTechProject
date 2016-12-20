<h2> Delete Article: </h2>
<div class="formFrame">

    <!--Form to get all admin user data-->

    <form action="?article/delete/<?php echo $article_id;?>" method="post">
       <div><h3>Do you really want to delete this article? If you do so, the article will be deleted permanently and couldn't be restored.</h3></div>
        <div>
            <input type="hidden" name="config" value="true"><br>
            <input type="submit" value="Delete" class="delete">
            <span class="submit" id="cancel"><a href="?article/view/<?php echo $article_id;?>">Cancel</a></span>

        </div>
    </form>

</div>