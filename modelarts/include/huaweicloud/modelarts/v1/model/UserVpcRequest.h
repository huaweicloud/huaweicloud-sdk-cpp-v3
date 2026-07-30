
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcRequest_H_


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
/// **参数解释**：用户VPC配置。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UserVpcRequest
    : public ModelBase
{
public:
    UserVpcRequest();
    virtual ~UserVpcRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserVpcRequest members

    /// <summary>
    /// **参数解释**：虚拟私有网络（VPC） ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**：子网ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：安全组ID列表。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getSecurityGroupIds();
    bool securityGroupIdsIsSet() const;
    void unsetsecurityGroupIds();
    void setSecurityGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：连接的CIDR地址列表。 **约束限制**：选填参数，适用场景：用户希望通过挂载的网卡，访问其他网段的地址。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getConnectCidrs();
    bool connectCidrsIsSet() const;
    void unsetconnectCidrs();
    void setConnectCidrs(const std::vector<std::string>& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::vector<std::string> securityGroupIds_;
    bool securityGroupIdsIsSet_;
    std::vector<std::string> connectCidrs_;
    bool connectCidrsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UserVpcRequest_H_
