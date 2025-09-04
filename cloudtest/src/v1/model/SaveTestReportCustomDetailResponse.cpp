

#include "huaweicloud/cloudtest/v1/model/SaveTestReportCustomDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SaveTestReportCustomDetailResponse::SaveTestReportCustomDetailResponse()
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

SaveTestReportCustomDetailResponse::~SaveTestReportCustomDetailResponse() = default;

void SaveTestReportCustomDetailResponse::validate()
{
}

web::json::value SaveTestReportCustomDetailResponse::toJson() const
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
bool SaveTestReportCustomDetailResponse::fromJson(const web::json::value& val)
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
            ResultValueListTestReportCustomDetailVo refVal;
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


std::string SaveTestReportCustomDetailResponse::getStatus() const
{
    return status_;
}

void SaveTestReportCustomDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SaveTestReportCustomDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SaveTestReportCustomDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestReportCustomDetailVo SaveTestReportCustomDetailResponse::getResult() const
{
    return result_;
}

void SaveTestReportCustomDetailResponse::setResult(const ResultValueListTestReportCustomDetailVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SaveTestReportCustomDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SaveTestReportCustomDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError SaveTestReportCustomDetailResponse::getError() const
{
    return error_;
}

void SaveTestReportCustomDetailResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool SaveTestReportCustomDetailResponse::errorIsSet() const
{
    return errorIsSet_;
}

void SaveTestReportCustomDetailResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string SaveTestReportCustomDetailResponse::getRequestId() const
{
    return requestId_;
}

void SaveTestReportCustomDetailResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool SaveTestReportCustomDetailResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void SaveTestReportCustomDetailResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string SaveTestReportCustomDetailResponse::getServerAddress() const
{
    return serverAddress_;
}

void SaveTestReportCustomDetailResponse::setServerAddress(const std::string& value)
{
    serverAddress_ = value;
    serverAddressIsSet_ = true;
}

bool SaveTestReportCustomDetailResponse::serverAddressIsSet() const
{
    return serverAddressIsSet_;
}

void SaveTestReportCustomDetailResponse::unsetserverAddress()
{
    serverAddressIsSet_ = false;
}

}
}
}
}
}


