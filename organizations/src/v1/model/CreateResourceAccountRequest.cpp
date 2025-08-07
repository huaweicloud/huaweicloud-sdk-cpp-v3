

#include "huaweicloud/organizations/v1/model/CreateResourceAccountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateResourceAccountRequest::CreateResourceAccountRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateResourceAccountRequest::~CreateResourceAccountRequest() = default;

void CreateResourceAccountRequest::validate()
{
}

web::json::value CreateResourceAccountRequest::toJson() const
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
bool CreateResourceAccountRequest::fromJson(const web::json::value& val)
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
            CreateResourceAccountReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateResourceAccountRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateResourceAccountRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateResourceAccountRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateResourceAccountRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateResourceAccountReqBody CreateResourceAccountRequest::getBody() const
{
    return body_;
}

void CreateResourceAccountRequest::setBody(const CreateResourceAccountReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateResourceAccountRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateResourceAccountRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


