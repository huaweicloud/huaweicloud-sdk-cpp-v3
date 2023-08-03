

#include "huaweicloud/rds/v3/model/ListAuthorizedDbUsersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListAuthorizedDbUsersRequest::ListAuthorizedDbUsersRequest()
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

ListAuthorizedDbUsersRequest::~ListAuthorizedDbUsersRequest() = default;

void ListAuthorizedDbUsersRequest::validate()
{
}

web::json::value ListAuthorizedDbUsersRequest::toJson() const
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

bool ListAuthorizedDbUsersRequest::fromJson(const web::json::value& val)
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

std::string ListAuthorizedDbUsersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAuthorizedDbUsersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAuthorizedDbUsersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAuthorizedDbUsersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAuthorizedDbUsersRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuthorizedDbUsersRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuthorizedDbUsersRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuthorizedDbUsersRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuthorizedDbUsersRequest::getDbName() const
{
    return dbName_;
}

void ListAuthorizedDbUsersRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListAuthorizedDbUsersRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListAuthorizedDbUsersRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListAuthorizedDbUsersRequest::getPage() const
{
    return page_;
}

void ListAuthorizedDbUsersRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAuthorizedDbUsersRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListAuthorizedDbUsersRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAuthorizedDbUsersRequest::getLimit() const
{
    return limit_;
}

void ListAuthorizedDbUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuthorizedDbUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuthorizedDbUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


