

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeInstanceVersionRequest::UpgradeInstanceVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpgradeInstanceVersionRequest::~UpgradeInstanceVersionRequest() = default;

void UpgradeInstanceVersionRequest::validate()
{
}

web::json::value UpgradeInstanceVersionRequest::toJson() const
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
bool UpgradeInstanceVersionRequest::fromJson(const web::json::value& val)
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
            OpenGaussUpgradeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpgradeInstanceVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpgradeInstanceVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpgradeInstanceVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpgradeInstanceVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpgradeInstanceVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeInstanceVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeInstanceVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeInstanceVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpenGaussUpgradeRequest UpgradeInstanceVersionRequest::getBody() const
{
    return body_;
}

void UpgradeInstanceVersionRequest::setBody(const OpenGaussUpgradeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpgradeInstanceVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpgradeInstanceVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


