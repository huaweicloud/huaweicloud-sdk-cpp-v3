

#include "huaweicloud/rds/v3/model/CreatePostgresqlDatabaseRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDatabaseRequest::CreatePostgresqlDatabaseRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePostgresqlDatabaseRequest::~CreatePostgresqlDatabaseRequest() = default;

void CreatePostgresqlDatabaseRequest::validate()
{
}

web::json::value CreatePostgresqlDatabaseRequest::toJson() const
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

bool CreatePostgresqlDatabaseRequest::fromJson(const web::json::value& val)
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
            PostgresqlDatabaseForCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreatePostgresqlDatabaseRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreatePostgresqlDatabaseRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreatePostgresqlDatabaseRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreatePostgresqlDatabaseRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreatePostgresqlDatabaseRequest::getInstanceId() const
{
    return instanceId_;
}

void CreatePostgresqlDatabaseRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreatePostgresqlDatabaseRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreatePostgresqlDatabaseRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PostgresqlDatabaseForCreation CreatePostgresqlDatabaseRequest::getBody() const
{
    return body_;
}

void CreatePostgresqlDatabaseRequest::setBody(const PostgresqlDatabaseForCreation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostgresqlDatabaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostgresqlDatabaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


