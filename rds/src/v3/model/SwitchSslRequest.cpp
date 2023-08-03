

#include "huaweicloud/rds/v3/model/SwitchSslRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSslRequest::SwitchSslRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSslRequest::~SwitchSslRequest() = default;

void SwitchSslRequest::validate()
{
}

web::json::value SwitchSslRequest::toJson() const
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

bool SwitchSslRequest::fromJson(const web::json::value& val)
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
            SslOptionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SwitchSslRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchSslRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchSslRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchSslRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchSslRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSslRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSslRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSslRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SslOptionRequest SwitchSslRequest::getBody() const
{
    return body_;
}

void SwitchSslRequest::setBody(const SslOptionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSslRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSslRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


