
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAccessPolicyRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAccessPolicyRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AccessPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  CreateAccessPolicyRequest
    : public ModelBase
{
public:
    CreateAccessPolicyRequest();
    virtual ~CreateAccessPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccessPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    AccessPolicy getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AccessPolicy& value);


protected:
    AccessPolicy body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAccessPolicyRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAccessPolicyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAccessPolicyRequest_H_
