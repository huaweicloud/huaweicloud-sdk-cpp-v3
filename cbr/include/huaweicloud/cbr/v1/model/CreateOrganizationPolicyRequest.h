
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateOrganizationPolicyRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateOrganizationPolicyRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OrganizationPolicyCreateReq.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  CreateOrganizationPolicyRequest
    : public ModelBase
{
public:
    CreateOrganizationPolicyRequest();
    virtual ~CreateOrganizationPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrganizationPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    OrganizationPolicyCreateReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const OrganizationPolicyCreateReq& value);


protected:
    OrganizationPolicyCreateReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateOrganizationPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<CreateOrganizationPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateOrganizationPolicyRequest_H_
