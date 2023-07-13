
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfoOption_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfoOption_H_

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
class HUAWEICLOUD_VPC_V2_EXPORT  ExternalGatewayInfoOption
    : public ModelBase
{
public:
    ExternalGatewayInfoOption();
    virtual ~ExternalGatewayInfoOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExternalGatewayInfoOption members

    /// <summary>
    /// 外部网络的ID。 外部网络的信息请通过GET /v2.0/networks?router:external&#x3D;True或neutron net-external-list方式查询。
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ExternalGatewayInfoOption_H_
