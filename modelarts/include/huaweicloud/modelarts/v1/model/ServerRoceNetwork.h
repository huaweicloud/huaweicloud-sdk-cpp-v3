
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetwork_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetwork_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerRoceNetwork
    : public ModelBase
{
public:
    ServerRoceNetwork();
    virtual ~ServerRoceNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerRoceNetwork members

    /// <summary>
    /// **参数解释**：RoCE网络id。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：RoCE网络名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：项目ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：状态。 **参数解释**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：租户id。 **取值范围**：不涉及。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释**：子网。 **取值范围**：不涉及。
    /// </summary>

    std::string getSubnets() const;
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::string& value);

    /// <summary>
    /// **参数解释**：RoCE网络类型。 **取值范围**：不涉及。
    /// </summary>

    std::string getProviderNetworkType() const;
    bool providerNetworkTypeIsSet() const;
    void unsetproviderNetworkType();
    void setProviderNetworkType(const std::string& value);

    /// <summary>
    /// **参数解释**：实际物理网络。 **取值范围**：不涉及。
    /// </summary>

    std::string getProviderPhysicalNetwork() const;
    bool providerPhysicalNetworkIsSet() const;
    void unsetproviderPhysicalNetwork();
    void setProviderPhysicalNetwork(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string subnets_;
    bool subnetsIsSet_;
    std::string providerNetworkType_;
    bool providerNetworkTypeIsSet_;
    std::string providerPhysicalNetwork_;
    bool providerPhysicalNetworkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetwork_H_
