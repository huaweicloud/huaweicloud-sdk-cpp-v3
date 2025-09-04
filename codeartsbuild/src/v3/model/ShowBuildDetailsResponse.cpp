

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildDetailsResponse::ShowBuildDetailsResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBuildDetailsResponse::~ShowBuildDetailsResponse() = default;

void ShowBuildDetailsResponse::validate()
{
}

web::json::value ShowBuildDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowBuildDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            JobStatusResultResponseBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


JobStatusResultResponseBody_result ShowBuildDetailsResponse::getResult() const
{
    return result_;
}

void ShowBuildDetailsResponse::setResult(const JobStatusResultResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildDetailsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildDetailsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBuildDetailsResponse::getError() const
{
    return error_;
}

void ShowBuildDetailsResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildDetailsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildDetailsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowBuildDetailsResponse::getStatus() const
{
    return status_;
}

void ShowBuildDetailsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildDetailsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildDetailsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


