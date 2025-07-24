

#include "huaweicloud/cloudtest/v1/model/ShowTestCasesChangeStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestCasesChangeStatisticsResponse::ShowTestCasesChangeStatisticsResponse()
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

ShowTestCasesChangeStatisticsResponse::~ShowTestCasesChangeStatisticsResponse() = default;

void ShowTestCasesChangeStatisticsResponse::validate()
{
}

web::json::value ShowTestCasesChangeStatisticsResponse::toJson() const
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
bool ShowTestCasesChangeStatisticsResponse::fromJson(const web::json::value& val)
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
            ResultValueVersionTestCasesChangeStatisticsVo refVal;
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


std::string ShowTestCasesChangeStatisticsResponse::getStatus() const
{
    return status_;
}

void ShowTestCasesChangeStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTestCasesChangeStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueVersionTestCasesChangeStatisticsVo ShowTestCasesChangeStatisticsResponse::getResult() const
{
    return result_;
}

void ShowTestCasesChangeStatisticsResponse::setResult(const ResultValueVersionTestCasesChangeStatisticsVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowTestCasesChangeStatisticsResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowTestCasesChangeStatisticsResponse::getError() const
{
    return error_;
}

void ShowTestCasesChangeStatisticsResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowTestCasesChangeStatisticsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowTestCasesChangeStatisticsResponse::getRequestId() const
{
    return requestId_;
}

void ShowTestCasesChangeStatisticsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowTestCasesChangeStatisticsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowTestCasesChangeStatisticsResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowTestCasesChangeStatisticsResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowTestCasesChangeStatisticsResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowTestCasesChangeStatisticsResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


