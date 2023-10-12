

#include "huaweicloud/rds/v3/model/ListAuthorizedSqlserverDbUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuthorizedSqlserverDbUsersRequest::ListAuthorizedSqlserverDbUsersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAuthorizedSqlserverDbUsersRequest::~ListAuthorizedSqlserverDbUsersRequest() = default;

void ListAuthorizedSqlserverDbUsersRequest::validate()
{
}

web::json::value ListAuthorizedSqlserverDbUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db-name")] = ModelBase::toJson(dbName_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAuthorizedSqlserverDbUsersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db-name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db-name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
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


std::string ListAuthorizedSqlserverDbUsersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAuthorizedSqlserverDbUsersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAuthorizedSqlserverDbUsersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAuthorizedSqlserverDbUsersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuthorizedSqlserverDbUsersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuthorizedSqlserverDbUsersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuthorizedSqlserverDbUsersRequest::getDbName() const
{
    return dbName_;
}

void ListAuthorizedSqlserverDbUsersRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListAuthorizedSqlserverDbUsersRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListAuthorizedSqlserverDbUsersRequest::getPage() const
{
    return page_;
}

void ListAuthorizedSqlserverDbUsersRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListAuthorizedSqlserverDbUsersRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAuthorizedSqlserverDbUsersRequest::getLimit() const
{
    return limit_;
}

void ListAuthorizedSqlserverDbUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuthorizedSqlserverDbUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuthorizedSqlserverDbUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


