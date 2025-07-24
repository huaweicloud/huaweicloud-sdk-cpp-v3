

#include "huaweicloud/cloudtest/v1/model/ShowRequirementsOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowRequirementsOverviewResponse::ShowRequirementsOverviewResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ShowRequirementsOverviewResponse::~ShowRequirementsOverviewResponse() = default;

void ShowRequirementsOverviewResponse::validate()
{
}

web::json::value ShowRequirementsOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool ShowRequirementsOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueRequirementsOverviewVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ApiError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


std::string ShowRequirementsOverviewResponse::getStatus() const
{
    return status_;
}

void ShowRequirementsOverviewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRequirementsOverviewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRequirementsOverviewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueRequirementsOverviewVo ShowRequirementsOverviewResponse::getResult() const
{
    return result_;
}

void ShowRequirementsOverviewResponse::setResult(const ResultValueRequirementsOverviewVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRequirementsOverviewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRequirementsOverviewResponse::unsetresult()
{
    resultIsSet_ = false;
}

ApiError ShowRequirementsOverviewResponse::getError() const
{
    return error_;
}

void ShowRequirementsOverviewResponse::setError(const ApiError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRequirementsOverviewResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRequirementsOverviewResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


