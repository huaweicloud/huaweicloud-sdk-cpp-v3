

#include "huaweicloud/cloudtest/v1/model/BatchUpdateTestCasesInDiffVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchUpdateTestCasesInDiffVersionResponse::BatchUpdateTestCasesInDiffVersionResponse()
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

BatchUpdateTestCasesInDiffVersionResponse::~BatchUpdateTestCasesInDiffVersionResponse() = default;

void BatchUpdateTestCasesInDiffVersionResponse::validate()
{
}

web::json::value BatchUpdateTestCasesInDiffVersionResponse::toJson() const
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
bool BatchUpdateTestCasesInDiffVersionResponse::fromJson(const web::json::value& val)
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
            ResultValueBatchCreateUpdateApiTestCaseVo refVal;
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


std::string BatchUpdateTestCasesInDiffVersionResponse::getStatus() const
{
    return status_;
}

void BatchUpdateTestCasesInDiffVersionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateTestCasesInDiffVersionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueBatchCreateUpdateApiTestCaseVo BatchUpdateTestCasesInDiffVersionResponse::getResult() const
{
    return result_;
}

void BatchUpdateTestCasesInDiffVersionResponse::setResult(const ResultValueBatchCreateUpdateApiTestCaseVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateTestCasesInDiffVersionResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError BatchUpdateTestCasesInDiffVersionResponse::getError() const
{
    return error_;
}

void BatchUpdateTestCasesInDiffVersionResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionResponse::errorIsSet() const
{
    return errorIsSet_;
}

void BatchUpdateTestCasesInDiffVersionResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string BatchUpdateTestCasesInDiffVersionResponse::getRequestId() const
{
    return requestId_;
}

void BatchUpdateTestCasesInDiffVersionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchUpdateTestCasesInDiffVersionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string BatchUpdateTestCasesInDiffVersionResponse::getServerAddress() const
{
    return serverAddress_;
}

void BatchUpdateTestCasesInDiffVersionResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool BatchUpdateTestCasesInDiffVersionResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void BatchUpdateTestCasesInDiffVersionResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


