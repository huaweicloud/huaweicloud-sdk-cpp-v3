

#include "huaweicloud/codeartsbuild/v3/model/ShowRunningStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRunningStatusResponse::ShowRunningStatusResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRunningStatusResponse::~ShowRunningStatusResponse() = default;

void ShowRunningStatusResponse::validate()
{
}

web::json::value ShowRunningStatusResponse::toJson() const
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
bool ShowRunningStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowRunningStatus_result refVal;
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


ShowRunningStatus_result ShowRunningStatusResponse::getResult() const
{
    return result_;
}

void ShowRunningStatusResponse::setResult(const ShowRunningStatus_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRunningStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRunningStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRunningStatusResponse::getError() const
{
    return error_;
}

void ShowRunningStatusResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRunningStatusResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRunningStatusResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowRunningStatusResponse::getStatus() const
{
    return status_;
}

void ShowRunningStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRunningStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRunningStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


