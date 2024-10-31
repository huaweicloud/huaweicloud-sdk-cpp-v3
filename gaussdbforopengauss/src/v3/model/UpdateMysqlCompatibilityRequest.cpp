

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateMysqlCompatibilityRequest::UpdateMysqlCompatibilityRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMysqlCompatibilityRequest::~UpdateMysqlCompatibilityRequest() = default;

void UpdateMysqlCompatibilityRequest::validate()
{
}

web::json::value UpdateMysqlCompatibilityRequest::toJson() const
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
bool UpdateMysqlCompatibilityRequest::fromJson(const web::json::value& val)
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
            UpdateMySQLCompatibilityRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMysqlCompatibilityRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateMysqlCompatibilityRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateMysqlCompatibilityRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateMysqlCompatibilityRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateMysqlCompatibilityRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateMysqlCompatibilityRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateMysqlCompatibilityRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateMysqlCompatibilityRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateMySQLCompatibilityRequestBody UpdateMysqlCompatibilityRequest::getBody() const
{
    return body_;
}

void UpdateMysqlCompatibilityRequest::setBody(const UpdateMySQLCompatibilityRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMysqlCompatibilityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMysqlCompatibilityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


