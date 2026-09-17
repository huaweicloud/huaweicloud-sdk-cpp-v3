

#include "huaweicloud/cloudtest/v1/model/UpdateBranchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateBranchResponse::UpdateBranchResponse()
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

UpdateBranchResponse::~UpdateBranchResponse() = default;

void UpdateBranchResponse::validate()
{
}

web::json::value UpdateBranchResponse::toJson() const
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
bool UpdateBranchResponse::fromJson(const web::json::value& val)
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


std::string UpdateBranchResponse::getStatus() const
{
    return status_;
}

void UpdateBranchResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateBranchResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateBranchResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueTestVersionVo UpdateBranchResponse::getResult() const
{
    return result_;
}

void UpdateBranchResponse::setResult(const ResultValueTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBranchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBranchResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError UpdateBranchResponse::getError() const
{
    return error_;
}

void UpdateBranchResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateBranchResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateBranchResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateBranchResponse::getRequestId() const
{
    return requestId_;
}

void UpdateBranchResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateBranchResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateBranchResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateBranchResponse::getServerAddress() const
{
    return serverAddress_;
}

void UpdateBranchResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool UpdateBranchResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void UpdateBranchResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


