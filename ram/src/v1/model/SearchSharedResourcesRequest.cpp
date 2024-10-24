

#include "huaweicloud/ram/v1/model/SearchSharedResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedResourcesRequest::SearchSharedResourcesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchSharedResourcesRequest::~SearchSharedResourcesRequest() = default;

void SearchSharedResourcesRequest::validate()
{
}

web::json::value SearchSharedResourcesRequest::toJson() const
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
bool SearchSharedResourcesRequest::fromJson(const web::json::value& val)
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
            SearchSharedResourcesReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchSharedResourcesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchSharedResourcesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchSharedResourcesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchSharedResourcesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

SearchSharedResourcesReqBody SearchSharedResourcesRequest::getBody() const
{
    return body_;
}

void SearchSharedResourcesRequest::setBody(const SearchSharedResourcesReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchSharedResourcesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchSharedResourcesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


