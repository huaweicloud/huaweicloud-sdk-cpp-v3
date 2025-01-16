

#include "huaweicloud/ecs/v2/model/ListServerAzInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerAzInfoResponse::ListServerAzInfoResponse()
{
    availabilityZonesIsSet_ = false;
}

ListServerAzInfoResponse::~ListServerAzInfoResponse() = default;

void ListServerAzInfoResponse::validate()
{
}

web::json::value ListServerAzInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZonesIsSet_) {
        val[utility::conversions::to_string_t("availability_zones")] = ModelBase::toJson(availabilityZones_);
    }

    return val;
}
bool ListServerAzInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zones"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zones"));
        if(!fieldValue.is_null())
        {
            std::vector<ListServerAzInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZones(refVal);
        }
    }
    return ok;
}


std::vector<ListServerAzInfo>& ListServerAzInfoResponse::getAvailabilityZones()
{
    return availabilityZones_;
}

void ListServerAzInfoResponse::setAvailabilityZones(const std::vector<ListServerAzInfo>& value)
{
    availabilityZones_ = value;
    availabilityZonesIsSet_ = true;
}

bool ListServerAzInfoResponse::availabilityZonesIsSet() const
{
    return availabilityZonesIsSet_;
}

void ListServerAzInfoResponse::unsetavailabilityZones()
{
    availabilityZonesIsSet_ = false;
}

}
}
}
}
}


