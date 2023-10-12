

#include "huaweicloud/rds/v3/model/StartInstanceEnlargeVolumeActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceEnlargeVolumeActionRequest::StartInstanceEnlargeVolumeActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartInstanceEnlargeVolumeActionRequest::~StartInstanceEnlargeVolumeActionRequest() = default;

void StartInstanceEnlargeVolumeActionRequest::validate()
{
}

web::json::value StartInstanceEnlargeVolumeActionRequest::toJson() const
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
bool StartInstanceEnlargeVolumeActionRequest::fromJson(const web::json::value& val)
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
            EnlargeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartInstanceEnlargeVolumeActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartInstanceEnlargeVolumeActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartInstanceEnlargeVolumeActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartInstanceEnlargeVolumeActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartInstanceEnlargeVolumeActionRequest::getInstanceId() const
{
    return instanceId_;
}

void StartInstanceEnlargeVolumeActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartInstanceEnlargeVolumeActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartInstanceEnlargeVolumeActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

EnlargeVolumeRequestBody StartInstanceEnlargeVolumeActionRequest::getBody() const
{
    return body_;
}

void StartInstanceEnlargeVolumeActionRequest::setBody(const EnlargeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartInstanceEnlargeVolumeActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartInstanceEnlargeVolumeActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


