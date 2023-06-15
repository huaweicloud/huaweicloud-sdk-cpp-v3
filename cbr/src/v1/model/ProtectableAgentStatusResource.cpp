

#include "huaweicloud/cbr/v1/model/ProtectableAgentStatusResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectableAgentStatusResource::ProtectableAgentStatusResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ProtectableAgentStatusResource::~ProtectableAgentStatusResource() = default;

void ProtectableAgentStatusResource::validate()
{
}

web::json::value ProtectableAgentStatusResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}

bool ProtectableAgentStatusResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string ProtectableAgentStatusResource::getResourceId() const
{
    return resourceId_;
}

void ProtectableAgentStatusResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ProtectableAgentStatusResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ProtectableAgentStatusResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ProtectableAgentStatusResource::getResourceName() const
{
    return resourceName_;
}

void ProtectableAgentStatusResource::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ProtectableAgentStatusResource::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ProtectableAgentStatusResource::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ProtectableAgentStatusResource::getResourceType() const
{
    return resourceType_;
}

void ProtectableAgentStatusResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ProtectableAgentStatusResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ProtectableAgentStatusResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


