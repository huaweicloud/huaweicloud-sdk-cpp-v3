

#include "huaweicloud/gaussdb/v3/model/DeleteClickHouseDatabaseUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteClickHouseDatabaseUserRequest::DeleteClickHouseDatabaseUserRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

DeleteClickHouseDatabaseUserRequest::~DeleteClickHouseDatabaseUserRequest() = default;

void DeleteClickHouseDatabaseUserRequest::validate()
{
}

web::json::value DeleteClickHouseDatabaseUserRequest::toJson() const
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
bool DeleteClickHouseDatabaseUserRequest::fromJson(const web::json::value& val)
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


std::string DeleteClickHouseDatabaseUserRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteClickHouseDatabaseUserRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteClickHouseDatabaseUserRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteClickHouseDatabaseUserRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteClickHouseDatabaseUserRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteClickHouseDatabaseUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteClickHouseDatabaseUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteClickHouseDatabaseUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteClickHouseDatabaseUserRequest::getUserName() const
{
    return userName_;
}

void DeleteClickHouseDatabaseUserRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DeleteClickHouseDatabaseUserRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void DeleteClickHouseDatabaseUserRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


