

#include "huaweicloud/organizations/v1/model/ListResourceTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListResourceTagsRequest::ListResourceTagsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListResourceTagsRequest::~ListResourceTagsRequest() = default;

void ListResourceTagsRequest::validate()
{
}

web::json::value ListResourceTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListResourceTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
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


std::string ListResourceTagsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListResourceTagsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListResourceTagsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListResourceTagsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListResourceTagsRequest::getResourceType() const
{
    return resourceType_;
}

void ListResourceTagsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListResourceTagsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListResourceTagsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


