

#include "huaweicloud/drs/v5/model/ListDbObjectsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListDbObjectsRequest::ListDbObjectsRequest()
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
    dbNamesIsSet_ = false;
}

ListDbObjectsRequest::~ListDbObjectsRequest() = default;

void ListDbObjectsRequest::validate()
{
}

web::json::value ListDbObjectsRequest::toJson() const
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
    if(dbNamesIsSet_) {
        val[utility::conversions::to_string_t("db_names")] = ModelBase::toJson(dbNames_);
    }

    return val;
}

bool ListDbObjectsRequest::fromJson(const web::json::value& val)
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

std::string ListDbObjectsRequest::getJobId() const
{
    return jobId_;
}

void ListDbObjectsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListDbObjectsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListDbObjectsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListDbObjectsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDbObjectsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDbObjectsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDbObjectsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListDbObjectsRequest::getOffset() const
{
    return offset_;
}

void ListDbObjectsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDbObjectsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDbObjectsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDbObjectsRequest::getLimit() const
{
    return limit_;
}

void ListDbObjectsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDbObjectsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDbObjectsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDbObjectsRequest::getType() const
{
    return type_;
}

void ListDbObjectsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListDbObjectsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListDbObjectsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ListDbObjectsRequest::getDbNames()
{
    return dbNames_;
}

void ListDbObjectsRequest::setDbNames(const std::vector<std::string>& value)
{
    dbNames_ = value;
    dbNamesIsSet_ = true;
}

bool ListDbObjectsRequest::dbNamesIsSet() const
{
    return dbNamesIsSet_;
}

void ListDbObjectsRequest::unsetdbNames()
{
    dbNamesIsSet_ = false;
}

}
}
}
}
}


