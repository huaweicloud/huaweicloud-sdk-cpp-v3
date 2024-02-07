

#include "huaweicloud/rds/v3/model/UpdatePostgresqlExtensionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlExtensionRequest::UpdatePostgresqlExtensionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePostgresqlExtensionRequest::~UpdatePostgresqlExtensionRequest() = default;

void UpdatePostgresqlExtensionRequest::validate()
{
}

web::json::value UpdatePostgresqlExtensionRequest::toJson() const
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
bool UpdatePostgresqlExtensionRequest::fromJson(const web::json::value& val)
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
            ExtensionRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePostgresqlExtensionRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePostgresqlExtensionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePostgresqlExtensionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePostgresqlExtensionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdatePostgresqlExtensionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePostgresqlExtensionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePostgresqlExtensionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePostgresqlExtensionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ExtensionRequest UpdatePostgresqlExtensionRequest::getBody() const
{
    return body_;
}

void UpdatePostgresqlExtensionRequest::setBody(const ExtensionRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlExtensionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlExtensionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


