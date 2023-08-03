

#include "huaweicloud/rds/v3/model/StartDatabaseProxyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartDatabaseProxyRequest::StartDatabaseProxyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartDatabaseProxyRequest::~StartDatabaseProxyRequest() = default;

void StartDatabaseProxyRequest::validate()
{
}

web::json::value StartDatabaseProxyRequest::toJson() const
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

bool StartDatabaseProxyRequest::fromJson(const web::json::value& val)
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
            OpenProxyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string StartDatabaseProxyRequest::getXLanguage() const
{
    return xLanguage_;
}

void StartDatabaseProxyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StartDatabaseProxyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StartDatabaseProxyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StartDatabaseProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void StartDatabaseProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartDatabaseProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartDatabaseProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpenProxyRequest StartDatabaseProxyRequest::getBody() const
{
    return body_;
}

void StartDatabaseProxyRequest::setBody(const OpenProxyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartDatabaseProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartDatabaseProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


