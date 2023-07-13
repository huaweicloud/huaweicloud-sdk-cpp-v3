
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/vpc/v2/model/ExtraDhcpOpt.h>
#include <string>
#include <huaweicloud/vpc/v2/model/AllowedAddressPair.h>
#include <map>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdatePortOption
    : public ModelBase
{
public:
    NeutronUpdatePortOption();
    virtual ~NeutronUpdatePortOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdatePortOption members

    /// <summary>
    /// 功能说明：网络的名称 取值范围：0-255个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：扩展属性：安全组的UUID 例如：\&quot;security_groups\&quot;: [\&quot;a0608cbf-d047-4f54-8b28-cd7b59853fff\&quot;] 约束：不支持更新为空
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：扩展属性：IP/Mac对列表，allow_address_pair参见“allow_address_pair对象”表 约束：  - IP地址不允许为 “0.0.0.0”  - 如果allowed_address_pairs配置地址池较大的CIDR（掩码小于24位），建议为该port配置一个单独的安全组  - 硬件SDN环境不支持ip_address属性配置为CIDR格式  - 为虚拟IP配置后端ECS场景，allowed_address_pairs中配置的IP地址，必须为ECS网卡已有的IP地址，否则可能会导致虚拟IP通信异常。
    /// </summary>

    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);

    /// <summary>
    /// 扩展属性：DHCP的扩展Option
    /// </summary>

    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);

    /// <summary>
    /// 功能说明：端口安全使能标记，如果不使能则安全组和dhcp防欺骗不生效，默认为true
    /// </summary>

    bool isPortSecurityEnabled() const;
    bool portSecurityEnabledIsSet() const;
    void unsetportSecurityEnabled();
    void setPortSecurityEnabled(bool value);

    /// <summary>
    /// 绑定的vNIC类型  - normal: 软交换
    /// </summary>

    std::string getBindingvnicType() const;
    bool bindingvnicTypeIsSet() const;
    void unsetbindingvnicType();
    void setBindingvnicType(const std::string& value);

    /// <summary>
    /// 功能说明：扩展属性，提供用户设置自定义信息  - internal_elb字段，布尔类型，普通租户可见。只有在创建内网ELB的虚拟IP的网卡时设置为true。普通租户没有权限更改该字段，由系统维护。 举例：{\&quot;internal_elb\&quot;: true}  - disable_security_groups字段，布尔类型，普通租户可见。默认为false，高性能通信场景下，允许指定为true。仅支持创建port和读取时指定。当前仅支持指定为true，不支持指定为false。 举例：{\&quot;disable_security_groups\&quot;：true }，当前仅支持指定为true，不支持指定为false，指定为true时，FWaaS功能不生效。
    /// </summary>

    std::map<std::string, Object>& getBindingprofile();
    bool bindingprofileIsSet() const;
    void unsetbindingprofile();
    void setBindingprofile(const std::map<std::string, Object>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;
    bool portSecurityEnabled_;
    bool portSecurityEnabledIsSet_;
    std::string bindingvnicType_;
    bool bindingvnicTypeIsSet_;
    std::map<std::string, Object> bindingprofile_;
    bool bindingprofileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdatePortOption_H_
