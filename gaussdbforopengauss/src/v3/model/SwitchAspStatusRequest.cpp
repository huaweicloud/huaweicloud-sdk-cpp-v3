

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchAspStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchAspStatusRequest::SwitchAspStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchAspStatusRequest::~SwitchAspStatusRequest() = default;

void SwitchAspStatusRequest::validate()
{
}

web::json::value SwitchAspStatusRequest::toJson() const
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
bool SwitchAspStatusRequest::fromJson(const web::json::value& val)
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
            SwitchAspStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchAspStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchAspStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchAspStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchAspStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchAspStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchAspStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchAspStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchAspStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchAspStatusRequestBody SwitchAspStatusRequest::getBody() const
{
    return body_;
}

void SwitchAspStatusRequest::setBody(const SwitchAspStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchAspStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchAspStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


