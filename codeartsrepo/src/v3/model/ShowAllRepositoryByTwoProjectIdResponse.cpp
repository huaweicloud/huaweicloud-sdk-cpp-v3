

#include "huaweicloud/codeartsrepo/v3/model/ShowAllRepositoryByTwoProjectIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowAllRepositoryByTwoProjectIdResponse::ShowAllRepositoryByTwoProjectIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowAllRepositoryByTwoProjectIdResponse::~ShowAllRepositoryByTwoProjectIdResponse() = default;

void ShowAllRepositoryByTwoProjectIdResponse::validate()
{
}

web::json::value ShowAllRepositoryByTwoProjectIdResponse::toJson() const
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
bool ShowAllRepositoryByTwoProjectIdResponse::fromJson(const web::json::value& val)
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
            RepoListInfoV2 refVal;
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


Error ShowAllRepositoryByTwoProjectIdResponse::getError() const
{
    return error_;
}

void ShowAllRepositoryByTwoProjectIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowAllRepositoryByTwoProjectIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowAllRepositoryByTwoProjectIdResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoListInfoV2 ShowAllRepositoryByTwoProjectIdResponse::getResult() const
{
    return result_;
}

void ShowAllRepositoryByTwoProjectIdResponse::setResult(const RepoListInfoV2& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAllRepositoryByTwoProjectIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAllRepositoryByTwoProjectIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowAllRepositoryByTwoProjectIdResponse::getStatus() const
{
    return status_;
}

void ShowAllRepositoryByTwoProjectIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAllRepositoryByTwoProjectIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAllRepositoryByTwoProjectIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


