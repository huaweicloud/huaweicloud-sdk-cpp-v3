
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RTCRoomInfoList.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LiveEventCallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/LiveWarningItem.h>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StartSmartLiveResponse
    : public ModelBase, public HttpResponse
{
public:
    StartSmartLiveResponse();
    virtual ~StartSmartLiveResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartSmartLiveResponse members

    /// <summary>
    /// 直播任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

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
    /// 开播风险告警列表。
    /// </summary>

    std::vector<LiveWarningItem>& getLiveWarningInfo();
    bool liveWarningInfoIsSet() const;
    void unsetliveWarningInfo();
    void setLiveWarningInfo(const std::vector<LiveWarningItem>& value);

    /// <summary>
    /// **参数解释**： 配置的最大直播时长。单位小时。 0 为不限制。 **约束限制**： 停止直播逻辑配置为立即停止则直播停止误差在5分钟之内。其他逻辑则加上处理时长。 **默认取值**： 不设置则表示不限时。
    /// </summary>

    int32_t getLimitDuration() const;
    bool limitDurationIsSet() const;
    void unsetlimitDuration();
    void setLimitDuration(int32_t value);

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
    RTCRoomInfoList rtcRoomInfo_;
    bool rtcRoomInfoIsSet_;
    std::string liveEventReportUrl_;
    bool liveEventReportUrlIsSet_;
    LiveEventCallBackConfig liveEventCallbackConfig_;
    bool liveEventCallbackConfigIsSet_;
    std::vector<LiveWarningItem> liveWarningInfo_;
    bool liveWarningInfoIsSet_;
    int32_t limitDuration_;
    bool limitDurationIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StartSmartLiveResponse_H_
