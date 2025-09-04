

#include "huaweicloud/codeartsbuild/v3/model/ShowPackageSpecCountDownResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowPackageSpecCountDownResponse::ShowPackageSpecCountDownResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowPackageSpecCountDownResponse::~ShowPackageSpecCountDownResponse() = default;

void ShowPackageSpecCountDownResponse::validate()
{
}

web::json::value ShowPackageSpecCountDownResponse::toJson() const
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
bool ShowPackageSpecCountDownResponse::fromJson(const web::json::value& val)
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
            std::vector<CountdownList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowPackageSpecCountDownResponse::getStatus() const
{
    return status_;
}

void ShowPackageSpecCountDownResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPackageSpecCountDownResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPackageSpecCountDownResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowPackageSpecCountDownResponse::getError() const
{
    return error_;
}

void ShowPackageSpecCountDownResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowPackageSpecCountDownResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowPackageSpecCountDownResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<CountdownList>& ShowPackageSpecCountDownResponse::getResult()
{
    return result_;
}

void ShowPackageSpecCountDownResponse::setResult(const std::vector<CountdownList>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowPackageSpecCountDownResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowPackageSpecCountDownResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


