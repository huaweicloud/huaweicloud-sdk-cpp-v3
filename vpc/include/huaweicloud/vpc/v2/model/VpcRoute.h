
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_VpcRoute_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_VpcRoute_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_VPC_V2_EXPORT  VpcRoute
    : public ModelBase
{
public:
    VpcRoute();
    virtual ~VpcRoute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VpcRoute members

    /// <summary>
    /// 路由ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 路由目的地址CIDR，如192.168.200.0/24。
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 功能说明：路由下一跳 取值范围：如果type为peering类型，则nexthop为peering的ID
    /// </summary>

    std::string getNexthop() const;
    bool nexthopIsSet() const;
    void unsetnexthop();
    void setNexthop(const std::string& value);

    /// <summary>
    /// 功能说明：路由类型 取值范围：peering
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 请求添加路由的VPC ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    std::string nexthop_;
    bool nexthopIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_VpcRoute_H_
