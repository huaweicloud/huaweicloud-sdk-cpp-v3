

#include "huaweicloud/cbr/v1/model/TagResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




TagResource::TagResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetailIsSet_ = false;
    tagsIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    sysTagsIsSet_ = false;
}

TagResource::~TagResource() = default;

void TagResource::validate()
{
}

web::json::value TagResource::toJson() const
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
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}

bool TagResource::fromJson(const web::json::value& val)
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
            InstancesResourceDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SysTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}

std::string TagResource::getResourceId() const
{
    return resourceId_;
}

void TagResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TagResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TagResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

InstancesResourceDetail TagResource::getResourceDetail() const
{
    return resourceDetail_;
}

void TagResource::setResourceDetail(const InstancesResourceDetail& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool TagResource::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void TagResource::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::vector<Tag>& TagResource::getTags()
{
    return tags_;
}

void TagResource::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TagResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void TagResource::unsettags()
{
    tagsIsSet_ = false;
}

std::string TagResource::getResourceName() const
{
    return resourceName_;
}

void TagResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool TagResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void TagResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<SysTag>& TagResource::getSysTags()
{
    return sysTags_;
}

void TagResource::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool TagResource::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void TagResource::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


