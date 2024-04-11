

#include "huaweicloud/drs/v3/model/ListDataCompareDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataCompareDetailRequest::ListDataCompareDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    queryTbName_ = "";
    queryTbNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDataCompareDetailRequest::~ListDataCompareDetailRequest() = default;

void ListDataCompareDetailRequest::validate()
{
}

web::json::value ListDataCompareDetailRequest::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(queryTbNameIsSet_) {
        val[utility::conversions::to_string_t("query_tb_name")] = ModelBase::toJson(queryTbName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDataCompareDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_tb_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_tb_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryTbName(refVal);
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


std::string ListDataCompareDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDataCompareDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDataCompareDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDataCompareDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getJobId() const
{
    return jobId_;
}

void ListDataCompareDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDataCompareDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDataCompareDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListDataCompareDetailRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListDataCompareDetailRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListDataCompareDetailRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

int32_t ListDataCompareDetailRequest::getStatus() const
{
    return status_;
}

void ListDataCompareDetailRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDataCompareDetailRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListDataCompareDetailRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getType() const
{
    return type_;
}

void ListDataCompareDetailRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDataCompareDetailRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListDataCompareDetailRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getDbName() const
{
    return dbName_;
}

void ListDataCompareDetailRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListDataCompareDetailRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListDataCompareDetailRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getTargetDbName() const
{
    return targetDbName_;
}

void ListDataCompareDetailRequest::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ListDataCompareDetailRequest::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ListDataCompareDetailRequest::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ListDataCompareDetailRequest::getQueryTbName() const
{
    return queryTbName_;
}

void ListDataCompareDetailRequest::setQueryTbName(const std::string& value)
{
    queryTbName_ = value;
    queryTbNameIsSet_ = true;
}

bool ListDataCompareDetailRequest::queryTbNameIsSet() const
{
    return queryTbNameIsSet_;
}

void ListDataCompareDetailRequest::unsetqueryTbName()
{
    queryTbNameIsSet_ = false;
}

int32_t ListDataCompareDetailRequest::getLimit() const
{
    return limit_;
}

void ListDataCompareDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDataCompareDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDataCompareDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListDataCompareDetailRequest::getOffset() const
{
    return offset_;
}

void ListDataCompareDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDataCompareDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDataCompareDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


