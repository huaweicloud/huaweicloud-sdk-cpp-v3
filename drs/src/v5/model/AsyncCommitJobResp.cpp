

#include "huaweicloud/drs/v5/model/AsyncCommitJobResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AsyncCommitJobResp::AsyncCommitJobResp()
{
    asyncJobId_ = "";
    asyncJobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    msg_ = "";
    msgIsSet_ = false;
}

AsyncCommitJobResp::~AsyncCommitJobResp() = default;

void AsyncCommitJobResp::validate()
{
}

web::json::value AsyncCommitJobResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asyncJobIdIsSet_) {
        val[utility::conversions::to_string_t("async_job_id")] = ModelBase::toJson(asyncJobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(msgIsSet_) {
        val[utility::conversions::to_string_t("msg")] = ModelBase::toJson(msg_);
    }

    return val;
}

bool AsyncCommitJobResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsg(refVal);
        }
    }
    return ok;
}

std::string AsyncCommitJobResp::getAsyncJobId() const
{
    return asyncJobId_;
}

void AsyncCommitJobResp::setAsyncJobId(const std::string& value)
{
    asyncJobId_ = value;
    asyncJobIdIsSet_ = true;
}

bool AsyncCommitJobResp::asyncJobIdIsSet() const
{
    return asyncJobIdIsSet_;
}

void AsyncCommitJobResp::unsetasyncJobId()
{
    asyncJobIdIsSet_ = false;
}

std::string AsyncCommitJobResp::getStatus() const
{
    return status_;
}

void AsyncCommitJobResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AsyncCommitJobResp::statusIsSet() const
{
    return statusIsSet_;
}

void AsyncCommitJobResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AsyncCommitJobResp::getMsg() const
{
    return msg_;
}

void AsyncCommitJobResp::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool AsyncCommitJobResp::msgIsSet() const
{
    return msgIsSet_;
}

void AsyncCommitJobResp::unsetmsg()
{
    msgIsSet_ = false;
}

}
}
}
}
}


