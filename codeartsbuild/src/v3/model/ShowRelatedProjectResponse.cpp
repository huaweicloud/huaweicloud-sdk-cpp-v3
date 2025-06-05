

#include "huaweicloud/codeartsbuild/v3/model/ShowRelatedProjectResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRelatedProjectResponse::ShowRelatedProjectResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRelatedProjectResponse::~ShowRelatedProjectResponse() = default;

void ShowRelatedProjectResponse::validate()
{
}

web::json::value ShowRelatedProjectResponse::toJson() const
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
bool ShowRelatedProjectResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowRelatedProject_result refVal;
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


ShowRelatedProject_result ShowRelatedProjectResponse::getResult() const
{
    return result_;
}

void ShowRelatedProjectResponse::setResult(const ShowRelatedProject_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRelatedProjectResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRelatedProjectResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRelatedProjectResponse::getError() const
{
    return error_;
}

void ShowRelatedProjectResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRelatedProjectResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRelatedProjectResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowRelatedProjectResponse::getStatus() const
{
    return status_;
}

void ShowRelatedProjectResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRelatedProjectResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRelatedProjectResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


