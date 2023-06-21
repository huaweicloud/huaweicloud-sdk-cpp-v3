
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 管理子网信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  SubnetInfo
    : public ModelBase
{
public:
    SubnetInfo();
    virtual ~SubnetInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SubnetInfo members

    /// <summary>
    /// 子网id
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// vpc cidr
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// 子网名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 子网id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 子网网关ip
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// vpc id
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网的状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SubnetInfo_H_
