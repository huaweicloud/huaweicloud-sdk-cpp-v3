

#include "huaweicloud/drs/v5/model/ListAsyncJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListAsyncJobsRequest::ListAsyncJobsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListAsyncJobsRequest::~ListAsyncJobsRequest() = default;

void ListAsyncJobsRequest::validate()
{
}

web::json::value ListAsyncJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListAsyncJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("async_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("async_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsyncJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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


std::string ListAsyncJobsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAsyncJobsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAsyncJobsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAsyncJobsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAsyncJobsRequest::getAsyncJobId() const
{
    return asyncJobId_;
}

void ListAsyncJobsRequest::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool ListAsyncJobsRequest::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void ListAsyncJobsRequest::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string ListAsyncJobsRequest::getStatus() const
{
    return status_;
}

void ListAsyncJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAsyncJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAsyncJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAsyncJobsRequest::getDomainName() const
{
    return domainName_;
}

void ListAsyncJobsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListAsyncJobsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListAsyncJobsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListAsyncJobsRequest::getUserName() const
{
    return userName_;
}

void ListAsyncJobsRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListAsyncJobsRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListAsyncJobsRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

int32_t ListAsyncJobsRequest::getOffset() const
{
    return offset_;
}

void ListAsyncJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAsyncJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAsyncJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAsyncJobsRequest::getLimit() const
{
    return limit_;
}

void ListAsyncJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAsyncJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAsyncJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAsyncJobsRequest::getSortKey() const
{
    return sortKey_;
}

void ListAsyncJobsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAsyncJobsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAsyncJobsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAsyncJobsRequest::getSortDir() const
{
    return sortDir_;
}

void ListAsyncJobsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAsyncJobsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAsyncJobsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


