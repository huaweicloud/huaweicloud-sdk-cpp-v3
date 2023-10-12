
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListAvailabilityZonesRequest
    : public ModelBase
{
public:
    NovaListAvailabilityZonesRequest();
    virtual ~NovaListAvailabilityZonesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaListAvailabilityZonesRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaListAvailabilityZonesRequest& dereference_from_shared_ptr(std::shared_ptr<NovaListAvailabilityZonesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesRequest_H_
