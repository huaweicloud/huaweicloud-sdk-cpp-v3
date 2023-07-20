

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabaseUserRequest::CreateGaussMySqlDatabaseUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGaussMySqlDatabaseUserRequest::~CreateGaussMySqlDatabaseUserRequest() = default;

void CreateGaussMySqlDatabaseUserRequest::validate()
{
}

web::json::value CreateGaussMySqlDatabaseUserRequest::toJson() const
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

bool CreateGaussMySqlDatabaseUserRequest::fromJson(const web::json::value& val)
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
            CreateDatabaseUserRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void CreateGaussMySqlDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CreateGaussMySqlDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CreateGaussMySqlDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CreateGaussMySqlDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateGaussMySqlDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateGaussMySqlDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateGaussMySqlDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDatabaseUserRequest CreateGaussMySqlDatabaseUserRequest::getBody() const
{
    return body_;
}

void CreateGaussMySqlDatabaseUserRequest::setBody(const CreateDatabaseUserRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGaussMySqlDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGaussMySqlDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


