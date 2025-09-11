

#include "huaweicloud/functiongraph/v2/model/StackResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StackResource::StackResource()
{
    physicalResourceId_ = "";
    physicalResourceIdIsSet_ = false;
    physicalResourceName_ = "";
    physicalResourceNameIsSet_ = false;
    logicalResourceName_ = "";
    logicalResourceNameIsSet_ = false;
    logicalResourceType_ = "";
    logicalResourceTypeIsSet_ = false;
    resourceStatus_ = "";
    resourceStatusIsSet_ = false;
    statusMessage_ = "";
    statusMessageIsSet_ = false;
    href_ = "";
    hrefIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

StackResource::~StackResource() = default;

void StackResource::validate()
{
}

web::json::value StackResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(physicalResourceIdIsSet_) {
        val[utility::conversions::to_string_t("physical_resource_id")] = ModelBase::toJson(physicalResourceId_);
    }
    if(physicalResourceNameIsSet_) {
        val[utility::conversions::to_string_t("physical_resource_name")] = ModelBase::toJson(physicalResourceName_);
    }
    if(logicalResourceNameIsSet_) {
        val[utility::conversions::to_string_t("logical_resource_name")] = ModelBase::toJson(logicalResourceName_);
    }
    if(logicalResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("logical_resource_type")] = ModelBase::toJson(logicalResourceType_);
    }
    if(resourceStatusIsSet_) {
        val[utility::conversions::to_string_t("resource_status")] = ModelBase::toJson(resourceStatus_);
    }
    if(statusMessageIsSet_) {
        val[utility::conversions::to_string_t("status_message")] = ModelBase::toJson(statusMessage_);
    }
    if(hrefIsSet_) {
        val[utility::conversions::to_string_t("href")] = ModelBase::toJson(href_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool StackResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("physical_resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("physical_resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhysicalResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("physical_resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("physical_resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhysicalResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logical_resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logical_resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogicalResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logical_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logical_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogicalResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("href"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHref(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string StackResource::getPhysicalResourceId() const
{
    return physicalResourceId_;
}

void StackResource::setPhysicalResourceId(const std::string& value)
{
    physicalResourceId_ = value;
    physicalResourceIdIsSet_ = true;
}

bool StackResource::physicalResourceIdIsSet() const
{
    return physicalResourceIdIsSet_;
}

void StackResource::unsetphysicalResourceId()
{
    physicalResourceIdIsSet_ = false;
}

std::string StackResource::getPhysicalResourceName() const
{
    return physicalResourceName_;
}

void StackResource::setPhysicalResourceName(const std::string& value)
{
    physicalResourceName_ = value;
    physicalResourceNameIsSet_ = true;
}

bool StackResource::physicalResourceNameIsSet() const
{
    return physicalResourceNameIsSet_;
}

void StackResource::unsetphysicalResourceName()
{
    physicalResourceNameIsSet_ = false;
}

std::string StackResource::getLogicalResourceName() const
{
    return logicalResourceName_;
}

void StackResource::setLogicalResourceName(const std::string& value)
{
    logicalResourceName_ = value;
    logicalResourceNameIsSet_ = true;
}

bool StackResource::logicalResourceNameIsSet() const
{
    return logicalResourceNameIsSet_;
}

void StackResource::unsetlogicalResourceName()
{
    logicalResourceNameIsSet_ = false;
}

std::string StackResource::getLogicalResourceType() const
{
    return logicalResourceType_;
}

void StackResource::setLogicalResourceType(const std::string& value)
{
    logicalResourceType_ = value;
    logicalResourceTypeIsSet_ = true;
}

bool StackResource::logicalResourceTypeIsSet() const
{
    return logicalResourceTypeIsSet_;
}

void StackResource::unsetlogicalResourceType()
{
    logicalResourceTypeIsSet_ = false;
}

std::string StackResource::getResourceStatus() const
{
    return resourceStatus_;
}

void StackResource::setResourceStatus(const std::string& value)
{
    resourceStatus_ = value;
    resourceStatusIsSet_ = true;
}

bool StackResource::resourceStatusIsSet() const
{
    return resourceStatusIsSet_;
}

void StackResource::unsetresourceStatus()
{
    resourceStatusIsSet_ = false;
}

std::string StackResource::getStatusMessage() const
{
    return statusMessage_;
}

void StackResource::setStatusMessage(const std::string& value)
{
    statusMessage_ = value;
    statusMessageIsSet_ = true;
}

bool StackResource::statusMessageIsSet() const
{
    return statusMessageIsSet_;
}

void StackResource::unsetstatusMessage()
{
    statusMessageIsSet_ = false;
}

std::string StackResource::getHref() const
{
    return href_;
}

void StackResource::setHref(const std::string& value)
{
    href_ = value;
    hrefIsSet_ = true;
}

bool StackResource::hrefIsSet() const
{
    return hrefIsSet_;
}

void StackResource::unsethref()
{
    hrefIsSet_ = false;
}

std::string StackResource::getDisplayName() const
{
    return displayName_;
}

void StackResource::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool StackResource::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void StackResource::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


