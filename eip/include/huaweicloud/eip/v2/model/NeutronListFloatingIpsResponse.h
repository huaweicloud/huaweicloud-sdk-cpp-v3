
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/FloatingIpResp.h>
#include <huaweicloud/eip/v2/model/Pager.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronListFloatingIpsResponse
    : public ModelBase, public HttpResponse
{
public:
    NeutronListFloatingIpsResponse();
    virtual ~NeutronListFloatingIpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronListFloatingIpsResponse members

    /// <summary>
    /// floatingip对象列表
    /// </summary>

    std::vector<FloatingIpResp>& getFloatingips();
    bool floatingipsIsSet() const;
    void unsetfloatingips();
    void setFloatingips(const std::vector<FloatingIpResp>& value);

    /// <summary>
    /// marker分页结构
    /// </summary>

    std::vector<Pager>& getFloatingipsLinks();
    bool floatingipsLinksIsSet() const;
    void unsetfloatingipsLinks();
    void setFloatingipsLinks(const std::vector<Pager>& value);


protected:
    std::vector<FloatingIpResp> floatingips_;
    bool floatingipsIsSet_;
    std::vector<Pager> floatingipsLinks_;
    bool floatingipsLinksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronListFloatingIpsResponse_H_
