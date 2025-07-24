

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseCommentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseCommentResponse::UpdateTestCaseCommentResponse()
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

UpdateTestCaseCommentResponse::~UpdateTestCaseCommentResponse() = default;

void UpdateTestCaseCommentResponse::validate()
{
}

web::json::value UpdateTestCaseCommentResponse::toJson() const
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
bool UpdateTestCaseCommentResponse::fromJson(const web::json::value& val)
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
            ResultValueTestCaseCommentVo refVal;
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


std::string UpdateTestCaseCommentResponse::getStatus() const
{
    return status_;
}

void UpdateTestCaseCommentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTestCaseCommentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTestCaseCommentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseCommentVo UpdateTestCaseCommentResponse::getResult() const
{
    return result_;
}

void UpdateTestCaseCommentResponse::setResult(const ResultValueTestCaseCommentVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateTestCaseCommentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateTestCaseCommentResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateTestCaseCommentResponse::getError() const
{
    return error_;
}

void UpdateTestCaseCommentResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateTestCaseCommentResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateTestCaseCommentResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateTestCaseCommentResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTestCaseCommentResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTestCaseCommentResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTestCaseCommentResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateTestCaseCommentResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateTestCaseCommentResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateTestCaseCommentResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateTestCaseCommentResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


