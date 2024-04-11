

#include "huaweicloud/drs/v3/model/ListContentCompareDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListContentCompareDetailRequest::ListContentCompareDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListContentCompareDetailRequest::~ListContentCompareDetailRequest() = default;

void ListContentCompareDetailRequest::validate()
{
}

web::json::value ListContentCompareDetailRequest::toJson() const
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
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListContentCompareDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ListContentCompareDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListContentCompareDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListContentCompareDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListContentCompareDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListContentCompareDetailRequest::getJobId() const
{
    return jobId_;
}

void ListContentCompareDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListContentCompareDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListContentCompareDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListContentCompareDetailRequest::getCompareJobId() const
{
    return compareJobId_;
}

void ListContentCompareDetailRequest::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ListContentCompareDetailRequest::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ListContentCompareDetailRequest::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ListContentCompareDetailRequest::getTargetDbName() const
{
    return targetDbName_;
}

void ListContentCompareDetailRequest::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ListContentCompareDetailRequest::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ListContentCompareDetailRequest::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ListContentCompareDetailRequest::getDbName() const
{
    return dbName_;
}

void ListContentCompareDetailRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListContentCompareDetailRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListContentCompareDetailRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListContentCompareDetailRequest::getType() const
{
    return type_;
}

void ListContentCompareDetailRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListContentCompareDetailRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListContentCompareDetailRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListContentCompareDetailRequest::getLimit() const
{
    return limit_;
}

void ListContentCompareDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListContentCompareDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListContentCompareDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListContentCompareDetailRequest::getOffset() const
{
    return offset_;
}

void ListContentCompareDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListContentCompareDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListContentCompareDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


