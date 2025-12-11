

#include "huaweicloud/gaussdb/v3/model/ShowSqlAutoSqlLimitingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlAutoSqlLimitingRequest::ShowSqlAutoSqlLimitingRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowSqlAutoSqlLimitingRequest::~ShowSqlAutoSqlLimitingRequest() = default;

void ShowSqlAutoSqlLimitingRequest::validate()
{
}

web::json::value ShowSqlAutoSqlLimitingRequest::toJson() const
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
bool ShowSqlAutoSqlLimitingRequest::fromJson(const web::json::value& val)
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
            ShowSqlAutoSqlLimitingReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowSqlAutoSqlLimitingRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSqlAutoSqlLimitingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSqlAutoSqlLimitingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSqlAutoSqlLimitingRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlAutoSqlLimitingRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlAutoSqlLimitingRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ShowSqlAutoSqlLimitingReq ShowSqlAutoSqlLimitingRequest::getBody() const
{
    return body_;
}

void ShowSqlAutoSqlLimitingRequest::setBody(const ShowSqlAutoSqlLimitingReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowSqlAutoSqlLimitingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowSqlAutoSqlLimitingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


