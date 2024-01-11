

#include "huaweicloud/drs/v5/model/ResourceInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ResourceInstance::ResourceInstance()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetail_ = "";
    resourceDetailIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
}

ResourceInstance::~ResourceInstance() = default;

void ResourceInstance::validate()
{
}

web::json::value ResourceInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ResourceInstance::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
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
            std::vector<ResourceTagInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ResourceInstance::getResourceId() const
{
    return resourceId_;
}

void ResourceInstance::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceInstance::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceInstance::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceInstance::getResourceDetail() const
{
    return resourceDetail_;
}

void ResourceInstance::setResourceDetail(const std::string& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ResourceInstance::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ResourceInstance::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string ResourceInstance::getResourceName() const
{
    return resourceName_;
}

void ResourceInstance::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ResourceInstance::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ResourceInstance::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<ResourceTagInfo>& ResourceInstance::getTags()
{
    return tags_;
}

void ResourceInstance::setTags(const std::vector<ResourceTagInfo>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceInstance::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceInstance::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


