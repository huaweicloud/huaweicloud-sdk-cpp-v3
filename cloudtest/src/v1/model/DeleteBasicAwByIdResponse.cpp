

#include "huaweicloud/cloudtest/v1/model/DeleteBasicAwByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteBasicAwByIdResponse::DeleteBasicAwByIdResponse()
{
    code_ = "";
    codeIsSet_ = false;
    errorIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteBasicAwByIdResponse::~DeleteBasicAwByIdResponse() = default;

void DeleteBasicAwByIdResponse::validate()
{
}

web::json::value DeleteBasicAwByIdResponse::toJson() const
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
bool DeleteBasicAwByIdResponse::fromJson(const web::json::value& val)
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
            CommonResponseErrorString refVal;
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
    return ok;
}


std::string DeleteBasicAwByIdResponse::getCode() const
{
    return code_;
}

void DeleteBasicAwByIdResponse::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DeleteBasicAwByIdResponse::codeIsSet() const
{
    return codeIsSet_;
}

void DeleteBasicAwByIdResponse::unsetcode()
{
    codeIsSet_ = false;
}

CommonResponseErrorString DeleteBasicAwByIdResponse::getError() const
{
    return error_;
}

void DeleteBasicAwByIdResponse::setError(const CommonResponseErrorString& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteBasicAwByIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteBasicAwByIdResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteBasicAwByIdResponse::getReason() const
{
    return reason_;
}

void DeleteBasicAwByIdResponse::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool DeleteBasicAwByIdResponse::reasonIsSet() const
{
    return reasonIsSet_;
}

void DeleteBasicAwByIdResponse::unsetreason()
{
    reasonIsSet_ = false;
}

std::string DeleteBasicAwByIdResponse::getResult() const
{
    return result_;
}

void DeleteBasicAwByIdResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteBasicAwByIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteBasicAwByIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteBasicAwByIdResponse::getStatus() const
{
    return status_;
}

void DeleteBasicAwByIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteBasicAwByIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteBasicAwByIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


