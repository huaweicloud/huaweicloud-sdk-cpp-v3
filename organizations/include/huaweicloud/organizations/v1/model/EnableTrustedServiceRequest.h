
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnableTrustedServiceRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnableTrustedServiceRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/TrustedServiceReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  EnableTrustedServiceRequest
    : public ModelBase
{
public:
    EnableTrustedServiceRequest();
    virtual ~EnableTrustedServiceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableTrustedServiceRequest members

    /// <summary>
    /// 
    /// </summary>

    TrustedServiceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TrustedServiceReqBody& value);


protected:
    TrustedServiceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnableTrustedServiceRequest& dereference_from_shared_ptr(std::shared_ptr<EnableTrustedServiceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_EnableTrustedServiceRequest_H_
