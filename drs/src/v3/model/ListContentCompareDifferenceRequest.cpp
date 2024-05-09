

#include "huaweicloud/drs/v3/model/ListContentCompareDifferenceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareDifferenceRequest::ListContentCompareDifferenceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListContentCompareDifferenceRequest::~ListContentCompareDifferenceRequest() = default;

void ListContentCompareDifferenceRequest::validate()
{
}

web::json::value ListContentCompareDifferenceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListContentCompareDifferenceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}


std::string ListContentCompareDifferenceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListContentCompareDifferenceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListContentCompareDifferenceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListContentCompareDifferenceRequest::getJobId() const
{
    return jobId_;
}

void ListContentCompareDifferenceRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListContentCompareDifferenceRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListContentCompareDifferenceRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListContentCompareDifferenceRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListContentCompareDifferenceRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ListContentCompareDifferenceRequest::getTableName() const
{
    return tableName_;
}

void ListContentCompareDifferenceRequest::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ListContentCompareDifferenceRequest::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ListContentCompareDifferenceRequest::getDbName() const
{
    return dbName_;
}

void ListContentCompareDifferenceRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListContentCompareDifferenceRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListContentCompareDifferenceRequest::getLimit() const
{
    return limit_;
}

void ListContentCompareDifferenceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListContentCompareDifferenceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListContentCompareDifferenceRequest::getOffset() const
{
    return offset_;
}

void ListContentCompareDifferenceRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListContentCompareDifferenceRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListContentCompareDifferenceRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


