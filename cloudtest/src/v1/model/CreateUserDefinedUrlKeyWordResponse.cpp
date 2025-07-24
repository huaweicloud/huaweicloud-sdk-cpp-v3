

#include "huaweicloud/cloudtest/v1/model/CreateUserDefinedUrlKeyWordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateUserDefinedUrlKeyWordResponse::CreateUserDefinedUrlKeyWordResponse()
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

CreateUserDefinedUrlKeyWordResponse::~CreateUserDefinedUrlKeyWordResponse() = default;

void CreateUserDefinedUrlKeyWordResponse::validate()
{
}

web::json::value CreateUserDefinedUrlKeyWordResponse::toJson() const
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
bool CreateUserDefinedUrlKeyWordResponse::fromJson(const web::json::value& val)
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
            CommonResponseErrorObject refVal;
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
            Object refVal;
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


std::string CreateUserDefinedUrlKeyWordResponse::getCode() const
{
    return code_;
}

void CreateUserDefinedUrlKeyWordResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordResponse::codeIsSet() const
{
    return codeIsSet_;
}

void CreateUserDefinedUrlKeyWordResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorObject CreateUserDefinedUrlKeyWordResponse::getError() const
{
    return error_;
}

void CreateUserDefinedUrlKeyWordResponse::setError(const CommonResponseErrorObject& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordResponse::errorIsSet() const
{
    return errorIsSet_;
}

void CreateUserDefinedUrlKeyWordResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string CreateUserDefinedUrlKeyWordResponse::getReason() const
{
    return reason_;
}

void CreateUserDefinedUrlKeyWordResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void CreateUserDefinedUrlKeyWordResponse::unsetreason()
{
    reasonIsSet_ = false;
}

Object CreateUserDefinedUrlKeyWordResponse::getResult() const
{
    return result_;
}

void CreateUserDefinedUrlKeyWordResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateUserDefinedUrlKeyWordResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateUserDefinedUrlKeyWordResponse::getStatus() const
{
    return status_;
}

void CreateUserDefinedUrlKeyWordResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateUserDefinedUrlKeyWordResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateUserDefinedUrlKeyWordResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


