

#include "huaweicloud/drs/v5/model/CollectDbObjectsAsyncRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDbObjectsAsyncRequest::CollectDbObjectsAsyncRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isRefresh_ = false;
    isRefreshIsSet_ = false;
    dbNamesIsSet_ = false;
}

CollectDbObjectsAsyncRequest::~CollectDbObjectsAsyncRequest() = default;

void CollectDbObjectsAsyncRequest::validate()
{
}

web::json::value CollectDbObjectsAsyncRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isRefreshIsSet_) {
        val[utility::conversions::to_string_t("is_refresh")] = ModelBase::toJson(isRefresh_);
    }
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }

    return val;
}
bool CollectDbObjectsAsyncRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_refresh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_refresh"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRefresh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbNames(refVal);
        }
    }
    return ok;
}


std::string CollectDbObjectsAsyncRequest::getJobId() const
{
    return jobId_;
}

void CollectDbObjectsAsyncRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectDbObjectsAsyncRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectDbObjectsAsyncRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t CollectDbObjectsAsyncRequest::getOffset() const
{
    return offset_;
}

void CollectDbObjectsAsyncRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t CollectDbObjectsAsyncRequest::getLimit() const
{
    return limit_;
}

void CollectDbObjectsAsyncRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::limitIsSet() const
{
    return limitIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string CollectDbObjectsAsyncRequest::getType() const
{
    return type_;
}

void CollectDbObjectsAsyncRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::typeIsSet() const
{
    return typeIsSet_;
}

void CollectDbObjectsAsyncRequest::unsettype()
{
    typeIsSet_ = false;
}

bool CollectDbObjectsAsyncRequest::isIsRefresh() const
{
    return isRefresh_;
}

void CollectDbObjectsAsyncRequest::setIsRefresh(bool value)
{
    isRefresh_ = value;
    isRefreshIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::isRefreshIsSet() const
{
    return isRefreshIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetisRefresh()
{
    isRefreshIsSet_ = false;
}

std::vector<std::string>& CollectDbObjectsAsyncRequest::getDbNames()
{
    return dbNames_;
}

void CollectDbObjectsAsyncRequest::setDbNames(const std::vector<std::string>& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool CollectDbObjectsAsyncRequest::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void CollectDbObjectsAsyncRequest::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

}
}
}
}
}


