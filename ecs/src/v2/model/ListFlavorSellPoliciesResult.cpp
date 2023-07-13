

#include "huaweicloud/ecs/v2/model/ListFlavorSellPoliciesResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListFlavorSellPoliciesResult::ListFlavorSellPoliciesResult()
{
    id_ = 0;
    idIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    sellStatus_ = "";
    sellStatusIsSet_ = false;
    availabilityZoneId_ = "";
    availabilityZoneIdIsSet_ = false;
    sellMode_ = "";
    sellModeIsSet_ = false;
    spotOptionsIsSet_ = false;
}

ListFlavorSellPoliciesResult::~ListFlavorSellPoliciesResult() = default;

void ListFlavorSellPoliciesResult::validate()
{
}

web::json::value ListFlavorSellPoliciesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(sellStatusIsSet_) {
        val[utility::conversions::to_string_t("sell_status")] = ModelBase::toJson(sellStatus_);
    }
    if(availabilityZoneIdIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_id")] = ModelBase::toJson(availabilityZoneId_);
    }
    if(sellModeIsSet_) {
        val[utility::conversions::to_string_t("sell_mode")] = ModelBase::toJson(sellMode_);
    }
    if(spotOptionsIsSet_) {
        val[utility::conversions::to_string_t("spot_options")] = ModelBase::toJson(spotOptions_);
    }

    return val;
}

bool ListFlavorSellPoliciesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sell_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sell_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sell_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sell_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spot_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spot_options"));
        if(!fieldValue.is_null())
        {
            FlavorSpotOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpotOptions(refVal);
        }
    }
    return ok;
}

int32_t ListFlavorSellPoliciesResult::getId() const
{
    return id_;
}

void ListFlavorSellPoliciesResult::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::idIsSet() const
{
    return idIsSet_;
}

void ListFlavorSellPoliciesResult::unsetid()
{
    idIsSet_ = false;
}

std::string ListFlavorSellPoliciesResult::getFlavorId() const
{
    return flavorId_;
}

void ListFlavorSellPoliciesResult::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ListFlavorSellPoliciesResult::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ListFlavorSellPoliciesResult::getSellStatus() const
{
    return sellStatus_;
}

void ListFlavorSellPoliciesResult::setSellStatus(const std::string& value)
{
    sellStatus_ = value;
    sellStatusIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::sellStatusIsSet() const
{
    return sellStatusIsSet_;
}

void ListFlavorSellPoliciesResult::unsetsellStatus()
{
    sellStatusIsSet_ = false;
}

std::string ListFlavorSellPoliciesResult::getAvailabilityZoneId() const
{
    return availabilityZoneId_;
}

void ListFlavorSellPoliciesResult::setAvailabilityZoneId(const std::string& value)
{
    availabilityZoneId_ = value;
    availabilityZoneIdIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::availabilityZoneIdIsSet() const
{
    return availabilityZoneIdIsSet_;
}

void ListFlavorSellPoliciesResult::unsetavailabilityZoneId()
{
    availabilityZoneIdIsSet_ = false;
}

std::string ListFlavorSellPoliciesResult::getSellMode() const
{
    return sellMode_;
}

void ListFlavorSellPoliciesResult::setSellMode(const std::string& value)
{
    sellMode_ = value;
    sellModeIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::sellModeIsSet() const
{
    return sellModeIsSet_;
}

void ListFlavorSellPoliciesResult::unsetsellMode()
{
    sellModeIsSet_ = false;
}

FlavorSpotOptions ListFlavorSellPoliciesResult::getSpotOptions() const
{
    return spotOptions_;
}

void ListFlavorSellPoliciesResult::setSpotOptions(const FlavorSpotOptions& value)
{
    spotOptions_ = value;
    spotOptionsIsSet_ = true;
}

bool ListFlavorSellPoliciesResult::spotOptionsIsSet() const
{
    return spotOptionsIsSet_;
}

void ListFlavorSellPoliciesResult::unsetspotOptions()
{
    spotOptionsIsSet_ = false;
}

}
}
}
}
}


