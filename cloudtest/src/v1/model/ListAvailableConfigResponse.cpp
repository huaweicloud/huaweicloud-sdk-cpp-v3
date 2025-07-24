

#include "huaweicloud/cloudtest/v1/model/ListAvailableConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAvailableConfigResponse::ListAvailableConfigResponse()
{
    code_ = "";
    codeIsSet_ = false;
    errorIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListAvailableConfigResponse::~ListAvailableConfigResponse() = default;

void ListAvailableConfigResponse::validate()
{
}

web::json::value ListAvailableConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListAvailableConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorAvailableConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AvailableConfig refVal;
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
    return ok;
}


std::string ListAvailableConfigResponse::getCode() const
{
    return code_;
}

void ListAvailableConfigResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListAvailableConfigResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListAvailableConfigResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorAvailableConfig ListAvailableConfigResponse::getError() const
{
    return error_;
}

void ListAvailableConfigResponse::setError(const CommonResponseErrorAvailableConfig& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListAvailableConfigResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListAvailableConfigResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListAvailableConfigResponse::getReason() const
{
    return reason_;
}

void ListAvailableConfigResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListAvailableConfigResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListAvailableConfigResponse::unsetreason()
{
    reasonIsSet_ = false;
}

AvailableConfig ListAvailableConfigResponse::getResult() const
{
    return result_;
}

void ListAvailableConfigResponse::setResult(const AvailableConfig& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAvailableConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAvailableConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListAvailableConfigResponse::getStatus() const
{
    return status_;
}

void ListAvailableConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAvailableConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAvailableConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


