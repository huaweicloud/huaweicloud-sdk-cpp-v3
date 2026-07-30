
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：用户VPC配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UserVpcResponse
    : public ModelBase
{
public:
    UserVpcResponse();
    virtual ~UserVpcResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserVpcResponse members

    /// <summary>
    /// **参数解释**：虚拟私有网络（VPC）ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：子网ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：安全组ID列表。 **取值范围**：不涉及。
    /// </summary>

    std::vector<std::string>& getSecurityGroupIds();
    bool securityGroupIdsIsSet() const;
    void unsetsecurityGroupIds();
    void setSecurityGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：连接的CIDR地址列表。 **取值范围**：不涉及。
    /// </summary>

    std::string getConnectCidrs() const;
    bool connectCidrsIsSet() const;
    void unsetconnectCidrs();
    void setConnectCidrs(const std::string& value);

    /// <summary>
    /// **参数解释**：网卡ID。 **取值范围**：不涉及。
    /// </summary>

    std::vector<std::string>& getPortId();
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：网卡ip。 **取值范围**：不涉及。
    /// </summary>

    std::string getPortIp() const;
    bool portIpIsSet() const;
    void unsetportIp();
    void setPortIp(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<std::string> securityGroupIds_;
    bool securityGroupIdsIsSet_;
    std::string connectCidrs_;
    bool connectCidrsIsSet_;
    std::vector<std::string> portId_;
    bool portIdIsSet_;
    std::string portIp_;
    bool portIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcResponse_H_
