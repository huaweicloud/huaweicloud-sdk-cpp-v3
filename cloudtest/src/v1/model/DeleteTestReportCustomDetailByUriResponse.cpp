

#include "huaweicloud/cloudtest/v1/model/DeleteTestReportCustomDetailByUriResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTestReportCustomDetailByUriResponse::DeleteTestReportCustomDetailByUriResponse()
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

DeleteTestReportCustomDetailByUriResponse::~DeleteTestReportCustomDetailByUriResponse() = default;

void DeleteTestReportCustomDetailByUriResponse::validate()
{
}

web::json::value DeleteTestReportCustomDetailByUriResponse::toJson() const
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
bool DeleteTestReportCustomDetailByUriResponse::fromJson(const web::json::value& val)
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


std::string DeleteTestReportCustomDetailByUriResponse::getStatus() const
{
    return status_;
}

void DeleteTestReportCustomDetailByUriResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteTestReportCustomDetailByUriResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueString DeleteTestReportCustomDetailByUriResponse::getResult() const
{
    return result_;
}

void DeleteTestReportCustomDetailByUriResponse::setResult(const ResultValueString& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteTestReportCustomDetailByUriResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError DeleteTestReportCustomDetailByUriResponse::getError() const
{
    return error_;
}

void DeleteTestReportCustomDetailByUriResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteTestReportCustomDetailByUriResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteTestReportCustomDetailByUriResponse::getRequestId() const
{
    return requestId_;
}

void DeleteTestReportCustomDetailByUriResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DeleteTestReportCustomDetailByUriResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string DeleteTestReportCustomDetailByUriResponse::getServerAddress() const
{
    return serverAddress_;
}

void DeleteTestReportCustomDetailByUriResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool DeleteTestReportCustomDetailByUriResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void DeleteTestReportCustomDetailByUriResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


