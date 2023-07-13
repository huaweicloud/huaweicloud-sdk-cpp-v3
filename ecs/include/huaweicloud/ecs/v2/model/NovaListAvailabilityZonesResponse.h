
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ecs/v2/model/NovaAvailabilityZone.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaListAvailabilityZonesResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaListAvailabilityZonesResponse();
    virtual ~NovaListAvailabilityZonesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaListAvailabilityZonesResponse members

    /// <summary>
    /// 可用域信息。
    /// </summary>

    std::vector<NovaAvailabilityZone>& getAvailabilityZoneInfo();
    bool availabilityZoneInfoIsSet() const;
    void unsetavailabilityZoneInfo();
    void setAvailabilityZoneInfo(const std::vector<NovaAvailabilityZone>& value);


protected:
    std::vector<NovaAvailabilityZone> availabilityZoneInfo_;
    bool availabilityZoneInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaListAvailabilityZonesResponse_H_
