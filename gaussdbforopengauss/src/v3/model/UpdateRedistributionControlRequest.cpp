

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateRedistributionControlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateRedistributionControlRequest::UpdateRedistributionControlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRedistributionControlRequest::~UpdateRedistributionControlRequest() = default;

void UpdateRedistributionControlRequest::validate()
{
}

web::json::value UpdateRedistributionControlRequest::toJson() const
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
bool UpdateRedistributionControlRequest::fromJson(const web::json::value& val)
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
            RedistributionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRedistributionControlRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateRedistributionControlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateRedistributionControlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateRedistributionControlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateRedistributionControlRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateRedistributionControlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateRedistributionControlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateRedistributionControlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RedistributionRequestBody UpdateRedistributionControlRequest::getBody() const
{
    return body_;
}

void UpdateRedistributionControlRequest::setBody(const RedistributionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRedistributionControlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRedistributionControlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


