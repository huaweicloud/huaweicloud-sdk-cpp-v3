

#include "huaweicloud/drs/v5/model/AsyncJobResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncJobResp::AsyncJobResp()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

AsyncJobResp::~AsyncJobResp() = default;

void AsyncJobResp::validate()
{
}

web::json::value AsyncJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AsyncJobResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string AsyncJobResp::getAsyncJobId() const
{
    return asyncJobId_;
}

void AsyncJobResp::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool AsyncJobResp::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void AsyncJobResp::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string AsyncJobResp::getStatus() const
{
    return status_;
}

void AsyncJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AsyncJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void AsyncJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AsyncJobResp::getDomainName() const
{
    return domainName_;
}

void AsyncJobResp::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool AsyncJobResp::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void AsyncJobResp::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string AsyncJobResp::getUserName() const
{
    return userName_;
}

void AsyncJobResp::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool AsyncJobResp::userNameIsSet() const
{
    return userNameIsSet_;
}

void AsyncJobResp::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string AsyncJobResp::getCreateTime() const
{
    return createTime_;
}

void AsyncJobResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AsyncJobResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AsyncJobResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


