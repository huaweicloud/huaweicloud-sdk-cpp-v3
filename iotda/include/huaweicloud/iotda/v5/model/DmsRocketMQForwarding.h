
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsRocketMQForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsRocketMQForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/iotda/v5/model/NetAddress.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// rocketMQ服务配置信息
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DmsRocketMQForwarding
    : public ModelBase
{
public:
    DmsRocketMQForwarding();
    virtual ~DmsRocketMQForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DmsRocketMQForwarding members

    /// <summary>
    /// **参数说明**：转发rocketMQ消息对应的地址列表
    /// </summary>

    std::vector<NetAddress>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::vector<NetAddress>& value);

    /// <summary>
    /// **参数说明**：转发rocketMQ消息关联的topic信息。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数说明**：转发rocketMQ关联的用户名信息。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数说明**：转发rocketMQ关联的密码信息。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 是否开启SSL，默认为true。
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);


protected:
    std::vector<NetAddress> addresses_;
    bool addressesIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    bool enableSsl_;
    bool enableSslIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsRocketMQForwarding_H_
