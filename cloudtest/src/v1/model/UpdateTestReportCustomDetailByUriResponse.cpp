

#include "huaweicloud/cloudtest/v1/model/UpdateTestReportCustomDetailByUriResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestReportCustomDetailByUriResponse::UpdateTestReportCustomDetailByUriResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    serverAddress_ = "";
    serverAddressIsSet_ = false;
}

UpdateTestReportCustomDetailByUriResponse::~UpdateTestReportCustomDetailByUriResponse() = default;

void UpdateTestReportCustomDetailByUriResponse::validate()
{
}

web::json::value UpdateTestReportCustomDetailByUriResponse::toJson() const
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
    if(serverAddressIsSet_) {
        val[utility::conversions::to_string_t("server_address")] = ModelBase::toJson(serverAddress_);
    }

    return val;
}
bool UpdateTestReportCustomDetailByUriResponse::fromJson(const web::json::value& val)
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
            ResultValueString refVal;
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
    if(val.has_field(utility::conversions::to_string_t("server_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerAddress(refVal);
        }
    }
    return ok;
}


std::string UpdateTestReportCustomDetailByUriResponse::getStatus() const
{
    return status_;
}

void UpdateTestReportCustomDetailByUriResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTestReportCustomDetailByUriResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString UpdateTestReportCustomDetailByUriResponse::getResult() const
{
    return result_;
}

void UpdateTestReportCustomDetailByUriResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateTestReportCustomDetailByUriResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateTestReportCustomDetailByUriResponse::getError() const
{
    return error_;
}

void UpdateTestReportCustomDetailByUriResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateTestReportCustomDetailByUriResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateTestReportCustomDetailByUriResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTestReportCustomDetailByUriResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTestReportCustomDetailByUriResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateTestReportCustomDetailByUriResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateTestReportCustomDetailByUriResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateTestReportCustomDetailByUriResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateTestReportCustomDetailByUriResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


