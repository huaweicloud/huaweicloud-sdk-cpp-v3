

#include "huaweicloud/rds/v3/model/ListTopSqlsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListTopSqlsRequest::ListTopSqlsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    statement_ = "";
    statementIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListTopSqlsRequest::~ListTopSqlsRequest() = default;

void ListTopSqlsRequest::validate()
{
}

web::json::value ListTopSqlsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(statementIsSet_) {
        val[utility::conversions::to_string_t("statement")] = ModelBase::toJson(statement_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListTopSqlsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string ListTopSqlsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTopSqlsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTopSqlsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTopSqlsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTopSqlsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTopSqlsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTopSqlsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTopSqlsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTopSqlsRequest::getSortKey() const
{
    return sortKey_;
}

void ListTopSqlsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListTopSqlsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListTopSqlsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListTopSqlsRequest::getLimit() const
{
    return limit_;
}

void ListTopSqlsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTopSqlsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTopSqlsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTopSqlsRequest::getStatement() const
{
    return statement_;
}

void ListTopSqlsRequest::setStatement(const std::string& value)
{
    statement_ = value;
    statementIsSet_ = true;
}

bool ListTopSqlsRequest::statementIsSet() const
{
    return statementIsSet_;
}

void ListTopSqlsRequest::unsetstatement()
{
    statementIsSet_ = false;
}

std::string ListTopSqlsRequest::getSortDir() const
{
    return sortDir_;
}

void ListTopSqlsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListTopSqlsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListTopSqlsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


