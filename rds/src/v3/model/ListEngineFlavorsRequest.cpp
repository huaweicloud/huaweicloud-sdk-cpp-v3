

#include "huaweicloud/rds/v3/model/ListEngineFlavorsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListEngineFlavorsRequest::ListEngineFlavorsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    availabilityZoneIds_ = "";
    availabilityZoneIdsIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    specCodeLike_ = "";
    specCodeLikeIsSet_ = false;
    flavorCategoryType_ = "";
    flavorCategoryTypeIsSet_ = false;
    isRhaFlavor_ = false;
    isRhaFlavorIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListEngineFlavorsRequest::~ListEngineFlavorsRequest() = default;

void ListEngineFlavorsRequest::validate()
{
}

web::json::value ListEngineFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(availabilityZoneIdsIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_ids")] = ModelBase::toJson(availabilityZoneIds_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(specCodeLikeIsSet_) {
        val[utility::conversions::to_string_t("spec_code_like")] = ModelBase::toJson(specCodeLike_);
    }
    if(flavorCategoryTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_category_type")] = ModelBase::toJson(flavorCategoryType_);
    }
    if(isRhaFlavorIsSet_) {
        val[utility::conversions::to_string_t("is_rha_flavor")] = ModelBase::toJson(isRhaFlavor_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListEngineFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCodeLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_category_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_category_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorCategoryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_rha_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_rha_flavor"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRhaFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}

std::string ListEngineFlavorsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListEngineFlavorsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListEngineFlavorsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListEngineFlavorsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListEngineFlavorsRequest::getAvailabilityZoneIds() const
{
    return availabilityZoneIds_;
}

void ListEngineFlavorsRequest::setAvailabilityZoneIds(const std::string& value)
{
    availabilityZoneIds_ = value;
    availabilityZoneIdsIsSet_ = true;
}

bool ListEngineFlavorsRequest::availabilityZoneIdsIsSet() const
{
    return availabilityZoneIdsIsSet_;
}

void ListEngineFlavorsRequest::unsetavailabilityZoneIds()
{
    availabilityZoneIdsIsSet_ = false;
}

std::string ListEngineFlavorsRequest::getHaMode() const
{
    return haMode_;
}

void ListEngineFlavorsRequest::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ListEngineFlavorsRequest::haModeIsSet() const
{
    return haModeIsSet_;
}

void ListEngineFlavorsRequest::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string ListEngineFlavorsRequest::getSpecCodeLike() const
{
    return specCodeLike_;
}

void ListEngineFlavorsRequest::setSpecCodeLike(const std::string& value)
{
    specCodeLike_ = value;
    specCodeLikeIsSet_ = true;
}

bool ListEngineFlavorsRequest::specCodeLikeIsSet() const
{
    return specCodeLikeIsSet_;
}

void ListEngineFlavorsRequest::unsetspecCodeLike()
{
    specCodeLikeIsSet_ = false;
}

std::string ListEngineFlavorsRequest::getFlavorCategoryType() const
{
    return flavorCategoryType_;
}

void ListEngineFlavorsRequest::setFlavorCategoryType(const std::string& value)
{
    flavorCategoryType_ = value;
    flavorCategoryTypeIsSet_ = true;
}

bool ListEngineFlavorsRequest::flavorCategoryTypeIsSet() const
{
    return flavorCategoryTypeIsSet_;
}

void ListEngineFlavorsRequest::unsetflavorCategoryType()
{
    flavorCategoryTypeIsSet_ = false;
}

bool ListEngineFlavorsRequest::isIsRhaFlavor() const
{
    return isRhaFlavor_;
}

void ListEngineFlavorsRequest::setIsRhaFlavor(bool value)
{
    isRhaFlavor_ = value;
    isRhaFlavorIsSet_ = true;
}

bool ListEngineFlavorsRequest::isRhaFlavorIsSet() const
{
    return isRhaFlavorIsSet_;
}

void ListEngineFlavorsRequest::unsetisRhaFlavor()
{
    isRhaFlavorIsSet_ = false;
}

int32_t ListEngineFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListEngineFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEngineFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEngineFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListEngineFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListEngineFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEngineFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEngineFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


