

#include "huaweicloud/csms/v1/model/ActionResources.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ActionResources::ActionResources()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetailIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    tagsIsSet_ = false;
}

ActionResources::~ActionResources() = default;

void ActionResources::validate()
{
}

web::json::value ActionResources::toJson() const
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

bool ActionResources::fromJson(const web::json::value& val)
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
            Secret refVal;
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
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ActionResources::getResourceId() const
{
    return resourceId_;
}

void ActionResources::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ActionResources::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ActionResources::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

Secret ActionResources::getResourceDetail() const
{
    return resourceDetail_;
}

void ActionResources::setResourceDetail(const Secret& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ActionResources::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ActionResources::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string ActionResources::getResourceName() const
{
    return resourceName_;
}

void ActionResources::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ActionResources::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ActionResources::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::vector<TagItem>& ActionResources::getTags()
{
    return tags_;
}

void ActionResources::setTags(const std::vector<TagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ActionResources::tagsIsSet() const
{
    return tagsIsSet_;
}

void ActionResources::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


