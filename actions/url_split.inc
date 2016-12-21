<?php
//spliting url to array
$str = strtolower($_SERVER['REQUEST_URI']);
$str = str_replace(array("?","|"), '/', $str);
$urlArray = array_map('trim', explode('/', $str));

//removing null values due to leading / in the url
foreach($urlArray as $key => $link)
{
    if($link === '')
    {
        unset($urlArray[$key]);
    }
}
//getting the actions according the length of the array
$length=count($urlArray);
switch ($length){
    case 0:{
        include 'template/front_page_templ.inc';
    }
    break;
    case 1:{
        if ($urlArray[1] == 'softtechproject'){
            include 'template/front_page_templ.inc';
        }
        else{
            switch ($urlArray[1]){
                case 'login':{
                    include 'template/login_page_templ.inc';
                }
                    break;
                case 'logout':{
                    include 'template/logout_page_templ.inc';
                }
                    break;
                case 'register':{
                    include 'template/register_page_templ.inc';
                }
                    break;
                case 'profile':{
                    include 'template/profile_page_templ.inc';
                }
                    break;
                case 'contact':{
                    include 'template/contact_page_templ.inc';
                }
                    break;
                case 'sitenews':{
                    include 'template/sitenews_page_templ.inc';
                }
                    break;
                case 'blogs':{
                    include 'template/blog_page_templ.inc';
                }
                    break;
                case 'users':{
                    include 'template/profile_list_view_templ.inc';
                }
                    break;
                case 'categories':{
                    include 'template/categories_list_view_templ.inc';
                }
                    break;
                case 'taxonomy':{
                    include 'template/taxonomy_dict_view_templ.inc';
                }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }
        }
    }
        break;
    case 2:{
        if ($urlArray[1] == 'softtechproject'){
            switch ($urlArray[3]){
                case 'login':{
                    include 'template/login_page_templ.inc';
                }
                    break;
                case 'logout':{
                    include 'template/logout_page_templ.inc';
                }
                    break;
                case 'register':{
                    include 'template/register_page_templ.inc';
                }
                    break;
                case 'profile':{
                    include 'template/profile_page_templ.inc';
                }
                    break;
                case 'contact':{
                    include 'template/contact_page_templ.inc';
                }
                    break;
                case 'sitenews':{
                    include 'template/sitenews_page_templ.inc';
                }
                    break;
                case 'blogs':{
                    include 'template/blog_page_templ.inc';
                }
                    break;
                case 'users':{
                    include 'template/profile_list_view_templ.inc';
                }
                    break;
                case 'categories':{
                    include 'template/categories_list_view_templ.inc';
                }
                    break;
                case 'taxonomy':{
                    include 'template/taxonomy_dict_view_templ.inc';
                }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
        else{
            switch ($urlArray[1]){

                case 'article':{
                    switch ($urlArray[2]){
                        case 'create':{
                            include 'template/createarticle_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;

                case 'profile':{
                    switch ($urlArray[2]){
                        case 'edit':{
                            include 'template/editprofile_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteprofile_page_templ.inc';

                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
    }
        break;
    case 3:{
        if ($urlArray[1] == 'softtechproject'){
            switch ($urlArray[3]){
               case 'article':{
                    switch ($urlArray[4]){
                        case 'create':{
                            include 'template/createarticle_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;

                case 'profile':{
                    switch ($urlArray[4]){
                        case 'edit':{
                            include 'template/editprofile_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deleteprofile_page_templ.inc';

                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }                             }
                    break;
                default:{
                    echo "<h1>404:Page not found!!!</h1>";

                }
                    break;
            }
        }
        else{
            switch ($urlArray[1]){

                case 'article':{
                    $article_id = intval($urlArray[3]);
                    switch ($urlArray[2]){
                        case 'edit':{
                            include 'template/editarticle_page_templ.inc';
                        }
                            break;
                        case 'view':{
                            include 'template/article_view_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deletearticle_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;

                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }

        }

    }
        break;
    case 4:{
        if ($urlArray[1] == 'softtechproject') {
            switch ($urlArray[3]){

                case 'article':{
                    $article_id = intval($urlArray[5]);
                    switch ($urlArray[4]){
                        case 'edit':{
                            include 'template/editarticle_page_templ.inc';
                        }
                            break;
                        case 'view':{
                            include 'template/article_view_page_templ.inc';
                        }
                            break;
                        case 'delete':{
                            include 'template/deletearticle_page_templ.inc';
                        }
                            break;
                        default:{
                            echo "<h1>404:Page not found!!!</h1>";
                        }
                            break;
                    }
                }
                    break;

                default:{
                    echo "<h1>404:Page not found!!!</h1>";
                }
                    break;
            }

        }

    }

        break;
    default:{

    }
        break;
}

?>