

#include "huaweicloud/organizations/v1/model/EnablePolicyTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




EnablePolicyTypeRequest::EnablePolicyTypeRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

EnablePolicyTypeRequest::~EnablePolicyTypeRequest() = default;

void EnablePolicyTypeRequest::validate()
{
}

web::json::value EnablePolicyTypeRequest::toJson() const
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
bool EnablePolicyTypeRequest::fromJson(const web::json::value& val)
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
            PolicyTypeReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string EnablePolicyTypeRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void EnablePolicyTypeRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool EnablePolicyTypeRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void EnablePolicyTypeRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

PolicyTypeReqBody EnablePolicyTypeRequest::getBody() const
{
    return body_;
}

void EnablePolicyTypeRequest::setBody(const PolicyTypeReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnablePolicyTypeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnablePolicyTypeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


