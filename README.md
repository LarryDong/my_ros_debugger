
# ROS 调试工具
由于总是出现各种各样的bug，专门开一个repo和文件，记录ROS调试中的一些心得。


## ROS的日志：
ROS日志包括以下等级：DEBUG(绿色), INFO(白色), WAREN(黄色), ERROR(红色), FATAL(直接终止)  
在默认下，显示INFO及以上的信息，输出到屏幕或者LOG。

**只有当log等级设置为 DEBUG 或者 ALL 时，DEBUG级别的信息才会输出。**
- 如何设置？  
临时设置（节点或roscore重启后失效）：
启动：rosrun rqt_logger_level rqt_logger_level
点击左侧ROS节点列表，修改右侧的log等级。

- log输出在哪里？  
默认情况下，ROS会将所有日志（包括DEBUG级别的日志）保存到~/.ros/log目录下的日志文件中。  
日志文件的路径通常为：~/.ros/log/<run_id>/<node_name>_<pid>.log

**ROS_INFO的加强版：**

`ROS_INFO_ONCE`：只输出一次。在循环中只报第一次的错误。  
`ROS_INFO_COND(cond, "INFO")`：只有在满足 cond 下输出 "INFO" 信息。  
`ROS_INFO_THROTTLE(interval, "XXX")`：每 interval 秒输出一次，不高于这个频率。  
当然，INFO 可以是 INFO_STREAM，DEBUG，FATAL等。


