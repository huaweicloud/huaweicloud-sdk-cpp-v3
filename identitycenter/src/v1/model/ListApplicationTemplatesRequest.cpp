

#include "huaweicloud/identitycenter/v1/model/ListApplicationTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationTemplatesRequest::ListApplicationTemplatesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
}

ListApplicationTemplatesRequest::~ListApplicationTemplatesRequest() = default;

void ListApplicationTemplatesRequest::validate()
{
}

web::json::value ListApplicationTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }

    return val;
}
bool ListApplicationTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    return ok;
}


std::string ListApplicationTemplatesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListApplicationTemplatesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListApplicationTemplatesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListApplicationTemplatesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListApplicationTemplatesRequest::getApplicationId() const
{
    return applicationId_;
}

void ListApplicationTemplatesRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListApplicationTemplatesRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListApplicationTemplatesRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

}
}
}
}
}


