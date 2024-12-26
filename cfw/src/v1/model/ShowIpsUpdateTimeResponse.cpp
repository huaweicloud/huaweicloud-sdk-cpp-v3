

#include "huaweicloud/cfw/v1/model/ShowIpsUpdateTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowIpsUpdateTimeResponse::ShowIpsUpdateTimeResponse()
{
    dataIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorDescription_ = "";
    errorDescriptionIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
}

ShowIpsUpdateTimeResponse::~ShowIpsUpdateTimeResponse() = default;

void ShowIpsUpdateTimeResponse::validate()
{
}

web::json::value ShowIpsUpdateTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorDescriptionIsSet_) {
        val[utility::conversions::to_string_t("error_description")] = ModelBase::toJson(errorDescription_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }

    return val;
}
bool ShowIpsUpdateTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<IpsRuleUpdateTimeVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    return ok;
}


std::vector<IpsRuleUpdateTimeVO>& ShowIpsUpdateTimeResponse::getData()
{
    return data_;
}

void ShowIpsUpdateTimeResponse::setData(const std::vector<IpsRuleUpdateTimeVO>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowIpsUpdateTimeResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowIpsUpdateTimeResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowIpsUpdateTimeResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getErrorDescription() const
{
    return errorDescription_;
}

void ShowIpsUpdateTimeResponse::setErrorDescription(const std::string& value)
{
    errorDescription_ = value;
    errorDescriptionIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::errorDescriptionIsSet() const
{
    return errorDescriptionIsSet_;
}

void ShowIpsUpdateTimeResponse::unseterrorDescription()
{
    errorDescriptionIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getFailReason() const
{
    return failReason_;
}

void ShowIpsUpdateTimeResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ShowIpsUpdateTimeResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getJobId() const
{
    return jobId_;
}

void ShowIpsUpdateTimeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowIpsUpdateTimeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getOrderId() const
{
    return orderId_;
}

void ShowIpsUpdateTimeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ShowIpsUpdateTimeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ShowIpsUpdateTimeResponse::getTraceId() const
{
    return traceId_;
}

void ShowIpsUpdateTimeResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowIpsUpdateTimeResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowIpsUpdateTimeResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

}
}
}
}
}


