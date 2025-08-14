
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MrsKafkaForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MrsKafkaForwarding_H_


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
/// 转发MRS Kafka消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  MrsKafkaForwarding
    : public ModelBase
{
public:
    MrsKafkaForwarding();
    virtual ~MrsKafkaForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MrsKafkaForwarding members

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
    /// 是否Kerberos认证，默认为false。
    /// </summary>

    bool isKerberosAuthentication() const;
    bool kerberosAuthenticationIsSet() const;
    void unsetkerberosAuthentication();
    void setKerberosAuthentication(bool value);


protected:
    std::vector<NetAddress> addresses_;
    bool addressesIsSet_;
    std::string topic_;
    bool topicIsSet_;
    bool kerberosAuthentication_;
    bool kerberosAuthenticationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_MrsKafkaForwarding_H_
