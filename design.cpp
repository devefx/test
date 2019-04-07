



class Character
{

public:
     void moveto(int x, int y);

private:
    std::string name;
    Color nameColor;
    std::string title;
    Color titleColor;
    int positionX;
    int positionY;
    Direction direction;

    Function<Void, Character> mousemoveListeners;
    Function<Void, Character> clickListeners;
    
   



}

class Event : Character {



}

class Player : Character {


}

class TiledMap {

    static TiledMap* create();

    

}

class SceneMap
{

    private String name;
    private int width;
    private int height;
    private boolean[][] passages;

    private List<Character> characters;
    

}

// 朝向
enum Direction
{
    UP          = 0,
    DOWN        = 1,
    LEFT        = 2,
    RIGHT       = 3,
    LEFT_UP     = 4,
    RIGHT_UP    = 5,
    LEFT_DOWN   = 6,
    RIGHT_DOWN  = 7
}

// 模型类型
enum ModelType 
{
    BODY_NORMAL     = 0,
    BODY_RIDE       = 1,
    MOUNT_BODY      = 2,
    MOUNT_ORNAMENT  = 3,
    WEAPON          = 4
}

// 模型状态
enum ModelStatus
{
    STAND   = 0,
    MOVING  = 1
}

// 移动类型
enum MoveType
{
    FIX     = 0,
    RANDOM  = 1,
    NEAR    = 2
}

// 触发类型
enum TriggerType
{
    CLICK   = 0,
    TOUCH   = 1,

}


SpritesetMap* map = SpritesetMap::load("1.map");

for (event : game_map.events) 
{
    Event* event = Event::newInstance();
    event.set_name(event.name);
    event.set_title(event.title);
    event.set_name_color(event.name_color);
    event.set_title_color(event.title_color);
    event.set_position_x(event.position_x);
    event.set_position_y(event.position_y);
    event.set_direction(event.direction);

    event.set_shadow();
    for (auto model : event.model_animations)
    {


    }


    event.set_animation(ModelType::BODY_NORMAL, );




}

{
    "id": 1,
    "position_x": 20,
    "position_y": 20,
    "pages": [
        {
            "graphic": 
            {
                "name": "炊事员",
                "title": "乐于助人",
                "name_color": 0,
                "title_color": 0,
                "direction": 1,
                "model_animations": [
                    {
                        "type": 0,
                        "status": 0,
                        "resource_id": 1,
                        "colours": []
                    }
                ]
            }
        },
        "move_type": 0,
        "move_speed": 2,
        "direction_fix": false,
        "through": true,
        "trigger": 0,
        "condition": [Script],
        "script": [Script]
    ],
    
}


// command 执行器应该属于业务编码，需要在

condition = function()
    if gPlayer.hasTask(1) then
        return true
    return false
end

script = function()
    // 应该支持自动换行和分页处理
    Command.OpenDialog(string.format("你好%s，请问需要什么帮您的？", gPlayer.name), {
        '是' = function() 
            // 添加物品、接受任务
        end,
        '否' = function()
            Command.CloseDialog()
        end
    }, "head_img")




end


