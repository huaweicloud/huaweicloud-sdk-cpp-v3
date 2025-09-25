

#include "huaweicloud/gaussdb/v3/model/UpdateSlowlogSensitiveStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSlowlogSensitiveStatusRequest::UpdateSlowlogSensitiveStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSlowlogSensitiveStatusRequest::~UpdateSlowlogSensitiveStatusRequest() = default;

void UpdateSlowlogSensitiveStatusRequest::validate()
{
}

web::json::value UpdateSlowlogSensitiveStatusRequest::toJson() const
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
bool UpdateSlowlogSensitiveStatusRequest::fromJson(const web::json::value& val)
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
            UpdateSlowlogSensitiveStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSlowlogSensitiveStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateSlowlogSensitiveStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateSlowlogSensitiveStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateSlowlogSensitiveStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateSlowlogSensitiveStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSlowlogSensitiveStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSlowlogSensitiveStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSlowlogSensitiveStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSlowlogSensitiveStatusRequestBody UpdateSlowlogSensitiveStatusRequest::getBody() const
{
    return body_;
}

void UpdateSlowlogSensitiveStatusRequest::setBody(const UpdateSlowlogSensitiveStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSlowlogSensitiveStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSlowlogSensitiveStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


