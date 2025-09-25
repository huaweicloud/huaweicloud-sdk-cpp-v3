

#include "huaweicloud/codehub/v3/model/ShowStatisticalDataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowStatisticalDataResponse::ShowStatisticalDataResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowStatisticalDataResponse::~ShowStatisticalDataResponse() = default;

void ShowStatisticalDataResponse::validate()
{
}

web::json::value ShowStatisticalDataResponse::toJson() const
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
bool ShowStatisticalDataResponse::fromJson(const web::json::value& val)
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
            RepositoryStatisticsVO refVal;
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


Error ShowStatisticalDataResponse::getError() const
{
    return error_;
}

void ShowStatisticalDataResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowStatisticalDataResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowStatisticalDataResponse::unseterror()
{
    errorIsSet_ = false;
}

RepositoryStatisticsVO ShowStatisticalDataResponse::getResult() const
{
    return result_;
}

void ShowStatisticalDataResponse::setResult(const RepositoryStatisticsVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowStatisticalDataResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowStatisticalDataResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowStatisticalDataResponse::getStatus() const
{
    return status_;
}

void ShowStatisticalDataResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowStatisticalDataResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowStatisticalDataResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


