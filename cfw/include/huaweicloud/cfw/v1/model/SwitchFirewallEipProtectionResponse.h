
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/SwitchFirewallEipProtectionResp_data.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  SwitchFirewallEipProtectionResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchFirewallEipProtectionResponse();
    virtual ~SwitchFirewallEipProtectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchFirewallEipProtectionResponse members

    /// <summary>
    /// 
    /// </summary>

    SwitchFirewallEipProtectionResp_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const SwitchFirewallEipProtectionResp_data& value);

    /// <summary>
    /// 一键逃生失败原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    SwitchFirewallEipProtectionResp_data data_;
    bool dataIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_SwitchFirewallEipProtectionResponse_H_
