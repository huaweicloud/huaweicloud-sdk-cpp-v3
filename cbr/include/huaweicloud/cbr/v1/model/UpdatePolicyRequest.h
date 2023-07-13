
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdatePolicyRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdatePolicyRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/PolicyUpdateReq.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  UpdatePolicyRequest
    : public ModelBase
{
public:
    UpdatePolicyRequest();
    virtual ~UpdatePolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePolicyRequest members

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyUpdateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PolicyUpdateReq& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    PolicyUpdateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePolicyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdatePolicyRequest_H_
