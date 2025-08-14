
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsKafkaForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsKafkaForwarding_H_


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
/// 转发kafka消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  DmsKafkaForwarding
    : public ModelBase
{
public:
    DmsKafkaForwarding();
    virtual ~DmsKafkaForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DmsKafkaForwarding members

    /// <summary>
    /// **参数说明**：Kafka服务对应的region区域
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数说明**：Kafka服务对应的projectId信息
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数说明**：转发kafka消息对应的地址列表
    /// </summary>

    std::vector<NetAddress>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::vector<NetAddress>& value);

    /// <summary>
    /// **参数说明**：转发kafka消息关联的topic信息。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数说明**：转发kafka关联的用户名信息。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数说明**：转发kafka关联的密码信息。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// **参数说明**：转发kafka关联的SASL认证机制。 **取值范围**： - PAAS：明文传输，此模式下为非数据加密传输模式，数据传输不安全，建议您使用更安全的数据加密模式。 - PLAIN：SASL/PLAIN模式。需要填写对应的用户名密码信息。一种简单的用户名密码校验机制，在SASL_PLAINTEXT场景下，不建议使用。 - SCRAM-SHA-512：SASL/SCRAM-SHA-512模式。需要填写对应的用户名密码信息。采用哈希算法对用户名与密码生成凭证，进行身份校验的安全认证机制，比PLAIN机制安全性更高。
    /// </summary>

    std::string getMechanism() const;
    bool mechanismIsSet() const;
    void unsetmechanism();
    void setMechanism(const std::string& value);

    /// <summary>
    /// **参数说明**：kafka传输安全协议，此字段不填默认为SASL_SSL。当mechanism为PAAS或不填时，该字段不生效。 **取值范围**： - SASL_SSL：采用SSL证书进行加密传输，支持帐号密码认证，安全性更高。 - SASL_PLAINTEXT：明文传输，支持帐号密码认证，性能更好，建议mechanism使用SCRAM-SHA-512机制。
    /// </summary>

    std::string getSecurityProtocol() const;
    bool securityProtocolIsSet() const;
    void unsetsecurityProtocol();
    void setSecurityProtocol(const std::string& value);


protected:
    std::string regionName_;
    bool regionNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<NetAddress> addresses_;
    bool addressesIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string mechanism_;
    bool mechanismIsSet_;
    std::string securityProtocol_;
    bool securityProtocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_DmsKafkaForwarding_H_
