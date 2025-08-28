
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RTCLiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveJobLog.h>
#include <huaweicloud/metastudio/v1/model/RTCRoomInfoList.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/CoStreamerConfig.h>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <huaweicloud/metastudio/v1/model/PlatformLiveDetailInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowSmartLiveResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSmartLiveResponse();
    virtual ~ShowSmartLiveResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSmartLiveResponse members

    /// <summary>
    /// 数字人直播任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 直播间ID
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 直播间名称
    /// </summary>

    std::string getRoomName() const;
    bool roomNameIsSet() const;
    void unsetroomName();
    void setRoomName(const std::string& value);

    /// <summary>
    /// 数字人直播任务的状态。 * WAITING: 等待 * PROCESSING: 处理中 * SUCCEED: 成功 * FAILED: 失败 * BLOCKED: 封禁
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**： 数字人直播时长，单位秒。
    /// </summary>

    float getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(float value);

    /// <summary>
    /// 数字人直播任务开始时间。格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数字人直播任务结束时间。格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 数字人直播任务创建时间。格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 数字人直播任务最后更新时间。格式遵循：RFC 3339 如“2021-01-10T08:43:17Z”。
    /// </summary>

    std::string getLastupdateTime() const;
    bool lastupdateTimeIsSet() const;
    void unsetlastupdateTime();
    void setLastupdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RTCRoomInfoList getRtcRoomInfo() const;
    bool rtcRoomInfoIsSet() const;
    void unsetrtcRoomInfo();
    void setRtcRoomInfo(const RTCRoomInfoList& value);

    /// <summary>
    /// 直播事件上报地址。用户将自行获取的直播间事件上报到此地址，用于触发智能互动，自动回复话术。
    /// </summary>

    std::string getLiveEventReportUrl() const;
    bool liveEventReportUrlIsSet() const;
    void unsetliveEventReportUrl();
    void setLiveEventReportUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LiveEventCallBackConfig getLiveEventCallbackConfig() const;
    bool liveEventCallbackConfigIsSet() const;
    void unsetliveEventCallbackConfig();
    void setLiveEventCallbackConfig(const LiveEventCallBackConfig& value);

    /// <summary>
    /// 
    /// </summary>

    RTCLiveEventCallBackConfig getRtcCallbackConfig() const;
    bool rtcCallbackConfigIsSet() const;
    void unsetrtcCallbackConfig();
    void setRtcCallbackConfig(const RTCLiveEventCallBackConfig& value);

    /// <summary>
    /// **参数解释**： 数字人直播推流时长，单位秒。
    /// </summary>

    float getStreamDuration() const;
    bool streamDurationIsSet() const;
    void unsetstreamDuration();
    void setStreamDuration(float value);

    /// <summary>
    /// 封禁信息
    /// </summary>

    std::string getBlockReason() const;
    bool blockReasonIsSet() const;
    void unsetblockReason();
    void setBlockReason(const std::string& value);

    /// <summary>
    /// 直播间封面图URL
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CoStreamerConfig getCoStreamerConfig() const;
    bool coStreamerConfigIsSet() const;
    void unsetcoStreamerConfig();
    void setCoStreamerConfig(const CoStreamerConfig& value);

    /// <summary>
    /// 
    /// </summary>

    LiveJobLog getLiveJobLog() const;
    bool liveJobLogIsSet() const;
    void unsetliveJobLog();
    void setLiveJobLog(const LiveJobLog& value);

    /// <summary>
    /// 
    /// </summary>

    PlatformLiveDetailInfo getRelationLivePlatformInfo() const;
    bool relationLivePlatformInfoIsSet() const;
    void unsetrelationLivePlatformInfo();
    void setRelationLivePlatformInfo(const PlatformLiveDetailInfo& value);

    /// <summary>
    /// 使用的资源类型。 * PERIOD：包周期资源 * ONDEMAND：按需资源 * ONE_TIME：一次性资源 * UNKNOW：未知资源类型。
    /// </summary>

    std::string getUsedResourceType() const;
    bool usedResourceTypeIsSet() const;
    void unsetusedResourceType();
    void setUsedResourceType(const std::string& value);

    /// <summary>
    /// AI标识开关
    /// </summary>

    bool isIsAiMarkOn() const;
    bool isAiMarkOnIsSet() const;
    void unsetisAiMarkOn();
    void setIsAiMarkOn(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    std::string roomName_;
    bool roomNameIsSet_;
    std::string state_;
    bool stateIsSet_;
    float duration_;
    bool durationIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastupdateTime_;
    bool lastupdateTimeIsSet_;
    RTCRoomInfoList rtcRoomInfo_;
    bool rtcRoomInfoIsSet_;
    std::string liveEventReportUrl_;
    bool liveEventReportUrlIsSet_;
    LiveEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    RTCLiveEventCallBackConfig rtcCallbackConfig_;
    bool rtcCallbackConfigIsSet_;
    float streamDuration_;
    bool streamDurationIsSet_;
    std::string blockReason_;
    bool blockReasonIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    CoStreamerConfig coStreamerConfig_;
    bool coStreamerConfigIsSet_;
    LiveJobLog liveJobLog_;
    bool liveJobLogIsSet_;
    PlatformLiveDetailInfo relationLivePlatformInfo_;
    bool relationLivePlatformInfoIsSet_;
    std::string usedResourceType_;
    bool usedResourceTypeIsSet_;
    bool isAiMarkOn_;
    bool isAiMarkOnIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowSmartLiveResponse_H_
