

#include "huaweicloud/cloudtest/v1/model/ShowBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowBranchResponse::ShowBranchResponse()
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

ShowBranchResponse::~ShowBranchResponse() = default;

void ShowBranchResponse::validate()
{
}

web::json::value ShowBranchResponse::toJson() const
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
bool ShowBranchResponse::fromJson(const web::json::value& val)
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
            ResultValueTestVersionVo refVal;
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


std::string ShowBranchResponse::getStatus() const
{
    return status_;
}

void ShowBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestVersionVo ShowBranchResponse::getResult() const
{
    return result_;
}

void ShowBranchResponse::setResult(const ResultValueTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBranchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBranchResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowBranchResponse::getError() const
{
    return error_;
}

void ShowBranchResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBranchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBranchResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBranchResponse::getRequestId() const
{
    return requestId_;
}

void ShowBranchResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowBranchResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowBranchResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ShowBranchResponse::getServerAddress() const
{
    return serverAddress_;
}

void ShowBranchResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool ShowBranchResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void ShowBranchResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


