

#include "huaweicloud/cloudtest/v1/model/ListUserDnsMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserDnsMappingResponse::ListUserDnsMappingResponse()
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

ListUserDnsMappingResponse::~ListUserDnsMappingResponse() = default;

void ListUserDnsMappingResponse::validate()
{
}

web::json::value ListUserDnsMappingResponse::toJson() const
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
bool ListUserDnsMappingResponse::fromJson(const web::json::value& val)
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


CommonResponseErrorOfAPITest ListUserDnsMappingResponse::getError() const
{
    return error_;
}

void ListUserDnsMappingResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListUserDnsMappingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListUserDnsMappingResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListUserDnsMappingResponse::getReason() const
{
    return reason_;
}

void ListUserDnsMappingResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ListUserDnsMappingResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void ListUserDnsMappingResponse::unsetreason()
{
    reasonIsSet_ = false;
}

DnsMapping ListUserDnsMappingResponse::getResult() const
{
    return result_;
}

void ListUserDnsMappingResponse::setResult(const DnsMapping& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUserDnsMappingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUserDnsMappingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListUserDnsMappingResponse::getStatus() const
{
    return status_;
}

void ListUserDnsMappingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUserDnsMappingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUserDnsMappingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListUserDnsMappingResponse::getCode() const
{
    return code_;
}

void ListUserDnsMappingResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListUserDnsMappingResponse::codeIsSet() const
{
    return codeIsSet_;
}

void ListUserDnsMappingResponse::unsetcode()
{
    codeIsSet_ = false;
}

}
}
}
}
}


