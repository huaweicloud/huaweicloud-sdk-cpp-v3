
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_vpc_igw_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_vpc_igw_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建虚拟IGW的请求体
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CreateTenantVpcIgwRequestBody_vpc_igw
    : public ModelBase
{
public:
    CreateTenantVpcIgwRequestBody_vpc_igw();
    virtual ~CreateTenantVpcIgwRequestBody_vpc_igw();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTenantVpcIgwRequestBody_vpc_igw members

    /// <summary>
    /// vpcid
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 创建VPC IGW的network id
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 是否添加默认路由
    /// </summary>

    bool isAddRoute() const;
    bool addRouteIsSet() const;
    void unsetaddRoute();
    void setAddRoute(bool value);

    /// <summary>
    /// 是否使能ipv6
    /// </summary>

    bool isEnableIpv6() const;
    bool enableIpv6IsSet() const;
    void unsetenableIpv6();
    void setEnableIpv6(bool value);

    /// <summary>
    /// 虚拟IGW的名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    bool addRoute_;
    bool addRouteIsSet_;
    bool enableIpv6_;
    bool enableIpv6IsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CreateTenantVpcIgwRequestBody_vpc_igw_H_
