
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullStreamTask_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullStreamTask_H_


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
class HUAWEICLOUD_LIVE_V1_EXPORT  LivePullStreamTask
    : public ModelBase
{
public:
    LivePullStreamTask();
    virtual ~LivePullStreamTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LivePullStreamTask members

    /// <summary>
    /// 任务执行区域，如果指定推流域名，则region需要与推流域名直播源站一致，缺省为租户归属region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 拉流源类型 PullLivePushLive：拉转推（拉直播推直播） PullVodPushLive：轮播（拉点播推直播）
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 拉流源URL 当 source_type 为 PullLivePushLive 时，只能填写一个URL 当 source_type 为 PullVodPushLive 时，可以指定多个轮播源文件URL
    /// </summary>

    std::vector<std::string>& getSourceUrls();
    bool sourceUrlsIsSet() const;
    void unsetsourceUrls();
    void setSourceUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 推流app
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 推流流名
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);

    /// <summary>
    /// 推流参数
    /// </summary>

    std::string getPushArgs() const;
    bool pushArgsIsSet() const;
    void unsetpushArgs();
    void setPushArgs(const std::string& value);

    /// <summary>
    /// 完整的目标URL。 如果指定此参数，domain、app_name和stream_name需要传入空字符串或不传。
    /// </summary>

    std::string getDestinationUrl() const;
    bool destinationUrlIsSet() const;
    void unsetdestinationUrl();
    void setDestinationUrl(const std::string& value);

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
    /// 轮播播放次数，仅当source_type为PullVodPushLive生效。缺省值”-1”。-1：无限轮播，以结束时间为准；N：按文件列表播放N轮，以播放完成和结束时间先到的为准。不传、为空（\&quot;\&quot;）时按缺省值生效
    /// </summary>

    std::string getVodLoopTime() const;
    bool vodLoopTimeIsSet() const;
    void unsetvodLoopTime();
    void setVodLoopTime(const std::string& value);

    /// <summary>
    /// 轮播文件播放形式，仅当source_type为PullVodPushLive生效。缺省值immediate_new_source immediate_new_source：立即播放新的文件源 continue_from_file_start：从上次断流URL文件重新播放（更新任务时有效） continue_from_break_point：从上次断流URL文件断流位置重新播放（更新任务时有效）
    /// </summary>

    std::string getVodRefreshType() const;
    bool vodRefreshTypeIsSet() const;
    void unsetvodRefreshType();
    void setVodRefreshType(const std::string& value);

    /// <summary>
    /// 指定播放文件的下标，仅当source_type为PullVodPushLive生效。缺省值 0，从0开始表示第一个文件，最大值 len(source_urls)-1
    /// </summary>

    int32_t getVodStartVideoIndex() const;
    bool vodStartVideoIndexIsSet() const;
    void unsetvodStartVideoIndex();
    void setVodStartVideoIndex(int32_t value);

    /// <summary>
    /// 缺省值 0，指定从上述指定文件的第几秒开始播放，仅当source_type为PullVodPushLive生效
    /// </summary>

    int32_t getVodStartVideoTime() const;
    bool vodStartVideoTimeIsSet() const;
    void unsetvodStartVideoTime();
    void setVodStartVideoTime(int32_t value);

    /// <summary>
    /// 备源的类型 - PullLivePushLive：直播 注意事项： 1. 仅当source_type为PullVodPushLive生效。 2. 主直播源拉流中断时，自动使用备源进行拉流。
    /// </summary>

    std::string getBackupSourceType() const;
    bool backupSourceTypeIsSet() const;
    void unsetbackupSourceType();
    void setBackupSourceType(const std::string& value);

    /// <summary>
    /// 备源URL，仅当source_type为PullVodPushLive生效。
    /// </summary>

    std::vector<std::string>& getBackupSourceUrls();
    bool backupSourceUrlsIsSet() const;
    void unsetbackupSourceUrls();
    void setBackupSourceUrls(const std::vector<std::string>& value);

    /// <summary>
    /// 要回调的事件列表（不填则回调全部） - TaskStart：任务启动回调 - TaskExit：任务停止回调 - VodSourceFileStart：仅PullVodPushLive可用，文件启动切换 - VodSourceFileFinish：仅PullVodPushLive可用，文件播放完毕 - ResetTaskConfig：仅PullVodPushLive可用，任务更新 - TaskAlarm：用于告警事件通知
    /// </summary>

    std::vector<std::string>& getCallbackEvents();
    bool callbackEventsIsSet() const;
    void unsetcallbackEvents();
    void setCallbackEvents(const std::vector<std::string>& value);

    /// <summary>
    /// 回调接收地址
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);


protected:
    std::string region_;
    bool regionIsSet_;
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::vector<std::string> sourceUrls_;
    bool sourceUrlsIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;
    std::string pushArgs_;
    bool pushArgsIsSet_;
    std::string destinationUrl_;
    bool destinationUrlIsSet_;
    utility::datetime startTime_;
    bool startTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    std::string vodLoopTime_;
    bool vodLoopTimeIsSet_;
    std::string vodRefreshType_;
    bool vodRefreshTypeIsSet_;
    int32_t vodStartVideoIndex_;
    bool vodStartVideoIndexIsSet_;
    int32_t vodStartVideoTime_;
    bool vodStartVideoTimeIsSet_;
    std::string backupSourceType_;
    bool backupSourceTypeIsSet_;
    std::vector<std::string> backupSourceUrls_;
    bool backupSourceUrlsIsSet_;
    std::vector<std::string> callbackEvents_;
    bool callbackEventsIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullStreamTask_H_
