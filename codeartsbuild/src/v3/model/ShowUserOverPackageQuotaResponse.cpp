

#include "huaweicloud/codeartsbuild/v3/model/ShowUserOverPackageQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowUserOverPackageQuotaResponse::ShowUserOverPackageQuotaResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowUserOverPackageQuotaResponse::~ShowUserOverPackageQuotaResponse() = default;

void ShowUserOverPackageQuotaResponse::validate()
{
}

web::json::value ShowUserOverPackageQuotaResponse::toJson() const
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
bool ShowUserOverPackageQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowUserOverPackageQuota_result refVal;
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


ShowUserOverPackageQuota_result ShowUserOverPackageQuotaResponse::getResult() const
{
    return result_;
}

void ShowUserOverPackageQuotaResponse::setResult(const ShowUserOverPackageQuota_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUserOverPackageQuotaResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUserOverPackageQuotaResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowUserOverPackageQuotaResponse::getError() const
{
    return error_;
}

void ShowUserOverPackageQuotaResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowUserOverPackageQuotaResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowUserOverPackageQuotaResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowUserOverPackageQuotaResponse::getStatus() const
{
    return status_;
}

void ShowUserOverPackageQuotaResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserOverPackageQuotaResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserOverPackageQuotaResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


