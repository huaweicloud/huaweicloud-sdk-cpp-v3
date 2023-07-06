

#include "huaweicloud/sdrs/v1/model/ResourceParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResourceParams::ResourceParams()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetailIsSet_ = false;
    tagsIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
}

ResourceParams::~ResourceParams() = default;

void ResourceParams::validate()
{
}

web::json::value ResourceParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }

    return val;
}

bool ResourceParams::fromJson(const web::json::value& val)
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
            ShowProtectedInstanceParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}

std::string ResourceParams::getResourceId() const
{
    return resourceId_;
}

void ResourceParams::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceParams::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceParams::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

ShowProtectedInstanceParams ResourceParams::getResourceDetail() const
{
    return resourceDetail_;
}

void ResourceParams::setResourceDetail(const ShowProtectedInstanceParams& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ResourceParams::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ResourceParams::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::vector<ResourceTag>& ResourceParams::getTags()
{
    return tags_;
}

void ResourceParams::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceParams::unsettags()
{
    tagsIsSet_ = false;
}

std::string ResourceParams::getResourceName() const
{
    return resourceName_;
}

void ResourceParams::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ResourceParams::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ResourceParams::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

}
}
}
}
}


