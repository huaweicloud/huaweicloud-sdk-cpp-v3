

#include "huaweicloud/drs/v3/model/QueryRpoAndRtoResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryRpoAndRtoResp::QueryRpoAndRtoResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    rpoInfoIsSet_ = false;
    rtoInfoIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

QueryRpoAndRtoResp::~QueryRpoAndRtoResp() = default;

void QueryRpoAndRtoResp::validate()
{
}

web::json::value QueryRpoAndRtoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(rpoInfoIsSet_) {
        val[utility::conversions::to_string_t("rpo_info")] = ModelBase::toJson(rpoInfo_);
    }
    if(rtoInfoIsSet_) {
        val[utility::conversions::to_string_t("rto_info")] = ModelBase::toJson(rtoInfo_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool QueryRpoAndRtoResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rpo_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rpo_info"));
        if(!fieldValue.is_null())
        {
            RpoAndRtoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRpoInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rto_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rto_info"));
        if(!fieldValue.is_null())
        {
            RpoAndRtoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRtoInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string QueryRpoAndRtoResp::getJobId() const
{
    return jobId_;
}

void QueryRpoAndRtoResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryRpoAndRtoResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryRpoAndRtoResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

RpoAndRtoInfo QueryRpoAndRtoResp::getRpoInfo() const
{
    return rpoInfo_;
}

void QueryRpoAndRtoResp::setRpoInfo(const RpoAndRtoInfo& value)
{
    rpoInfo_ = value;
    rpoInfoIsSet_ = true;
}

bool QueryRpoAndRtoResp::rpoInfoIsSet() const
{
    return rpoInfoIsSet_;
}

void QueryRpoAndRtoResp::unsetrpoInfo()
{
    rpoInfoIsSet_ = false;
}

RpoAndRtoInfo QueryRpoAndRtoResp::getRtoInfo() const
{
    return rtoInfo_;
}

void QueryRpoAndRtoResp::setRtoInfo(const RpoAndRtoInfo& value)
{
    rtoInfo_ = value;
    rtoInfoIsSet_ = true;
}

bool QueryRpoAndRtoResp::rtoInfoIsSet() const
{
    return rtoInfoIsSet_;
}

void QueryRpoAndRtoResp::unsetrtoInfo()
{
    rtoInfoIsSet_ = false;
}

std::string QueryRpoAndRtoResp::getErrorCode() const
{
    return errorCode_;
}

void QueryRpoAndRtoResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryRpoAndRtoResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryRpoAndRtoResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryRpoAndRtoResp::getErrorMsg() const
{
    return errorMsg_;
}

void QueryRpoAndRtoResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool QueryRpoAndRtoResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void QueryRpoAndRtoResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


