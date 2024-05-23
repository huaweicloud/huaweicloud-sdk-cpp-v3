

#include "huaweicloud/ram/v1/model/ResourceDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceDTO::ResourceDTO()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
    resourceDetailIsSet_ = false;
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
    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
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
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
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

std::vector<Tag>& ResourceDTO::getTags()
{
    return tags_;
}

void ResourceDTO::setTags(const std::vector<Tag>& value)
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

Object ResourceDTO::getResourceDetail() const
{
    return resourceDetail_;
}

void ResourceDTO::setResourceDetail(const Object& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ResourceDTO::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ResourceDTO::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

}
}
}
}
}


