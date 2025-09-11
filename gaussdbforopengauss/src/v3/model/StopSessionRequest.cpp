

#include "huaweicloud/gaussdbforopengauss/v3/model/StopSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopSessionRequest::StopSessionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopSessionRequest::~StopSessionRequest() = default;

void StopSessionRequest::validate()
{
}

web::json::value StopSessionRequest::toJson() const
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
bool StopSessionRequest::fromJson(const web::json::value& val)
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
            KillSessionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopSessionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopSessionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopSessionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopSessionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void StopSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

KillSessionRequestBody StopSessionRequest::getBody() const
{
    return body_;
}

void StopSessionRequest::setBody(const KillSessionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


