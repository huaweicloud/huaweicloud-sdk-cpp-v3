

#include "huaweicloud/ecs/v2/model/ShowFlavorCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowFlavorCapacityRequest::ShowFlavorCapacityRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
    regionIds_ = "";
    regionIdsIsSet_ = false;
}

ShowFlavorCapacityRequest::~ShowFlavorCapacityRequest() = default;

void ShowFlavorCapacityRequest::validate()
{
}

web::json::value ShowFlavorCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(regionIdsIsSet_) {
        val[utility::conversions::to_string_t("region_ids")] = ModelBase::toJson(regionIds_);
    }

    return val;
}
bool ShowFlavorCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionIds(refVal);
        }
    }
    return ok;
}


std::string ShowFlavorCapacityRequest::getFlavorId() const
{
    return flavorId_;
}

void ShowFlavorCapacityRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ShowFlavorCapacityRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ShowFlavorCapacityRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ShowFlavorCapacityRequest::getCount() const
{
    return count_;
}

void ShowFlavorCapacityRequest::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowFlavorCapacityRequest::countIsSet() const
{
    return countIsSet_;
}

void ShowFlavorCapacityRequest::unsetcount()
{
    countIsSet_ = false;
}

std::string ShowFlavorCapacityRequest::getRegionIds() const
{
    return regionIds_;
}

void ShowFlavorCapacityRequest::setRegionIds(const std::string& value)
{
    regionIds_ = value;
    regionIdsIsSet_ = true;
}

bool ShowFlavorCapacityRequest::regionIdsIsSet() const
{
    return regionIdsIsSet_;
}

void ShowFlavorCapacityRequest::unsetregionIds()
{
    regionIdsIsSet_ = false;
}

}
}
}
}
}


