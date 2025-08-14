

#include "huaweicloud/iotda/v5/model/BindTagsDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BindTagsDTO::BindTagsDTO()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    tagsIsSet_ = false;
}

BindTagsDTO::~BindTagsDTO() = default;

void BindTagsDTO::validate()
{
}

web::json::value BindTagsDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BindTagsDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagV5DTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string BindTagsDTO::getResourceType() const
{
    return resourceType_;
}

void BindTagsDTO::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BindTagsDTO::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BindTagsDTO::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BindTagsDTO::getResourceId() const
{
    return resourceId_;
}

void BindTagsDTO::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BindTagsDTO::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BindTagsDTO::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<TagV5DTO>& BindTagsDTO::getTags()
{
    return tags_;
}

void BindTagsDTO::setTags(const std::vector<TagV5DTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BindTagsDTO::tagsIsSet() const
{
    return tagsIsSet_;
}

void BindTagsDTO::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


