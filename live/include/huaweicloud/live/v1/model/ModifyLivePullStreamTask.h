
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyLivePullStreamTask_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyLivePullStreamTask_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyLivePullStreamTask
    : public ModelBase
{
public:
    ModifyLivePullStreamTask();
    virtual ~ModifyLivePullStreamTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyLivePullStreamTask members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// pause停用/enable启用
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 拉流源URL
    /// </summary>

    std::vector<std::string>& getSourceUrls();
    bool sourceUrlsIsSet() const;
    void unsetsourceUrls();
    void setSourceUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 缺省值”-1”。-1：无限轮播，以结束时间为准；N：按文件列表播放N轮，以播放完成和结束时间先到的为准。不传、为空（\&quot;\&quot;）时按缺省值生效
    /// </summary>

    std::string getVodLoopTime() const;
    bool vodLoopTimeIsSet() const;
    void unsetvodLoopTime();
    void setVodLoopTime(const std::string& value);

    /// <summary>
    /// 缺省值 immediate_new_source，可选 immediate_new_source、continue_from_file_start、continue_from_break_point
    /// </summary>

    std::string getVodRefreshType() const;
    bool vodRefreshTypeIsSet() const;
    void unsetvodRefreshType();
    void setVodRefreshType(const std::string& value);

    /// <summary>
    /// 缺省值 0，指定播放文件的下标，从0开始表示第一个文件，最大值 len(source_urls)-1
    /// </summary>

    int32_t getVodStartVideoIndex() const;
    bool vodStartVideoIndexIsSet() const;
    void unsetvodStartVideoIndex();
    void setVodStartVideoIndex(int32_t value);

    /// <summary>
    /// 任务启动时间，时间格式： \&quot;2006-01-02T15:04:05Z\&quot; 必须小于结束时间，缺省为当前时间
    /// </summary>

    utility::datetime getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const utility::datetime& value);

    /// <summary>
    /// 任务结束时间，时间格式： \&quot;2006-01-02T15:04:05Z\&quot; 必须大于开始时间，至多为开始时间+7天
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 缺省值 0，指定从上述指定文件的第几秒开始播放
    /// </summary>

    int32_t getVodStartVideoTime() const;
    bool vodStartVideoTimeIsSet() const;
    void unsetvodStartVideoTime();
    void setVodStartVideoTime(int32_t value);

    /// <summary>
    /// 要回调的事件列表（不填则回调全部） - TaskStart：任务启动回调 - TaskExit：任务停止回调 - VodSourceFileStart 仅PullVodPushLive可用，文件启动切换 - VodSourceFileFinish 仅PullVodPushLive可用，文件播放完毕 - ResetTaskConfig 仅PullVodPushLive可用，任务更新 - TaskAlarm: 用于告警事件通知
    /// </summary>

    std::vector<std::string>& getCallbackEvents();
    bool callbackEventsIsSet() const;
    void unsetcallbackEvents();
    void setCallbackEvents(const std::vector<std::string>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> sourceUrls_;
    bool sourceUrlsIsSet_;
    std::string vodLoopTime_;
    bool vodLoopTimeIsSet_;
    std::string vodRefreshType_;
    bool vodRefreshTypeIsSet_;
    int32_t vodStartVideoIndex_;
    bool vodStartVideoIndexIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    int32_t vodStartVideoTime_;
    bool vodStartVideoTimeIsSet_;
    std::vector<std::string> callbackEvents_;
    bool callbackEventsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyLivePullStreamTask_H_
