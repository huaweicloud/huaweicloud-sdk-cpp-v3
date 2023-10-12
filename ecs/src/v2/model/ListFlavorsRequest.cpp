

#include "huaweicloud/ecs/v2/model/ListFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListFlavorsRequest::ListFlavorsRequest()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ListFlavorsRequest::~ListFlavorsRequest() = default;

void ListFlavorsRequest::validate()
{
}

web::json::value ListFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ListFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string ListFlavorsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListFlavorsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListFlavorsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListFlavorsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


