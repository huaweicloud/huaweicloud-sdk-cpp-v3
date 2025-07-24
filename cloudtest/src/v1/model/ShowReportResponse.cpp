

#include "huaweicloud/cloudtest/v1/model/ShowReportResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowReportResponse::ShowReportResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowReportResponse::~ShowReportResponse() = default;

void ShowReportResponse::validate()
{
}

web::json::value ShowReportResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ShowReportResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueCustomReportListVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ApiError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowReportResponse::getStatus() const
{
    return status_;
}

void ShowReportResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowReportResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowReportResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueCustomReportListVo ShowReportResponse::getResult() const
{
    return result_;
}

void ShowReportResponse::setResult(const ResultValueCustomReportListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowReportResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowReportResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowReportResponse::getError() const
{
    return error_;
}

void ShowReportResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowReportResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowReportResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowReportResponse::getRequestId() const
{
    return requestId_;
}

void ShowReportResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowReportResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowReportResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


