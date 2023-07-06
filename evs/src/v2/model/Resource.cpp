

#include "huaweicloud/evs/v2/model/Resource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Resource::Resource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceDetailIsSet_ = false;
    tagsIsSet_ = false;
}

Resource::~Resource() = default;

void Resource::validate()
{
}

web::json::value Resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool Resource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            VolumeDetailForTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string Resource::getResourceId() const
{
    return resourceId_;
}

void Resource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool Resource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void Resource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string Resource::getResourceName() const
{
    return resourceName_;
}

void Resource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool Resource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void Resource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

VolumeDetailForTag Resource::getResourceDetail() const
{
    return resourceDetail_;
}

void Resource::setResourceDetail(const VolumeDetailForTag& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool Resource::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void Resource::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& Resource::getTags()
{
    return tags_;
}

void Resource::setTags(const std::vector<std::map<std::string, std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Resource::tagsIsSet() const
{
    return tagsIsSet_;
}

void Resource::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


