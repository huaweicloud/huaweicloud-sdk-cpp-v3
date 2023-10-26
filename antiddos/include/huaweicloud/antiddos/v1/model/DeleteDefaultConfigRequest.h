
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DeleteDefaultConfigRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DeleteDefaultConfigRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  DeleteDefaultConfigRequest
    : public ModelBase
{
public:
    DeleteDefaultConfigRequest();
    virtual ~DeleteDefaultConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDefaultConfigRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDefaultConfigRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDefaultConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_DeleteDefaultConfigRequest_H_
