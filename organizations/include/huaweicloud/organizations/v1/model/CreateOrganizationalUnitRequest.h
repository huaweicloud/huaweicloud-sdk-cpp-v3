
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/CreateOrganizationalUnitReqBody.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  CreateOrganizationalUnitRequest
    : public ModelBase
{
public:
    CreateOrganizationalUnitRequest();
    virtual ~CreateOrganizationalUnitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOrganizationalUnitRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateOrganizationalUnitReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateOrganizationalUnitReqBody& value);


protected:
    CreateOrganizationalUnitReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateOrganizationalUnitRequest& dereference_from_shared_ptr(std::shared_ptr<CreateOrganizationalUnitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_CreateOrganizationalUnitRequest_H_
