

#include "huaweicloud/rds/v3/model/UpdateStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateStatisticsRequest::UpdateStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStatisticsRequest::~UpdateStatisticsRequest() = default;

void UpdateStatisticsRequest::validate()
{
}

web::json::value UpdateStatisticsRequest::toJson() const
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
bool UpdateStatisticsRequest::fromJson(const web::json::value& val)
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
            UpdateStatisticsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateStatisticsRequestBody UpdateStatisticsRequest::getBody() const
{
    return body_;
}

void UpdateStatisticsRequest::setBody(const UpdateStatisticsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


