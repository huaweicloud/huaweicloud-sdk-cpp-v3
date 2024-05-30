

#include "huaweicloud/organizations/v1/model/ResourceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ResourceDTO::ResourceDTO()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
}

ResourceDTO::~ResourceDTO() = default;

void ResourceDTO::validate()
{
}

web::json::value ResourceDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ResourceDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Match> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ResourceDTO::getResourceId() const
{
    return resourceId_;
}

void ResourceDTO::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceDTO::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceDTO::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceDTO::getResourceName() const
{
    return resourceName_;
}

void ResourceDTO::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ResourceDTO::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ResourceDTO::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<Match>& ResourceDTO::getTags()
{
    return tags_;
}

void ResourceDTO::setTags(const std::vector<Match>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceDTO::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceDTO::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


