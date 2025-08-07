

#include "huaweicloud/ram/v1/model/SearchDistinctSharedResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctSharedResourcesRequest::SearchDistinctSharedResourcesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchDistinctSharedResourcesRequest::~SearchDistinctSharedResourcesRequest() = default;

void SearchDistinctSharedResourcesRequest::validate()
{
}

web::json::value SearchDistinctSharedResourcesRequest::toJson() const
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
bool SearchDistinctSharedResourcesRequest::fromJson(const web::json::value& val)
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
            SearchDistinctSharedResourcesReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchDistinctSharedResourcesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchDistinctSharedResourcesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchDistinctSharedResourcesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchDistinctSharedResourcesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

SearchDistinctSharedResourcesReqBody SearchDistinctSharedResourcesRequest::getBody() const
{
    return body_;
}

void SearchDistinctSharedResourcesRequest::setBody(const SearchDistinctSharedResourcesReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchDistinctSharedResourcesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchDistinctSharedResourcesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


