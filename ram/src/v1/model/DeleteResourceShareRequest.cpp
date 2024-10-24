

#include "huaweicloud/ram/v1/model/DeleteResourceShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




DeleteResourceShareRequest::DeleteResourceShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    resourceShareId_ = "";
    resourceShareIdIsSet_ = false;
}

DeleteResourceShareRequest::~DeleteResourceShareRequest() = default;

void DeleteResourceShareRequest::validate()
{
}

web::json::value DeleteResourceShareRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(resourceShareIdIsSet_) {
        val[utility::conversions::to_string_t("resource_share_id")] = ModelBase::toJson(resourceShareId_);
    }

    return val;
}
bool DeleteResourceShareRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_share_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareId(refVal);
        }
    }
    return ok;
}


std::string DeleteResourceShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteResourceShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteResourceShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteResourceShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteResourceShareRequest::getResourceShareId() const
{
    return resourceShareId_;
}

void DeleteResourceShareRequest::setResourceShareId(const std::string& value)
{
    resourceShareId_ = value;
    resourceShareIdIsSet_ = true;
}

bool DeleteResourceShareRequest::resourceShareIdIsSet() const
{
    return resourceShareIdIsSet_;
}

void DeleteResourceShareRequest::unsetresourceShareId()
{
    resourceShareIdIsSet_ = false;
}

}
}
}
}
}


