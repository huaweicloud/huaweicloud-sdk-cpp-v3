

#include "huaweicloud/rds/v3/model/UpdateDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseRequest::UpdateDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDatabaseRequest::~UpdateDatabaseRequest() = default;

void UpdateDatabaseRequest::validate()
{
}

web::json::value UpdateDatabaseRequest::toJson() const
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
bool UpdateDatabaseRequest::fromJson(const web::json::value& val)
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
            UpdateDatabaseReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabaseReq UpdateDatabaseRequest::getBody() const
{
    return body_;
}

void UpdateDatabaseRequest::setBody(const UpdateDatabaseReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


