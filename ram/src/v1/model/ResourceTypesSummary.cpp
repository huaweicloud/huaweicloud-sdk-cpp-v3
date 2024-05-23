

#include "huaweicloud/ram/v1/model/ResourceTypesSummary.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceTypesSummary::ResourceTypesSummary()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ResourceTypesSummary::~ResourceTypesSummary() = default;

void ResourceTypesSummary::validate()
{
}

web::json::value ResourceTypesSummary::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ResourceTypesSummary::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string ResourceTypesSummary::getRegionId() const
{
    return regionId_;
}

void ResourceTypesSummary::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ResourceTypesSummary::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ResourceTypesSummary::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ResourceTypesSummary::getResourceType() const
{
    return resourceType_;
}

void ResourceTypesSummary::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceTypesSummary::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceTypesSummary::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


