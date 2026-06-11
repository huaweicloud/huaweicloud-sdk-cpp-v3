

#include "huaweicloud/rds/v3/model/ShowAvailableBuildDrInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAvailableBuildDrInstanceResponse::ShowAvailableBuildDrInstanceResponse()
{
    instancesIsSet_ = false;
}

ShowAvailableBuildDrInstanceResponse::~ShowAvailableBuildDrInstanceResponse() = default;

void ShowAvailableBuildDrInstanceResponse::validate()
{
}

web::json::value ShowAvailableBuildDrInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ShowAvailableBuildDrInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<DRInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<DRInstance>& ShowAvailableBuildDrInstanceResponse::getInstances()
{
    return instances_;
}

void ShowAvailableBuildDrInstanceResponse::setInstances(const std::vector<DRInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ShowAvailableBuildDrInstanceResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ShowAvailableBuildDrInstanceResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


