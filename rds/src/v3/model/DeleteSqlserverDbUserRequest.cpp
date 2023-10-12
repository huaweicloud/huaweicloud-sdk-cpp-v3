

#include "huaweicloud/rds/v3/model/DeleteSqlserverDbUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlserverDbUserRequest::DeleteSqlserverDbUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

DeleteSqlserverDbUserRequest::~DeleteSqlserverDbUserRequest() = default;

void DeleteSqlserverDbUserRequest::validate()
{
}

web::json::value DeleteSqlserverDbUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool DeleteSqlserverDbUserRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string DeleteSqlserverDbUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteSqlserverDbUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteSqlserverDbUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteSqlserverDbUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteSqlserverDbUserRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSqlserverDbUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSqlserverDbUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSqlserverDbUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteSqlserverDbUserRequest::getUserName() const
{
    return userName_;
}

void DeleteSqlserverDbUserRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DeleteSqlserverDbUserRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void DeleteSqlserverDbUserRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


