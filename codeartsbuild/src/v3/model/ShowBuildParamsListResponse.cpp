

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildParamsListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildParamsListResponse::ShowBuildParamsListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowBuildParamsListResponse::~ShowBuildParamsListResponse() = default;

void ShowBuildParamsListResponse::validate()
{
}

web::json::value ShowBuildParamsListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowBuildParamsListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BuildParamsBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowBuildParamsListResponse::getStatus() const
{
    return status_;
}

void ShowBuildParamsListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBuildParamsListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBuildParamsListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowBuildParamsListResponse::getError() const
{
    return error_;
}

void ShowBuildParamsListResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBuildParamsListResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBuildParamsListResponse::unseterror()
{
    errorIsSet_ = false;
}

BuildParamsBody_result ShowBuildParamsListResponse::getResult() const
{
    return result_;
}

void ShowBuildParamsListResponse::setResult(const BuildParamsBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBuildParamsListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBuildParamsListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


