

#include "huaweicloud/codehub/v3/model/DeleteSShkeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




DeleteSShkeyResponse::DeleteSShkeyResponse()
{
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteSShkeyResponse::~DeleteSShkeyResponse() = default;

void DeleteSShkeyResponse::validate()
{
}

web::json::value DeleteSShkeyResponse::toJson() const
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
bool DeleteSShkeyResponse::fromJson(const web::json::value& val)
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


Error DeleteSShkeyResponse::getError() const
{
    return error_;
}

void DeleteSShkeyResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteSShkeyResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteSShkeyResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DeleteSShkeyResponse::getResult() const
{
    return result_;
}

void DeleteSShkeyResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteSShkeyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteSShkeyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteSShkeyResponse::getStatus() const
{
    return status_;
}

void DeleteSShkeyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteSShkeyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteSShkeyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


