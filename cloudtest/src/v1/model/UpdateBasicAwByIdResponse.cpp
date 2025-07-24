

#include "huaweicloud/cloudtest/v1/model/UpdateBasicAwByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateBasicAwByIdResponse::UpdateBasicAwByIdResponse()
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

UpdateBasicAwByIdResponse::~UpdateBasicAwByIdResponse() = default;

void UpdateBasicAwByIdResponse::validate()
{
}

web::json::value UpdateBasicAwByIdResponse::toJson() const
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
bool UpdateBasicAwByIdResponse::fromJson(const web::json::value& val)
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


std::string UpdateBasicAwByIdResponse::getCode() const
{
    return code_;
}

void UpdateBasicAwByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool UpdateBasicAwByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void UpdateBasicAwByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorObject UpdateBasicAwByIdResponse::getError() const
{
    return error_;
}

void UpdateBasicAwByIdResponse::setError(const CommonResponseErrorObject& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateBasicAwByIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateBasicAwByIdResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateBasicAwByIdResponse::getReason() const
{
    return reason_;
}

void UpdateBasicAwByIdResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool UpdateBasicAwByIdResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void UpdateBasicAwByIdResponse::unsetreason()
{
    reasonIsSet_ = false;
}

Object UpdateBasicAwByIdResponse::getResult() const
{
    return result_;
}

void UpdateBasicAwByIdResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBasicAwByIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBasicAwByIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateBasicAwByIdResponse::getStatus() const
{
    return status_;
}

void UpdateBasicAwByIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateBasicAwByIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateBasicAwByIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


