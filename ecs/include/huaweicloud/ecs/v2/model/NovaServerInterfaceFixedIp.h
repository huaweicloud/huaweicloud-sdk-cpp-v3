
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceFixedIp_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceFixedIp_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaServerInterfaceFixedIp
    : public ModelBase
{
public:
    NovaServerInterfaceFixedIp();
    virtual ~NovaServerInterfaceFixedIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerInterfaceFixedIp members

    /// <summary>
    /// 网卡私网IP信息。
    /// </summary>

    std::string getIpAddress() const;
    bool ipAddressIsSet() const;
    void unsetipAddress();
    void setIpAddress(const std::string& value);

    /// <summary>
    /// 网卡私网IP对应子网信息。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);


protected:
    std::string ipAddress_;
    bool ipAddressIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerInterfaceFixedIp_H_
