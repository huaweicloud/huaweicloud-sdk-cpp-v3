

#include "huaweicloud/codehub/v3/model/ShowRepositoryByUuidResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowRepositoryByUuidResponse::ShowRepositoryByUuidResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRepositoryByUuidResponse::~ShowRepositoryByUuidResponse() = default;

void ShowRepositoryByUuidResponse::validate()
{
}

web::json::value ShowRepositoryByUuidResponse::toJson() const
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
bool ShowRepositoryByUuidResponse::fromJson(const web::json::value& val)
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
            RepoInfoV2 refVal;
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


Error ShowRepositoryByUuidResponse::getError() const
{
    return error_;
}

void ShowRepositoryByUuidResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRepositoryByUuidResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRepositoryByUuidResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoInfoV2 ShowRepositoryByUuidResponse::getResult() const
{
    return result_;
}

void ShowRepositoryByUuidResponse::setResult(const RepoInfoV2& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryByUuidResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryByUuidResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryByUuidResponse::getStatus() const
{
    return status_;
}

void ShowRepositoryByUuidResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepositoryByUuidResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepositoryByUuidResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


