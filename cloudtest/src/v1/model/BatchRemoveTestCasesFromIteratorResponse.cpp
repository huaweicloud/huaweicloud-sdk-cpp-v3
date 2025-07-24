

#include "huaweicloud/cloudtest/v1/model/BatchRemoveTestCasesFromIteratorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchRemoveTestCasesFromIteratorResponse::BatchRemoveTestCasesFromIteratorResponse()
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

BatchRemoveTestCasesFromIteratorResponse::~BatchRemoveTestCasesFromIteratorResponse() = default;

void BatchRemoveTestCasesFromIteratorResponse::validate()
{
}

web::json::value BatchRemoveTestCasesFromIteratorResponse::toJson() const
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
bool BatchRemoveTestCasesFromIteratorResponse::fromJson(const web::json::value& val)
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
            ResultValueIteratorDeleteCaseVo refVal;
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


std::string BatchRemoveTestCasesFromIteratorResponse::getStatus() const
{
    return status_;
}

void BatchRemoveTestCasesFromIteratorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchRemoveTestCasesFromIteratorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueIteratorDeleteCaseVo BatchRemoveTestCasesFromIteratorResponse::getResult() const
{
    return result_;
}

void BatchRemoveTestCasesFromIteratorResponse::setResult(const ResultValueIteratorDeleteCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchRemoveTestCasesFromIteratorResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError BatchRemoveTestCasesFromIteratorResponse::getError() const
{
    return error_;
}

void BatchRemoveTestCasesFromIteratorResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchRemoveTestCasesFromIteratorResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchRemoveTestCasesFromIteratorResponse::getRequestId() const
{
    return requestId_;
}

void BatchRemoveTestCasesFromIteratorResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchRemoveTestCasesFromIteratorResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string BatchRemoveTestCasesFromIteratorResponse::getServerAddress() const
{
    return serverAddress_;
}

void BatchRemoveTestCasesFromIteratorResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool BatchRemoveTestCasesFromIteratorResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void BatchRemoveTestCasesFromIteratorResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


