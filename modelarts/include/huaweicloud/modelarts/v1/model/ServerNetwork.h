
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerNetwork_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerNetwork_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerNetwork_hyper_cluster.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/AllowedAddressPairs.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerNetwork
    : public ModelBase
{
public:
    ServerNetwork();
    virtual ~ServerNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerNetwork members

    /// <summary>
    /// **参数解释**：创建服务器是否启用IPv6。表示在创建服务器时是否启用IPv6支持。 **约束限制**：不涉及。 **取值范围**： - true：启用IPv6 - false：不启用IPv6 **默认取值**：不涉及。
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);

    /// <summary>
    /// **参数解释**：服务器RoCE网络ID。表示服务器的RoCE网络ID。 **约束限制**：不涉及。 **取值范围**：必须是UUID格式的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getRoceId() const;
    bool roceIdIsSet() const;
    void unsetroceId();
    void setRoceId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器所在的安全组ID。表示服务器所属的安全组ID。 **约束限制**：不涉及。 **取值范围**：必须是UUID格式的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器所在子网ID。表示服务器所属的子网ID。 **约束限制**：不涉及。 **取值范围**：必须是UUID格式的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器所在虚拟私有云ID。表示服务器所属的虚拟私有云ID。 **约束限制**：不涉及。 **取值范围**：必须是UUID格式的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerNetwork_hyper_cluster getHyperCluster() const;
    bool hyperClusterIsSet() const;
    void unsethyperCluster();
    void setHyperCluster(const ServerNetwork_hyper_cluster& value);

    /// <summary>
    /// **参数解释：** IP/Mac对列表。 **约束限制：** - IP地址不允许为 “0.0.0.0/0”。 - 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组。 - 如果allowed_address_pairs为“1.1.1.1/0”，表示关闭源目的地址检查开关。 - 如果是虚拟IP绑定云服务器，       则mac_address可为空或者填写被绑定云服务器网卡的Mac地址。       被绑定的云服务器网卡allowed_address_pairs的IP地址填“1.1.1.1/0”。 **取值范围：** 不涉及 **默认取值：** 不涉及\&quot;
    /// </summary>

    std::vector<AllowedAddressPairs>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPairs>& value);


protected:
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    std::string roceId_;
    bool roceIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    ServerNetwork_hyper_cluster hyperCluster_;
    bool hyperClusterIsSet_;
    std::vector<AllowedAddressPairs> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerNetwork_H_
