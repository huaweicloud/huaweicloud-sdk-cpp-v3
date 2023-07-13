

#include "huaweicloud/drs/v5/model/ShowJobDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowJobDetailRequest::ShowJobDetailRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    compareType_ = "";
    compareTypeIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    compareDetailType_ = "";
    compareDetailTypeIsSet_ = false;
}

ShowJobDetailRequest::~ShowJobDetailRequest() = default;

void ShowJobDetailRequest::validate()
{
}

web::json::value ShowJobDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(compareDetailTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_detail_type")] = ModelBase::toJson(compareDetailType_);
    }

    return val;
}

bool ShowJobDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compare_detail_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_detail_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareDetailType(refVal);
        }
    }
    return ok;
}

std::string ShowJobDetailRequest::getJobId() const
{
    return jobId_;
}

void ShowJobDetailRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobDetailRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobDetailRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowJobDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowJobDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowJobDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowJobDetailRequest::getType() const
{
    return type_;
}

void ShowJobDetailRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowJobDetailRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowJobDetailRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowJobDetailRequest::getQueryId() const
{
    return queryId_;
}

void ShowJobDetailRequest::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool ShowJobDetailRequest::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void ShowJobDetailRequest::unsetqueryId()
{
    queryIdIsSet_ = false;
}

int32_t ShowJobDetailRequest::getOffset() const
{
    return offset_;
}

void ShowJobDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowJobDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowJobDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowJobDetailRequest::getLimit() const
{
    return limit_;
}

void ShowJobDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowJobDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowJobDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowJobDetailRequest::getCompareType() const
{
    return compareType_;
}

void ShowJobDetailRequest::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ShowJobDetailRequest::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ShowJobDetailRequest::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string ShowJobDetailRequest::getQueryType() const
{
    return queryType_;
}

void ShowJobDetailRequest::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ShowJobDetailRequest::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ShowJobDetailRequest::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ShowJobDetailRequest::getObjectType() const
{
    return objectType_;
}

void ShowJobDetailRequest::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool ShowJobDetailRequest::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void ShowJobDetailRequest::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string ShowJobDetailRequest::getCompareTaskId() const
{
    return compareTaskId_;
}

void ShowJobDetailRequest::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool ShowJobDetailRequest::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void ShowJobDetailRequest::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::string ShowJobDetailRequest::getSourceDbName() const
{
    return sourceDbName_;
}

void ShowJobDetailRequest::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ShowJobDetailRequest::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ShowJobDetailRequest::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ShowJobDetailRequest::getTargetDbName() const
{
    return targetDbName_;
}

void ShowJobDetailRequest::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ShowJobDetailRequest::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ShowJobDetailRequest::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ShowJobDetailRequest::getCompareDetailType() const
{
    return compareDetailType_;
}

void ShowJobDetailRequest::setCompareDetailType(const std::string& value)
{
    compareDetailType_ = value;
    compareDetailTypeIsSet_ = true;
}

bool ShowJobDetailRequest::compareDetailTypeIsSet() const
{
    return compareDetailTypeIsSet_;
}

void ShowJobDetailRequest::unsetcompareDetailType()
{
    compareDetailTypeIsSet_ = false;
}

}
}
}
}
}


