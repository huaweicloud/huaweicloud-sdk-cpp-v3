
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteAlarmConfigRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteAlarmConfigRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  DeleteAlarmConfigRequest
    : public ModelBase
{
public:
    DeleteAlarmConfigRequest();
    virtual ~DeleteAlarmConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAlarmConfigRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAlarmConfigRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAlarmConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteAlarmConfigRequest_H_
