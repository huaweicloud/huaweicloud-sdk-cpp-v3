
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateUserDisclaimerRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateUserDisclaimerRequest_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateUserDisclaimerRequest
    : public ModelBase
{
public:
    CreateUserDisclaimerRequest();
    virtual ~CreateUserDisclaimerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUserDisclaimerRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateUserDisclaimerRequest& dereference_from_shared_ptr(std::shared_ptr<CreateUserDisclaimerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateUserDisclaimerRequest_H_
