

#include "huaweicloud/codeartsbuild/v3/model/ShowDomainsStatusesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDomainsStatusesResponse::ShowDomainsStatusesResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDomainsStatusesResponse::~ShowDomainsStatusesResponse() = default;

void ShowDomainsStatusesResponse::validate()
{
}

web::json::value ShowDomainsStatusesResponse::toJson() const
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
bool ShowDomainsStatusesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<DomainStatuses> refVal;
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


std::vector<DomainStatuses>& ShowDomainsStatusesResponse::getResult()
{
    return result_;
}

void ShowDomainsStatusesResponse::setResult(const std::vector<DomainStatuses>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainsStatusesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainsStatusesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDomainsStatusesResponse::getError() const
{
    return error_;
}

void ShowDomainsStatusesResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowDomainsStatusesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowDomainsStatusesResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowDomainsStatusesResponse::getStatus() const
{
    return status_;
}

void ShowDomainsStatusesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDomainsStatusesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDomainsStatusesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


