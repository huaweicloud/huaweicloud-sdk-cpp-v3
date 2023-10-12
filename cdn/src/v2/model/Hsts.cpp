

#include "huaweicloud/cdn/v2/model/Hsts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Hsts::Hsts()
{
    status_ = "";
    statusIsSet_ = false;
    maxAge_ = 0;
    maxAgeIsSet_ = false;
    includeSubdomains_ = "";
    includeSubdomainsIsSet_ = false;
}

Hsts::~Hsts() = default;

void Hsts::validate()
{
}

web::json::value Hsts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(maxAgeIsSet_) {
        val[utility::conversions::to_string_t("max_age")] = ModelBase::toJson(maxAge_);
    }
    if(includeSubdomainsIsSet_) {
        val[utility::conversions::to_string_t("include_subdomains")] = ModelBase::toJson(includeSubdomains_);
    }

    return val;
}
bool Hsts::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("max_age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_age"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_subdomains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_subdomains"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSubdomains(refVal);
        }
    }
    return ok;
}


std::string Hsts::getStatus() const
{
    return status_;
}

void Hsts::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Hsts::statusIsSet() const
{
    return statusIsSet_;
}

void Hsts::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t Hsts::getMaxAge() const
{
    return maxAge_;
}

void Hsts::setMaxAge(int32_t value)
{
    maxAge_ = value;
    maxAgeIsSet_ = true;
}

bool Hsts::maxAgeIsSet() const
{
    return maxAgeIsSet_;
}

void Hsts::unsetmaxAge()
{
    maxAgeIsSet_ = false;
}

std::string Hsts::getIncludeSubdomains() const
{
    return includeSubdomains_;
}

void Hsts::setIncludeSubdomains(const std::string& value)
{
    includeSubdomains_ = value;
    includeSubdomainsIsSet_ = true;
}

bool Hsts::includeSubdomainsIsSet() const
{
    return includeSubdomainsIsSet_;
}

void Hsts::unsetincludeSubdomains()
{
    includeSubdomainsIsSet_ = false;
}

}
}
}
}
}


