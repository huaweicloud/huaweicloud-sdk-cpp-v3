
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_

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
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  NeutronListFloatingIpsRequest
    : public ModelBase
{
public:
    NeutronListFloatingIpsRequest();
    virtual ~NeutronListFloatingIpsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFloatingIpsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isPageReverse() const;
    bool pageReverseIsSet() const;
    void unsetpageReverse();
    void setPageReverse(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFloatingIpAddress() const;
    bool floatingIpAddressIsSet() const;
    void unsetfloatingIpAddress();
    void setFloatingIpAddress(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRouterId() const;
    bool routerIdIsSet() const;
    void unsetrouterId();
    void setRouterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPortId() const;
    bool portIdIsSet() const;
    void unsetportId();
    void setPortId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFixedIpAddress() const;
    bool fixedIpAddressIsSet() const;
    void unsetfixedIpAddress();
    void setFixedIpAddress(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFloatingNetworkId() const;
    bool floatingNetworkIdIsSet() const;
    void unsetfloatingNetworkId();
    void setFloatingNetworkId(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    bool pageReverse_;
    bool pageReverseIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string floatingIpAddress_;
    bool floatingIpAddressIsSet_;
    std::string routerId_;
    bool routerIdIsSet_;
    std::string portId_;
    bool portIdIsSet_;
    std::string fixedIpAddress_;
    bool fixedIpAddressIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string floatingNetworkId_;
    bool floatingNetworkIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronListFloatingIpsRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronListFloatingIpsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsRequest_H_
