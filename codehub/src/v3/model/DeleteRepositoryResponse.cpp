

#include "huaweicloud/codehub/v3/model/DeleteRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




DeleteRepositoryResponse::DeleteRepositoryResponse()
{
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteRepositoryResponse::~DeleteRepositoryResponse() = default;

void DeleteRepositoryResponse::validate()
{
}

web::json::value DeleteRepositoryResponse::toJson() const
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
bool DeleteRepositoryResponse::fromJson(const web::json::value& val)
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
            bool refVal;
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


Error DeleteRepositoryResponse::getError() const
{
    return error_;
}

void DeleteRepositoryResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DeleteRepositoryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DeleteRepositoryResponse::unseterror()
{
    errorIsSet_ = false;
}

bool DeleteRepositoryResponse::isResult() const
{
    return result_;
}

void DeleteRepositoryResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteRepositoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteRepositoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteRepositoryResponse::getStatus() const
{
    return status_;
}

void DeleteRepositoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRepositoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRepositoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


