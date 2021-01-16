
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortOption_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/ExtraDhcpOpt.h>
#include <string>
#include <huaweicloud/vpc/v2/model/AllowedAddressPair.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdatePortOption
    : public ModelBase
{
public:
    UpdatePortOption();
    virtual ~UpdatePortOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePortOption members

    /// <summary>
    /// 功能说明：端口名称 取值范围：0~255个字符，支持中文、英文、字母、_(下划线)、-（中划线）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 安全组的ID列表
    /// </summary>

    std::vector<std::string>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<std::string>& value);

    /// <summary>
    /// 功能说明：IP/Mac对列表 约束： - IP地址不允许为 “0.0.0.0”。 - 如果配置地址池较大（CIDR掩码小于24位），建议为该port配置一个单独的安全组。 - 为虚拟IP配置后端ECS场景，allowed_address_pairs中配置的IP地址，必须为ECS网卡已有的IP地址，否则可能会导致虚拟IP通信异常。
    /// </summary>

    std::vector<AllowedAddressPair>& getAllowedAddressPairs();
    bool allowedAddressPairsIsSet() const;
    void unsetallowedAddressPairs();
    void setAllowedAddressPairs(const std::vector<AllowedAddressPair>& value);

    /// <summary>
    /// 功能说明：DHCP的扩展Option(扩展属性)
    /// </summary>

    std::vector<ExtraDhcpOpt>& getExtraDhcpOpts();
    bool extraDhcpOptsIsSet() const;
    void unsetextraDhcpOpts();
    void setExtraDhcpOpts(const std::vector<ExtraDhcpOpt>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<AllowedAddressPair> allowedAddressPairs_;
    bool allowedAddressPairsIsSet_;
    std::vector<ExtraDhcpOpt> extraDhcpOpts_;
    bool extraDhcpOptsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortOption_H_
