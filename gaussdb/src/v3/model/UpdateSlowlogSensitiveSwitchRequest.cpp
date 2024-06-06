

#include "huaweicloud/gaussdb/v3/model/UpdateSlowlogSensitiveSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSlowlogSensitiveSwitchRequest::UpdateSlowlogSensitiveSwitchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSlowlogSensitiveSwitchRequest::~UpdateSlowlogSensitiveSwitchRequest() = default;

void UpdateSlowlogSensitiveSwitchRequest::validate()
{
}

web::json::value UpdateSlowlogSensitiveSwitchRequest::toJson() const
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
bool UpdateSlowlogSensitiveSwitchRequest::fromJson(const web::json::value& val)
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
            UpdateSlowlogSensitiveSwitchRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSlowlogSensitiveSwitchRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateSlowlogSensitiveSwitchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateSlowlogSensitiveSwitchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateSlowlogSensitiveSwitchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateSlowlogSensitiveSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSlowlogSensitiveSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSlowlogSensitiveSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSlowlogSensitiveSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSlowlogSensitiveSwitchRequestBody UpdateSlowlogSensitiveSwitchRequest::getBody() const
{
    return body_;
}

void UpdateSlowlogSensitiveSwitchRequest::setBody(const UpdateSlowlogSensitiveSwitchRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSlowlogSensitiveSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSlowlogSensitiveSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


