
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_PostAndPutFloatingIpResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_PostAndPutFloatingIpResp_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// floatingip对象
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  PostAndPutFloatingIpResp
    : public ModelBase
{
public:
    PostAndPutFloatingIpResp();
    virtual ~PostAndPutFloatingIpResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostAndPutFloatingIpResp members

    /// <summary>
    /// 关联端口的私有IP地址。
    /// </summary>

    std::string getFixedIpAddress() const;
    bool fixedIpAddressIsSet() const;
    void unsetfixedIpAddress();
    void setFixedIpAddress(const std::string& value);

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
    /// 浮动IP地址的id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 端口id。
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 所属路由器id。
    /// </summary>

    std::string getRouterId() const;
    bool routerIdIsSet() const;
    void unsetrouterId();
    void setRouterId(const std::string& value);

    /// <summary>
    /// 网络状态，可以为ACTIVE， DOWN或ERROR。  DOWN：未绑定  ACTIVE：绑定  ERROR：异常
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 项目id。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// DNS名称(目前仅广州局点支持)
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);

    /// <summary>
    /// DNS域地址(目前仅广州局点支持)
    /// </summary>

    std::string getDnsDomain() const;
    bool dnsDomainIsSet() const;
    void unsetdnsDomain();
    void setDnsDomain(const std::string& value);


protected:
    std::string fixedIpAddress_;
    bool fixedIpAddressIsSet_;
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string floatingNetworkId_;
    bool floatingNetworkIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string routerId_;
    bool routerIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string dnsName_;
    bool dnsNameIsSet_;
    std::string dnsDomain_;
    bool dnsDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_PostAndPutFloatingIpResp_H_
