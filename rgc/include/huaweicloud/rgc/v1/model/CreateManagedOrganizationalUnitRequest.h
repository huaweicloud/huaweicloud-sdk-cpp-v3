
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedOrganizationalUnitRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedOrganizationalUnitRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/CreateOrganizationalUnitReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateManagedOrganizationalUnitRequest
    : public ModelBase
{
public:
    CreateManagedOrganizationalUnitRequest();
    virtual ~CreateManagedOrganizationalUnitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateManagedOrganizationalUnitRequest members

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
    CreateManagedOrganizationalUnitRequest& dereference_from_shared_ptr(std::shared_ptr<CreateManagedOrganizationalUnitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateManagedOrganizationalUnitRequest_H_
