
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullTaskInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullTaskInfo_H_


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
/// 直播拉流转推任务信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  LivePullTaskInfo
    : public ModelBase
{
public:
    LivePullTaskInfo();
    virtual ~LivePullTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LivePullTaskInfo members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 任务执行区域
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
    /// 任务启动时间，时间格式： \&quot;2006-01-02T15:04:05Z\&quot;
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间，时间格式： \&quot;2006-01-02T15:04:05Z\&quot;  1. 结束时间必须大于开始时间； 2. 结束时间必须大于当前时间； 3. 结束时间 和 开始时间 间隔必须小于七天。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

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
    /// 缺省值”-1” -1：无限轮播，以结束时间为准；N：按文件列表播放N轮，以播放完成和结束时间先到为准。 不传、为空（\&quot;\&quot;）时按缺省值生效
    /// </summary>

    std::string getVodLoopTime() const;
    bool vodLoopTimeIsSet() const;
    void unsetvodLoopTime();
    void setVodLoopTime(const std::string& value);

    /// <summary>
    /// 指定播放文件的下标，从0开始表示第一个文件，最大值 len(source_urls)-1
    /// </summary>

    int32_t getVodStartVideoIndex() const;
    bool vodStartVideoIndexIsSet() const;
    void unsetvodStartVideoIndex();
    void setVodStartVideoIndex(int32_t value);

    /// <summary>
    /// 指定从上述指定文件的第几秒开始播放
    /// </summary>

    int32_t getVodStartVideoTime() const;
    bool vodStartVideoTimeIsSet() const;
    void unsetvodStartVideoTime();
    void setVodStartVideoTime(int32_t value);

    /// <summary>
    /// 修改任务时文件切换方式 immediate_new_source：立即播放新的拉流源内容 continue_from_file_start：从上次断流url文件重新开始推流 continue_from_break_point：从上次断流url文件断流位置开始推流（续上）
    /// </summary>

    std::string getVodRefreshType() const;
    bool vodRefreshTypeIsSet() const;
    void unsetvodRefreshType();
    void setVodRefreshType(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
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
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<std::string> callbackEvents_;
    bool callbackEventsIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string backupSourceType_;
    bool backupSourceTypeIsSet_;
    std::vector<std::string> backupSourceUrls_;
    bool backupSourceUrlsIsSet_;
    std::string vodLoopTime_;
    bool vodLoopTimeIsSet_;
    int32_t vodStartVideoIndex_;
    bool vodStartVideoIndexIsSet_;
    int32_t vodStartVideoTime_;
    bool vodStartVideoTimeIsSet_;
    std::string vodRefreshType_;
    bool vodRefreshTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_LivePullTaskInfo_H_
