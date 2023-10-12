
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateFloatingIpOption_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateFloatingIpOption_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建floatingip对象
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreateFloatingIpOption
    : public ModelBase
{
public:
    CreateFloatingIpOption();
    virtual ~CreateFloatingIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFloatingIpOption members

    /// <summary>
    /// 浮动IP地址。
    /// </summary>

    std::string getFloatingIpAddress() const;
    bool floatingIpAddressIsSet() const;
    void unsetfloatingIpAddress();
    void setFloatingIpAddress(const std::string& value);

    /// <summary>
    /// 外部网络的id。只能使用固定的外网，外部网络的信息请通过GET /v2.0/networks?router:external&#x3D;True或GET /v2.0/networks?name&#x3D;{floating_network}或neutron net-external-list方式查询。
    /// </summary>

    std::string getFloatingNetworkId() const;
    bool floatingNetworkIdIsSet() const;
    void unsetfloatingNetworkId();
    void setFloatingNetworkId(const std::string& value);

    /// <summary>
    /// 端口id
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 关联端口的私有IP地址。
    /// </summary>

    std::string getFixedIpAddress() const;
    bool fixedIpAddressIsSet() const;
    void unsetfixedIpAddress();
    void setFixedIpAddress(const std::string& value);


protected:
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string floatingNetworkId_;
    bool floatingNetworkIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string fixedIpAddress_;
    bool fixedIpAddressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateFloatingIpOption_H_
