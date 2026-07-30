
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceQuota_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceQuota_H_


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
/// 资源配额参数。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceQuota
    : public ModelBase
{
public:
    ResourceQuota();
    virtual ~ResourceQuota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceQuota members

    /// <summary>
    /// **参数解释**：资源类型 **取值范围**：可选值如下： -  VPC：虚拟私有云。 -  SUBNET：子网。 -  SECURITY_GROUP：安全组。 -  SECURITY_GROUP_RULE：安全组规则。 -  PUBLIC_IP：公网IP。 -  VPC_PEER：VPC对端链接个数。 -  FIREWALL：防火墙。 -  SHARE_BANDWIDTH：共享带宽。 -  SHARE_BANDWIDTH_IP：共享带宽IP。 -  LOADBALANCER：负载均衡。 -  LISTENER：监听器。 -  PHYSICAL_CONNECT：物理连接。 -  VIRTUAL_INTERFACE：虚拟接口。 -  VPC_CONTAIN_ROUTETABLE：VPC包含的路由表。 -  ROUTETABLE_CONTAIN_ROUTES：路由表包含的路由。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源配额上限。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(const std::string& value);

    /// <summary>
    /// **参数解释**： 已使用配额。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string quota_;
    bool quotaIsSet_;
    std::string used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceQuota_H_
