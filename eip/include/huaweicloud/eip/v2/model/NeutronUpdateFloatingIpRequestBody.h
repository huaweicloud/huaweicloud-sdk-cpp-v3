
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/UpdateFloatingIpOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新floatingip的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  NeutronUpdateFloatingIpRequestBody
    : public ModelBase
{
public:
    NeutronUpdateFloatingIpRequestBody();
    virtual ~NeutronUpdateFloatingIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateFloatingIpRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateFloatingIpOption getFloatingip() const;
    bool floatingipIsSet() const;
    void unsetfloatingip();
    void setFloatingip(const UpdateFloatingIpOption& value);


protected:
    UpdateFloatingIpOption floatingip_;
    bool floatingipIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_NeutronUpdateFloatingIpRequestBody_H_
