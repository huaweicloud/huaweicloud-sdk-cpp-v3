
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_AzInfo_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_AzInfo_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/ZoneState.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 一个az对象
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  AzInfo
    : public ModelBase
{
public:
    AzInfo();
    virtual ~AzInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AzInfo members

    /// <summary>
    /// 可用分区的名字。
    /// </summary>

    std::string getZoneName() const;
    bool zoneNameIsSet() const;
    void unsetzoneName();
    void setZoneName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ZoneState getZoneState() const;
    bool zoneStateIsSet() const;
    void unsetzoneState();
    void setZoneState(const ZoneState& value);


protected:
    std::string zoneName_;
    bool zoneNameIsSet_;
    ZoneState zoneState_;
    bool zoneStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_AzInfo_H_
