

#include "huaweicloud/ram/v1/model/CreateResourceShareRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




CreateResourceShareRequest::CreateResourceShareRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateResourceShareRequest::~CreateResourceShareRequest() = default;

void CreateResourceShareRequest::validate()
{
}

web::json::value CreateResourceShareRequest::toJson() const
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
bool CreateResourceShareRequest::fromJson(const web::json::value& val)
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
            CreateResourceShareReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateResourceShareRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateResourceShareRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateResourceShareRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateResourceShareRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

CreateResourceShareReqBody CreateResourceShareRequest::getBody() const
{
    return body_;
}

void CreateResourceShareRequest::setBody(const CreateResourceShareReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateResourceShareRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateResourceShareRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


