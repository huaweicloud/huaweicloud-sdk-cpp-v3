
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeregisterDelegatedAdministratorRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeregisterDelegatedAdministratorRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/organizations/v1/model/DelegatedAdministratorReqBody.h>

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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  DeregisterDelegatedAdministratorRequest
    : public ModelBase
{
public:
    DeregisterDelegatedAdministratorRequest();
    virtual ~DeregisterDelegatedAdministratorRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeregisterDelegatedAdministratorRequest members

    /// <summary>
    /// 
    /// </summary>

    DelegatedAdministratorReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DelegatedAdministratorReqBody& value);


protected:
    DelegatedAdministratorReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeregisterDelegatedAdministratorRequest& dereference_from_shared_ptr(std::shared_ptr<DeregisterDelegatedAdministratorRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_DeregisterDelegatedAdministratorRequest_H_
