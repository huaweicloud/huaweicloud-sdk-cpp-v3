

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlDatabaseUserRequest::DeleteGaussMySqlDatabaseUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteGaussMySqlDatabaseUserRequest::~DeleteGaussMySqlDatabaseUserRequest() = default;

void DeleteGaussMySqlDatabaseUserRequest::validate()
{
}

web::json::value DeleteGaussMySqlDatabaseUserRequest::toJson() const
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

bool DeleteGaussMySqlDatabaseUserRequest::fromJson(const web::json::value& val)
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
            DeleteDatabaseUserRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteGaussMySqlDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteGaussMySqlDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteGaussMySqlDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteDatabaseUserRequest DeleteGaussMySqlDatabaseUserRequest::getBody() const
{
    return body_;
}

void DeleteGaussMySqlDatabaseUserRequest::setBody(const DeleteDatabaseUserRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteGaussMySqlDatabaseUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


