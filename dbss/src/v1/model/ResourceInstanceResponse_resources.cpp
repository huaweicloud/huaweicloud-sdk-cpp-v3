

#include "huaweicloud/dbss/v1/model/ResourceInstanceResponse_resources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceInstanceResponse_resources::ResourceInstanceResponse_resources()
{
    resourceDetailIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
}

ResourceInstanceResponse_resources::~ResourceInstanceResponse_resources() = default;

void ResourceInstanceResponse_resources::validate()
{
}

web::json::value ResourceInstanceResponse_resources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ResourceInstanceResponse_resources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
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
            std::vector<ResourceInstanceResponse_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceInstanceResponse_sys_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


Object ResourceInstanceResponse_resources::getResourceDetail() const
{
    return resourceDetail_;
}

void ResourceInstanceResponse_resources::setResourceDetail(const Object& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ResourceInstanceResponse_resources::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ResourceInstanceResponse_resources::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string ResourceInstanceResponse_resources::getResourceId() const
{
    return resourceId_;
}

void ResourceInstanceResponse_resources::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceInstanceResponse_resources::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceInstanceResponse_resources::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceInstanceResponse_resources::getResourceName() const
{
    return resourceName_;
}

void ResourceInstanceResponse_resources::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ResourceInstanceResponse_resources::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ResourceInstanceResponse_resources::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<ResourceInstanceResponse_tags>& ResourceInstanceResponse_resources::getTags()
{
    return tags_;
}

void ResourceInstanceResponse_resources::setTags(const std::vector<ResourceInstanceResponse_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceInstanceResponse_resources::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceInstanceResponse_resources::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceInstanceResponse_sys_tags>& ResourceInstanceResponse_resources::getSysTags()
{
    return sysTags_;
}

void ResourceInstanceResponse_resources::setSysTags(const std::vector<ResourceInstanceResponse_sys_tags>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ResourceInstanceResponse_resources::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ResourceInstanceResponse_resources::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


