

#include "huaweicloud/dds/v3/model/DeleteDatabaseUserRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteDatabaseUserRequestBody::DeleteDatabaseUserRequestBody()
{
    userName_ = "";
    userNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
}

DeleteDatabaseUserRequestBody::~DeleteDatabaseUserRequestBody() = default;

void DeleteDatabaseUserRequestBody::validate()
{
}

web::json::value DeleteDatabaseUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}
bool DeleteDatabaseUserRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    return ok;
}


std::string DeleteDatabaseUserRequestBody::getUserName() const
{
    return userName_;
}

void DeleteDatabaseUserRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DeleteDatabaseUserRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void DeleteDatabaseUserRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DeleteDatabaseUserRequestBody::getDbName() const
{
    return dbName_;
}

void DeleteDatabaseUserRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeleteDatabaseUserRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeleteDatabaseUserRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


