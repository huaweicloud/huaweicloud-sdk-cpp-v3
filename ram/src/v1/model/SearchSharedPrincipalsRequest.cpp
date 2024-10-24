

#include "huaweicloud/ram/v1/model/SearchSharedPrincipalsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedPrincipalsRequest::SearchSharedPrincipalsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchSharedPrincipalsRequest::~SearchSharedPrincipalsRequest() = default;

void SearchSharedPrincipalsRequest::validate()
{
}

web::json::value SearchSharedPrincipalsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchSharedPrincipalsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchSharedPrincipalsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchSharedPrincipalsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchSharedPrincipalsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchSharedPrincipalsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchSharedPrincipalsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

SearchSharedPrincipalsReqBody SearchSharedPrincipalsRequest::getBody() const
{
    return body_;
}

void SearchSharedPrincipalsRequest::setBody(const SearchSharedPrincipalsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchSharedPrincipalsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchSharedPrincipalsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


