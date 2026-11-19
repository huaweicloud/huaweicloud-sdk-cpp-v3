

#include "huaweicloud/gaussdbforopengauss/v3/model/StopSessionUseOpsTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopSessionUseOpsTunnelRequest::StopSessionUseOpsTunnelRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopSessionUseOpsTunnelRequest::~StopSessionUseOpsTunnelRequest() = default;

void StopSessionUseOpsTunnelRequest::validate()
{
}

web::json::value StopSessionUseOpsTunnelRequest::toJson() const
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
bool StopSessionUseOpsTunnelRequest::fromJson(const web::json::value& val)
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


std::string StopSessionUseOpsTunnelRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopSessionUseOpsTunnelRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopSessionUseOpsTunnelRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopSessionUseOpsTunnelRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopSessionUseOpsTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void StopSessionUseOpsTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopSessionUseOpsTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopSessionUseOpsTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

KillSessionRequestBody StopSessionUseOpsTunnelRequest::getBody() const
{
    return body_;
}

void StopSessionUseOpsTunnelRequest::setBody(const KillSessionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopSessionUseOpsTunnelRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopSessionUseOpsTunnelRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


