

#include "huaweicloud/rds/v3/model/UpdateToPeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateToPeriodRequest::UpdateToPeriodRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateToPeriodRequest::~UpdateToPeriodRequest() = default;

void UpdateToPeriodRequest::validate()
{
}

web::json::value UpdateToPeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateToPeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ToPeriodReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateToPeriodRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateToPeriodRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateToPeriodRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateToPeriodRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateToPeriodRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateToPeriodRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateToPeriodRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateToPeriodRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ToPeriodReq UpdateToPeriodRequest::getBody() const
{
    return body_;
}

void UpdateToPeriodRequest::setBody(const ToPeriodReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateToPeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateToPeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


