

#include "huaweicloud/codehub/v3/model/ShowRepositoryNameExistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowRepositoryNameExistResponse::ShowRepositoryNameExistResponse()
{
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRepositoryNameExistResponse::~ShowRepositoryNameExistResponse() = default;

void ShowRepositoryNameExistResponse::validate()
{
}

web::json::value ShowRepositoryNameExistResponse::toJson() const
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
bool ShowRepositoryNameExistResponse::fromJson(const web::json::value& val)
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


Error ShowRepositoryNameExistResponse::getError() const
{
    return error_;
}

void ShowRepositoryNameExistResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRepositoryNameExistResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRepositoryNameExistResponse::unseterror()
{
    errorIsSet_ = false;
}

bool ShowRepositoryNameExistResponse::isResult() const
{
    return result_;
}

void ShowRepositoryNameExistResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryNameExistResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryNameExistResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryNameExistResponse::getStatus() const
{
    return status_;
}

void ShowRepositoryNameExistResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepositoryNameExistResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepositoryNameExistResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


