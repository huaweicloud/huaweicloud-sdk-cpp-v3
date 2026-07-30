
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeNetwork_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeNetwork_H_


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
/// 节点网络配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeNetwork
    : public ModelBase
{
public:
    NodeNetwork();
    virtual ~NodeNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeNetwork members

    /// <summary>
    /// **参数解释**：vpc id。 **取值范围**：不涉及。
    /// </summary>

    std::string getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const std::string& value);

    /// <summary>
    /// **参数解释**：子网id。 **取值范围**：不涉及。
    /// </summary>

    std::string getSubnet() const;
    bool subnetIsSet() const;
    void unsetsubnet();
    void setSubnet(const std::string& value);

    /// <summary>
    /// **参数解释**：安全组id集合。
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);


protected:
    std::string vpc_;
    bool vpcIsSet_;
    std::string subnet_;
    bool subnetIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeNetwork_H_
