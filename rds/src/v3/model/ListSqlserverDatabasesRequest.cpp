

#include "huaweicloud/rds/v3/model/ListSqlserverDatabasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlserverDatabasesRequest::ListSqlserverDatabasesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    recoverModel_ = "";
    recoverModelIsSet_ = false;
}

ListSqlserverDatabasesRequest::~ListSqlserverDatabasesRequest() = default;

void ListSqlserverDatabasesRequest::validate()
{
}

web::json::value ListSqlserverDatabasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db-name")] = ModelBase::toJson(dbName_);
    }
    if(recoverModelIsSet_) {
        val[utility::conversions::to_string_t("recover_model")] = ModelBase::toJson(recoverModel_);
    }

    return val;
}
bool ListSqlserverDatabasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db-name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db-name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recover_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recover_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverModel(refVal);
        }
    }
    return ok;
}


std::string ListSqlserverDatabasesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSqlserverDatabasesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSqlserverDatabasesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSqlserverDatabasesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlserverDatabasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlserverDatabasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSqlserverDatabasesRequest::getPage() const
{
    return page_;
}

void ListSqlserverDatabasesRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListSqlserverDatabasesRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListSqlserverDatabasesRequest::getLimit() const
{
    return limit_;
}

void ListSqlserverDatabasesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlserverDatabasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSqlserverDatabasesRequest::getDbName() const
{
    return dbName_;
}

void ListSqlserverDatabasesRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListSqlserverDatabasesRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListSqlserverDatabasesRequest::getRecoverModel() const
{
    return recoverModel_;
}

void ListSqlserverDatabasesRequest::setRecoverModel(const std::string& value)
{
    recoverModel_ = value;
    recoverModelIsSet_ = true;
}

bool ListSqlserverDatabasesRequest::recoverModelIsSet() const
{
    return recoverModelIsSet_;
}

void ListSqlserverDatabasesRequest::unsetrecoverModel()
{
    recoverModelIsSet_ = false;
}

}
}
}
}
}


