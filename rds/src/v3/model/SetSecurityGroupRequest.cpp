

#include "huaweicloud/rds/v3/model/SetSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetSecurityGroupRequest::SetSecurityGroupRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSecurityGroupRequest::~SetSecurityGroupRequest() = default;

void SetSecurityGroupRequest::validate()
{
}

web::json::value SetSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SecurityGroupRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSecurityGroupRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetSecurityGroupRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetSecurityGroupRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetSecurityGroupRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetSecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SecurityGroupRequest SetSecurityGroupRequest::getBody() const
{
    return body_;
}

void SetSecurityGroupRequest::setBody(const SecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


