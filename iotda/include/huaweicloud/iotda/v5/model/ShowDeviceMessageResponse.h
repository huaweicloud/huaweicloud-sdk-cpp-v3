
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceMessageResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceMessageResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/iotda/v5/model/ErrorInfoDTO.h>
#include <huaweicloud/iotda/v5/model/PropertiesDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ShowDeviceMessageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceMessageResponse();
    virtual ~ShowDeviceMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceMessageResponse members

    /// <summary>
    /// 设备消息ID，用于唯一标识一条消息，在下发设备消息时由物联网平台分配获得。
    /// </summary>

    std::string getMessageId() const;
    bool messageIdIsSet() const;
    void unsetmessageId();
    void setMessageId(const std::string& value);

    /// <summary>
    /// 消息名称,在下发消息时由用户指定。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 消息内容。
    /// </summary>

    Object getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const Object& value);

    /// <summary>
    /// 消息内容编码格式，取值范围none|base64,默认值none, base64格式仅支持透传。
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// 有效负载格式，在消息内容编码格式为none时有效，取值范围standard|raw，默认值standard（平台封装的标准格式），取值为raw时直接将消息内容作为有效负载下发。
    /// </summary>

    std::string getPayloadFormat() const;
    bool payloadFormatIsSet() const;
    void unsetpayloadFormat();
    void setPayloadFormat(const std::string& value);

    /// <summary>
    /// 消息topic
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PropertiesDTO getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const PropertiesDTO& value);

    /// <summary>
    /// 消息状态，包含PENDING，DELIVERED，FAILED和TIMEOUT，PENDING指设备不在线，消息被缓存起来，等设备上线之后下发； DELIVERED指消息发送成功；FAILED消息发送失败；TIMEOUT指消息在平台默认时间内（1天）还没有下发送给设备，则平台会将消息设置为超时，状态为TIMEOUT。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorInfoDTO getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorInfoDTO& value);

    /// <summary>
    /// 消息的创建时间，\&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 消息结束时间, \&quot;yyyyMMdd&#39;T&#39;HHmmss&#39;Z&#39;\&quot;格式的UTC字符串，包含消息转换到DELIVERED和TIMEOUT两个状态的时间。
    /// </summary>

    std::string getFinishedTime() const;
    bool finishedTimeIsSet() const;
    void unsetfinishedTime();
    void setFinishedTime(const std::string& value);


protected:
    std::string messageId_;
    bool messageIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    Object message_;
    bool messageIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string payloadFormat_;
    bool payloadFormatIsSet_;
    std::string topic_;
    bool topicIsSet_;
    PropertiesDTO properties_;
    bool propertiesIsSet_;
    std::string status_;
    bool statusIsSet_;
    ErrorInfoDTO errorInfo_;
    bool errorInfoIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string finishedTime_;
    bool finishedTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ShowDeviceMessageResponse_H_
