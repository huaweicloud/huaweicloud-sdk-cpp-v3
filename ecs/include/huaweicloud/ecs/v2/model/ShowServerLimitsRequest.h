
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerLimitsRequest
    : public ModelBase
{
public:
    ShowServerLimitsRequest();
    virtual ~ShowServerLimitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerLimitsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerLimitsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerLimitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsRequest_H_
