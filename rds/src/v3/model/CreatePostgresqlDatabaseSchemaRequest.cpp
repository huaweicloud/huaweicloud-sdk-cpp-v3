

#include "huaweicloud/rds/v3/model/CreatePostgresqlDatabaseSchemaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreatePostgresqlDatabaseSchemaRequest::CreatePostgresqlDatabaseSchemaRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePostgresqlDatabaseSchemaRequest::~CreatePostgresqlDatabaseSchemaRequest() = default;

void CreatePostgresqlDatabaseSchemaRequest::validate()
{
}

web::json::value CreatePostgresqlDatabaseSchemaRequest::toJson() const
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
bool CreatePostgresqlDatabaseSchemaRequest::fromJson(const web::json::value& val)
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
            PostgresqlDatabaseSchemaReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePostgresqlDatabaseSchemaRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreatePostgresqlDatabaseSchemaRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreatePostgresqlDatabaseSchemaRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreatePostgresqlDatabaseSchemaRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreatePostgresqlDatabaseSchemaRequest::getInstanceId() const
{
    return instanceId_;
}

void CreatePostgresqlDatabaseSchemaRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreatePostgresqlDatabaseSchemaRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreatePostgresqlDatabaseSchemaRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

PostgresqlDatabaseSchemaReq CreatePostgresqlDatabaseSchemaRequest::getBody() const
{
    return body_;
}

void CreatePostgresqlDatabaseSchemaRequest::setBody(const PostgresqlDatabaseSchemaReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostgresqlDatabaseSchemaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostgresqlDatabaseSchemaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


