

#include "huaweicloud/drs/v5/model/QueryNetworkResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryNetworkResult::QueryNetworkResult()
{
    ip_ = "";
    ipIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

QueryNetworkResult::~QueryNetworkResult() = default;

void QueryNetworkResult::validate()
{
}

web::json::value QueryNetworkResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool QueryNetworkResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}

std::string QueryNetworkResult::getIp() const
{
    return ip_;
}

void QueryNetworkResult::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool QueryNetworkResult::ipIsSet() const
{
    return ipIsSet_;
}

void QueryNetworkResult::unsetip()
{
    ipIsSet_ = false;
}

bool QueryNetworkResult::isSuccess() const
{
    return success_;
}

void QueryNetworkResult::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool QueryNetworkResult::successIsSet() const
{
    return successIsSet_;
}

void QueryNetworkResult::unsetsuccess()
{
    successIsSet_ = false;
}

std::string QueryNetworkResult::getResult() const
{
    return result_;
}

void QueryNetworkResult::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool QueryNetworkResult::resultIsSet() const
{
    return resultIsSet_;
}

void QueryNetworkResult::unsetresult()
{
    resultIsSet_ = false;
}

std::string QueryNetworkResult::getStatus() const
{
    return status_;
}

void QueryNetworkResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryNetworkResult::statusIsSet() const
{
    return statusIsSet_;
}

void QueryNetworkResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryNetworkResult::getErrorCode() const
{
    return errorCode_;
}

void QueryNetworkResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryNetworkResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryNetworkResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryNetworkResult::getErrorMsg() const
{
    return errorMsg_;
}

void QueryNetworkResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool QueryNetworkResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void QueryNetworkResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


