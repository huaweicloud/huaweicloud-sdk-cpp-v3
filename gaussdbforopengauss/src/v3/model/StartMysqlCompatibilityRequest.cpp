

#include "huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StartMysqlCompatibilityRequest::StartMysqlCompatibilityRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

StartMysqlCompatibilityRequest::~StartMysqlCompatibilityRequest() = default;

void StartMysqlCompatibilityRequest::validate()
{
}

web::json::value StartMysqlCompatibilityRequest::toJson() const
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
bool StartMysqlCompatibilityRequest::fromJson(const web::json::value& val)
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
            StartMySQLCompatibilityRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartMysqlCompatibilityRequest::getInstanceId() const
{
    return instanceId_;
}

void StartMysqlCompatibilityRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartMysqlCompatibilityRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartMysqlCompatibilityRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string StartMysqlCompatibilityRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartMysqlCompatibilityRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartMysqlCompatibilityRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartMysqlCompatibilityRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

StartMySQLCompatibilityRequestBody StartMysqlCompatibilityRequest::getBody() const
{
    return body_;
}

void StartMysqlCompatibilityRequest::setBody(const StartMySQLCompatibilityRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartMysqlCompatibilityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartMysqlCompatibilityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


