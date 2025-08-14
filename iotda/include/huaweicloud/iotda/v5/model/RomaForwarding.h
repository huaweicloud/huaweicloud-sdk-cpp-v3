
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RomaForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RomaForwarding_H_


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
/// 转发roma消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  RomaForwarding
    : public ModelBase
{
public:
    RomaForwarding();
    virtual ~RomaForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RomaForwarding members

    /// <summary>
    /// **参数说明**：转发roma消息对应的地址列表
    /// </summary>

    std::vector<NetAddress>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::vector<NetAddress>& value);

    /// <summary>
    /// **参数说明**：转发roma消息关联的topic信息。
    /// </summary>

    std::string getTopic() const;
    bool topicIsSet() const;
    void unsettopic();
    void setTopic(const std::string& value);

    /// <summary>
    /// **参数说明**：转发roma关联的用户名信息。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数说明**：转发roma关联的密码信息。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::vector<NetAddress> addresses_;
    bool addressesIsSet_;
    std::string topic_;
    bool topicIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_RomaForwarding_H_
