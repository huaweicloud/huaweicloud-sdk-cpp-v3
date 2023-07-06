

#include "huaweicloud/ims/v2/model/ShowImageByTagsResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ShowImageByTagsResource::ShowImageByTagsResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetailIsSet_ = false;
    tagsIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
}

ShowImageByTagsResource::~ShowImageByTagsResource() = default;

void ShowImageByTagsResource::validate()
{
}

web::json::value ShowImageByTagsResource::toJson() const
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

bool ShowImageByTagsResource::fromJson(const web::json::value& val)
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
            QueryImageByTagsResourceDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValue> refVal;
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

std::string ShowImageByTagsResource::getResourceId() const
{
    return resourceId_;
}

void ShowImageByTagsResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowImageByTagsResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowImageByTagsResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

QueryImageByTagsResourceDetail ShowImageByTagsResource::getResourceDetail() const
{
    return resourceDetail_;
}

void ShowImageByTagsResource::setResourceDetail(const QueryImageByTagsResourceDetail& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ShowImageByTagsResource::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ShowImageByTagsResource::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::vector<TagKeyValue>& ShowImageByTagsResource::getTags()
{
    return tags_;
}

void ShowImageByTagsResource::setTags(const std::vector<TagKeyValue>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowImageByTagsResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowImageByTagsResource::unsettags()
{
    tagsIsSet_ = false;
}

std::string ShowImageByTagsResource::getResourceName() const
{
    return resourceName_;
}

void ShowImageByTagsResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ShowImageByTagsResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ShowImageByTagsResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

}
}
}
}
}


