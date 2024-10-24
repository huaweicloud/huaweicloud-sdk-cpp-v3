

#include "huaweicloud/ram/v1/model/SearchResourceShareCountByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareCountByTagsRequest::SearchResourceShareCountByTagsRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

SearchResourceShareCountByTagsRequest::~SearchResourceShareCountByTagsRequest() = default;

void SearchResourceShareCountByTagsRequest::validate()
{
}

web::json::value SearchResourceShareCountByTagsRequest::toJson() const
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
bool SearchResourceShareCountByTagsRequest::fromJson(const web::json::value& val)
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
            ResourceSharesByTagsReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SearchResourceShareCountByTagsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void SearchResourceShareCountByTagsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool SearchResourceShareCountByTagsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void SearchResourceShareCountByTagsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

ResourceSharesByTagsReqBody SearchResourceShareCountByTagsRequest::getBody() const
{
    return body_;
}

void SearchResourceShareCountByTagsRequest::setBody(const ResourceSharesByTagsReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchResourceShareCountByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchResourceShareCountByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


