

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
    flavorId_ = "";
    flavorIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
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
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
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
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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

std::string ListFlavorsRequest::getFlavorId() const
{
    return flavorId_;
}

void ListFlavorsRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ListFlavorsRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ListFlavorsRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

int32_t ListFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFlavorsRequest::getMarker() const
{
    return marker_;
}

void ListFlavorsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFlavorsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFlavorsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


