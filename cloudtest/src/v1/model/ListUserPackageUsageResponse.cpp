

#include "huaweicloud/cloudtest/v1/model/ListUserPackageUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUserPackageUsageResponse::ListUserPackageUsageResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
    errorIsSet_ = false;
}

ListUserPackageUsageResponse::~ListUserPackageUsageResponse() = default;

void ListUserPackageUsageResponse::validate()
{
}

web::json::value ListUserPackageUsageResponse::toJson() const
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
bool ListUserPackageUsageResponse::fromJson(const web::json::value& val)
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
            std::vector<PackageUsage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            CommonResponseErrorOfAPITest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


std::string ListUserPackageUsageResponse::getStatus() const
{
    return status_;
}

void ListUserPackageUsageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUserPackageUsageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUserPackageUsageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<PackageUsage>& ListUserPackageUsageResponse::getResult()
{
    return result_;
}

void ListUserPackageUsageResponse::setResult(const std::vector<PackageUsage>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUserPackageUsageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUserPackageUsageResponse::unsetresult()
{
    resultIsSet_ = false;
}

CommonResponseErrorOfAPITest ListUserPackageUsageResponse::getError() const
{
    return error_;
}

void ListUserPackageUsageResponse::setError(const CommonResponseErrorOfAPITest& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListUserPackageUsageResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListUserPackageUsageResponse::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


