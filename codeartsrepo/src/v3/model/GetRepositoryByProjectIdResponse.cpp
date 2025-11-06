

#include "huaweicloud/codeartsrepo/v3/model/GetRepositoryByProjectIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




GetRepositoryByProjectIdResponse::GetRepositoryByProjectIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

GetRepositoryByProjectIdResponse::~GetRepositoryByProjectIdResponse() = default;

void GetRepositoryByProjectIdResponse::validate()
{
}

web::json::value GetRepositoryByProjectIdResponse::toJson() const
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
bool GetRepositoryByProjectIdResponse::fromJson(const web::json::value& val)
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
            RepoInfo refVal;
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


Error GetRepositoryByProjectIdResponse::getError() const
{
    return error_;
}

void GetRepositoryByProjectIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool GetRepositoryByProjectIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void GetRepositoryByProjectIdResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoInfo GetRepositoryByProjectIdResponse::getResult() const
{
    return result_;
}

void GetRepositoryByProjectIdResponse::setResult(const RepoInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool GetRepositoryByProjectIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void GetRepositoryByProjectIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string GetRepositoryByProjectIdResponse::getStatus() const
{
    return status_;
}

void GetRepositoryByProjectIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetRepositoryByProjectIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetRepositoryByProjectIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


