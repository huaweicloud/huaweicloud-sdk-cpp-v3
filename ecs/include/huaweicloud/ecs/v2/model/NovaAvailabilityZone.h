
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/NovaAvailabilityZoneState.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可用域信息
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaAvailabilityZone
    : public ModelBase
{
public:
    NovaAvailabilityZone();
    virtual ~NovaAvailabilityZone();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaAvailabilityZone members

    /// <summary>
    /// 该字段的值为null。
    /// </summary>

    std::vector<std::string>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<std::string>& value);

    /// <summary>
    /// 可用域的名称。
    /// </summary>

    std::string getZoneName() const;
    bool zoneNameIsSet() const;
    void unsetzoneName();
    void setZoneName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NovaAvailabilityZoneState getZoneState() const;
    bool zoneStateIsSet() const;
    void unsetzoneState();
    void setZoneState(const NovaAvailabilityZoneState& value);


protected:
    std::vector<std::string> hosts_;
    bool hostsIsSet_;
    std::string zoneName_;
    bool zoneNameIsSet_;
    NovaAvailabilityZoneState zoneState_;
    bool zoneStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaAvailabilityZone_H_
