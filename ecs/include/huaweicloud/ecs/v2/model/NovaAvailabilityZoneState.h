
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZoneState_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZoneState_H_

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
/// 可用域的状态
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAvailabilityZoneState
    : public ModelBase
{
public:
    NovaAvailabilityZoneState();
    virtual ~NovaAvailabilityZoneState();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaAvailabilityZoneState members

    /// <summary>
    /// 可用域状态。
    /// </summary>

    bool isAvailable() const;
    bool availableIsSet() const;
    void unsetavailable();
    void setAvailable(bool value);


protected:
    bool available_;
    bool availableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZoneState_H_
