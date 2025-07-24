

#include "huaweicloud/cloudtest/v1/model/AddTestCaseCommentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddTestCaseCommentResponse::AddTestCaseCommentResponse()
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

AddTestCaseCommentResponse::~AddTestCaseCommentResponse() = default;

void AddTestCaseCommentResponse::validate()
{
}

web::json::value AddTestCaseCommentResponse::toJson() const
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
bool AddTestCaseCommentResponse::fromJson(const web::json::value& val)
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


std::string AddTestCaseCommentResponse::getStatus() const
{
    return status_;
}

void AddTestCaseCommentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddTestCaseCommentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddTestCaseCommentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestCaseCommentVo AddTestCaseCommentResponse::getResult() const
{
    return result_;
}

void AddTestCaseCommentResponse::setResult(const ResultValueTestCaseCommentVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddTestCaseCommentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddTestCaseCommentResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError AddTestCaseCommentResponse::getError() const
{
    return error_;
}

void AddTestCaseCommentResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddTestCaseCommentResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddTestCaseCommentResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddTestCaseCommentResponse::getRequestId() const
{
    return requestId_;
}

void AddTestCaseCommentResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddTestCaseCommentResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddTestCaseCommentResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddTestCaseCommentResponse::getServerAddress() const
{
    return serverAddress_;
}

void AddTestCaseCommentResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool AddTestCaseCommentResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void AddTestCaseCommentResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


