
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceMessagesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceMessagesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/DeviceMessage.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDeviceMessagesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDeviceMessagesResponse();
    virtual ~ListDeviceMessagesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDeviceMessagesResponse members

    /// <summary>
    /// 设备ID，用于唯一标识一个设备，在注册设备时由物联网平台分配获得。
    /// </summary>

    std::string getDeviceId() const;
    bool deviceIdIsSet() const;
    void unsetdeviceId();
    void setDeviceId(const std::string& value);

    /// <summary>
    /// 设备消息列表。
    /// </summary>

    std::vector<DeviceMessage>& getMessages();
    bool messagesIsSet() const;
    void unsetmessages();
    void setMessages(const std::vector<DeviceMessage>& value);


protected:
    std::string deviceId_;
    bool deviceIdIsSet_;
    std::vector<DeviceMessage> messages_;
    bool messagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDeviceMessagesResponse_H_
