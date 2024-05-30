
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  ListServicesRequest
    : public ModelBase
{
public:
    ListServicesRequest();
    virtual ~ListServicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServicesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServicesRequest& dereference_from_shared_ptr(std::shared_ptr<ListServicesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_ListServicesRequest_H_
