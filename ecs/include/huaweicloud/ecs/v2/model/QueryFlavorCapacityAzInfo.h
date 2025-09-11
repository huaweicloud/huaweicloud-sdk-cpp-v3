
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_QueryFlavorCapacityAzInfo_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_QueryFlavorCapacityAzInfo_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  QueryFlavorCapacityAzInfo
    : public ModelBase
{
public:
    QueryFlavorCapacityAzInfo();
    virtual ~QueryFlavorCapacityAzInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryFlavorCapacityAzInfo members

    /// <summary>
    /// 
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    bool isPrefer() const;
    bool preferIsSet() const;
    void unsetprefer();
    void setPrefer(bool value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool prefer_;
    bool preferIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_QueryFlavorCapacityAzInfo_H_
