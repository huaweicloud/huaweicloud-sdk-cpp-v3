

#include "huaweicloud/iotda/v5/model/UnbindTagsDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UnbindTagsDTO::UnbindTagsDTO()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    tagKeysIsSet_ = false;
}

UnbindTagsDTO::~UnbindTagsDTO() = default;

void UnbindTagsDTO::validate()
{
}

web::json::value UnbindTagsDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(tagKeysIsSet_) {
        val[utility::conversions::to_string_t("tag_keys")] = ModelBase::toJson(tagKeys_);
    }

    return val;
}
bool UnbindTagsDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKeys(refVal);
        }
    }
    return ok;
}


std::string UnbindTagsDTO::getResourceType() const
{
    return resourceType_;
}

void UnbindTagsDTO::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool UnbindTagsDTO::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void UnbindTagsDTO::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string UnbindTagsDTO::getResourceId() const
{
    return resourceId_;
}

void UnbindTagsDTO::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool UnbindTagsDTO::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void UnbindTagsDTO::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<std::string>& UnbindTagsDTO::getTagKeys()
{
    return tagKeys_;
}

void UnbindTagsDTO::setTagKeys(const std::vector<std::string>& value)
{
    tagKeys_ = value;
    tagKeysIsSet_ = true;
}

bool UnbindTagsDTO::tagKeysIsSet() const
{
    return tagKeysIsSet_;
}

void UnbindTagsDTO::unsettagKeys()
{
    tagKeysIsSet_ = false;
}

}
}
}
}
}


