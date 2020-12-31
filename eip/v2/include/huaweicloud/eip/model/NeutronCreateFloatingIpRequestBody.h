
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/CreateFloatingIpOption.h"

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
class HUAWEICLOUD_EIP_EXPORT  NeutronCreateFloatingIpRequestBody
    : public ModelBase
{
public:
    NeutronCreateFloatingIpRequestBody();
    virtual ~NeutronCreateFloatingIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateFloatingIpRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateFloatingIpOption getFloatingip() const;
    bool floatingipIsSet() const;
    void unsetfloatingip();
    void setFloatingip(const CreateFloatingIpOption& value);


protected:
    CreateFloatingIpOption floatingip_;
    bool floatingipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronCreateFloatingIpRequestBody_H_
