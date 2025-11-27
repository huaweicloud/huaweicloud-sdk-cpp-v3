
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MqttDeviceForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MqttDeviceForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 消息重发布消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  MqttDeviceForwarding
    : public ModelBase
{
public:
    MqttDeviceForwarding();
    virtual ~MqttDeviceForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MqttDeviceForwarding members

    /// <summary>
    /// **参数说明**：消息重发布topic
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数说明**：消息重发布过期时间，单位为分钟
    /// </summary>

    int32_t getTtl() const;
    bool ttlIsSet() const;
    void unsetttl();
    void setTtl(int32_t value);


protected:
    std::string topic_;
    bool topicIsSet_;
    int32_t ttl_;
    bool ttlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MqttDeviceForwarding_H_
