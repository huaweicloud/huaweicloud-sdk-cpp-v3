

#include "huaweicloud/codehub/v3/model/ValidateHttpsInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ValidateHttpsInfoResponse::ValidateHttpsInfoResponse()
{
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ValidateHttpsInfoResponse::~ValidateHttpsInfoResponse() = default;

void ValidateHttpsInfoResponse::validate()
{
}

web::json::value ValidateHttpsInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ValidateHttpsInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


Error ValidateHttpsInfoResponse::getError() const
{
    return error_;
}

void ValidateHttpsInfoResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ValidateHttpsInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ValidateHttpsInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ValidateHttpsInfoResponse::getResult() const
{
    return result_;
}

void ValidateHttpsInfoResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ValidateHttpsInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ValidateHttpsInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ValidateHttpsInfoResponse::getStatus() const
{
    return status_;
}

void ValidateHttpsInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ValidateHttpsInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ValidateHttpsInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


