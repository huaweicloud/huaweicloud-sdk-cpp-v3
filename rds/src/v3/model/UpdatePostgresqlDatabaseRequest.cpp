

#include "huaweicloud/rds/v3/model/UpdatePostgresqlDatabaseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlDatabaseRequest::UpdatePostgresqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePostgresqlDatabaseRequest::~UpdatePostgresqlDatabaseRequest() = default;

void UpdatePostgresqlDatabaseRequest::validate()
{
}

web::json::value UpdatePostgresqlDatabaseRequest::toJson() const
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

bool UpdatePostgresqlDatabaseRequest::fromJson(const web::json::value& val)
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

std::string UpdatePostgresqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdatePostgresqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdatePostgresqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdatePostgresqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdatePostgresqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePostgresqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePostgresqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePostgresqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDatabaseReq UpdatePostgresqlDatabaseRequest::getBody() const
{
    return body_;
}

void UpdatePostgresqlDatabaseRequest::setBody(const UpdateDatabaseReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePostgresqlDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePostgresqlDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


