
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_EnableOrganizationShareRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_EnableOrganizationShareRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  EnableOrganizationShareRequest
    : public ModelBase
{
public:
    EnableOrganizationShareRequest();
    virtual ~EnableOrganizationShareRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableOrganizationShareRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    EnableOrganizationShareRequest& dereference_from_shared_ptr(std::shared_ptr<EnableOrganizationShareRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_EnableOrganizationShareRequest_H_
