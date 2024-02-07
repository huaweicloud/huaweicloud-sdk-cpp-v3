
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteUserDisclaimerRequest_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteUserDisclaimerRequest_H_


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
class HUAWEICLOUD_GEIP_V3_EXPORT  DeleteUserDisclaimerRequest
    : public ModelBase
{
public:
    DeleteUserDisclaimerRequest();
    virtual ~DeleteUserDisclaimerRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteUserDisclaimerRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteUserDisclaimerRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteUserDisclaimerRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_DeleteUserDisclaimerRequest_H_
