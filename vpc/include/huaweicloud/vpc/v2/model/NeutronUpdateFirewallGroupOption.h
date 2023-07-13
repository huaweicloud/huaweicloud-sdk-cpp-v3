
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateFirewallGroupOption
    : public ModelBase
{
public:
    NeutronUpdateFirewallGroupOption();
    virtual ~NeutronUpdateFirewallGroupOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFirewallGroupOption members

    /// <summary>
    /// 网络ACL防火墙是否受管理员控制。
    /// </summary>

    bool isAdminStateUp() const;
    bool adminStateUpIsSet() const;
    void unsetadminStateUp();
    void setAdminStateUp(bool value);

    /// <summary>
    /// 功能说明：网络ACL防火墙组描述 取值范围：最长255个字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 出方向网络ACL防火墙策略。
    /// </summary>

    std::string getEgressFirewallPolicyId() const;
    bool egressFirewallPolicyIdIsSet() const;
    void unsetegressFirewallPolicyId();
    void setEgressFirewallPolicyId(const std::string& value);

    /// <summary>
    /// 入方向网络ACL防火墙策略。
    /// </summary>

    std::string getIngressFirewallPolicyId() const;
    bool ingressFirewallPolicyIdIsSet() const;
    void unsetingressFirewallPolicyId();
    void setIngressFirewallPolicyId(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL防火墙组名称 取值范围：最长255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：网络ACL防火墙组绑定的端口列表 约束：必须为分布式router的端口id
    /// </summary>

    std::vector<std::string>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<std::string>& value);


protected:
    bool adminStateUp_;
    bool adminStateUpIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string egressFirewallPolicyId_;
    bool egressFirewallPolicyIdIsSet_;
    std::string ingressFirewallPolicyId_;
    bool ingressFirewallPolicyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> ports_;
    bool portsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateFirewallGroupOption_H_
