

#include "huaweicloud/cloudtest/v1/model/BatchUpdateVersionTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchUpdateVersionTestCasesResponse::BatchUpdateVersionTestCasesResponse()
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

BatchUpdateVersionTestCasesResponse::~BatchUpdateVersionTestCasesResponse() = default;

void BatchUpdateVersionTestCasesResponse::validate()
{
}

web::json::value BatchUpdateVersionTestCasesResponse::toJson() const
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
bool BatchUpdateVersionTestCasesResponse::fromJson(const web::json::value& val)
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
            ResultValueUpdateTestCaseListVo refVal;
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


std::string BatchUpdateVersionTestCasesResponse::getStatus() const
{
    return status_;
}

void BatchUpdateVersionTestCasesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateVersionTestCasesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateVersionTestCasesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueUpdateTestCaseListVo BatchUpdateVersionTestCasesResponse::getResult() const
{
    return result_;
}

void BatchUpdateVersionTestCasesResponse::setResult(const ResultValueUpdateTestCaseListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateVersionTestCasesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateVersionTestCasesResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError BatchUpdateVersionTestCasesResponse::getError() const
{
    return error_;
}

void BatchUpdateVersionTestCasesResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchUpdateVersionTestCasesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchUpdateVersionTestCasesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchUpdateVersionTestCasesResponse::getRequestId() const
{
    return requestId_;
}

void BatchUpdateVersionTestCasesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchUpdateVersionTestCasesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchUpdateVersionTestCasesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string BatchUpdateVersionTestCasesResponse::getServerAddress() const
{
    return serverAddress_;
}

void BatchUpdateVersionTestCasesResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool BatchUpdateVersionTestCasesResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void BatchUpdateVersionTestCasesResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


