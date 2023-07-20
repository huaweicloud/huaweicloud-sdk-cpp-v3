

#include "huaweicloud/dds/v3/model/ListDatabaseUsersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListDatabaseUsersRequest::ListDatabaseUsersRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDatabaseUsersRequest::~ListDatabaseUsersRequest() = default;

void ListDatabaseUsersRequest::validate()
{
}

web::json::value ListDatabaseUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListDatabaseUsersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}

std::string ListDatabaseUsersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDatabaseUsersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDatabaseUsersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDatabaseUsersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDatabaseUsersRequest::getUserName() const
{
    return userName_;
}

void ListDatabaseUsersRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListDatabaseUsersRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListDatabaseUsersRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListDatabaseUsersRequest::getDbName() const
{
    return dbName_;
}

void ListDatabaseUsersRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListDatabaseUsersRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListDatabaseUsersRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListDatabaseUsersRequest::getOffset() const
{
    return offset_;
}

void ListDatabaseUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDatabaseUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDatabaseUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDatabaseUsersRequest::getLimit() const
{
    return limit_;
}

void ListDatabaseUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDatabaseUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDatabaseUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


