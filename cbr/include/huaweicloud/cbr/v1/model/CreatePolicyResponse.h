
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePolicyResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePolicyResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/Policy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CreatePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreatePolicyResponse();
    virtual ~CreatePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    Policy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const Policy& value);


protected:
    Policy policy_;
    bool policyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreatePolicyResponse_H_
