
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ChangeProtectStatusRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ChangeEastWestFirewallStatusRequest
    : public ModelBase
{
public:
    ChangeEastWestFirewallStatusRequest();
    virtual ~ChangeEastWestFirewallStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeEastWestFirewallStatusRequest members

    /// <summary>
    /// 
    /// </summary>

    ChangeProtectStatusRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeProtectStatusRequestBody& value);


protected:
    ChangeProtectStatusRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeEastWestFirewallStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeEastWestFirewallStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ChangeEastWestFirewallStatusRequest_H_
