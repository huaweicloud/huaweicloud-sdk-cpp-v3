

#include "huaweicloud/gaussdbforopengauss/v3/model/ResetPwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResetPwdRequest::ResetPwdRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetPwdRequest::~ResetPwdRequest() = default;

void ResetPwdRequest::validate()
{
}

web::json::value ResetPwdRequest::toJson() const
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
bool ResetPwdRequest::fromJson(const web::json::value& val)
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
            PwdResetRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetPwdRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetPwdRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetPwdRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetPwdRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetPwdRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetPwdRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetPwdRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetPwdRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PwdResetRequest ResetPwdRequest::getBody() const
{
    return body_;
}

void ResetPwdRequest::setBody(const PwdResetRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetPwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetPwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


