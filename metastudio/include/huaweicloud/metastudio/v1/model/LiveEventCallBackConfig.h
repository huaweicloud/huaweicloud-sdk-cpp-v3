
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventCallBackConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventCallBackConfig_H_


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
/// 直播事件HTTPS回调通知配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveEventCallBackConfig
    : public ModelBase
{
public:
    LiveEventCallBackConfig();
    virtual ~LiveEventCallBackConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveEventCallBackConfig members

    /// <summary>
    /// **参数解释**： 直播事件回调地址，为https地址。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getLiveEventTypeCallbackUrl() const;
    bool liveEventTypeCallbackUrlIsSet() const;
    void unsetliveEventTypeCallbackUrl();
    void setLiveEventTypeCallbackUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 认证类型。 **约束限制**： 不涉及。 **取值范围**： * NONE：URL中自带认证。 * MSS_A：HMACSHA256签名模式，在URL中追加参数hwSecret、hwTime。   取值方式：hwSecret&#x3D;hmac_sha256(Key, URI（live_event_callback_url）+ hwTime)&amp;hwTime&#x3D;hex(timestamp) * MSS_A_HEAD：HMACSHA256签名模式，参数hwSecret、hwTime放置在Head中。   取值方式：x-hw-mss-secret&#x3D;hmac_sha256(Key, URI（live_event_callback_url）+ hwTime)     x-hw-mss-time&#x3D;hex(timestamp) * MEITUAN_DEFAULT：仅用于美团平台调用回调使用。
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// **参数解释**： 密钥Key。 **约束限制**： 不涉及。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 回调的直播事件类型列表。 **约束限制**： 不涉及。 **取值范围**： 当前仅支持如下取值： * SHOOT_SCRIPT_SWITCH：剧本段落切换事件。  * RTMP_STREAM_STATE_CHANGE：RTMP链接发生变化回调事件。 * REPLY_COMMAND_FINISH：回复播放完成通知。  回调事件结构体定义： * event_type：事件类型。 * message：事件描述。   - SHOOT_SCRIPT_SWITCH事件回调定义如下：     &#x60;&#x60;&#x60;json     {       \&quot;event_type\&quot;:  \&quot;SHOOT_SCRIPT_SWITCH\&quot;,       \&quot;message\&quot;:\&quot;{\\\&quot;room_id\\\&quot;:\\\&quot;26f065244f754b3aa853b649a21aaf66\\\&quot;,\\\&quot;job_id\\\&quot;:\\\&quot;e87104f76d7546ce8a46ac6b04c49c3c\\\&quot;,\\\&quot;scene_script_name\\\&quot;:\\\&quot;商品1\\\&quot;,\\\&quot;shoot_script_sequence_no\\\&quot;:\\\&quot;2\\\&quot;,\\\&quot;shoot_script_title\\\&quot;:\\\&quot;段落2\\\&quot;}\&quot;     }     &#x60;&#x60;&#x60;   - RTMP_STREAM_STATE_CHANGE回调定义如下：     &#x60;&#x60;&#x60;json     {       \&quot;event_type\&quot;:  \&quot;RTMP_STREAM_STATE_CHANGE\&quot;,       \&quot;message\&quot;:\&quot;{\\\&quot;room_id\\\&quot;:\\\&quot;26f065244f754b3aa853b649a21aaf66\\\&quot;,\\\&quot;job_id\\\&quot;:\\\&quot;e87104f76d7546ce8a46ac6b04c49c3c\\\&quot;,\\\&quot;output_url\\\&quot;:\\\&quot;rtmp://xxx/xx/xx\\\&quot;,\\\&quot;stream_key\\\&quot;:\\\&quot;xxxxx\\\&quot;,\\\&quot;state\\\&quot;:\\\&quot;CONNECTED\\\&quot;}\&quot;     }     &#x60;&#x60;&#x60;     其中state取值：CONNECTING链路连接中；CONNECTED链路已连接；DISCONNECTED链路已断开，RECONNECTING链路重连中；END联络不再重连，链路已结束。    - REPLY_COMMAND_FINISH回调定义如下：     &#x60;&#x60;&#x60;json     {       \&quot;event_type\&quot;:  \&quot;REPLY_COMMAND_FINISH\&quot;,       \&quot;message\&quot;:\&quot;{\\\&quot;room_id\\\&quot;:\\\&quot;26f065244f754b3aa853b649a21aaf66\\\&quot;,\\\&quot;job_id\\\&quot;:\\\&quot;e87104f76d7546ce8a46ac6b04c49c3c\\\&quot;,\\\&quot;reply_id\\\&quot;:\\\&quot;e87104f76d7546ce8a46ac6b04c49c3c\&quot;}\&quot;     }
    /// </summary>

    std::vector<std::string>& getCallbackEventType();
    bool callbackEventTypeIsSet() const;
    void unsetcallbackEventType();
    void setCallbackEventType(const std::vector<std::string>& value);


protected:
    std::string liveEventTypeCallbackUrl_;
    bool liveEventTypeCallbackUrlIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> callbackEventType_;
    bool callbackEventTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveEventCallBackConfig_H_
