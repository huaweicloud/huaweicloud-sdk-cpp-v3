
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncVpc_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncVpc_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 函数vpc配置。需同时为函数配置具有vpc权限的委托。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  FuncVpc
    : public ModelBase
{
public:
    FuncVpc();
    virtual ~FuncVpc();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FuncVpc members

    /// <summary>
    /// 域名id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户的project id。
    /// </summary>

    std::string getNamespace() const;
    bool namespaceIsSet() const;
    void unsetnamespace();
    void setNamespace(const std::string& value);

    /// <summary>
    /// 虚拟私有云名称。
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);

    /// <summary>
    /// 虚拟私有云唯一标识。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网名称。
    /// </summary>

    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);

    /// <summary>
    /// 子网编号。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 子网掩码。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 网关。
    /// </summary>

    std::string getGateway() const;
    bool gatewayIsSet() const;
    void unsetgateway();
    void setGateway(const std::string& value);

    /// <summary>
    /// 安全组
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 是否开启安全访问。开启时，需要您自行配置VPCEP网络但可以提供更安全的VPC连接访问并打通内网域名。注意：开启后无法关闭。
    /// </summary>

    bool isIsSafety() const;
    bool isSafetyIsSet() const;
    void unsetisSafety();
    void setIsSafety(bool value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string namespace_;
    bool namespaceIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string gateway_;
    bool gatewayIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    bool isSafety_;
    bool isSafetyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_FuncVpc_H_
