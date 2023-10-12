

#include "huaweicloud/smn/v2/model/DeleteResourceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteResourceTagRequest::DeleteResourceTagRequest()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteResourceTagRequest::~DeleteResourceTagRequest() = default;

void DeleteResourceTagRequest::validate()
{
}

web::json::value DeleteResourceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeleteResourceTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteResourceTagRequest::getResourceType() const
{
    return resourceType_;
}

void DeleteResourceTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool DeleteResourceTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void DeleteResourceTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string DeleteResourceTagRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteResourceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteResourceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteResourceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string DeleteResourceTagRequest::getKey() const
{
    return key_;
}

void DeleteResourceTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteResourceTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteResourceTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


