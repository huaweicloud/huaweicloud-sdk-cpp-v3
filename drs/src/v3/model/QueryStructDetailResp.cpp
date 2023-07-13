

#include "huaweicloud/drs/v3/model/QueryStructDetailResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




QueryStructDetailResp::QueryStructDetailResp()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    structDetailIsSet_ = false;
}

QueryStructDetailResp::~QueryStructDetailResp() = default;

void QueryStructDetailResp::validate()
{
}

web::json::value QueryStructDetailResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(structDetailIsSet_) {
        val[utility::conversions::to_string_t("struct_detail")] = ModelBase::toJson(structDetail_);
    }

    return val;
}

bool QueryStructDetailResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("struct_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("struct_detail"));
        if(!fieldValue.is_null())
        {
            QueryFlowCompareDataResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStructDetail(refVal);
        }
    }
    return ok;
}

std::string QueryStructDetailResp::getJobId() const
{
    return jobId_;
}

void QueryStructDetailResp::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryStructDetailResp::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryStructDetailResp::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryStructDetailResp::getErrorCode() const
{
    return errorCode_;
}

void QueryStructDetailResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryStructDetailResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryStructDetailResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryStructDetailResp::getErrorMessage() const
{
    return errorMessage_;
}

void QueryStructDetailResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool QueryStructDetailResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void QueryStructDetailResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

QueryFlowCompareDataResp QueryStructDetailResp::getStructDetail() const
{
    return structDetail_;
}

void QueryStructDetailResp::setStructDetail(const QueryFlowCompareDataResp& value)
{
    structDetail_ = value;
    structDetailIsSet_ = true;
}

bool QueryStructDetailResp::structDetailIsSet() const
{
    return structDetailIsSet_;
}

void QueryStructDetailResp::unsetstructDetail()
{
    structDetailIsSet_ = false;
}

}
}
}
}
}


