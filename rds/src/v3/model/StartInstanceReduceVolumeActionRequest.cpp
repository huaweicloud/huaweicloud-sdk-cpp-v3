

#include "huaweicloud/rds/v3/model/StartInstanceReduceVolumeActionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceReduceVolumeActionRequest::StartInstanceReduceVolumeActionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartInstanceReduceVolumeActionRequest::~StartInstanceReduceVolumeActionRequest() = default;

void StartInstanceReduceVolumeActionRequest::validate()
{
}

web::json::value StartInstanceReduceVolumeActionRequest::toJson() const
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
bool StartInstanceReduceVolumeActionRequest::fromJson(const web::json::value& val)
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
            ReduceVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartInstanceReduceVolumeActionRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartInstanceReduceVolumeActionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartInstanceReduceVolumeActionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartInstanceReduceVolumeActionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartInstanceReduceVolumeActionRequest::getInstanceId() const
{
    return instanceId_;
}

void StartInstanceReduceVolumeActionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartInstanceReduceVolumeActionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartInstanceReduceVolumeActionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ReduceVolumeRequestBody StartInstanceReduceVolumeActionRequest::getBody() const
{
    return body_;
}

void StartInstanceReduceVolumeActionRequest::setBody(const ReduceVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartInstanceReduceVolumeActionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartInstanceReduceVolumeActionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


