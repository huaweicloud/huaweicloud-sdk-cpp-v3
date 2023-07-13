
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowPolicyRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowPolicyRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowPolicyRequest
    : public ModelBase
{
public:
    ShowPolicyRequest();
    virtual ~ShowPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPolicyRequest members

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowPolicyRequest_H_
