

#include "huaweicloud/identitycenter/v1/model/RegisterRegionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




RegisterRegionRequest::RegisterRegionRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterRegionRequest::~RegisterRegionRequest() = default;

void RegisterRegionRequest::validate()
{
}

web::json::value RegisterRegionRequest::toJson() const
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
bool RegisterRegionRequest::fromJson(const web::json::value& val)
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
            RegisterRegionReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RegisterRegionRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void RegisterRegionRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool RegisterRegionRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void RegisterRegionRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

RegisterRegionReqBody RegisterRegionRequest::getBody() const
{
    return body_;
}

void RegisterRegionRequest::setBody(const RegisterRegionReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterRegionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterRegionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


