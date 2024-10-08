

#include "huaweicloud/organizations/v1/model/CreateAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateAccountRequest::CreateAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAccountRequest::~CreateAccountRequest() = default;

void CreateAccountRequest::validate()
{
}

web::json::value CreateAccountRequest::toJson() const
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
bool CreateAccountRequest::fromJson(const web::json::value& val)
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
            CreateAccountReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateAccountReqBody CreateAccountRequest::getBody() const
{
    return body_;
}

void CreateAccountRequest::setBody(const CreateAccountReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


