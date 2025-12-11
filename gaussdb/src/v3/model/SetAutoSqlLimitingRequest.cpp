

#include "huaweicloud/gaussdb/v3/model/SetAutoSqlLimitingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetAutoSqlLimitingRequest::SetAutoSqlLimitingRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAutoSqlLimitingRequest::~SetAutoSqlLimitingRequest() = default;

void SetAutoSqlLimitingRequest::validate()
{
}

web::json::value SetAutoSqlLimitingRequest::toJson() const
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
bool SetAutoSqlLimitingRequest::fromJson(const web::json::value& val)
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
            SetAutoSqlLimitingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAutoSqlLimitingRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetAutoSqlLimitingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetAutoSqlLimitingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetAutoSqlLimitingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetAutoSqlLimitingRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAutoSqlLimitingRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAutoSqlLimitingRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAutoSqlLimitingRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetAutoSqlLimitingReq SetAutoSqlLimitingRequest::getBody() const
{
    return body_;
}

void SetAutoSqlLimitingRequest::setBody(const SetAutoSqlLimitingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoSqlLimitingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoSqlLimitingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


