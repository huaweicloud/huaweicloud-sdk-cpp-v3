

#include "huaweicloud/cloudtest/v1/model/UpdateUserDnsMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateUserDnsMappingResponse::UpdateUserDnsMappingResponse()
{
    errorIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
}

UpdateUserDnsMappingResponse::~UpdateUserDnsMappingResponse() = default;

void UpdateUserDnsMappingResponse::validate()
{
}

web::json::value UpdateUserDnsMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }

    return val;
}
bool UpdateUserDnsMappingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorOfAPITest refVal;
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
            DnsMapping refVal;
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    return ok;
}


CommonResponseErrorOfAPITest UpdateUserDnsMappingResponse::getError() const
{
    return error_;
}

void UpdateUserDnsMappingResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateUserDnsMappingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateUserDnsMappingResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateUserDnsMappingResponse::getReason() const
{
    return reason_;
}

void UpdateUserDnsMappingResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool UpdateUserDnsMappingResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void UpdateUserDnsMappingResponse::unsetreason()
{
    reasonIsSet_ = false;
}

DnsMapping UpdateUserDnsMappingResponse::getResult() const
{
    return result_;
}

void UpdateUserDnsMappingResponse::setResult(const DnsMapping& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateUserDnsMappingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateUserDnsMappingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateUserDnsMappingResponse::getStatus() const
{
    return status_;
}

void UpdateUserDnsMappingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateUserDnsMappingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateUserDnsMappingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateUserDnsMappingResponse::getCode() const
{
    return code_;
}

void UpdateUserDnsMappingResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool UpdateUserDnsMappingResponse::codeIsSet() const
{
    return codeIsSet_;
}

void UpdateUserDnsMappingResponse::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


