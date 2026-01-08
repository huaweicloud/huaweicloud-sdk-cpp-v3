

#include "huaweicloud/rds/v3/model/UpdateTimeZoneRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateTimeZoneRequest::UpdateTimeZoneRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTimeZoneRequest::~UpdateTimeZoneRequest() = default;

void UpdateTimeZoneRequest::validate()
{
}

web::json::value UpdateTimeZoneRequest::toJson() const
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
bool UpdateTimeZoneRequest::fromJson(const web::json::value& val)
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
            UpdateTimeZoneRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTimeZoneRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTimeZoneRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTimeZoneRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTimeZoneRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateTimeZoneRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateTimeZoneRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTimeZoneRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTimeZoneRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateTimeZoneRequestBody UpdateTimeZoneRequest::getBody() const
{
    return body_;
}

void UpdateTimeZoneRequest::setBody(const UpdateTimeZoneRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTimeZoneRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTimeZoneRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


