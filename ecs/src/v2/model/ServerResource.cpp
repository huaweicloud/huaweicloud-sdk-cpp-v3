

#include "huaweicloud/ecs/v2/model/ServerResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerResource::ServerResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceDetail_ = "";
    resourceDetailIsSet_ = false;
    tagsIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
}

ServerResource::~ServerResource() = default;

void ServerResource::validate()
{
}

web::json::value ServerResource::toJson() const
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

bool ServerResource::fromJson(const web::json::value& val)
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


std::string ServerResource::getResourceId() const
{
    return resourceId_;
}

void ServerResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ServerResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ServerResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ServerResource::getResourceDetail() const
{
    return resourceDetail_;
}

void ServerResource::setResourceDetail(const std::string& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool ServerResource::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void ServerResource::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::vector<ResourceTag>& ServerResource::getTags()
{
    return tags_;
}

void ServerResource::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ServerResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void ServerResource::unsettags()
{
    tagsIsSet_ = false;
}

std::string ServerResource::getResourceName() const
{
    return resourceName_;
}

void ServerResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ServerResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ServerResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

}
}
}
}
}


