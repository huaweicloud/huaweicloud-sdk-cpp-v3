

#include "huaweicloud/codeartsrepo/v3/model/ShowRepositoryStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowRepositoryStatisticsResponse::ShowRepositoryStatisticsResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRepositoryStatisticsResponse::~ShowRepositoryStatisticsResponse() = default;

void ShowRepositoryStatisticsResponse::validate()
{
}

web::json::value ShowRepositoryStatisticsResponse::toJson() const
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
bool ShowRepositoryStatisticsResponse::fromJson(const web::json::value& val)
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
            RepoStatisticsLaunch refVal;
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


Error ShowRepositoryStatisticsResponse::getError() const
{
    return error_;
}

void ShowRepositoryStatisticsResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRepositoryStatisticsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRepositoryStatisticsResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoStatisticsLaunch ShowRepositoryStatisticsResponse::getResult() const
{
    return result_;
}

void ShowRepositoryStatisticsResponse::setResult(const RepoStatisticsLaunch& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryStatisticsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryStatisticsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepositoryStatisticsResponse::getStatus() const
{
    return status_;
}

void ShowRepositoryStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepositoryStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepositoryStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


