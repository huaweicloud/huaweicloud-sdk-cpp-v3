

#include "huaweicloud/ram/v1/model/SearchDistinctPrincipalsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctPrincipalsRequest::SearchDistinctPrincipalsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchDistinctPrincipalsRequest::~SearchDistinctPrincipalsRequest() = default;

void SearchDistinctPrincipalsRequest::validate()
{
}

web::json::value SearchDistinctPrincipalsRequest::toJson() const
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
bool SearchDistinctPrincipalsRequest::fromJson(const web::json::value& val)
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
            SearchDistinctSharedPrincipalsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchDistinctPrincipalsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchDistinctPrincipalsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchDistinctPrincipalsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchDistinctPrincipalsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

SearchDistinctSharedPrincipalsReqBody SearchDistinctPrincipalsRequest::getBody() const
{
    return body_;
}

void SearchDistinctPrincipalsRequest::setBody(const SearchDistinctSharedPrincipalsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchDistinctPrincipalsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchDistinctPrincipalsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


