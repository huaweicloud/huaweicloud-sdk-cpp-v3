

#include "huaweicloud/rds/v3/model/StartInstanceSingleToHaActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceSingleToHaActionRequest::StartInstanceSingleToHaActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartInstanceSingleToHaActionRequest::~StartInstanceSingleToHaActionRequest() = default;

void StartInstanceSingleToHaActionRequest::validate()
{
}

web::json::value StartInstanceSingleToHaActionRequest::toJson() const
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
bool StartInstanceSingleToHaActionRequest::fromJson(const web::json::value& val)
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
            Single2Ha refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartInstanceSingleToHaActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartInstanceSingleToHaActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartInstanceSingleToHaActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartInstanceSingleToHaActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartInstanceSingleToHaActionRequest::getInstanceId() const
{
    return instanceId_;
}

void StartInstanceSingleToHaActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartInstanceSingleToHaActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartInstanceSingleToHaActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

Single2Ha StartInstanceSingleToHaActionRequest::getBody() const
{
    return body_;
}

void StartInstanceSingleToHaActionRequest::setBody(const Single2Ha& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartInstanceSingleToHaActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartInstanceSingleToHaActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


