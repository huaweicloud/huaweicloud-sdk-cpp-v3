
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCLiveEventCallBackConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCLiveEventCallBackConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// RTC回调事件配置。兼容处理，未携带配置则默认订阅LIVE_PROGRESS
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RTCLiveEventCallBackConfig
    : public ModelBase
{
public:
    RTCLiveEventCallBackConfig();
    virtual ~RTCLiveEventCallBackConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RTCLiveEventCallBackConfig members

    /// <summary>
    /// RTC回调的直播事件类型列表。  当前仅支持如下取值： * LIVE_PROGRESS：直播剧本进度通知。  * REPLY_COMMAND_FINISH：回复播放完成通知。  回调事件结构体定义： * message_type：消息类型。 * data：消息描述。   - LIVE_PROGRESS事件回调定义如下：     &#x60;&#x60;&#x60;json     {         \&quot;message_type\&quot;: \&quot;live_progress_notify\&quot;,         \&quot;data\&quot;: {             \&quot;script_name\&quot;: \&quot;场景一\&quot;,             \&quot;shoot_script_sequence_no\&quot;: 2,             \&quot;shoot_script_title\&quot;: \&quot;引导语\&quot;,             \&quot;offset\&quot;: \&quot;247\&quot;,             \&quot;reply_id\&quot;: \&quot;e87104f76d7546ce8a46ac6b04c49c3c\&quot;         }     }     &#x60;&#x60;&#x60;   - REPLY_COMMAND_FINISH回调定义如下：     &#x60;&#x60;&#x60;json     {       \&quot;message_type\&quot;: \&quot;reply_command_finish_notify\&quot;,       \&quot;data\&quot;:\&quot;{         \&quot;reply_id\&quot;:\&quot;e87104f76d7546ce8a46ac6b04c49c3c\&quot;       }\&quot;     }     &#x60;&#x60;&#x60;
    /// </summary>

    std::vector<std::string>& getRtcCallbackEventType();
    bool rtcCallbackEventTypeIsSet() const;
    void unsetrtcCallbackEventType();
    void setRtcCallbackEventType(const std::vector<std::string>& value);


protected:
    std::vector<std::string> rtcCallbackEventType_;
    bool rtcCallbackEventTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RTCLiveEventCallBackConfig_H_
